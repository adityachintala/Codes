#include <stdio.h>

int main()
{
    int b, p;
    printf("Enter number of blocks : ");
    scanf("%d", &b);
    int bs[b];
    printf("Enter no. of processes : ");
    scanf("%d", &p);
    int ps[p], bn[p], fm[b];
    printf("Enter block sizes : \n");
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &bs[i]);
        fm[i] = bs[i];
    }
    printf("Enter process sizes : \n");
    for (int i = 0; i < p; i++)
    {
        bn[i] = -1;
        scanf("%d", &ps[i]);
    }
    printf("\n\n");
    for (int i = 0; i < b; i++){
        printf("%d ", fm[i]);
    }
    printf("\n\n");
        // best fit algorithm
        for (int i = 0; i < p; i++)
        {
            int lowest = -1;
            for (int j = 0; j < b; j++)
            {
                if (bs[j] - ps[i] >= 0)
                {
                    if (lowest == -1 || bs[j] < bs[lowest])
                    {
                        lowest = j;
                    }
                }
            }
            if (lowest != -1)
            {
                bs[lowest] = bs[lowest] - ps[i];
                bn[i] = lowest + 1;
            }
        }
    printf("Process No.\tProcess Size\tBlock No.\tBlock Size\tFragment\n");
    for (int i = 0; i < p; i++)
    {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n", (i + 1), ps[i], bn[i], fm[bn[i] - 1], bs[bn[i] - 1]);
    }
}

// Enter no of blocks : 5
// Enter the size of each block : 100 500 200 300 600
// Enter the no of processes : 4
// Enter the size of each process : 212 417 112 426

// Process_no      Process_size    Block_no        Block_size      Fragment
// 1               212             4               300             88
// 2               417             2               500             83
// 3               112             3               200             88
// 4               426             5               600             174