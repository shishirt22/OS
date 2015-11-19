#ifndef SCREEN_H
#define SCREEN_H
#include "types.h"
#include "system.h"
#include "string.h"

int32 cursorX,cursorY;
const uint8 SCREEN_WIDTH,SCREEN_HEIGHT,SCREEN_DEPTH;

void clearLine(uint8 from ,uint8 to);

void updateCursor();

void clearScreen();

void scrollUp(uint8 lineNumber);

void newLineCheck();

void printchar(char c);

void print(string ch);
#endif