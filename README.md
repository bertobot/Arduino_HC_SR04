# Arduino HC SR04 Ultrasonic Sensor class interface

```c++
#include <HC_SR04.h>

// trigger on D4,
// echo on D5
HC_SR04 sensor(4, 5); 


void setup() {
  Serial.begin(9600);
}

void use_1() {
  Serial.print("distance: ");
  Serial.println(sensor.pulse());
}

void use_2() {
  Serial.print("distance: ");
  // send a pulse for 20 micro seconds instead of the default, 10
  Serial.println(sensor.pulse(20));
}

void use_3() {
  sensor.pulse();

  // do something else, read from other sensors...

  Serial.print("distance: ");
  Serial.print(sensor.distance);
  Serial.print(", duration: ");
  Serial.println(sensor.duration);
}

void loop() {
  use_1();
  use_2();
  use_3();

  delay(100);
}
```
