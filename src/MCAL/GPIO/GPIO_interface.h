/*
 * GPIO_interface.h
 *
 *  Created on: 11 May 2023
 *      Author: Compu Fayez
 */


#ifndef MCAL_GPIO_GPIO_INTERFACE_H_
#define MCAL_GPIO_GPIO_INTERFACE_H_

/*microcontrollrs's ports*/
#define GPIO_PORTA             1
#define GPIO_PORTB             2
#define GPIO_PORTC             3

/*Output pin mode*/
#define GPIO_PUSH_PULL         0
#define GPIO_OPEN_DRAIN        1

/*Output pin speed*/
#define GPIO_LOW_SPEED         0
#define GPIO_MED_SPEED         1
#define GPIO_HIGH_SPEED        2
#define GPIO_VERY_HIGH_SPEED   3

/*Output pin value*/
#define GPIO_OUTPUT_HIGH       1
#define GPIO_OUTPUT_LOW        0


/*This function is to initialise any pin to be an output pin*/
void GPIO_voidInitOutputPin(u8 Copy_u8PortId,u8 Copy_u8PinId,u8 Copy_u8PinType,u8 Copy_u8PinSpeed);

/*This function is to initialise any pin to be an input pin*/
void GPIO_voidInitInputPin(u8 Copy_u8PortId,u8 Copy_u8PinId,u8 Copy_u8PullMode);

/*This function is to set the value of any output pin [high-low]*/
void GPIO_voidSetOutPinValue(u8 Copy_u8PortId,u8 Copy_u8PinId,u8 Copy_u8Value);

/*This function is to get the value of any input pin*/
u8 GPIO_u8GetInputPinValue(u8 Copy_u8PortId,u8 Copy_u8PinId);




#endif /*MCAL_GPIO_GPIO_INTERFACE_H_*/
