#include <stdio.h>
#include <string.h>
struct Student_Detail
{
    char name[20];
    int en;
    int clas;
};

int main()
{
    int n;
    printf("Enter number of students : ");
    scanf("%d", &n);
    struct Student_Detail s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Student %d deatils \n", i + 1);
        printf("Enter Student Name : ", i + 1);
        scanf("%s", &s[i].name);
        printf("Enter Student EN : ", i + 1);
        scanf("%d", &s[i].en);
        printf("Enter Student class : ", i + 1);
        scanf("%d", &s[i].clas);
    }

    printf("\nSerial\t\tS_Name\t\tE_NO\t\tClass\n");

    for (int i = 0; i < n; i++)
    {
        printf("   %d\t\t", i + 1);
        printf("  %s\t\t", s[i].name);  
        printf(" %d\t\t", s[i].en);
        printf("  %d\t\t", s[i].clas);
        printf("\n");
    }
}