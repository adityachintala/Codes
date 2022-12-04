#include <stdio.h>
#include <stdlib.h>

static int m,n,o,p;

void multiplier(){
    
    int a[m][n], b[o][p], r[m][p];
    printf("Enter 1st matrix elements one by one :\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter 2nd matrix elements one by one :\n");
    for(int i=0;i<o;i++){
        for(int j=0;j<p;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0; i<m;i++){
        for(int j=0;j<p;j++){
            r[i][j]=0;
        }
    }
    for(int i=0; i<m;i++){
        for(int j=0;j<p;j++){
            for(int k=0;k<o;k++){
                r[i][j]+= a[i][k]*b[k][j];
            }
        }
    }
    
    system("clear");
    printf("\nResult : %dx%d\n\n",m,p);
    for(int i=0; i<m;i++){
        for(int j=0;j<p;j++){
            printf("%d \t",r[i][j]);
        }
        printf("\n");
    }
}

int main()
{
  //ENTER LOGIC HERE
    
    printf("Enter rows and columns of 1st matrix :\n");
    scanf("%d %d",&m, &n);
    printf("Enter rows and columns of 2nd matrix :\n");
    scanf("%d %d",&o, &p);

    if(n == o) {
        multiplier();
    }
    else
    printf("The matrices can't be multiplied.");

    return 0;
}
