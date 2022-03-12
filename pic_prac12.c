#include <stdio.h>
int main() {
  printf("\nThis program finds the average of n numbers using 1-D arrays\n");

  int marks[10], i, n, sum = 0, average;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  for(i=0; i < n; ++i) {
    printf("Enter number%d: ",i+1);
    scanf("%d", &marks[i]);
          
    // adding integers entered by the user to the sum variable
    sum += marks[i];
  }

  average = sum / n;
  printf("Average = %d", average);

  return 0;
}
