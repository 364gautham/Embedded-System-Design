/*****************************************************************************
* This is a program written for Lab3 in ESD
*
*****************************************************************************/


#include <at89c51ed2.h>
#include <stdio.h>
#include <stdint.h>
#include <malloc.h>
#include <mcs51reg.h>
#define HEAP_SIZE 3000
#ifdef DEBUG
#define DEBUGPORT(x) dataout(0xFFFF,x)
#else
#define DEBUGPORT(x)
#endif // DEBUG
unsigned char xdata heap[HEAP_SIZE];
void putstr (char * s);
void serialinit(void);
char* gets(char *str);
int atoi(char *s);
_sdcc_external_startup()
{
     AUXR |= 0X0C ;
     return 0;
}
void main()
{

    #define DEBUG
    //DEBUGPORT(10);
    unsigned xdata char* ptr = 0;
    unsigned xdata char* ptr1 = 0;
    unsigned xdata char* ptra = 0;
    unsigned xdata char* ptrb = 0;
    unsigned xdata char* ptr5 = 0;
    uint16_t xdata * val ;
    unsigned xdata char* buffer[100];
    char a ;
	uint16_t num,num3,countnum = 0, countch =0,count = 0,county =0,score = 0  ,h = 0 ,s ,value,value1, t=0, j, g=0, w=0, vv ,r=0,c=0,e=0,p=0;
	uint8_t i ,u = 0,m=0;
	unsigned char str[6];
    init_dynamic_memory((MEMHEADER xdata *)heap, HEAP_SIZE);
    serialinit();


	again :  putstr(" Enter buffer size between 32 and 2800( enter multiple of 16)\n\r ");          /* input size of buffer to be created in heap*/
	gets(str);                                                                                       /*get the input string */
	w=0; county =0;
    if( str[0] == '0' && str[1] == '\0' )
        {
            printf_tiny("enter proper number as specified\n\r");                                      /* to check for invalid input*/
            str[0]= '\0';
            goto again;

        }

    while( str[w] != '\0')                                                                             /* to check for invalid input*/
    {
        if( 0x29 < str[w] && str[w] < 0x3a )
        {
                    county++;
        }
                w++;
    }
        if( w != county)
            {
                printf_tiny("enter a number as specified\n\r");
                str[0]= '\0';
                goto again ;
            }

     w = 0 , county =0;
	num = atoi(str);
	if ((num%16) != 0)                                                                              /* to check for invalid input*/
        {
         printf_tiny("enter proper size which is multiple of 16\n\r");
         goto again;
        }
     if ( num < 32 )
        {
         printf_tiny("enter proper size \n\r");
         goto again;
        }


	do                                                                                            /* buffer allocation when heap space is available*/
	{
	    if ((buffer[0] = malloc((unsigned int)(num))) == 0)
            putstr("malloc buffer[0] failed\n\r");
        if ((buffer[1] = malloc((unsigned int)(num))) == 0)
            {
                putstr("malloc buffer[1] failed\n\r");
                free (buffer[0]);                                                                /* free buffer 0 if buffer 1 is not allocated*/
                putstr("enter smaller buffer size\n\r");
                goto again ;
            }


	}while ( (buffer[0] == 0) || (buffer[1] == 0) );



    ptra = buffer[0];
    ptrb = buffer[1];
    ptr = buffer[0];
    ptr1 = buffer[1];
    value = num + (uint16_t)buffer[0];
    value1 = num + (uint16_t)buffer[1];
    //size = (3000 - (2*num));
	putstr(" malloc passed , buffer allocation is successful \n\r");


while( 1 )

    {
	here : putstr (" enter a character\n\r") ;                                 /* enter a user character for various options and storing char's*/
	a = getchar();
	count++;
	putchar(a);
	printf_tiny("\n\r");
	 i = 1 ;
     w=0,c=0;
	if ( a <= 0x39 && a >= 0x30)                                                /* if character input is a int number */
	{
	   if(num > countnum)
       {
            *(buffer[1]) = a;
            buffer[1]++;
            countnum ++ ;
       }

	}
    if ( a >= 0x41 && a <= 0x5a )                                                   /* if character input is a  alphabet */
    {
        if(num > countch)
        {
          *(buffer[0]) = a ;
            buffer[0]++;
            countch ++;
        }

    }
    if (a == 0x2b || a == 0x2d)                                             /* if character input is plus or minus */
    {
        county=0,w=0;

        if(a == '+')
        {
         again1 : putstr("enter a buffer size between 20 and 400 bytes");                       /* create new buffer size and number */
        gets(str);
        w=0;county =0;
        if( str[0] == '0' && str[1] == '\0' )
        {
            printf_tiny("enter proper number as specified\n\r");
            goto again1;
        }

            while( str[w] != '\0')
        {
            if( 0x29 < str[w] && str[w] < 0x3a )
                {
                    county++;
                }

                w++;
        }
        if( w != county)
            {
                printf_tiny("enter a number as specified\n\r");
                goto again1 ;
            }


        num3 = atoi(str);
        if (( buffer[++i] = malloc((unsigned int)(num3))) == 0)
                {
                putstr(" malloc buffer  failed\n\r");
                printf_tiny("you should enter small buffer size \n\r");
                }
                else;
                {
                printf_tiny("buffer is allocated and number is  : %d \n\r", i);
                *(val+u) = i;
                //i++;
                u++;

                }

        }

                if(a == '-')                                                            /* to delete any new buffer other than 0 and 1 created */
                {
                        putstr("enter a buffer number to delete");
                        gets(str);
                        j = atoi(str);
                        for (s=2 ;s<20; s++)
                        {
                            if( j == *(val+m))
                             {
                                free(buffer[j]);
                                g++;
                                printf_tiny("buffer%d is deleted",j);
                                //*(val+m) = 0;

                             }
                            m++;
                        }

                         if(g==0)
                        {
                            putstr("invalid buffer number ,no deletion occured");

                        }

                    m =0;
                    g=0;
                }

        }


    if (a == '?' )                                                                      /* if character input is a '?' */
    {


     printf_tiny("\n\r we have heap report for buffers\n\r");
     printf_tiny("Number of characters received since last '?' : %d \n\r",count);
     printf_tiny("###############################################################################################\n\r");
     printf_tiny("  -------------Report for Buffer0---------------------- \n\r");
     printf_small("buffer start address : %d \n\r ",(uint16_t)ptr);
     printf_small("buffer end address : %d \n\r",value);
     printf_tiny("total buffer size  : %d \n\r", num);
     printf_tiny(" number of characters : %d \n\r",countch);
     printf_tiny(" number of free spaces : %d \n\r", (num-countch));
     printf_tiny("############################################################################################\n\r");
     printf_tiny("------------------Report for Buffer1------------------\n\r");
     printf_small("buffer start address : %d \n\r ",(uint16_t)ptr1);
     printf_small("buffer end address : %d \n\r",value1);
     printf_tiny("total buffer size  : %d \n\r", num);
     printf_tiny(" number of characters : %d \n\r",countnum);
     printf_tiny(" number of free spaces : %d \n\r", (num-countnum));
     printf_tiny("##############################################################################################\n\r");
     printf_tiny("characters in buffer[0]\n\r");
     t = 0;
     score =0;
     ptra = ptr;
     ptrb = ptr1;
     while(t < countch)                                                                         /* to print out buffer contents */
        {
            printf_small("%c",*ptra);
            //(buffer[0]+t)++;
            score++;
            t++;
            ptra++;
            if (score == 64)
                {
                    printf_tiny("\n\r");
                    score = 0;
                }

        }
        countch =0 ;
        score = 0;
        t= 0;
        printf_tiny("\n\r");
        printf_tiny("characters in buffer[1]\n\r");
          while(t < countnum)
        {
            printf_small("%c",*ptrb);
            //(buffer[1]+t)++;
            score++;
            t++;
            ptrb++;
            if (score == 64)
                {
                printf_tiny("\n\r");
                score = 0;
                }
        }
        score = 0;
        t=0;
        countnum = 0;
        count = 0;
        printf_tiny("\n\r");
        buffer[0] = ptr ;
        buffer[1] = ptr1 ;

    }


    if ( a == 0x3d )                                                                            /* if character input is a = : show contents of buffer in  hex */
    {
        ptra = ptr;
        ptrb = ptr1;
        vv = num - countch ;
        r = num;
       do
        {
            *(ptra+r) = 0 ;
            r--;
            vv--;
        }  while(vv > 0);
        if(countch ==0)
            *ptra = 0;


        h=0;
        t = 0;
        printf_tiny("values are in hex\n\r");
        while( t < num )

        {

            printf_small("0x%x:", (uint16_t)ptra);
            while(h < 16)
            {
                printf_small("%x ",(uint16_t)*ptra);
                h++;
                t++;

                ptra++;
            }
            printf_tiny("\n\r");

                h = 0;
        }
        t=0;

        printf_tiny("\n\r");

        vv = num - countnum ;
        r =num;
        do
        {
            *(ptrb+r) = 0 ;
            r--;
            vv--;
        }while(vv > 0);
        if(countnum == 0)
            *ptrb = 0;

        t = 0;
        h=0;
        printf_tiny("values are in hex\n\r");
        while(t < num )

        {

            printf_small("0x%x: ",(uint16_t)ptrb);
            while(h < 16)
            {
                printf_small("%x  ",*ptrb);
                h++;
                t++;

                ptrb++;
            }
                printf_tiny("\n\r");
                h = 0;
        }
        t =0;
        h=0;
        printf_tiny("\n\r");
    }



    if(a == '@')                                                                      /* to delete all buffer and ask for new user input */
    {

        for (c = 0; c<= i ; c++)
        {
         free(buffer[c]);
         printf_small("buffer %d deleted \n\r",c);

        }
        u = 0;
        goto again;
    }






    }



}


void serialinit()                                                   /* serial initialising function */
{
    TMOD = 0X20;
    TH1 = 0xFD ;
    SCON = 0X50;
    TR1 = 1;
    IE = 0x90 ;
    RI = 0;
    TI = 1;
    //PCON = 0X80;

}
void putstr(char* s)                                            /* to print a string through serial port*/
{

    while(*s)
    {
        putchar (*s);
        s++;
    }

}

void putchar (char c)                                       /* to put a char out of serial port */
{
    #define DEBUG
    //DEBUGPORT (0x10);           // compare asm code generated for these three lines
	while (TI == 0);
	//while ((SCON & 0x02) == 0);    // wait for TX ready, spin on TI
	SBUF = c;  	// load serial port with transmit value
	TI = 0;

}


char getchar ()                                             /* to get a char from serial port */
{
//	char cc;
    //while (!RI);                // compare asm code generated for these three lines
    while ((SCON & 0x01) == 0);  // wait for character to be received, spin on RI
	//while (RI == 0);
	RI = 0;			// clear RI flag
	return SBUF;  // return character from SBUF
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

