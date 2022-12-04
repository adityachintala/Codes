#include<stdio.h>

int main(){
    int n;
    printf("Enter the Number of Rows : ");
    scanf("%d",&n);
    printf("\n");
    for (int i = 1; i <=n; i++)
    {
        for (int j = n; j>i; j--)
        {
            printf("\t");
        }
        
        for (int j = 1; j<=i; j++)
        {
            printf("%d\t",j);
        }
        for (int k = i-1; k>=1; k--)
        {
            printf("%d\t",k);
        }
        printf("\n");
    }
    

    return 0;
}