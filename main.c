#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

 printf("\n");
   printf("Task 3\n");
   float f,x,yn,yn1,e,s;
   int n;

   printf("Please enter a x value -1 < x > 1 for function f(x)=arcsin: ");
   scanf_s("%f", &x);
   printf("Please enter epsilon(small number,example 0.0001) for the accuracy of our function:");
   scanf_s("%f", &e);

   n = 0;

   yn1 = x;
   s = x;

   f = asin(x);
   do {
        yn = yn1; //chto new nujno pokupat , chtobi ne oboytis bez nix
        yn1= (yn * (pow(x, 2))) * ((pow(2.0f * n + 1, 2)) / (2 * (n + 1) * (2 * n + 3))); //kanadskiy farfor
        s += yn1; //smontirovanniy na sayte
        n += 1;
    } while ((yn-yn1) > e);

    printf("\n");
    printf("Function f is %.20f\n",f);
    printf("The Maclaurin sum is %.20f\n", s);




    return 0;
 }
