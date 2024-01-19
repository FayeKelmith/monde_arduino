
class Led
{
    private:
    byte pin;

    public:
    //default conststructor
    Led(){
        this->pin = 13;
    }
    Led(byte pin){
        this->pin = pin;
    }

    void init(){
        pinMode(pin, OUTPUT);
    }

    void init(byte defaultState){
      init();

      if(defaultState==HIGH){
        on();
      }else{
        off();
      }
    }

    void on(){
      digitalWrite(pin,HIGH);

    }

    void off(){
      digitalWrite(pin,LOW);
    }
};


Led led(13);

void setup(){
led.init(); 
}

void loop(){
  led.on();
  delay(500);
  led.off();
  delay(500);
    
}