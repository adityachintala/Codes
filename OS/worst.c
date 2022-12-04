#include <stdio.h>

int main()
{
    int b = 5, p = 4;
    int ps[] = {212, 417, 112, 426};
    int bn[] = {-1, -1, -1, -1};
    int bs[] = {100, 500, 200, 300, 600};
    for (int i = 0; i < p; i++)
    {
        int worst = -1;
        for (int j = 0; j < b; j++)
        {
            if (worst == -1 || bs[j] > bs[worst])
            {
                worst = j;
            }
        }
        if (worst != -1)
        {
            if (bs[worst] - ps[i] >= 0)
            {
                bs[worst] = bs[worst] - ps[i];
                bn[i] = worst + 1;
            }
        }
    }
    printf("Process No.\tProcess Size\tBlock No.\tFragment\n");
    for (int i = 0; i < p; i++)
    {
        printf("%d\t\t%d\t\t", (i + 1), ps[i]);
        if (bn[i] != -1)
        {
            printf("%d\t\t%d\n", bn[i], bs[bn[i] - 1]);
        }
        else
        {
            printf("Not Allocated\n");
        }
    }
}

// Enter no of blocks : 5
// Enter the size of each block : 100 500 200 300 600
// Enter the no of processes : 4
// Enter the size of each process : 212 417 112 426
// Process No.     Process Size    Block No.       Fragment
// 1               212             5               276
// 2               417             2               83
// 3               112             5               276
// 4               426             Not Allocated