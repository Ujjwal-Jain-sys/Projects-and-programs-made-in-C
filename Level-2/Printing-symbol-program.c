#include <stdio.h>    // standard input/output
#include <unistd.h>   // header file for sleep funtns
#include <stdbool.h>  // standard boolean
#include <string.h>   // standard string header
#include <ctype.h>    // has definations to check char data types and more
#include <math.h>     // for math functions

int main(void) {
  setbuf(stdout, NULL);
  
  //printing symbol program

  int rows = 0;
  int columns = 0;
  char symbol = '\0';

  printf("Enter the no. of rows: ");
  scanf("%i",&rows);

  printf("Enter the no. of columns: ");
  scanf("%i",&columns);
  getchar();

  printf("Enter the symbol to use: ");
  scanf("%c",&symbol);
  getchar();

  while (!isgraph((char)symbol)) {
    printf("\nThat symbol is not printable,Plz try again: ");
    scanf("%c",&symbol);
    getchar();
  }
  printf("That's good\n");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      printf("%c",symbol);
      usleep(100000);
    }
    printf("\n");
    usleep(200000);
  }
  return 0;
}