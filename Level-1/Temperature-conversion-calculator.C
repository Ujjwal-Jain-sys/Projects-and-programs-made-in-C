#include <stdio.h>

int main(void) {
    
  //Temperature Conversion Program

  float temp = 0.0f;
  char temperature_unit = '\0';
  printf("Temperature Conversion Program\nC. Celsius to Fahrenheit\nF. Fahrenheit to celsius\nIs the temperature in Celsius (C) or Fahrenheit (F)?: ");
  scanf("%c",&temperature_unit);

  if (temperature_unit == 'C' || temperature_unit == 'c')
  { 
    printf("Enter the temperature in Celsius: ");
    scanf("%f",&temp);
    printf("%.2f celsius is equal to %.2f Fahrenheit\n",temp,((temp * 1.8) + 32));
  }
  else if (temperature_unit == 'f' || temperature_unit == 'F')
  {
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f",&temp);
    printf("%.2f Fahrenheit is equal to %.2f celsius\n",temp,((temp-32.0)/1.8));
  }
  else{
    printf("Invalid Choice, try again.");
  }
  return 0;
}