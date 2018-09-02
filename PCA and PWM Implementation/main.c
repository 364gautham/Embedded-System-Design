#include <at89c51ed2.h>
#include <stdio.h>
#include <stdint.h>
#include <mcs51reg.h>
//#define pwdc 80 ;

void serialinit(void);
void putstr (char * s);
char getchar();
//void idle_mode() __critical ;
void putchar(char c);
void watchdogtimset();
volatile int count = 0;
_sdcc_external_startup()
{
     AUXR |= 0X0C ;
     return 0;
}
void isrou(void)__interrupt(0) __using(1)              /* interrupt */
{
        //CCAP0H = 0X48;

        count = count +1; // Increment the count
       // RETI ;
}



void main()
{

    char b;
    CMOD |= 0X02;                                               /* to get freq of fclk/2  */
    CCAP0H = 0X4c;                                              /* for 70 % duty cycle  */
    CCAP0L = 0X4c;                                              /* for 70 % duty cycle  */
    CCON = 0X40;                                                   /* enable pca counter */
    serialinit();
    putstr("\n\r From the Beginning \n\r");
    while(1){
    start : putstr("\n\renter w for watchdog timer acive and p for pwm output from pca\n\r");
     b = getchar();
    putchar(b);
    if(b == 'w'){

        watchdogtimset();
            putstr("\n\r from the beginning\n\r");

    }
    if(b == 'p'){
    putstr("\n\rplease choose to run on min : (0) or max : (1) frequency \n\r");
    count = 0;
    b = getchar();
    putchar(b);
    if(b == '1')
        CKRL = 0xFF;           /* FOR Max FREQ*/
    else
        CKRL = 0x00;             /* FOR Max FREQ*/
    putstr("\n\r please choose to turn on : (1) or off : (0) PWM output\n\r");
    b = getchar();
    putchar(b);
    CL =00;                  /* pca counter value*/
    CH =00;                     /* pca counter value*/
    if (b == '1')
    CCAPM0 |= 0X42;            /* TO TURN ON PWM OUTPUT */
    else
        CCAPM0 = 0X40;          /* TO TURN ON PWM OUTPUT */
        putstr("\n\renter 1 to go into idle mode or 2 for power down mode\n\r");
        b = getchar();
        putchar(b);
        if(b == '1'){
        putstr("\n\rIn idle mode currently : provide external interrupt to terminate \n\r");
         //IT0 = 1;
          IE |= 0X81    ;           /* TO enable interrupt */
      // Configure interrupt 0 for falling edge on /INT0 (P3.2)
         EX0 = 1;   /* Enable EX0 Interrupt*/
         EA = 1;
         PCON |= 0X01;      /* processor into idle mode*/

         while(count == 0);
            goto start;
        }
        else{
        putstr("\n\rIn power down mode :provide external interrupt to terminate\n\r");
        //IT0  = 1;   // Configure interrupt 0 for falling edge on /INT0 (P3.2)
        IE |= 0X81;
        EX0 = 1;   // Enable EX0 Interrupt
        EA = 1;
        PCON |= 0X02;   /* processor into power down mode */
         while(count == 0);
        goto start;
        }
    }
    }

}

/*void idle_mode() __critical
{
    IE |= 0X80;
   PCON |= 0X01;
}*/



void watchdogtimset()
{
    CR = 0;
    CH = 0;
    CL = 0;
    CCAP4H = 0XFF;              /* PCA Module n Compare/Capture Control value */
    CCAP4L = 0XFF;               /* PCA Module n Compare/Capture Control value */
    CCAPM4 = 0X48;
    CMOD |= 0X40;           /* disable pca and enable watchdog  */
    CR =1;                  /* TO start pca counter*/
}
void serialinit()                                                   /* serial initialising function */
{
    TMOD |= 0X20;
    TH1 = 0xFD ;
    SCON |= 0X50;
    TR1 = 1;
    IE |= 0x81 ;
    RI = 0;
    TI = 1;
    //PCON = 0X80;

}

void putchar(char c)                                       /* to put a char out of serial port */
{
    while (TI == 0);
    SBUF = c;
	TI = 0;

}


char getchar()                                             /* to get a char from serial port */
{
    while (RI == 0);                              /*wait for character to be received, spin on RI*/
	RI = 0;			                                           /* clear RI flag*/
	return SBUF;                                                /*return character from SBUF*/
}

void putstr(char* s)                                            /* to print a string through serial port*/
{

    while(*s)
    {
        putchar (*s);
        s++;
    }

}
