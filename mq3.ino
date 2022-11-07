
int sensorValue = 0;
int led_pin =D4;
int led2_pin =D8;
int mq3 = A0;

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);

  pinMode(D4, OUTPUT);
  pinMode(D8, OUTPUT);
  pinMode(A0, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
//  Serial.println(sensorValue);
//  delay(1000);        // delay in between reads for stability
  if(sensorValue>=200){
    digitalWrite(led_pin, HIGH);
    Serial.print("this your alcohol is over 200: ");
    Serial.println(sensorValue);
    delay(2000);
  }else{
    digitalWrite(led2_pin, HIGH);
     Serial.print("this your alcohol is less than 200: ");
    Serial.println(sensorValue);
    delay(2000);
  }
}
