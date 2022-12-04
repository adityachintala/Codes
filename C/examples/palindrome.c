#include<stdio.h>

int main(){
    
    int n,sum=0,temp,r;
    scanf("%d",&n);
    temp = n;
    while(n!=0){
        r=n%10;
        sum=(sum*10)+r;
        n/=10;
    }
    (temp==sum)?printf("palindrome"):printf("not palindrome");

    return 0;
}