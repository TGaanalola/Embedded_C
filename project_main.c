/**
 * @file main.c
 * @author T Gaanalola (gaanalola31@gmail.com)
 * @brief Embedded C project
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "act1.h"
#include "act2.h"
#include "act3.h"
#include "act4.h"
#include <util/delay.h>

int main(void)
{

/**
 * @brief Main function
 * 
 * @return int 
 */
	
    while(1)
    {
        uint16_t var=0;
        char temperature_op;
        //act1
        detectUser();  
        //act2/3/4         
        if (detectUser()==1)
        {
            var=Read_ADC(0);
            temperature_op= OutPWM(var);
            dispOP(temperature_op);
        }
    }
    return 0;
}	
