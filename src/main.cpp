#include <arduino.h>
#include <settings.h>

long timer=millis();
bool led_state=false;

void setup() {
    Serial.begin(115200);
    CONFIG::init();
}

void loop(){
    if(millis()-timer>CONFIG::PERIOD){
        timer=millis();
        led_state = !led_state;
        digitalWrite(CONFIG::LED_PIN,led_state);
    }

}