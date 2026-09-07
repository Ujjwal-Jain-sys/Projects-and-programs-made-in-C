#include <stdio.h>
#include <unistd.h>

void gradeChecker(float marks){
  if(marks==100){
    printf("Your grade is O(Outstanding)");
  }
  else if(marks>=90 && marks<100){
    printf("\nYour Grade is A+\n");
  }
  else if(marks>=80 && marks<90){
    printf("\nYour Grade is A\n");
  }
  else if(marks>=70 && marks<80){
    printf("\nYour Grade is A-\n");
  }
  else if(marks>=60 && marks<70){
    printf("\nYour Grade is B+\n");
  }
  else if(marks>=50 && marks<60){
    printf("\nYour Grade is B\n");
  }
  else if(marks>=40 && marks<50){
    printf("\nYour Grade is B-\n");
  }
  else if(marks>=30 && marks<40){
    printf("\nYour Grade is C+\n");
  }
  else if(marks>=20 && marks<30){
    printf("\nYour Grade is C\n");
  }
  else if(marks>=10 && marks<20){
    printf("\nYour Grade is C-\n");
  }
  else{
    printf("\nYour Grade is F(Failed)\n");
  }
}

int main(void) {

  float marks = 0.0f;
  
  printf("\n*** Grade System ***\n");
  printf("\nEnter your marks[0-100]: ");

  if(scanf("%f",&marks) == 1){
    do{
      printf("\ninvalid marks,\nEnter your marks again[0-100]: ");
      scanf("%f",&marks);
    }while(marks>100 || marks <0);
    
    printf("\nLoading your result in ");
    for(int i = 3;i > 0;i--){
      fflush(stdout);
      usleep(500*1000);
      printf(" %d",i);
    }
    printf("\n");
    gradeChecker(marks);
    if(marks>=33){
      printf("You passed the exam\n");
    }
    else{
      printf("You have failed,Better luck next time\n");
    }
  }
  else{
    printf("Invalid Input,Exiting the program\n");
    printf("\nIn");
    for(int i = 3;i > 0;i--){
      fflush(stdout);
      usleep(500*1000);
      printf(" %d",i);
    }
    printf("\n");
  }
  return 0;
}