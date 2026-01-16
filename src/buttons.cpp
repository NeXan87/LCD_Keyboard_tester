#include "buttons.h"

#include <Arduino.h>

// Определение объекта
AnalogMultiButton buttons(BUTTONS_PIN, BUTTONS_TOTAL, BUTTONS_VALUES, 25);  // 25 мс debounce

void buttonsInit() {
    // Ничего не требуется — конструктор уже вызван
}
