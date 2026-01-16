#ifndef BUTTONS_H
#define BUTTONS_H

#include <AnalogMultiButton.h>

// Пины и параметры
constexpr uint8_t BUTTONS_PIN = A0;
constexpr uint8_t BUTTONS_TOTAL = 5;

// Пороговые значения (замените на измеренные!)
constexpr int BUTTONS_VALUES[BUTTONS_TOTAL] = {50, 150, 300, 500, 700};

// Идентификаторы кнопок (enum для читаемости)
enum ButtonId {
    BUTTON_RIGHT = 0,
    BUTTON_UP,
    BUTTON_DOWN,
    BUTTON_LEFT,
    BUTTON_SELECT
};

// Объявление объекта (в .cpp — определение)
extern AnalogMultiButton buttons;

// Инициализация
void buttonsInit();

#endif  // BUTTONS_H
