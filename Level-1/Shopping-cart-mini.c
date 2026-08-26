#include <stdio.h>
#include <string.h>

int main(void) {
  //Shopping Cart Program
  char item_name[50] = "";
  float price = 0.0f;
  int qnty = 0;
  float total = qnty * price;

  printf("What item would you like to buy?: ");
  fgets(item_name,sizeof(item_name),stdin);
  item_name[strlen(item_name)-1] = '\0';

  printf("What is the prize of each?: ");
  scanf("%f",&price);

  printf("How many would you like?: ");
  scanf("%i",&qnty);

  printf("\n");
  printf("\n");
  printf("You have brought %i %s/s\n",qnty,item_name);
  printf("The total is $%-.2f\n",(qnty*price));
  return 0;
}