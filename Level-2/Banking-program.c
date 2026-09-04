#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main(void) {
  //banking Program

  int choice = 0;
  float balance = 0;
  
  printf("*** Welcome To The Bank ***");

  do{
    printf("\nSelect an option:\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);

    switch(choice){
      case 1:
        checkBalance(balance);
        break;
      case 2:
        balance += deposit();
        break;
      case 3:
        balance -= withdraw(balance);
        break;
      case 4:
        printf("\nThank you for using the bank\n");
        break;
      default:
        printf("\nInvalid Response, please try again\n");
        break;
    }
  }while(choice != 4);
  return 0;
}

void checkBalance(float balance){
  printf("\nYour current Balance is ₹%.2f\n",balance);
}

float deposit(){
  float amount = 0.0f;
  printf("\nEnter the amount you want to deposit: ₹");
  scanf("%f",&amount);

  if(amount < 0){
    for (int i = 5; i > 0; i--)
    {
      printf("\nInvalid Amount,Returning to the Main menu in %i\n",i);
      sleep(1);
    }
    return 0.0f;
  }
  else{
    printf("Successfully deposited ₹%.2f\n",amount);
  }
  return amount;
}

float withdraw(float balance){
  float amount = 0.0f;
  printf("\nYour Current Balance is ₹%.2f\n",balance);
  printf("\nEnter the amount you want to withdraw: ");
  scanf("%f",&amount);

  if(amount < 0){
    for (int i = 5; i > 0; i--)
    {
      printf("\nInvalid Amount,Returning to the Main menu in %i\n",i);
      sleep(1);
    }
    return 0.0f;
  }
  else if(amount > balance){
    printf("\nInsuffient funds, Can't withdraw this much\n");
    return 0.0f;
  }
  else{
    printf("\nSuccesfully Withdrawed ₹%.2f\n",amount);
    printf("\nYour new balance is ₹%.2f",(balance-amount));
    return amount;
  }
}