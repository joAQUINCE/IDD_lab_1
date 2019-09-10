// Blinks at different frequencies and prints number of loops completed.

// Declare global variables "count" and "LED_OUTPUT".
int  count;
int LED_OUTPUT = 9;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_OUTPUT as an output.
  pinMode(LED_OUTPUT, OUTPUT);
  Serial.begin(57600);
  
}





// the loop function runs over and over again forever
void loop() {
  int a = 10;
  digitalWrite(LED_OUTPUT, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(a);                       // wait for a second
  digitalWrite(LED_OUTPUT, LOW);    // turn the LED off by making the voltage LOW
  delay(a);                       // wait for a second
  digitalWrite(LED_OUTPUT, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(a*10);                       // wait for a second
  digitalWrite(LED_OUTPUT, LOW);    // turn the LED off by making the voltage LOW
  delay(a*10); 
  digitalWrite(LED_OUTPUT, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(a*100);                       // wait for a second
  digitalWrite(LED_OUTPUT, LOW);    // turn the LED off by making the voltage LOW
  delay(a*100);                       // wait for a second
  count =count +1;
  Serial.print("The loop has been completed ");
  Serial.print(count);
  Serial.print(" time(s).");
  Serial.print("\n");
}
