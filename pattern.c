#include <stdio.h>
int main() {
  // write a program to print pattern of given question
  //   int x = 5;
  //   int i, j;
  //   for (i = 6; i > 1; i--) {
  //     for (j = 5; j > i - 2; j--) {
  //       printf("%d", j);
  //     }
  //     printf("\n");
  //   }
  // similar one of this upper program
  //   int x = 5;
  //   int i, j;
  //   for (i = 6; i > 1; i--) {
  //     for (j = 5; j > i - 2; j--) {
  //       printf("%d", i);
  //     }
  //     printf("\n");
  //   }

  // write a program to print pattern of given question
  //   int x = 5;
  //   int i, j;
  //   for (i = 1; i < 6; i++) {
  //     for (j = 1; j < i + 1; j++) {
  //       printf("%d", j);
  //     }
  //     printf("\n");
  //   }
  // similar one of program
//   int x = 5;
//   int i, j;
//   for (i = 1; i < 6; i++) {
//     for (j = 1; j < i + 1; j++) {
//       printf("%d", i);
//     }
//     printf("\n");
//   }





//write a program to print interview question pattern 
//   int i, j;
//   for (i = 1; i < 6; i++) {
//     for (j = 1; j < i + 1; j++) {
//       printf("*", i);
//     }
//     printf("\n");
//   }
//similar one this upper program
  int i, j;
  for (i = 6; i > 1; i--) {
    for (j = 1; j < i; j++) {
      printf("*", j);
    }
    printf("\n");
  }
return 0;
}