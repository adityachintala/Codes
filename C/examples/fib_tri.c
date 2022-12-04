#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int n = 0, a=1, b=1;
    scanf("%d",&n);
    system("clear");
    int f[n];
    f[0] = 1;
    for (int i = 1; i <n; i++){
        f[i] = a;
        a=a+b;b=a-b;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j <=i; j++)
            printf("%d\t",f[j]);
        printf("\n");
    }
    return 0;
}