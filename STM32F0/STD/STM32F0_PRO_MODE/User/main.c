

/* Includes ------------------------------------------------------------------*/
#include "main.h"


int main(void)
{
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOA,ENABLE);
	GPIO_InitTypeDef gpio_init;
	gpio_init.GPIO_Mode=GPIO_Mode_OUT;
	gpio_init.GPIO_Pin=GPIO_Pin_4;
	gpio_init.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&gpio_init);
	
	while(1){
		GPIO_SetBits(GPIOA,GPIO_Pin_4);
		GPIO_ResetBits(GPIOA,GPIO_Pin_4);
	}
}

