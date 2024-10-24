class LED {

public:

    LED(int a_pin): pin{a_pin} {};

    void init() { pinMode(pin, OUTPUT); }

    void on() { digitalWrite(pin, HIGH); } //Подаём напряжение//

    void off() { digitalWrite(pin, LOW); }//Напряжение равно 0//

private:

    int pin;
}; //Класс светодиода//

class RGB_LED {

public:

    RGB_LED(int vcc_pin, int r_pin, int g_pin, int b_pin): vccpin{vcc_pin}, rpin{r_pin}, gpin{g_pin}, bpin{b_pin} {};

    void init() { pinMode(vccpin, OUTPUT); pinMode(rpin, OUTPUT); pinMode(gpin, OUTPUT); pinMode(bpin, OUTPUT); }

    void redLighton() { digitalWrite(vccpin, HIGH); digitalWrite(rpin, LOW); digitalWrite(gpin, HIGH); digitalWrite(bpin, HIGH); } //Подаём напряжение//

    void redLightoff() { digitalWrite(vccpin, LOW); digitalWrite(rpin, HIGH); digitalWrite(gpin, HIGH); digitalWrite(bpin, HIGH);}//Напряжение равно 0//

private:

    int vccpin;
    int rpin;
    int gpin;
    int bpin;
}; //Класс RGB-светодиода//

void delay_s(unsigned int s) {
    delay(s * 1000); //Представляем задержку в секундах//
}