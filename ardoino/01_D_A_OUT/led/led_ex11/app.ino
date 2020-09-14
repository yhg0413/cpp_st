int pin_LED1 = 3;
int pin_LED2 = 5;

boolean LED_state1 = false;
boolean LED_state2 = false;

void setup(){
    pinMode(pin_LED1, OUTPUT);
    pinMode(pin_LED2, OUTPUT);

    digitalWrite(pin_LED1, LOW);
    digitalWrite(pin_LED2, LOW);
}

void loop(){
   blink_led1(pin_LED1, &LED_state1,500);
   blink_led1(pin_LED2, &LED_state2,1000);
}

void blink_led1(int pin, boolean *state, int interval){
    static unsigned long time_previous = 0;
    const int INTERVAL = interval;
    unsigned long time_current = millis();

    if(time_current - time_previous > INTERVAL){
        time_previous = time_current;
        *state =! *state;
        digitalWrite(pin, *state);
    }
}