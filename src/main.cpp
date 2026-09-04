#include "Arduino.h"
#include <Keypad.h>

constexpr byte ROWS = 3;
constexpr byte COLS = 3;


byte ROW_PINS[ROWS] = {5,6,7};
byte COL_PINS[COLS] = {8,9,10};

char BUTTONS[ROWS][COLS]= {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'}
};

Keypad miyoDenKeyboard = Keypad(makeKeymap(BUTTONS), ROW_PINS, COL_PINS, ROWS, COLS);

void setup () {
  Serial.begin(9600);
  Serial.println("Serial monitor activated.");
}

void loop() {
  // char pressedButton = miyoDenKeyboard.waitForKey();
  char pressedButton = miyoDenKeyboard.waitForKey();
  Serial.print("Current button: ");
  Serial.println(pressedButton);
}