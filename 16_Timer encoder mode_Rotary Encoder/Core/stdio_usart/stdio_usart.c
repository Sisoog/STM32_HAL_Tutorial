/**
  ******************************************************************************
  * @file		stdio_usart.c
  ******************************************************************************
  */

// All credits to Carmine Noviello for this code

#include "stdio_usart.h"


UART_HandleTypeDef *gHuart;

//Initialization function sets the uart handler
void RetargetInit(UART_HandleTypeDef *huart) {
  gHuart = huart;

  /* Disable I/O buffering for STDOUT stream, so that
   * chars are sent out as soon as they are printed. */
  setvbuf(stdout, NULL, _IONBF, 0);
}

//Definition of the underlying function for std out
int _write(int fd, char* ptr, int len) {
  HAL_StatusTypeDef hstatus;

    hstatus = HAL_UART_Transmit(gHuart, (uint8_t *) ptr, len, HAL_MAX_DELAY);
    if (hstatus == HAL_OK)
    	return len;
    else
    	return -1;
}

//Definition of the underlying function for std in
int _read(int fd, char* ptr, int len) {
  HAL_StatusTypeDef hstatus;

    hstatus = HAL_UART_Receive(gHuart, (uint8_t *) ptr, 1, HAL_MAX_DELAY);
    if (hstatus == HAL_OK)
    	return 1;
    else
    	return -1;
}



/********************************* END OF FILE ********************************/
/******************************************************************************/ 

