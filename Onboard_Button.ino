#include <Mirobot.h>
#include "Wlkata_Mega_Sensor_Shield.h"
int val_1;
int val_2;

void setup() {
  shieldInit();    //shield initialization
  Serial.begin(9600);

}

void loop() {
  val_1 = shieldKeyValue(SW1);
  val_2 = shieldKeyValue(SW2);
  if(val_1 == 1){
    Serial.print("SW1 Button is Pressed");
    delay(500);
    Serial.print('\n');
  }

  if (val_2 == 1) {
    Serial.print("SW2 Button is Pressed");
    delay(500);
    Serial.print('\n');
  }


}
