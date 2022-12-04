#include <iostream>
using namespace std;

int change(int *a)
{
    *a = *a * *a;
}

int main()
{
    int a = 30;
    cout << change(&a) << endl;
}