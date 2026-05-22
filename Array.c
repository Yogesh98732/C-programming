#include <stdio.h>
// int fa(int num){
//     int fa=1;
//     while(num!=0){
//     fa=fa*num;
//     num--;
//     }
//     return fa;
// }
// int main(){
//     int x;
// printf("Enter your number : ");
// scanf("%d",&x);
// int re = fa(x);
// printf("%d is the fact",re);
// }


// int main(){
//     int ar[8]={1,5,6,3,8,9,11,12};
//     int mx=ar[0];
//     int mm=ar[0];
//     for(int i=0;i<=8;i++){
//     if(mx<ar[i+1]){
//         mx=ar[i+1];
//     }
//     if(mm>ar[i+1]){
//         mm=ar[i+1];
//     }
//     }
//     printf("%d max",mx);
//     printf("%d min",mm);
//     return 0;
// }



int main(){
    // char x;
    // printf("Enter your charactor : ");
    // scanf("%c",&x);
    // for(int i=0;i<=122;i++){
    // printf("%c=%d ",i,i);
    // }
    // int x=3;
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<=i;j++){
    //         printf("%c",x);
    //     }
    //     printf("\n");
    // }
    char n[6]="vaibh";
    char nn[6];
    printf("%s\n",n);
    for(int i=4;i>=0;i--){
        nn[4-i]=n[i];
      printf("%c",n[i]);
    }
    printf("\n%s",nn);
}