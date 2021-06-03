#include "stdint.h"
#include <string.h>	
#include <stdlib.h>
#include <math.h>
#include "tm4c123gh6pm.h"

#define PI 3.14159265359
#define R 6372795
#define DISTINATION_OFFSET 10		

void SystemInit(void){
	NVIC_CPAC_R |= 0x00F00000;		//enable FPU - Floating-point numbers
}

void portF_led_init()
{
		SYSCTL_RCGC2_R |= 0x00000020;;   /* enable clock to GPIOF */
		GPIO_PORTF_AFSEL_R =0x00;
		GPIO_PORTF_PCTL_R = 0;
    GPIO_PORTF_DIR_R = 0x0E;         /* set PORTF3 pin as output (LED) pin */
                                     /* and PORTF4 as input, SW1 is on PORTF4 */
	
		GPIO_PORTF_AMSEL_R = 0;
    GPIO_PORTF_DEN_R = 0x0F;         /* set PORTF pins 1 to 4 as digital pins */
		GPIO_PORTF_LOCK_R = 0x4C4F434B;
		GPIO_PORTF_CR_R = 0x0F;
    GPIO_PORTF_PUR_R = 0x01;         /* enable pull up for pin 0 */
	
}

int main(void){

}
