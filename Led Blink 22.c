sbit LED_PIN at RB1_bit;  //define led pin as pin 1 of port B

void main() {
TRISB1_bit = 0; //set pin 1 of port B as output

while(1) {
LED_PIN = 1;    //turn on led
delay_ms(500);          //delay for 500 miliseconds
LED_PIN = 0;           //turn off led
delay_ms(500);      //delay for 500 miliseconds
}
}