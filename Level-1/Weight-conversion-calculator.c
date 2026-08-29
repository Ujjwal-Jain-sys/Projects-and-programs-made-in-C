#include <stdio.h>

int main(void) {
  //Weight Conversion Calculator

  float weight = 0.0f;
  int choice = 0;

  printf("Weight Conversion Calculator:\n1. Kilograms to Pounds\n2. Pounds to Kilograms\nEnter your choice (1 or 2): ");
  scanf("%d",&choice);

  if (choice == 1)
  {
    printf("Enter the weight in Kilograms: ");
    scanf("%f",&weight);
    printf("%.3f Kilograms is equal to %.3f pounds\n",weight,(weight * 2.20462));
  }
  
  else if (choice == 2)
  {
    printf("Enter the weight in Pounds: ");
    scanf("%f",&weight);
    printf("%.3f Pounds is equal to %.3f Kilograms\n",weight,(weight * 0.453592));
  }
  
  else
  {
    printf("That choice is not available");
  }
  return 0;
}