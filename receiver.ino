// The first mistake is that you try to store serial port data in type "integer", second mistake is that you already declared value variable on line 2, but you again declared it on line 12, now if i talk about your logic this simple toggling task can be done by more simple code
// Finally i also cleaned up your code there are lots of styling mistake but styling is more advance thing you don't need think about it atleast for now
const int led = 5;
bool ledState false;
char value;
void setup() {
    Serial.begin(9600);
    pinMode(led, OUTPUT);
}

void loop() {
    if(Serial.available() > 0){
        value = Serial.read();
    }
    if(value == '1'){
       ledState = true; 
    }
    else{
        ledState = false;
    }
    digitalWrite(led, ledState);
}
