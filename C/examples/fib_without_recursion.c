#include<stdio.h>

int main(){
   
   int n = 0, a=1, b=1;
   scanf("%d",&n);
   printf("0 1 ");
   for (int i = 0; i <(n-2); i++)
   {
      printf("%d ",a);
      a=a+b;b=a-b;
   }
   

   return 0;
}