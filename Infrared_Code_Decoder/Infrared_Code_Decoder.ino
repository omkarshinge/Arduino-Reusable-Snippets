#include <IRremote.h>
int receiver_pin = 8;
IRrecv receiver(receiver_pin);
decode_results results;
void setup() {
  Serial.begin(9600);
  receiver.enableIRIn();
}

void loop() {
  if(receiver.decode(&results)){
    Serial.println(results.value, HEX);
    receiver.resume();
  }
}
