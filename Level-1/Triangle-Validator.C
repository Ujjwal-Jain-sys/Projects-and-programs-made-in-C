#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <unistd.h>

bool sideValid(float Side);
void angleCheck(float sumSqrSmallSide, float sqrLargest, float largest);

int main(void) {
  
  float Side1 = 0.0f;
  float Side2 = 0.0f;
  float Side3 = 0.0f;
  int choice = 0;
  printf("\n*** Triangle Analyzer ***\n");
  do{//to confirm the side lengths
    do{
      printf("\nEnter the length of Side 1: ");
      scanf("%f",&Side1);
    }while(sideValid(Side1) != true);//checks if side is valid( side > 0)
    do{
      printf("\nEnter the length of Side 2: ");
      scanf("%f",&Side2);
    }while(sideValid(Side2) != true);//checks if side is valid( side > 0)
    do{
      printf("\nEnter the length of Side 3: ");
      scanf("%f",&Side3);
    }while(sideValid(Side3) != true);//checks if side is valid( side > 0)

    printf("\nSide lengths you gave are %.3f, %.3f and %.3f\n",Side1,Side2,Side3);
    printf("If these are correct, enter 1 to continue\n Otherwise, the program will restart.\nEnter your Choice: ");
    scanf("%d",&choice);
  }while(choice != 1);//program will continue only if choice is 1
  


  printf("\nThinking ");//just used this for ux
  for(int i = 0;i < 3;i++){
    fflush(stdout);
    usleep(500*1000);
    printf(". ");
  }
  printf("\n");
  float largest = Side1;//logic for finding the largest Side;
  if(largest < Side2){
    largest = Side2;
    if(largest < Side3){
      largest = Side3;
    }
  }

  float perimeter = (Side1+Side2+Side3);//perimeter of triangle
  float sumSmallSides = (perimeter - largest);//Sum of smaller sides
  float small1 = 0.0f;
  float small2 = 0.0f;
  //logic to find which two sides are smaller
  if(sumSmallSides == (Side1+Side2)){
    small1 = Side1;
    small2 = Side2;
  }
  else if(sumSmallSides == (Side2+Side3)){
    small1 = Side2;
    small2 = Side3;
  }
  else{
    small1 = Side3;
    small2 = Side1;
  }
  //A^2 + B^2 [Square sum of smaller sides]
  float sumSqrSmallSide = ((powf(small1,2))+(powf(small2,2)));
  //Different scenerios
  if((sumSmallSides) > largest){
    printf("\nA valid triangle can be formed\n");
    if(Side1 == Side2 && Side2 == Side3){
      fflush(stdout);
      usleep(200*1000);
      printf("Triangle is a equilateral Triangle\nAnd All angles are acute and of 60°\n");
    }
    else if(Side1 == Side2 || Side2 == Side3 || Side3 == Side1){
      fflush(stdout);
      usleep(200*1000);
      angleCheck(sumSqrSmallSide,powf(largest,2),largest);
      printf("And it's isosceles as two sides are equal\n");
    }
    else{
      angleCheck(sumSqrSmallSide,powf(largest,2),largest);
      fflush(stdout);
      usleep(200*1000);
      printf("And it's scalene as\nnone of the sides are equal in length\n");
    }
    fflush(stdout);
    usleep(200*1000);
    printf("It's perimeter is : %.3f\n",perimeter);//perimeter printed
    float semiPerimeter = perimeter/2;
    float tempArea = (semiPerimeter*(semiPerimeter-Side1)*(semiPerimeter-Side2)*(semiPerimeter-Side3));
    float area = sqrtf(tempArea);
    fflush(stdout);
    usleep(200*1000);
    printf("Area of triangle is: %.3f\n",area);
    if(area > 0){
      return 0;
    }
    else{
      fflush(stdout);
      usleep(200*1000);
      printf("This triangle doesn't exist in real-world\n");
      fflush(stdout);
      usleep(200*1000);
      printf("But theoretically,we can do math of it\n");
    }
  }
  else if(sumSmallSides == largest){
    printf("\nA degenerate triangle is formed[Straight Line]\n");
  }
  else{
    printf("\nA triangle can't be formed using these sides\n");
  }
  return 0;
}

bool sideValid(float Side){
  if(Side > 0){
    return true;
  }
  else{
    printf("\nInvalid Side length,\nPlease Try Again");
    return false;
  }
}

void angleCheck(float sumSqrSmallSide, float sqrLargest, float largest){
  if(sumSqrSmallSide > sqrLargest){
    printf("\nIt is an acute Triangle and all angles are less than 90°\n");
  }
  else if(sumSqrSmallSide == sqrLargest){
    printf("It is a Right Triangle,\n");
    printf("it has one perfect 90° angle opposite to side %.3f\n",largest);
  }
  else{
    printf("It is an obtuse Triangle,\nOne angle is greater than 90°\n");
  }
}