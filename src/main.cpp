#include <Arduino.h>
#include <LiquidCrystal.h>

#include "buttons.h"
#include "config.h"

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);  // Указываем порты

void setup() {
    lcd.begin(16, 2);               // Инициализируем LCD 16x2
    lcd.setCursor(0, 0);            // Установить курсор на первую строку
    lcd.print("LCD1602");           // Вывести текст
    lcd.setCursor(0, 1);            // Установить курсор на вторую строку
    lcd.print("www.robotchip.ru");  // Вывести текст
    Serial.begin(9600);             // Включаем последовательный порт
}

void loop() {
    updateButtons();
    int x;                                        // Создаем переменную x
    x = analogRead(0);                            // Задаем номер порта с которого производим считывание
    lcd.setCursor(10, 1);                         // Установить курсор на вторую строку
    if (clickRightButton()) {                     // Если x меньше 100 перейти на следующею строк
        lcd.print("Right ");                      // Вывести текст
        Serial.print("Value A0 ‘Right’ is  :");   // Вывести текст
        Serial.println(x, DEC);                   // Вывести значение переменной x
    } else if (clickUpButton()) {                 // Если х меньше 200 перейти на следующию строку
        lcd.print("Up    ");                      // Вывести текст
        Serial.print("Value A0 ‘UP’ is  :");      // Вывести текст
        Serial.println(x, DEC);                   // Вывести значение переменной x
    } else if (clickDownButton()) {               // Если х меньше 400 перейти на следующию строку
        lcd.print("Down  ");                      // Вывести текст
        Serial.print("Value A0 ‘Down’ is  :");    // Вывести текст
        Serial.println(x, DEC);                   // Вывести значение переменной x
    } else if (clickLeftButton()) {               // Если х меньше 600 перейти на следующию строку
        lcd.print("Left  ");                      // Вывести текст
        Serial.print("Value A0 ‘Left’ is  :");    // Вывести текст
        Serial.println(x, DEC);                   // Вывести значение переменной x
    } else if (clickSelectButton()) {             // Если х меньше 800 перейти на следующию строку
        lcd.print("Select");                      // Вывести текст
        Serial.print("Value A0 ‘Select’ is  :");  // Вывести текст
        Serial.println(x, DEC);                   // Вывести значение переменной x
    }
}
