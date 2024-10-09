class LED {

public:

    LED(int a_pin): pin{a_pin} {};

    void init() { pinMode(pin, OUTPUT); }

    void on() { digitalWrite(pin, HIGH); } //Подаём напряжение//

    void off() { digitalWrite(pin, LOW); }//Напряжение равно 0//

private:

    int pin;
}; //Класс светодиода//

void delay_s(unsigned int s) {
    delay(s * 1000); //Представляем задержку в секундах//
}