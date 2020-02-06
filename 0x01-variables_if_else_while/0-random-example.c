#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
   srand(time(NULL));
   printf("This is a random number: %d\n", rand());
   srand(12);
   printf("This is a random number: %d\n", rand());
   return 0;
}
