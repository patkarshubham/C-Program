#include <stdio.h>
 #include<conio.h>
int main() {
   int a[10] = {101, 11, 3, 4, 50, 69, 7, 8, 9, 0};
   int i, l, s;

   if(a[0] > a[1]) {
      l = a[0];
      s= a[1];
   } else {
      l = a[1];
      s  = a[0];
   }

   for(i = 2;i < 10;i++) {
      if( l < a[i] ) {
         s = l;
         l = a[i];
      } else if( s < a[i] ) {
         s =  a[i];
      }
   }

   printf("First Largest Number - %d \nSecond Largest Number - %d \n", l, s);

   getch();
}
