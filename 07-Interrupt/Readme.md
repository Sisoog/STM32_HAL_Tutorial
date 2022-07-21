<h1> Example project for using <b>External Interrupt</b> </h1>
<b>This project is created for STM32F103C8T6 microcontroller (Blue Pill board)</b>

in this project pin8 of the portB of the Micro is connected to a push button. when ever this button is pressed an interrupt request is generated. in the interrupt handler an interrupt callback is called, in which PB6 is toggled. In the main program, PC13 is also periodically toggled. so in this project we can se the effect of the interrupt on the main program.

| Pin map     | function    |
| ----------- | ----------- |
| PortC.pin13 | GPIO output (LED) |
| PortA.pin6  | GPIO output (LED) |
| PortB.pin8  | Ext Interrupt     |  
