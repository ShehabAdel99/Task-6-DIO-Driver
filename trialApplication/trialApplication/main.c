/*
 * trialApplication.c
 *
 * Created: 10/29/2022 5:42:22 PM
 * Author : sheha
 */ 

//#include <avr/io.h>
#include "Application/app.h"


int main(void)
{
    APP_init();
    while (1) 
    {
      APP_start();
    }
return 0;
}

