#include <stdio.h>
#include <math.h>

int main(void)
{
  // Compound Interest Calculator

  double principal = 0.0;
  double interest_rate = 0.0;
  double time_yr = 0.0;
  double comp_ntime_yr = 0.0;
  double amount = 0.0;
  double CI = 0.0;
  // formula of compound interest -> A = P( 1 + (r/n) ) ** nt
  // for interest only -> CI = A - P

  printf("Compound Interest Calculator\nEnter the principal (P): ");
  scanf("%lf", &principal);

  printf("Enter the interest rate % (r): ");
  scanf("%lf", &interest_rate);

  printf("Enter the # of years (t): ");
  scanf("%lf", &time_yr);

  printf("Enter # of times compounded per year (n): ");
  scanf("%lf", &comp_ntime_yr);

  amount = principal * (pow((1 + ((interest_rate / 100) / comp_ntime_yr)), (comp_ntime_yr * time_yr)));

  CI = amount - principal;

  printf("After two years, The total amount you have to pay will be $%.2lf\nAnd the interest you pay will be: $%.2lf\n", amount, CI);
  return 0;
}