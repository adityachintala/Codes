#include <iostream>
using namespace std;

void fib(int n)
{
    if (n > 0)
    {
        static int a = 1, b = 1;
        printf("%d ", a);
        a = a + b;
        b = a - b;
        fib(n - 1);
    }
}

int fact(int n)
{
    if (n > 0)
        return n * fact(n - 1);
}
int main()
{
    int n = 0;
    cout << "Enter the number of terms : ";
    scanf("%d", &n);
    cout << ("Series : 0 1 ");
    fib(n - 2);
    cout << "\n\nEnter Number for factorial : ";
    cin >> n;
    cout << "Factorial : " << fact(n) << endl;
    return 0;
}