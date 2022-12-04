#include <iostream>
using namespace std;

int Sum(int x, int y)
{
    return x + y;
}
int product(int x, int y){
    return x * y;
}

int (*ptr)(int, int);

int main()
{
    int a, b, rs;
    cout << "\nEnter 1st  number: ";
    cin >> a;
    cout << "\nEnter 2nd number: ";
    cin >> b;
    ptr = Sum;
    rs = (*ptr)(a, b);
    cout << "The Sum : " << rs << "\n";
    ptr = product;
    rs = (*ptr)(a, b);
    cout << "The Product : " << rs << "\n";
    return 0;
}