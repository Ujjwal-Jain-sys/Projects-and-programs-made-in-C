#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  
  // rock paper scissors game

  srand(time(NULL));
  int choiceNum = 0;
  int botChoice = (rand() % 3) + 1;
  printf("*** ROCK PAPER SCISSORS ***\n");
  printf("Choose an option\n");
  printf("1. ROCK\n");
  printf("2. PAPER\n");
  printf("3. SCISSORS\n");
  printf("Enter your choice: ");
  scanf("%i",&choiceNum);

  switch (choiceNum)
  {
  case 1:// user - rock
    if (botChoice = 2)
    {
      printf("You choose ROCK!\n");
      printf("Computer chose PAPER!\n");
      printf("Computer WIN!\n");
    }
    else if (botChoice = 3)
    {
      printf("You choose ROCK!\n");
      printf("Computer chose SCISSORS!\n");
      printf("You WIN!\n");
    }
    else
    {
      printf("You choose ROCK!\n");
      printf("Computer chose ROCK!\n");
      printf("Game Drawed!\n");
    }
    break;

    case 2:// user - paper
    if (botChoice = 2)
    {
      printf("You choose PAPER!\n");
      printf("Computer chose PAPER!\n");
      printf("Game Drawed!\n");
    }
    else if (botChoice = 3)
    {
      printf("You choose PAPER!\n");
      printf("Computer chose SCISSORS!\n");
      printf("Computer WIN!\n");
    }
    else
    {
      printf("You choose PAPER!\n");
      printf("Computer chose ROCK!\n");
      printf("You WIN!\n");
    }
    break;

    case 3:// user - scissors
    if (botChoice = 2)
    {
      printf("You choose SCISSORS!\n");
      printf("Computer chose PAPER!\n");
      printf("You WIN!\n");
    }
    else if (botChoice = 3)
    {
      printf("You choose SCISSORS!\n");
      printf("Computer chose SCISSORS!\n");
      printf("Game Drawed\n");
    }
    else
    {
      printf("You choose SCISSORS!\n");
      printf("Computer chose ROCK!\n");
      printf("Computer WIN!\n");
    }
    break;
  default:
    printf("Invalid Input, %i is not a choice\n",choiceNum);
    break;
  }
  return 0;
}