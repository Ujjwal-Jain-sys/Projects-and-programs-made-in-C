#include <stdio.h>

int main(void)
{

  float originalPrice = 0.0f;
  float discount = 0.0f;
  float finalPrice = 0.0f;

  printf("\n*** Discount-Calculator ***\n");
  do{
    printf("\nEnter the original price: ");
    scanf("%f", &originalPrice);
    printf("Enter the Discount[ In %% ]: ");
    scanf("%f", &discount);
    if(discount>=0 && discount <= 100 && originalPrice>=0){
      finalPrice = (originalPrice - ((discount / 100) * originalPrice)); // could make a function discount()
      printf("\nThe final price, After the discount of %.2f%% is ₹%.2f\n", discount, finalPrice);
    }
    else{
      printf("\nInvalid Price/Discount,please try again\n");
    }
  }while(originalPrice<0 || discount>100 || discount<0);
  return 0;
}