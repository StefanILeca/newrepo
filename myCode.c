#include <stdio.h>


int main() {
   printf("What is the size of the array \n");
   int size;
   scanf("%d", &size);
   int elements[size];
   int sum = 0;
   int i = 0;
   for (i = 0; i< size; i++) {
      printf("What is the value of the member at index %d \n", i);
      scanf("%d", &elements[i]);
      sum += elements[i];
   }


   printf("The sum of all elements of the array is %d \n", sum);


   return 0;
}
