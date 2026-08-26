#include <stdio.h>
#include <string.h>

int main(void) {
//Madlibs game

  char adj1[20] = "";
  char noun[30] = "";
  char adj2[20] = "";
  char verb[20] = "";
  char adj3[20] = "";

  printf("Enter an adjective (Description): ");
  fgets(adj1,sizeof(adj1),stdin);
  adj1[strlen(adj1) - 1] = '\0';

  printf("Enter a noun (Animal or Person): ");
  fgets(noun,sizeof(noun),stdin);
  noun[strlen(noun) - 1] = '\0';
  
  printf("Enter an adjective (Description): ");
  fgets(adj2,sizeof(adj2),stdin);
  adj2[strlen(adj2) - 1] = '\0';

  printf("Enter a verb (ending w/ -ing): ");
  fgets(verb,sizeof(verb),stdin);
  verb[strlen(verb) - 1] = '\0';

  printf("Enter an adjective (Description): ");
  fgets(adj3,sizeof(adj3),stdin);
  adj3[strlen(adj3) - 1] = '\0';

  printf("\nToday i went to a %s zoo.\n",adj1);
  printf("In an exhibit, i saw a %s.\n",noun);
  printf("%s was %s and %s!\n",noun,adj2,verb);
  printf("I was %s!\n",adj3);    
	return 0;
}