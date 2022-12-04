#include <stdio.h>

int main()
{
    int b, p;
    printf("Enter number of blocks : ");
    scanf("%d", &b);
    int bs[b];
    printf("Enter no. of processes : ");
    scanf("%d", &p);
    int ps[p], bn[p];
    printf("Enter block sizes : \n");
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &bs[i]);
    }
    printf("Enter process sizes : \n");
    for (int i = 0; i < p; i++)
    {
        bn[i] = -1;
        scanf("%d", &ps[i]);
    }
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (bs[j] - ps[i] >= 0)
            {
                bs[j] = bs[j] - ps[i];
                bn[i] = j + 1;
                break;
            }
        }
    }
    printf("Process No.\tProcess Size\tBlock No.\tFragment\n");
    for (int i = 0; i < p; i++)
    {
        printf("%d\t\t%d\t\t%d\t\t%d\n", (i + 1), ps[i], bn[i], bs[bn[i] - 1]);
    }
}
// Enter no of blocks : 5
// Enter the size of each block : 100 500 200 300 600
// Enter the no of processes : 4
// Enter the size of each process : 212 417 112 426
// processno       process size    Block no
// 1               212             2
// 2               417             5
// 3               112             3
// 4               426             Not allocated