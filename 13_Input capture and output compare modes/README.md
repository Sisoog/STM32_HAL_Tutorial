<h1> Example project for using timer's input capture and output compare modes </h1>
<b>This project is created for STM32F103RET6 microcontroller</b>

in this project, we activate Timer2 and Timer3 of the microcontroller and configure TIM2 in input capture mode to use it as a frequency meter. also all 4 channels of TIM3 are configured in output compare mode to generate square waves with different frequencies. 

| Pin map     | Function    |
| ----------- | ----------- |
| PortA.pin0   | TIM2_CH1 (input capture)  |
| PortA.pin6   | TIM3_CH1 (output compare) |
| PortA.pin7   | TIM3_CH2 (output compare) |
| PortA.pin9   | USART_TX    |
| PortA.pin10  | USART_RX    |
| PortB.pin0   | TIM3_CH3 (output compare) |
| PortB.pin1   | TIM3_CH4 (output compare) |

Note that the signal whose frequency is to be calculated, must be exerted on pin8 of portA. 

