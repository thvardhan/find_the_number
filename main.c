#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "console.h"
#include "colors.h"


void defaultConsoleColor(void);//Changes the color of console to default, white
void setConsoleColor(int);//Changes the color of console
void welcome(void);//Renders the welcome screen
void instructions(void);//Renders the instructions
void waitStandardTime(void);//Pauses the thread for 100ms
void printString(char*);//Prints the string recieved
void enterToContinue(void);//Waits for the user to press ENTER


int main(int argc,char* argv[])
{
  welcome();

  return 0;
}

void welcome(void) {
  setConsoleColor(GOLDISH);
  printString("Welcome to the ");
  setConsoleColor(MAGENTA);
  printString("Find The Number ");
  setConsoleColor(GOLDISH);
  printString("Game by ");
  setConsoleColor(YELLOW);
  printString("thvardhan\n");
  defaultConsoleColor();
  enterToContinue();
}
