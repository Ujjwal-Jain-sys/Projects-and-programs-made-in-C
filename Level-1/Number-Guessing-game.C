#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    // Number Guessing game

  srand(time(NULL));

  int Number = (rand() % 500) + 1; // range- (1-500)
  int UserInput = 0;
  int tries = 0;
  printf("*** Number Guessing Game ***");
  printf("Guess a number between 1 - 500: ");
  scanf("%i",&UserInput);

  while (Number != UserInput )
  {
    if (Number > UserInput)
    {
      printf("Too Low!\n");
      printf("Guess a number between 1 - 500: ");
      scanf("%i",&UserInput);
      tries++;
    }
    else
    {
      printf("Too High!\n");
      printf("Guess a number between 1 - 500: ");
      scanf("%i",&UserInput);
      tries++;
    }
  }
  printf("Congrats, %i is the correct Number\nit took you %i tries\n",Number,tries);
  return 0;
}