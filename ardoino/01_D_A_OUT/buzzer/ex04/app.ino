int speakerPin = 5;
int melody[] = {262,294,330,349,392,440,494,523};
void setup(){

}

void loop(){

    //도파도쏠
    
    tone(speakerPin, melody[0], 250);
    delay(250);
    tone(speakerPin, melody[3], 250);
    delay(250);
    tone(speakerPin, melody[0], 250);
    delay(250);
    tone(speakerPin, melody[4], 250);
    delay(250);

    delay(2000);

    
}   