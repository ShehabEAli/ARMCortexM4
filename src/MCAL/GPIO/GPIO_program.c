
/*
 * GPIO_program.c
 *
 *  Created on: 11 May 2023
 *      Author: Compu Fayez
 */
#include"../../LIB/STD_TYPES.h"
#include"../../LIB/BIT_MATHS.h"


#include"GPIO_interface.h"
#include"GPIO_private.h"
#include"GPIO_config.h"

void GPIO_voidInitOutputPin(u8 Copy_u8PortId,u8 Copy_u8PinId,u8 Copy_u8PinType,u8 Copy_u8PinSpeed)
{
	switch(Copy_u8PortId)
	{
		case GPIO_PORTA :
			/* Set direction of the pin to be output */
			/*bit Masking*/
			GPIOA->MODER &=~(0b11<<(Copy_u8PinId*2));
			GPIOA->MODER |=~(0b01<<(Copy_u8PinId*2));
			/*Set speed of the output pin*/
			/*bit Masking*/
			GPIOA->OSPEEDR &=~(0b11<<(Copy_u8PinId*2));
			GPIOA->OSPEEDR |=~(Copy_u8PinSpeed<<(Copy_u8PinId*2));
			/*Set type of output pin*/
			WRT_BIT(GPIOA->OTYPER,Copy_u8PinId,Copy_u8PinType);
			break;

		case GPIO_PORTB :
			/* Set direction of the pin to be output */
			/*bit Masking*/
			GPIOB->MODER &=~(0b11<<(Copy_u8PinId*2));
			GPIOB->MODER |=~(0b01<<(Copy_u8PinId*2));
			/*Set speed of the output pin*/
			/*bit Masking*/
			GPIOB->OSPEEDR &=~(0b11<<(Copy_u8PinId*2));
			GPIOB->OSPEEDR |=~(Copy_u8PinSpeed<<(Copy_u8PinId*2));
			/*Set type of output pin*/
			WRT_BIT(GPIOB->OTYPER,Copy_u8PinId,Copy_u8PinType);
			break;
		case GPIO_PORTC :
			/* Set direction of the pin to be output */
			/*bit Masking*/
			GPIOC->MODER &=~(0b11<<(Copy_u8PinId*2));
			GPIOC->MODER |=~(0b01<<(Copy_u8PinId*2));
			/*Set speed of the output pin*/
			/*bit Masking*/
			GPIOC->OSPEEDR &=~(0b11<<(Copy_u8PinId*2));
			GPIOC->OSPEEDR |=~(Copy_u8PinSpeed<<(Copy_u8PinId*2));
			/*Set type of output pin*/
			WRT_BIT(GPIOC->OTYPER,Copy_u8PinId,Copy_u8PinType);
			break;
	}


}
void GPIO_voidInitInputPin(u8 Copy_u8PortId,u8 Copy_u8PinId,u8 Copy_u8PullMode)
{


}
void GPIO_voidSetOutPinValue(u8 Copy_u8PortId,u8 Copy_u8PinId,u8 Copy_u8Value)
{
	switch(Copy_u8PortId)
	{
		case GPIO_PORTA :
			WRT_BIT(GPIOA->ODR,Copy_u8PinId,Copy_u8Value);
			break;

		case GPIO_PORTB :
			WRT_BIT(GPIOA->ODR,Copy_u8PinId,Copy_u8Value);
			break;
		case GPIO_PORTC :
			WRT_BIT(GPIOA->ODR,Copy_u8PinId,Copy_u8Value);
			break;
	}

}
u8 GPIO_u8GetInputPinValue(u8 Copy_u8PortId,u8 Copy_u8PinId)
{


}
