// Safety Algorithm

#include <stdbool.h>
#include <stdio.h>

bool check(int r, int n[r], int av[r])
{
    for (int i = 0; i < r; i++)
    {
        if (n[i] > av[i])
        {
            return false;
        }
    }
    return true;
}

void getSafeSequence(int p, int r, int al[p][r], int max[p][r], int n[p][r], int av[r])
{
    int computed = 0;
    int computed_order[p];
    int pointer_to_computed = 0;
    bool processed[p];
    for (int i = 0; i < p; i++)
        processed[i] = false;
    while (computed < p)
    {
        bool any_process_computed = false;
        for (int i = 0; i < p; i++)
        {
            if (processed[i])
                continue;
            if (check(r, n[i], av))
            {
                for (int j = 0; j < r; j++)
                    av[j] += al[i][j];
                processed[i] = true;
                any_process_computed = true;
                computed_order[pointer_to_computed++] = i;
                computed += 1;
            }
        }
        if (!any_process_computed)
            break;
    }
    if (computed == p)
    {
        printf("\nThe System is in safe state and the safe sequence is : ");
        for (int i = 0; i < p; i++)
            printf("P%d ", computed_order[i]);
    }
    else
    {
        printf("The System is not in safe state and the processes will be in deadlock\n");
    }
}

void check_request(int pno, int p, int r, int req[r], int al[p][r], int max[p][r], int n[p][r], int av[r])
{
    if (check(r, req, av))
    {
        if (check(r, req, n[pno]))
        {
            for (int i = 0; i < r; i++)
            {
                av[i] -= req[i];
                al[pno][i] += req[i];
                n[pno][i] = max[pno][i] - al[pno][i];
            }
            getSafeSequence(p, r, al, max, n, av);
            return;
        }
    }
    printf("Request cannot be granted\n");
}

int main()
{
    int p, r;
    printf("Enter number of processors : ");
    scanf("%d", &p);
    printf("Enter number of resources : ");
    scanf("%d", &r);
    int al[p][r], max[p][r];
    printf("Enter Allocation Matrix : \n");
    for (int i = 0; i < p; i++)
        for (int j = 0; j < r; j++)
            scanf("%d", &al[i][j]);
    printf("Enter Max Matrix : \n");
    for (int i = 0; i < p; i++)
        for (int j = 0; j < r; j++)
            scanf("%d", &max[i][j]);
    int av[r];
    for (int i = 0; i < r; i++)
    {
        printf("Enter available of resource %c : ", (i + 65));
        scanf("%d", &av[i]);
    }
    printf("\nThe Need Matrix is \n");
    int n[p][r];
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < r; j++)
        {
            n[i][j] = max[i][j] - al[i][j];
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }
    int curr_av[p];
    for (int i = 0; i < p; i++)
        curr_av[i] = av[i];
    getSafeSequence(p, r, al, max, n, curr_av);
    printf("\n");
}

/*
 * r -> resources
 * n -> need
 * av -> available
 * p -> processes
 * al -> allocation
 * max -> maximum
 * pno -> process number
 * req -> request
 * curr_av -> current available
 */

/*
Sample Output :
Enter number of processors : 5
Enter number of resources : 3
Enter Allocation Matrix :
0 0 1
3 0 0
1 0 1
2 3 2
0 0 3
Enter Max Matrix :
7 6 3
3 2 2
8 0 2
2 3 2
5 2 3
Enter available of resource A : 2
Enter available of resource B : 3
Enter available of resource C : 2

The Need Matrix is
7 6 2
0 2 2
7 0 1
0 -2 0
5 2 0

The System is in safe state and the safe sequence is : P1 P3 P4 P0 P2


*/