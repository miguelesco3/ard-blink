#define version "0.0.0"

namespace CONFIG{

    const uint8_t LED_PIN =13;
    const uint16_t PERIOD = 500;

    void init(){
        pinMode(LED_PIN,OUTPUT);
    }
}