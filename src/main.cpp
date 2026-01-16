#include <Arduino.h>

#include "buttons.h"
#include "config.h"
#include "lcd_driver.h"

void setup() {
    lcdInit();
    Serial.begin(115200);
}

void loop() {
    updateButtons();

    int x;                                        // Создаем переменную x
    x = analogRead(0);                            // Задаем номер порта с которого производим считывание
    lcdSetCursor(0, 1);                           // Установить курсор на вторую строку
    if (clickRightButton()) {                     // Если x меньше 100 перейти на следующею строк
        lcdPrint("Right           ");             // Вывести текст
        Serial.print("Value A0 ‘Right’ is  :");   // Вывести текст
        Serial.println(x, DEC);                   // Вывести значение переменной x
    } else if (clickUpButton()) {                 // Если х меньше 200 перейти на следующию строку
        lcdPrint("Up              ");             // Вывести текст
        Serial.print("Value A0 ‘UP’ is  :");      // Вывести текст
        Serial.println(x, DEC);                   // Вывести значение переменной x
    } else if (clickDownButton()) {               // Если х меньше 400 перейти на следующию строку
        lcdPrint("Down            ");             // Вывести текст
        Serial.print("Value A0 ‘Down’ is  :");    // Вывести текст
        Serial.println(x, DEC);                   // Вывести значение переменной x
    } else if (clickLeftButton()) {               // Если х меньше 600 перейти на следующию строку
        lcdPrint("Left            ");             // Вывести текст
        Serial.print("Value A0 ‘Left’ is  :");    // Вывести текст
        Serial.println(x, DEC);                   // Вывести значение переменной x
    } else if (clickSelectButton()) {             // Если х меньше 800 перейти на следующию строку
        lcdPrint("Select          ");             // Вывести текст
        Serial.print("Value A0 ‘Select’ is  :");  // Вывести текст
        Serial.println(x, DEC);                   // Вывести значение переменной x
    }
}
