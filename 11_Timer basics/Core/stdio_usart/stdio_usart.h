/**
  ******************************************************************************
  * @file		stdio_usart.h
  ******************************************************************************
  */
 
// All credits to Carmine Noviello for this code

#ifndef _STDIO_USART_H__
#define _STDIO_USART_H__

#include "stm32f1xx_hal.h"
#include <stdio.h>

void RetargetInit(UART_HandleTypeDef *huart);
int _write(int fd, char* ptr, int len);
int _read(int fd, char* ptr, int len);


#endif //#ifndef _RETARGET_H__


/********************************* END OF FILE ********************************/
/******************************************************************************/ 

