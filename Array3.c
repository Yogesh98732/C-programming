#include <stdio.h>
int Array_Function(int m){
int arr[m];
for(int i=0;i<m;i++){
    printf("Enter your element %d : ",i+1);
    scanf("%d",&arr[i]);
}
int temp;
for(int j=0;j<m;j++){
    for(int k=0;k<m;k++){
        if(arr[j]>arr[k]){
            temp=arr[k];
            arr[k]=arr[j];
            arr[j]=temp;
        }
    }
}
for(int i=0;i<m;i++){
    printf("\nEnter your element %d : ",i+1);
    printf("%d",arr[i]);
}
return 0;
}
int main(){
    int n;
    printf("Enter your size of array : ");
    scanf("%d",&n);
    Array_Function(n);
}