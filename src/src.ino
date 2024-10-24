#include "led_templ.h"

// constexpr unsigned int PERIOD{8};
// constexpr unsigned int HALF_PERIOD{PERIOD / 2};

using Builtin_LED = LED<13>;
using RGBT = RGB_LED<12, 11, 9, 10>;

void setup() {
    Builtin_LED::init();
    RGBT::init();
    Serial.begin(115200);
}

void loop() {
    Builtin_LED::on();
    RGBT::on();

    RGBT::clrRGB('w');
    delay_s(1);

    RGBT::clrRGB('b');
    delay_s(1);

    RGBT::clrRGB('r');
    delay_s(1);

    Builtin_LED::off();
    RGBT::off();
    delay_s(2);

    Serial.print("ГОЙДА!!!");
}