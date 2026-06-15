#include <stdio.h>
struct process{
    int at;
    int bt;
    int tat;
    int pid;
    int ct;
    int wt;
};
int main(){
    int n;
    printf("Enter your number of process : ");
    scanf("%d",&n);
    struct process s[n];
    for(int i=0;i<n;i++){
        printf("Enter your process : ");
        scanf("%d",&s[i].pid);
        printf("Enter your arrival time : ");
        scanf("%d",&s[i].at);
        printf("Enter your burst time : ");
        scanf("%d",&s[i].bt);
    }
    for(int i=0;i<n;i++){
        s[i].ct = s[i].bt + s[i].at;
        s[i].tat = s[i].ct-s[i].at;
        s[i].wt = s[i].tat-s[i].bt;
    }
    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
    for(int i=0;i<n;i++){
        printf("\n %d\t%d\t%d\t%d\t%d\t%d",
        s[i].pid,
        s[i].at,
        s[i].bt,s[i].ct,s[i].tat,s[i].wt);
    }
    return 0;
}