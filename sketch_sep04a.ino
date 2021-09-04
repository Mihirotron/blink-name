void setup() {

pinMode(LED_BUILTIN, OUTPUT); // digital pin LED_BUILTIN is initialized as an output.

}

void Dot() {
digitalWrite(LED_BUILTIN, HIGH); // turns the LED on
delay(300); // LED remains on for 0.3 seconds
digitalWrite(LED_BUILTIN, LOW); // turns the LED off
delay(300); // LED remains off for 0.3 seconds
}



void Dash() {
digitalWrite(LED_BUILTIN, HIGH); // turns the LED on
delay(800); // LED remains on for 0.8 seconds
digitalWrite(LED_BUILTIN, LOW); // turns the LED off
delay(800); // LED remains off for 0.8 seconds
}

void loop() {
/*

My name in Morse's code is: -

M __

I ..

H ....

I ..

R ._.



*/

// M__
Dash();
Dash();
delay(1500); 

// I..
Dot();
Dot();
delay(1500); 

// H....
Dot();
Dot();
Dot();
delay(1500); 

// I..
Dot();
Dot();
delay(1500); 

// R ._.
Dot();
Dash();
Dot();
delay(1500); 


}
