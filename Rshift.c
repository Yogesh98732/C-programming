#include <stdio.h>
int main(){
    int n;
    printf("Enter your number for shift : ");
    scanf("%d",&n);
    int Rshift = n>>2;
    printf("Your number after shift : %d",Rshift);
}