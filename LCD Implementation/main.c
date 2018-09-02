#include <at89c51ed2.h>
#include <stdio.h>
#include <stdint.h>
#include <malloc.h>

#define SCL P1_4
#define SDA P1_5
#define EEPROM_ID 0xA0
#define IOEXP_ID 0x70

#define lcd_ir_rd ((unsigned xdata char *)0xe800)
#define lcd_dt_rd ((unsigned xdata char *)0xf800)
#define lcd_ir_wr ((unsigned xdata char *)0xe000)
#define lcd_dt_wr ((unsigned xdata char *)0xf000)

void lcdinit();
void lcdbusywait();
void lcdshow();
//void ioexpander_init();
void lcdclock();
void eereset();
void putchar (char c);
//void time();
void serialinit();
void lcdputstr(unsigned char *ss);
void lcdcreate();
void lcdputch(unsigned char a );
void lcdcgram();
//void lcdlogo();
int atoi(char * s);
char * gets(const char *str);
void EEPROM_ReadBytes1(uint16_t  EepromAddr, uint16_t endAddr);
char getchar ();
void lcdddram();
void lcdcreatechar(unsigned char ccode, unsigned char row_vals[]);
void delay(int a);
void lcdgotoaddr(unsigned char addr);
void lcdgotoxy(unsigned char row, unsigned char column);
//void lcdputstr(char *ss);
void lcdclear();
void eebytew(uint16_t eeprom_Address, unsigned char eeprom_Data);
unsigned char eebyter(uint16_t eeprom_Address);
void I2C_Clock(void);
void I2C_Write(unsigned char dat);
char getchar () ;
unsigned char I2C_Read(void);
char * gets(const char *str) ;
//void EEPROM_ReadBytes(uint16_t EepromAddr, uint16_t endAddr);
uint16_t hex2int(char *a, unsigned char len);
void serialinit() ;
void I2C_Start();
//void delay(int a);
void I2C_Stop(void);
void putstr(char* s) ;
char hexvalue(char *strb);
void putchar (char c) ;
void I2C_Ack();
void I2C_NoAck();
uint8_t count = 0;
char cd ;
int a =0;
volatile unsigned char sst;
 volatile unsigned char ctim;
 volatile unsigned char  cnt1;
 volatile unsigned char  cnt2;
 volatile unsigned char  gau;
 volatile unsigned char  tty;
 volatile unsigned char  zze;




void ti(void)__critical __interrupt(1) __using(1)
{
        unsigned char a;
        lcdbusywait();
        a = *lcd_ir_rd;
        TH0=0x4B;
        TL0=0xFE;
        TF0=0;
        //TR0 = 1;
        //P1_3 = 0;
        ctim--;
        lcdgotoaddr(0x5a);
                lcdputch((0x30+tty));
        lcdgotoaddr(0x5c);
                lcdputch((0x30+gau));
        lcdgotoaddr(0x5d);
        lcdputch((0x30+cnt2));
        lcdgotoaddr(0x59);
        lcdputch((0x30+zze));
        lcdgotoaddr(0x5e);
        lcdputch(0x2e);
        lcdgotoaddr(0x5b);
        lcdputch(0x3a);
       if( ctim == 0 )
       {
            //P1_3 = 0;

            lcdgotoaddr(0x5f);
            lcdputch((0x30+cnt1));
            cnt1++;

            if(cnt1 == 10)
            {  cnt1 = 0;
                cnt2++;
                if(cnt2 == 10){
                lcdgotoaddr(0x5d);
                lcdputch((0x30));}
                else {
                lcdgotoaddr(0x5d);
                lcdputch((0x30+cnt2));
                }

            }
            if(cnt2 == 10)
              {
                  cnt2 = 0;
                 gau++;
                 if(gau == 6){
                lcdgotoaddr(0x5c);
                lcdputch((0x30));}
                else{

                 lcdgotoaddr(0x5c);
                lcdputch((0x30+gau));}

              }
              if(gau == 6)
              { gau = 0;
                tty++;
                if(tty == 10){
                lcdgotoaddr(0x5a);
                lcdputch((0x30));}
                else{
                lcdgotoaddr(0x5a);
                lcdputch((0x30+tty));}
              }
              if(tty == 10)
              {
                tty= 0;
                zze++;
                lcdgotoaddr(0x59);
                lcdputch((0x30+zze));

              }

            //delay(2);
            //P1_3 = 1;
            ctim = 2;
       // ACC = 0x02;
        //P1_0 = 0;
        //ctim = 0;
       }
//delay(2);
//P1_3 = 1;
        *lcd_ir_wr = 0x80 | a;
}

void ioexp(void) __interrupt(2) __using(2)
{

    unsigned char a,b;
    P1_3 = 0;
    EX1 = 0;
    I2C_Start();
    I2C_Write(IOEXP_ID | 0x01);
    I2C_Ack();
    a = I2C_Read();
    //I2C_Ack();
    I2C_Stop();
    b = a ;
    b = b>>7;
    b = ~b;
    b = b<<6;
    I2C_Start();
                 // Start i2c communication
    I2C_Write(IOEXP_ID);      // connect to AT2404 by sending its ID on I2c Bus
    I2C_Ack();
    I2C_Write(b|0x80); // Select the Specified EEPROM address of AT2404
    I2C_Ack();
    I2C_Stop();
    P1_3=1;
    EX1=1;
}
void main(void)
{
    char a ,b,c;
    int m=0,n = 0;
    char strv[100];
    char ch;
    unsigned char h;
    unsigned char stra[10] ,str1[10];
    uint16_t valu ,valu1;
    EA=1;
    EX1=1;
    lcdinit();
    TMOD |= 0x20;
    TH1 = 0xFD ;
    SCON |= 0x50;
    TR1 = 1;
    IE |= 0x80 ;
    RI = 0;
    TI = 1;
    TMOD |= 0x09; //Intialize Timer 0
    TL0 =0xFE;
    TH0 =0x4B;
    ET0 = 1;
    IE |= 0x82; // Enable Timer 0 interrupt
    TR0 = 1;
    IT1 =1;
    TCON |= 0x04;

    ctim =2 ;
    cnt1= 0;
    cnt2 =0;
    gau =0;
    tty =0;
    zze=0;
    count = 0;
    a =0;
    sst =0;
    I2C_Start();// Start i2c communication
    I2C_Write(IOEXP_ID);      // connect to AT2404 by sending its ID on I2c Bus
    I2C_Ack();
    I2C_Write(0x80); // Select the Specified EEPROM address of AT2404
    I2C_Ack();
    I2C_Stop();
    delay(10);
    lcdgotoaddr(0x80);

    putstr("enter 1 for LCD  and 2 for I2C implementation\n\r");
    putstr("provide input to the input pin P7 of IO expander through switch to see the operation of I/O Expander\n\r");
    a = getchar();
    putchar(a);
    printf_small("\n\r");
    if(a == '1')
        goto start;
    if(a == '2')
        goto start1;


         while(1)
    {

        start1 : putstr("\n\r+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\r");
        putstr(" \n\renter the characters for specific options \n\r");
        putstr("enter 1 for write byte operation \n\r");
        putstr("enter 2 for read byte operation \n\r");
        putstr("enter 3 hex dump operation \n\r");
        putstr("enter 4 for internal EEPROM reset \n\r");
        a = getchar();
        putchar(a);
        putstr("\n\r");
        if(a == '1' | a == '2' | a == '3'| a=='4')
        {
            if(a == '1')
            {
                putstr(" enter an address and value to be written in that EEPROM address\n\r");
                gets(stra);
                b = hexvalue(stra);
                valu = hex2int(stra,b);
                if(valu > 2047 )
                        {printf_small("value entered is out of bound\n\r");
                    goto start1;}

                gets (str1);
                valu1 = hex2int(str1,2);
                if(valu1 > 255 )
                        {printf_small("value entered is out of bound\n\r");
                    goto start1;}
                eebytew(valu,valu1);


            }

            if(a == '2')
            {
               putstr(" enter an EEPROM address to read data from it\n\r");
               gets(stra);
                b = hexvalue(stra);
                valu = hex2int(stra,b);
                if(valu > 2047 )
                        {printf_small("value entered is out of bound\n\r");
                    goto start1;}
                h = eebyter(valu);

                printf_small(" %x \n\r",h );
            }

            if(a == '3')
            {
                putstr(" enter an starting EEPROM address for hex dump\n\r");
                gets(stra);
                b = hexvalue(stra);
                valu = hex2int(stra,b);


                putstr(" enter an ending EEPROM address between 00 and 7ff for hex dump\n\r");
                gets (str1);
                b = hexvalue(str1);
                valu1 = hex2int(str1,b);
                if(valu > 2047 | valu1 > 2047)
                        {printf_small("value entered is out of bound\n\r");
                    goto start1;
                        }
                        if(valu1 < valu)
                        {
                            printf_small("enter ending address greater than starting\n\r");
                            goto start1;
                        }

               //EEPROM_ReadBytes(valu,valu1);
               EEPROM_ReadBytes1(valu,valu1);
            }

                if(a == '4')
                {
                    eereset();


                }


        }



    /*putstr(" writing \n\r") ;
    eebytew(0x23,0x55);
    h = eebyter(0x23);
    printf_small("%x : " , h);
    //printf_small("%c : " , h);


    eebytew(0x24,0x67);
    h = eebyter(0x24);
    printf_small("%x : " , h);
    eebytew(0x25,0x67);
    h = eebyter(0x25);
    printf_small("%x : " , h);
    eebytew(0x26,0x90);
    h = eebyter(0x26);
    printf_small("%x : " , h);
    eebytew(0x22,0x89);
    h = eebyter(0x22);
    printf_small("%x : " , h);
    eebytew(0x27,0x78);
    h = eebyter(0x27);
    printf_small("%x : " , h);
    eebytew(0x29,0x67);
    h = eebyter(0x29);
    printf_small("%x : " , h);
    eebytew(0x32,0x51);
    h = eebyter(0x32);
    printf_small("%x : " , h);

    EEPROM_ReadBytes(0x22,0x38);

*/

   }

    while(1)
    {
        start : putstr("\n\r+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\r");
        putstr("\n\renter any of the below characters for specific function \n\r");
        putstr("\n\r enter 'a' to add a string on lcd\n\r");
        putstr("\n\renter 'g' to go to particular address\n\r");
        putstr("\n\renter 'n' to add a new custom character \n\r");
        putstr("\n\renter 's' to show custom character\n\r");
        putstr("\n\renter 'x' to go to (x,y) position\n\r");
        putstr("\n\renter 'd' for DDRAM dump\n\r");
        putstr("\n\renter 'c' for CGRAM dump\n\r");
        putstr("\n\renter 'q' to clear display on LCD\n\r");
        //putstr("\n\renter 'z' to clear display on LCD\n\r");
        putstr("\n\renter 't' for clock options\n\r");
        a =getchar();
        putchar(a);
        printf_small("\n\r");
        //lcdgotoaddr(0x00);
        if (a=='a' | a== 'g' | a=='x'| a=='d'|a=='c'|a=='q'|a=='s'| a=='n'| a=='z'|a=='t')
        {


            switch(a){

                case 'a' :
                        putstr("\n\renter a string to display on LCD\n\r");
                        gets(strv);
                        lcdputstr(strv);
                        break;
                case 'g' :
                        putstr("\n\renter an address value in integer\n\r");
                        gets(strv);
                        ch = (char)atoi(strv);
                        if ( ch > 88 && ch < 96 )
                        {
                            putstr("entered value is not allowed\n\r");
                            break;
                        }
                        lcdgotoaddr(ch);
                        break;
                case 'x' :
                        putstr("\n\r enter an x  position \n\r");
                        gets(strv);
                        ch = atoi(strv);
                        b = ch;
                         putstr("\n\r enter an y  position \n\r");
                          gets(strv);
                        ch = atoi(strv);
                        c = ch;
                        if(b==3 && c>8){
                          putstr("entered value is not allowed\n\r");
                          break;
                        }

                        lcdgotoxy(b,c);
                        break;
                case 'd' :
                    putstr("\n\rDDRAM dump is shown below\n\r");
                    lcdbusywait();
                    EA = 0;
                    a = *lcd_ir_rd;
                    EA =1;
                    lcdbusywait();
                    lcdddram();
                    lcdbusywait();
                    EA =0;
                    *lcd_ir_wr = 0x80 | a ;
                    EA =1;
                    lcdbusywait();
                    break;
                case 'c' :
                    putstr("\n\rCGRAM dump is shown below\n\r");
                    lcdbusywait();
                    EA =0;
                    a = *lcd_ir_rd;
                    EA =1;
                    lcdbusywait();
                    lcdcgram();
                    lcdbusywait();
                    EA =0;
                    *lcd_ir_wr = 0x80 | a ;
                    EA =1;
                    lcdbusywait();
                    break;
                case 'q' :
                    putstr("\n\rclearing LCD display\n\r");
                    lcdclear();
                    break;
                case 'n' :
                    printf_small("\n\renter pixel values for creating a character\n\r");
                    lcdbusywait();
                    //cd = *lcd_ir_rd;
                    lcdbusywait();
                    lcdcreate();
                        break;
                case 's' :
                    lcdshow();
                        break;
                case 't' :
                    lcdclock();
                    break;
                //case 'z' :
                  //  lcdlogo();
                  //  break;

            }
           goto start;
        }

    }

}

void lcdclock()
{
    unsigned char a;
    while(1)
    {
    putstr("enter 's' to stop the clock\n\r");
    putstr("enter 'r' to restart the clock\n\r");
    putstr("enter 'o' to reset the clock\n\r");
    putstr("enter 'q' to exit clock options\n\r");
    a=getchar();
    putchar(a);
    putstr("\n\r");

    if(a =='s')
    {
        TR0 = 0;
    }
    if(a=='r')
    {
        TR0 = 1;
    }
    if(a=='o')
    {
        ctim = 2;
        cnt1=0;
        cnt2=0;
        gau=0;
        tty=0;
        zze=0;
    }

    if(a=='q')
    break;

    }
}
/*
void time()
{
    TMOD &= 0x00;
    TMOD |= 0x01; //Intialize Timer 0
    TL0=0xB4;
    TH0=0x02;
    IE |= 0x82; // Enable Timer 0 interrupt
    TR0=1; //Start Timer 0

   // lcdgotoaddr(0x5f);
    //lcdbusywait();
   // lcdputch(0x00);

}
*/
/*
void serialinit()
{
    TMOD |= 0X20;
    TH1 = 0xFD ;
    SCON |= 0X50;
    TR1 = 1;
    IE |= 0x90 ;
    RI = 0;
    TI = 1;

}
*/
/*
void lcdlogo()
{
   char cod;
   char a;
   int i =0,j=0;
   char ccode[8] = {0x0,0x1,0x2,0x3,0x4,0x5,0x6,0x7};
   char rot[10] = {0x19, 0x58,0x57,0x56,0x15,0x45,0x6,0x7,0x8,0x49};
    char codea;
    char row_val [8][8]= {
        {0x1f,0x1f,0x18,0x18,0x18,0x18,0x18,0x18},
        {0x1e,0x1e,0x0,0x0,0x0,0x18,0x18,0x18},
        {0x0,0x0,0x0,0x0,0x0,0x3,0x3,0x3},
        {0x18,0x18,0x1f,0x1f,0x0,0x0,0x0,0x0},
        {0x18,0x18,0x1e,0x1e,0x18,0x18,0x1f,0x1f},
        {0x3,0x3,0x3,0x3,0x3,0x3,0x1f,0x1f},
        {0x0,0x0,0x11,0x1b,0x1f,0xe,0x4,0x0},
        {0x0,0x0,0x11,0x1b,0x1f,0xe,0x4,0x0}
    };
     //row_val[0][7] = (0x0,0xf,0x8,0x8,0x8,0x8,0x8,0x8);
     //row_val[1][7] = (0x0,0xc,0x0,0x0,0x0,0x4,0x4,0x4);
     //row_val[2][7] = (0x0,0x0,0x0,0x0,0x0,0x2,0x2,0x2);
     //row_val[3][7] = (0x8,0x8,0xf,0x0,0x0,0x0,0x0,0x0);
     //row_val[4][7] = (0x4,0x4,0x1c,0x8,0x8,0x8,0xf,0x0);
     //row_val[5][7] = (0x2,0x2,0x2,0x2,0x2,0x2,0xe,0x0);
     //row_val[6][7] = (0x0,0x0,0x11,0x1b,0x1f,0xe,0x4,0x0);
    // row_val[7][7] = (0x0,0x0,0x11,0x1b,0x1f,0xe,0x4,0x0);
    for(i =0 ;i <8;i++)
    {
        cod = (ccode[i] << 3) ;
        //i++;
    //printf_small("%d",cod);
    codea = (0x40 | cod) ;
    //printf_small("%d",codea);
    // (*lcd_ir_wr) = 0x40 | code;
    for (j=0 ; j<8 ;j++)
    {
        lcdbusywait();
        *lcd_ir_wr = (codea | j);
        lcdbusywait();
        *lcd_dt_wr = row_val[i][j];
        lcdbusywait();
    }


    }
    lcdbusywait();
    *lcd_ir_wr = (0x80 | 0x46);
    lcdbusywait();
    lcdputch(0x0);
    lcdbusywait();
    *lcd_ir_wr = (0x80 | 0x47);
    lcdbusywait();
    lcdputch(0x1);
    lcdbusywait();
    *lcd_ir_wr = (0x80 | 0x48);
    lcdbusywait();
    lcdputch(0x2);
    lcdbusywait();
    *lcd_ir_wr = (0x80 | 0x16);
    lcdbusywait();
    lcdputch(0x3);
    lcdbusywait();
    *lcd_ir_wr = (0x80 | 0x17);
    lcdbusywait();
    lcdputch(0x4);
    lcdbusywait();
    *lcd_ir_wr = (0x80 | 0x18);
    lcdbusywait();
    lcdputch(0x5);
    lcdbusywait();
    *lcd_ir_wr = (0x80 | 0x45);
    lcdbusywait();
    lcdputch(0x6);
    lcdbusywait();
    *lcd_ir_wr = (0x80 | 0x19);
    lcdbusywait();
    lcdputch(0x7);
    lcdbusywait();
    //delay(100000);
    putstr("enter 'r' to make animation\n\r");
    a = getchar();
    putchar(a);
    if(a == 'r')
    {

        while(1)
        {
            i=0;
            for(i=0;i<10;i++)
            {
                delay(10000);
                lcdbusywait();
                *lcd_ir_wr = (0x80 | rot[i]);
                lcdbusywait();
                lcdputch(0x7);
                lcdbusywait();
                lcdgotoaddr(0x60);
                delay(1000000);
                 lcdbusywait();
                *lcd_ir_wr = (0x80 | rot[i]);
                 lcdbusywait();

                 lcdputch(0x2e);
                lcdgotoaddr(0x60);
            }
            if(i == 10)
                i =0;
            //i=0;
            //putstr("enter 'o' to exit\n\r");
            //a=getchar();
            //putchar(a);
            //if(a == 'o')
            //break;

        }

    }



}

*/



void lcdcreate()
{
    char arr[10];
    char abc[10];
    int i=0,num,j=0,value =0;
    char *ptr = NULL;

    while(i < 8)
    {
        gets(arr);
        value = 0;
        num = atoi(arr);
        if(arr[j++] == '1')
        value = 16;
        //j++;}
        if(arr[j++] == '1')
        value = value + 8;
        //j++;}
        if(arr[j++] == '1')
        value = value + 4;
        //j++;}
        if(arr[j++] == '1')
        value = value + 2;
        //j++;}
        if(arr[j++] == '1')
        value = value + 1;
        //j++;}
        //printf_small("%d\n\r",value);
        abc[i] = value;
        i++;
        j =0;
    }
        i=0;
        lcdcreatechar(count,abc);
        count++;


}

void lcdshow()
{
        uint8_t i;
        lcdbusywait();
        lcdbusywait();
        EA =0;
        *lcd_ir_wr = 0x80;
        EA =1;
        lcdbusywait();
        //*lcd_ir_wr =0x80;
        lcdbusywait();

            for(i = 0 ; i<count ; i++)
          {
           lcdputch(i);
          }



}

void lcdcreatechar(unsigned char ccode, unsigned char row_vals[])
{
    int i = 0;
    char cod;
    char codea;
    cod = (ccode << 3) ;
    //printf_small("%d",cod);
    codea = (0x40 | cod) ;
    //printf_small("%d",codea);
    //*lcd_ir_wr = 0x40 | code;
    for (i =0 ; i<8 ;i++)
    {
        lcdbusywait();
        EA=0;
        *lcd_ir_wr = (codea | i);
        //EA=1;
        //lcdbusywait();
        //EA=0;
        while(*lcd_ir_rd & 0x80 );
        *lcd_dt_wr = row_vals[i];
        while(*lcd_ir_rd & 0x80 );
        //lcdbusywait();
        EA=1;
    }


}
void lcdinit()
{
    delay(1400);
    *lcd_ir_wr = 0x30;
    delay(400);
    *lcd_ir_wr = 0x30;
    delay(30);
    *lcd_ir_wr = 0x30;
    lcdbusywait();
    *lcd_ir_wr = 0x38;
    lcdbusywait();
    *lcd_ir_wr = 0x08;
    lcdbusywait();
    *lcd_ir_wr = 0x01;
    lcdbusywait();
    *lcd_ir_wr = 0x06;
    lcdbusywait();
    *lcd_ir_wr = 0x0f;
    lcdbusywait();
   lcdgotoaddr(0x5f);
    lcdputch(0x30);
   lcdgotoaddr(0x5e);
    lcdputch(0x2e);
        lcdgotoaddr(0x5d);
        lcdputch(0x30);
        lcdgotoaddr(0x5c);
        lcdputch(0x30);
        lcdgotoaddr(0x5b);
        lcdputch(0x2e);
        lcdgotoaddr(0x5a);
        lcdputch(0x30);
        lcdgotoaddr(0x59);
        lcdputch(0x30);
    //ACC = 0x02;

}

void lcdputch(unsigned char a)
{
   //lcdbusywait();
  // *lcd_ir_wr = 0x80;
  // EA =0;
   //lcdbusywait();
   // EA=1;
    //EA=0;
    //*lcd_ir_wr = 0x80  ;
    //EA=1;
    EA=0;
    lcdbusywait();
    EA=1;
    EA=0;
   *lcd_dt_wr = a;
    EA=1;
    EA=0;
   lcdbusywait();
    EA=1;
}

void lcdbusywait()
{
    EA=0;
  while(*lcd_ir_rd & 0x80 );
    EA=1;
}

void delay(int a)
{
    int i=0;
    for(i=0; i<a; i++);

}

void lcdgotoaddr(unsigned char addr)
{
    //EA =0;
    //sst = addr;
    //EA =1;
   addr = addr | 0x80 ;

   lcdbusywait();
   EA=0;
   *lcd_ir_wr = addr;
   EA=1;
   lcdbusywait();

}

void lcdgotoxy(unsigned char row, unsigned char column)
{
    if (row == 0)
    {
        lcdbusywait();
        lcdgotoaddr(column);

    }
    else if (row == 1)
    {
        lcdbusywait();
        lcdgotoaddr((0x40+column));

    }
    else if (row == 2)
    {
        lcdbusywait();
        lcdgotoaddr((0x10+column));

    }
    else if(row == 3)
    {
        lcdbusywait();
        lcdgotoaddr((0x50+column));

    }

}

void lcdputstr(unsigned char *ss)
{
    int j,b;
    unsigned char a = 0;

    //a = *lcd_ir_rd;
    EA=0;
    lcdbusywait();
    a = *lcd_ir_rd;
    EA=1;
    //lcdbusywait();
    if(0x3f<a && a<0x50)
    {
        goto line2;
    }
     if(0x0f<a && a<0x20)
    {
        goto line3;
    }
     if(0x4f<a && a<0x60)
    {

        goto line4;
    }

    b=0x0f-a;
    b++;
    for(j=0;j<b;j++)
 {
    if(*ss!='\0')
    {
        lcdputch(*ss );
    }
    if(*ss =='\0')
    {
        goto last;
    }
     ss++;
     a++;
 }
 a=0x3f;
 lcdbusywait();
  lcdgotoaddr(0x40);
 line2: b = 0x4f-a;
 b++;
  for(j=0;j<b;j++)
  {
        if(*ss!='\0')
        {
            lcdputch(*ss);

        }
        if(*ss=='\0')
        {
        goto last;
        }
        ss++;
        a++;
   }
   a=0x0f;
  lcdgotoaddr(0x10);
line3: b=0x1f-a;
b++;
  for(j=0;j<b;j++)
  {
        if(*ss!='\0')
        {
            lcdputch(*ss);

        }
        if(*ss=='\0')
        {
        goto last;
        }
        ss++;
        a++;
  }
  a=0x4f;
  lcdgotoaddr(0x50);
line4: b=0x58-a;
b++;
  for(j=0;j<b;j++)
  {
        if(*ss!='\0')
        {
            lcdputch(*ss);

        }
        if(*ss=='\0')
        {
        goto last;
        }
        ss++;
        a++;
   }
   last : lcdbusywait();

  }

void lcdclear()
{
    lcdbusywait();
    EA=0;
    *lcd_ir_wr = 0x01;
    EA=1;
    lcdbusywait();
}




void putchar (char c)                                       /* to put a char out of serial port */
{
	while (!TI);
	SBUF = c;
	TI = 0;
}

void lcdddram()
{
    char store;
    int i=0 ,h=0;
    int a = 0;
    int m1 = 000;
    int m2 = 0x10;
    int m3 = 0x40;
    int m4 = 0x50;
    lcdbusywait();
    lcdgotoaddr(0x80);
    lcdbusywait();
    printf_small("0x%x :  ",m1);
    for ( i= 0; i<16;i++)
    {   EA=0;
        store = *lcd_dt_rd;
        EA=1;
        lcdbusywait();
        printf_small(" %x ",store);
    }
    lcdbusywait();
    lcdgotoaddr(0x90);
    lcdbusywait();
    printf_small("\n\r0x%x :  ",m2);
    for ( i= 0; i<16;i++)
    {   EA=0;
        store = *lcd_dt_rd;
        EA=1;
        lcdbusywait();
        printf_small(" %x ",store);
    }
       lcdbusywait();
    lcdgotoaddr(0xc0);
    lcdbusywait();
    printf_small("\n\r0x%x :  ",m3);
    for ( i= 0; i<16;i++)
    {   EA=0;
        store = *lcd_dt_rd;
        EA=1;
        lcdbusywait();
        printf_small(" %x ",store);
    }
       lcdbusywait();
    lcdgotoaddr(0xd0);
    lcdbusywait();
    printf_small("\n\r0x%x :  ",m4);
    for ( i= 0; i<16;i++)
    {   EA=0;
        store = *lcd_dt_rd;
        EA=1;
        lcdbusywait();
        printf_small(" %x ",store);
    }



}
char getchar ()                                             /* to get a char from serial port */
{
    while ((SCON & 0x01) == 0);
	RI = 0;
	return SBUF;
}
void lcdcgram()
{
    int a = 0,i, c=8;
    char store;
    lcdbusywait();
    EA=0;
    *lcd_ir_wr = 0x40;

    //lcdbusywait();
    //printf_small("0x0: ");
    while(*lcd_ir_rd & 0x80 );

    for(a=0 ; a<4;a++)
    {
        printf_small("0x%x :" , (*lcd_ir_rd & 0x3f) );
        for(i=0;i<16;i++)
       {
            store = *lcd_dt_rd;
            //lcdbusywait();
            while(*lcd_ir_rd & 0x80 );
            printf_small("%x " ,(*lcd_dt_rd));

        }

        printf_small("\n\r");
        //if(a<7)
        //printf_small("0x%x : ", (c *(a+1)) );
    }
    EA=1;
}

char * gets(const char *str)                                    /* to get a string input from user */
{
  char *s=str;
  char c;
  unsigned int count=0;

  while (1) {
    c=getchar();
    switch(c) {
    case '\b':
      if (count)
    {
        putchar ('\b');
        putchar (' ');
        putchar ('\b');
        s--;
        count--;
    }
      break;
    case '\n':
    case '\r':
              putchar('\r');
              putchar('\n');
              *s=0;
              return str;
    default:
              *s++=c;
              count++;
              putchar(c);
              break;
    }
  }
}

int atoi(char * s)                                                              /* to convert  ascii string into integer*/
{
     register int rv=0;
     register char sign = 0;

     /* skip till we find either a digit or '+' or '-' */
     while (*s) {
	if (*s <= '9' && *s >= '0')
		break;
	if (*s == '-' || *s == '+')
		break;
	s++;
     }

     sign = (*s == '-');
     if (*s == '-' || *s == '+') s++;

     while (*s && *s >= '0' && *s <= '9') {
	rv = (rv * 10) + (*s - '0');
        s++;
     }

     return (sign ? -rv : rv);
}
void putstr(char* s)                                            /* to print a string through serial port*/
{

    while(*s)
    {
        putchar (*s);
        s++;
    }

}
char hexvalue(char *strb)
{
    char a = 0 , i =0;
   while(strb[i] != '\0')
    {
        a = a+1;
        i++;
    }
     return a ;

}


uint16_t hex2int(char *a, unsigned char len)
{
    int i;
    uint16_t val = 0;

    for(i=0;i<len;i++)
    {


       if(a[i] <= 57)
        val += (a[i]-48)*(1<<(4*(len-1-i)));
       else
        val += (a[i]-55)*(1<<(4*(len-1-i)));
    }

    return val;
}
/*
void EEPROM_ReadBytes(uint16_t  EepromAddr, uint16_t endAddr)
 {
     //unsigned char arr[100];
     unsigned char  dat=0x00;
     uint16_t i =0,addr1,addr2,addr;
     unsigned char a1, b1,d1;
     uint16_t m = 0,n=0, a = 0,count =0,cc = 0,line =1;
     //addr = EepromAddr;
     //addr1 = (endAddr - EepromAddr);
    // addr2 =  (endAddr - EepromAddr);
    a1 = (EepromAddr & 0xff);
    b1 = (EepromAddr & 0x700);
    b1 = (b1>>7);
    d1 = ( 0xA1 | b1 );
    printf_small("%x",EepromAddr);
    printf_small("%x",endAddr);
    printf_small("%d",EepromAddr);
    printf_small("%d",endAddr);

        I2C_Start();               // Start i2c communication
        I2C_Write((EEPROM_ID | b1 ));      // connect to AT2404(write) by sending its ID on I2c Bus
        I2C_Ack();
        I2C_Write(a1); // Select the Specified EEPROM address of AT2404
        I2C_Ack();
        I2C_Start();               // Start i2c communication
        I2C_Write(d1);           // connect to AT2404(read) by sending its ID on I2c Bus
        I2C_Ack();
        printf_small("%x\n\r",addr1);
        while( EepromAddr <= endAddr )
     {
        dat = 0x00;
        SDA=1;               //Make SDA as I/P
        for(i=0;i<8;i++)        // loop 8times to read 1-byte of data
       {
            delay(1);
            SCL = 1;            // Pull SCL High
            delay(1);
            dat = dat<<1;       //dat is Shifted each time and
            dat = dat | SDA ;   //ORed with the received bit to pack into byte
            SCL = 0;            // Clear SCL to complete the Clock
       }
       if((EepromAddr ) == endAddr)
       {
           I2C_NoAck();
           I2C_Stop();
           goto nextt ;
       }

        I2C_Ack();


         nextt :  if( line == 1 )
         printf_small("\n\r ADD: %x : ",EepromAddr);
         printf_small(" %x ",dat);
         cc ++;
         line = 0;
         if(cc == 16){
        line =1;
         cc =0;
         }
         EepromAddr++;
     }

 }

*/
 void EEPROM_ReadBytes1(uint16_t  EepromAddr, uint16_t endAddr)
 {
     int a ,i =0,j=0;
    a = endAddr - EepromAddr + 1;
    while(i < a)
            {
                printf("\r\n%03x: ", EepromAddr+i);
                j=0;
                while(j < 16 && (i+j < a) )
                {
                    printf("%02x ",eebyter((EepromAddr + i) + j));
                    j++;
                }
                printf("\r\n");
                i = i + j;
            }
 }





unsigned char eebyter(uint16_t eeprom_Address)
{

    unsigned char eeprom_Data;
    unsigned char a, b,d;
    a = (eeprom_Address & 0xff);
    b = (eeprom_Address & 0x700);
    b = (b>>7);
    d = ( 0xA1 | b );
    //printf_small("%c\n\r",b);
    I2C_Start();               // Start i2c communication
    I2C_Write((EEPROM_ID | b ));     // connect to AT2404(write) by sending its ID on I2c Bus
    I2C_Ack();
    I2C_Write(a); // Select the Specified EEPROM address of AT2404
    I2C_Ack();
    I2C_Start();               // Start i2c communication
    I2C_Write(d);           // connect to AT2404(read) by sending its ID on I2c Bus
    I2C_Ack();
    eeprom_Data = I2C_Read();  // Read the data from specified address
    I2C_NoAck();
    I2C_Stop();                // Stop i2c communication after Reading the data
    delay(10);
  return eeprom_Data;          // Return the Read data

}
void eebytew(uint16_t eeprom_Address, unsigned char eeprom_Data)
{

    unsigned char a, b;
    I2C_Start();
    a = (eeprom_Address & 0xff);
    b = (eeprom_Address & 0x700);
    b = (b>>7);              // Start i2c communication
    I2C_Write((EEPROM_ID | b ));      // connect to AT2404 by sending its ID on I2c Bus
    I2C_Ack();
    I2C_Write(a); // Select the Specified EEPROM address of AT2404
    I2C_Ack();
    I2C_Write(eeprom_Data);    // Write the data at specified address
    I2C_Ack();
    I2C_Stop();                // Stop i2c communication after Writing the data
    delay(500);            // Write operation takes max 5ms, refer At2404 datasheet
}

void I2C_Stop(void)
{
    SCL = 0;            // Pull SCL low
    delay(1);

    SDA = 0;            // Pull SDA  low
    delay(1);

    SCL = 1;            // Pull SCL High
    delay(1);

    SDA = 1;            // Now Pull SDA High, to generate the Stop Condition
}

void I2C_NoAck()
{
    SDA = 1;        //Pull SDA high to indicate Negative/NO ACK
   I2C_Clock();     // Generate the Clock
    SCL = 1;        // Set SCL */
}

void I2C_Ack()
{
    SDA = 0;        //Pull SDA low to indicate Positive ACK
    I2C_Clock();    //Generate the Clock
    SDA = 1;        // Pull SDA back to High(IDLE state)
}

void I2C_Clock(void)
{
    delay(1);
    SCL = 1;        // Wait for Some time and Pull the SCL line High

    delay(1);        // Wait for Some time
    SCL = 0;   // Pull back the SCL line low to Generate a clock pulse
}

void I2C_Start()
{
    SCL = 0;        // Pull SCL low

    SDA = 1;        // Pull SDA High
    delay(1);

    SCL = 1;        //Pull SCL high
    delay(1);

    SDA = 0;        //Now Pull SDA LOW, to generate the Start Condition
    delay(1);

    SCL = 0;        //Finally Clear the SCL to complete the cycle
}

void I2C_Write(unsigned char dat)
{
    unsigned char i;

    for(i=0;i<8;i++)         // loop 8 times to send 1-byte of data
     {
        SDA = dat & 0x80;    // Send Bit by Bit on SDA line
        I2C_Clock();         // Generate Clock at SCL
        dat = dat<<1;
      }
        SDA = 1;                 // Set SDA at last
}

unsigned char I2C_Read(void)
{
    unsigned char i, dat=0x00;

       SDA=1;               //Make SDA as I/P
    for(i=0;i<8;i++)        // loop 8times to read 1-byte of data
     {
        delay(1);
        SCL = 1;            // Pull SCL High
        delay(1);
        dat = dat<<1;       //dat is Shifted each time and
        dat = dat | SDA;    //ORed with the received bit to pack into byte
        SCL = 0;            // Clear SCL to complete the Clock
       }
   return dat;               // Finally return the received Byte*
}

void eereset()
{
    unsigned char a;
    I2C_Start();
    for(a=0;a<9;a++)
    {
        SDA = 1;
        SCL = 0;
        delay(1);
        SCL = 1;
        delay(1);
        //SCL = 0;
        //delay(1);

    }

    I2C_Start();
    I2C_Stop();

}


/*
void ioexpander_init()
{
    unsigned char a=0x80;
    I2C_Start();// Start i2c communication
    I2C_Write(IOEXP_ID);      // connect to AT2404 by sending its ID on I2c Bus
    I2C_Ack();
    I2C_Write(a); // Select the Specified EEPROM address of AT2404
    I2C_Ack();
    I2C_Stop();
    IT1 =1;
    EX1=1;               // Stop i2c communication after Writing the data
    //delay(500);
}
*/
