#include<stdio.h>

int main(){
   
   int n;
   scanf("%d",&n);
   if(n==1){
      printf("neither prime nor composite");
   }
   else if(n>7)
   {  
      if(n%2==0 || n%3==0 || n%5==0 || n%7==0){
         printf("not prime number");
      }
      else {
         printf("prime number");
      }
   }
   else {
      if (n==2 || n==3 || n==5 || n==7)
      {
         printf("prime number");
      }
      else printf("not prime number");
   }

   return 0;
}