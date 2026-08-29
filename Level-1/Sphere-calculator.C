#include <stdio.h>
#include <math.h>
int main(void) {

// Sphere calculator program

  double radius = 0.0f;
  double Area = 0.0f;
  double Surface_Area = 0.0f;
  double Volume = 0.0f;
  const double pie = 3.14159;

  printf("Enter the radius: ");
  scanf("%lf",&radius);

  Area = pie * (pow(radius,2));
  printf("Area: %.2lf\n",Area);

  Surface_Area = 4 * Area;
  printf("Surface Area: %.2lf\n",Surface_Area);

  Volume = (4.0 / 3.0) * pie * (pow(radius,3));
  printf("Volume: %.2lf\n",Volume);
    return 0;
}