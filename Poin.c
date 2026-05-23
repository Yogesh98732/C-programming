#include <stdio.h>
// int calculate(int *p1,int *p2){
//     return *p1+*p2;
// }
// int main(){
//     int x,y;
//     printf("Enter your 1st input : ");
//     scanf("%d",&x);
//     printf("Enter your 2st input : ");
//     scanf("%d", &y);
//     // int *p1=&x;
//     // int *p2=&y;
//     int sum = calculate(&x, &y);
//     printf("%d",sum);
// }

// write a program of function for sum
int sum(int s1, int s2) { return s1 + s2; }

// write a program of function for subtract
int subtract(int s1, int s2) {
  if (s1 > s2) {
    return s1 - s2;
  } else {
    return s2 - s1;
  }
}

// write a program of function for multiply
int multiply(int s1, int s2) { return s1 * s2; }

// write a program of function for division
int division(int s1, int s2) {
  if (s1 > s2) {
    return s1 / s2;
  } else {

    return s2 / s1;
  }
}

// write a program to show percentage
int percentage(float s1, float s2) { return (s1 / s2) * 100; }

// write a progam function of trainagle area
void TriangleA() {
  int triangle;
  int x;
  int y;
  printf("Enter your length : ");
  scanf("%d",&x);
  printf("Enter your breth : ");
  scanf("%d", &y);
  triangle = (x * y) / 2;
  printf("Your area is : %d", triangle);
}

// here main execution held
int main() {
  printf("Enter to the calculator\n");
  printf("1.Sum\n");
  printf("2.Subtract\n");
  printf("3.Multiply\n");
  printf("4.Division\n");
  // create input value for user that  they can choose their desired operation
  int input;
  printf("Enter which task you want to do : ");
  scanf("%d", &input);
  switch (input) {
  case 1:
    printf("you choose summission region\n");
    int x;
    printf("Enter your 1st value : ");
    scanf("%d", &x);
    int y;
    printf("Enter your 2st value : ");
    scanf("%d", &y);
    int summission = sum(x, y);
    printf("Your sum is : %d", summission);

  case 2:
    printf("You choose subtraction region\n");
    int x2;
    printf("Enter your 1st value : ");
    scanf("%d", &x2);
    int y2;
    printf("Enter your 2st value : ");
    scanf("%d", &y2);
    int sub = subtract(x2, y2);
    printf("Your subtract is : %d", sub);

  case 3:
    printf("You choose Multiplication region\n");
    int x3;
    printf("Enter your 1st value : ");
    scanf("%d", &x3);
    int y3;
    printf("Enter your 2st value : ");
    scanf("%d", &y3);
    int mul = multiply(x3, y3);
    printf("Your Multiplication is : %d", mul);

  case 4:
    printf("You choose Division region\n");
    int x4;
    printf("Enter your 1st value : ");
    scanf("%d", &x4);
    int y4;
    printf("Enter your 2st value : ");
    scanf("%d", &y4);
    int div = division(x4, y4);
    printf("Your Division is : %d", div);

  case 5:
    printf("Please folllow below instruction\n");
    int p1, p2;
    printf("Enter your first number(get by you) : ");
    scanf("%d", &p1);
    printf("Enter total number(size of thing) : ");
    scanf("%d", &p2);
    int percent = percentage(p1, p2);
    printf("You got : %d", percent);

  case 6:
    TriangleA();
  }
}