/* Name and date goes here
 *  Materials:
 *    11x jumper wires
 *    8x LEDs
 *    8x 330 ohm resistors
 *    1x photocell
 *    1x 1k ohm resistor
 *    1x Arduino Uno
 *    1x Breadboard
 */

int photoCell = 0;           // photocell pin
int lightLevel = 0;          // holds the amount of light


void setup()
{
  // Serial.begin(9600);              // uncomment to check photocell reading
  // Serial.println(lightLevel);

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);        // prepare LED pins for output
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  int lightLevel = analogRead(photoCell) - 150;  // read the amount of light
                                                 // from the photocell (change
                                                 // the subtraction value based
                                                 // on current room lighting)
  if (lightLevel > 0) digitalWrite(2, HIGH);
  if (lightLevel > 50) digitalWrite(3, HIGH);
  if (lightLevel > 100) digitalWrite(4, HIGH);
  if (lightLevel > 150) digitalWrite(5, HIGH);  // depending on the amount
  if (lightLevel > 200) digitalWrite(6, HIGH);  // of light, turn on an LED
  if (lightLevel > 250) digitalWrite(7, HIGH);
  if (lightLevel > 300) digitalWrite(8, HIGH);
  if (lightLevel > 350) digitalWrite(9, HIGH);

  delay(100);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);     // wait 100 ms then turn off all
  digitalWrite(6, LOW);     // LEDs before next loop
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
}
