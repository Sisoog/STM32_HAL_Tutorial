<h1> Example project for transmitting and receiving data via USART unit (with printf/scanf redirection) </h1>
<b>This project is created for STM32F103C8T6 microcontroller (Blue Pill board)</b>

In this project, USART1 of the microcontroller is activated and then is used for transmitting and receiving data. To communicate with USART1 we can use a TTL to USB converter and we can control the communication on computer by using a Serial Terminal(such Real Term). In addition we retarget(redirect) printf and scanf functions to facilitate the usage of USART unit.

| Pin map     | function    |
| ----------- | ----------- |
| PortA.pin9  | USART1.TX   |
| PortA.pin10 | USART1.RX   |     





