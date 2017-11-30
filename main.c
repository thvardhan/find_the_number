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
void input(int);//takes the input and responds

int main(int argc,char* argv[])
{
  welcome();
  instructions();

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

void instructions(void){
  setConsoleColor(LIGHT_PINK);
  printString("The game is very simple, you have to guess the number\n");
  setConsoleColor(CYAN);
  printString("Enter any number, then computer will hint you wether it's big or small.\n");
  setConsoleColor(LIGHT_GREEN);
  printString("According to the hint, you have to guess the number\n");
  defaultConsoleColor();
  enterToContinue();
}
