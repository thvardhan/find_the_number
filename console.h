#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void waitStandardTime(void){
  usleep(100*1000);
}
void defaultConsoleColor(void) {
  HANDLE  hConsole;
  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole, 15);

}
void setConsoleColor(int color) {
  HANDLE  hConsole;
  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole, color);
}
void printString(char *str) {
  int i;
  for (i = 0; i < strlen(str); i++) {
    printf("%c",str[i]);
    usleep(100*1000);
  }
}
void enterToContinue(void){
  printf("Press Enter To Continue...");
  char a;
  scanf("%c",&a);
  system("cls");
}
