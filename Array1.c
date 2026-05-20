#include <stdio.h>
int main(){
    int i;
    int j;
    printf("Enter your row : ");
    scanf("%d",&i);
    
    printf("Enter your column : ");
    scanf("%d",&j);
    int n=i*j;
    int arr[i][j];
    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){
            scanf("%d",&arr[k][l]);
        }
    }
    
    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){
            printf("%d ",arr[k][l],k,l);
        }
        printf("\n");
    }
    int i1;
    int j1;
    printf("Enter your row : ");
    scanf("%d",&i1);
    
    printf("Enter your column : ");
    scanf("%d",&j1);
    int n1=i1*j1;
    int ar[i1][j1];
    for(int k1=0;k1<i1;k1++){
        for(int l1=0;l1<j1;l1++){
            scanf("%d",&ar[k1][l1]);
        }
    }
    
    for(int k1=0;k1<i1;k1++){
        for(int l1=0;l1<j1;l1++){
            printf("%d ",ar[k1][l1],k1,l1);
        }
        printf("\n");
    }
    int a[i1][j1];
    for(int s=0;s<i1;s++){
        for(int d=0;d<j1;d++){
            a[s][d]=arr[s][d]+ar[s][d];
        }
    }

    for(int s1=0;s1<i1;s1++){
        for(int d1=0;d1<j1;d1++){
            printf("%d ",a[s1][d1]);
        }
        printf("\n");
    }
}