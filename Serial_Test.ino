
#include <MeMCore.h>

unsigned long last_time = 0;
void setup() { Serial.begin(9600);
}
void loop() {
// Print a heartbeat
if (millis() > last_time + 2000) {
Serial.println("Arduino is alive!!");
last_time = millis(); }
// Send some message when I receive an 'A' or a 'Z'. 
switch (Serial.read())
{
case 'A':
digitalWrite(PORT_9,HIGH);
digitalWrite(PORT_10,HIGH);
Serial.println("Going forward");

break;
case 'Z':
digitalWrite(PORT_9,LOW);
digitalWrite(PORT_10,LOW);
Serial.println("Backing up");

break;

case 'L':
digitalWrite(PORT_9,LOW);
digitalWrite(PORT_10,LOW);
Serial.println("Turning Left");

break;

case 'R':
digitalWrite(PORT_9,LOW);
digitalWrite(PORT_10,HIGH);
Serial.println("Turning Right");

break;
} }
