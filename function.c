#include <stdio.h>
//write a program of function with no agrument and no return 
// void sum();
// int main(){
//     sum();
//     return 0;
// }
// void sum(){
//     int n,m,meaning;
//     printf("Enter your input : ");
//     scanf("%d",&n);
//     printf("Enter your input : ");
//     scanf("%d", &m);
//     meaning = n+m;
//     printf("Your sum is : %d",meaning);
// }





//write a function with argument and not return value 
// void sum(int n,int m);
// int main(){
//     int number,number2;
//     printf("Enter you input : ");
//     scanf("%d",&number);
//     printf("Enter you input : ");
//     scanf("%d", &number2);
//     sum(number,number2);
//     return 0;
// }
// void sum(int n,int m){
//     int meaning = n+m;
//     printf("Your sum is : %d",meaning);
// }





// write a function with argument and return value
// int sum(int n,int m);
// int main(){
//     int n1,m2,meaning;
//     printf("Enter your input : ");
//     scanf("%d",&n1);
//     printf("Enter your input : ");
//     scanf("%d", &m2);
//     meaning = sum(n1,m2);
//     printf("Your sum is : %d",meaning);
//     return 0;
// }
// int sum(int n,int m){
//     return n+m;
// }







// write a function no argument and with return value
// int sum();
// int main(){
//     int meaning;
//     meaning = sum();
//     printf("Your sum is : %d",meaning);
//     return 0;
// }
// int sum(){
//     int n,m;
//     printf("Enter your input : ");
//     scanf("%d",&n);
//     printf("Enter your input : ");
//     scanf("%d", &m);
//     return n+m;
// }






//write a proghram for calculator by function no agrument and no retrun value
void calculator();
int main(){
    calculator();
    return 0;
}
void calculator(){
    printf("Welcome to c calculator\n");
    int n1,n2,num;
    printf("Enter your first input : ");
    scanf("%d",&n1);
    printf("Enter your second input : ");
    scanf("%d", &n2);
    printf("1.sum\n");
    printf("2.subtract\n");
    printf("3.multiply\n");
    printf("4.division\n");

    printf("Enter your function choice ( 1 / 2 / 3 / 4 ) : ");
    scanf("%d",&num);
    switch (num){
    case 1:
    printf("Your sum is : %d",n1+n2);
    break;
    case 2:
      printf("Your sum is : %d", n1 - n2);
      break;
    case 3:
      printf("Your sum is : %d", n1 * n2);
      break;
    case 4:
      printf("Your sum is : %d", n1 / n2);
      break;
    default:
      printf("not matched ");
      break;
    }
}