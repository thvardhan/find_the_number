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
int input(int);//takes the input and responds

int main(int argc,char* argv[])
{
  char c='y';
  int r;
  do{
    r=rand();
    int turns=1;
    welcome();
    instructions();
    printString("Enter number\n");
    while(input(r)==0){
      turns++;
    }
    setConsoleColor(GOLDISH);
    printf(" %d turns.\n",turns);
    defaultConsoleColor();
    printString("Play again?(y/n)");
    scanf(" %c",&c);
    system("cls");
  }while (c=='Y'||c=='y');
  return 0;
}


int input(int r){
  int c;
  scanf("%d",&c);
  if(c<r){
    setConsoleColor(CYAN);
    printString("Lesser\n");
    defaultConsoleColor();
    return 0;
  }
  else if(c>r){
    setConsoleColor(RED);
    printString("Bigger\n");
    defaultConsoleColor();
    return 0;
  }
  else{
    setConsoleColor(GOLDISH);
    printString("You guessed the right number, in");
    defaultConsoleColor();
    return 1;
  }
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
  printString("The game is very simple, you have to guess the number.\n");
  setConsoleColor(CYAN);
  printString("Enter any number, then computer will hint you whether it's big or small.\n");
  setConsoleColor(LIGHT_GREEN);
  printString("According to the hint, you have to guess the number.\n");
  setConsoleColor(MAGENTA);
  printString("Lesser means you should enter a higher value and vice versa\n");
  defaultConsoleColor();
  enterToContinue();
}
