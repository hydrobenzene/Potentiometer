/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/hydrobenzene/Downloads/SummerClass/HelloWorldProper/HelloWorldProper/src/HelloWorldProper.ino"
void setup();
void loop();
#line 1 "c:/Users/hydrobenzene/Downloads/SummerClass/HelloWorldProper/HelloWorldProper/src/HelloWorldProper.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

// setup() runs once, when the device is first turned on.
void setup() {
  pinMode(D5, OUTPUT);

}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  digitalWrite(D5, HIGH);
  delay(1000);
  digitalWrite(D5, LOW);
  delay(1000);
}