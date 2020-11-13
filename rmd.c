#include <stdio.h>

#include<stdlib.h>

int main() {

   char str1[20] = "53875";

   char str2[20] = "367587938";

   char str3[20] = "53875.8843";

   long int a = atol(str1);

   printf("String to long int : %d\n", a);

   long long int b = atoll(str2);

   printf("String to long long int : %d\n", b);

   double c = atof(str3);

   printf("String to long int : %f\n", c);

   printf("The first random value : %d\n", rand());

   printf("The second random value : %d", rand());

   return 0;

}
