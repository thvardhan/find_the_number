#include <stdio.h>
#include <windows.h>   // WinApi header

#define BLUE 1
#define GREEN 2
#define LIGHT_BLUE 3
#define RED 4
#define PURPLE 5
#define YELLOW 6
#define LIGHT_GREY 7
#define GREY 8
#define LIGHT_BLUE 9
#define LIGHT_GREEN 10
#define CYAN 11
#define MAGENTA 12
#define LIGHT_PINK 13
#define GOLDISH 14
#define WHITE 15

int main()
{
  HANDLE  hConsole;
  int k;

  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole, BLUE);


  return 0;
}
