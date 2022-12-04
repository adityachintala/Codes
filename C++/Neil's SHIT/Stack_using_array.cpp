/* Write a C++ program to implement stack using array 

Sample Test Case:

1.push  2.pop  3.display  4.exit
Enter ur choice 1
enter the element 10 

1.push  2.pop  3.display  4.exit
Enter ur choice 1
enter the element 20 

1.push  2.pop  3.display  4.exit
Enter ur choice 1
enter the element 30 

1.push  2.pop  3.display  4.exit
Enter ur choice 2 
deleted  30

1.push  2.pop  3.display  4.exit
Enter ur choice 1
enter the element 40 

1.push  2.pop  3.display  4.exit
Enter ur choice 3
The elements of stack are
40
20
10
1.push  2.pop  3.display  4.exit
Enter ur choice 4
*/

/*
#include <iostream>
#include <stdlib.h>
using namespace std;
int arr[10];
int *ptr = arr;
int max = 10;
int sl = -1;

void push(int data)
{
    if (sl == 10)
        cout << "Stack is full!" << endl;
    else
        arr[sl] = data;
    cout << endl;
}

int pop()
{
    int j = arr[sl];
    arr[sl] = arr[sl + 1];
    sl = sl - 1;
    return j;
}
void display()
{
    cout << "The elements of stack are" << endl;
    int i = sl;
    while (i>=0)
    {
        cout << arr[i] << endl;
        i--;
    }
    
}

int main()
{
    int ch, ele;
    while (1)
    {
        cout << "1.push  2.pop  3.display  4.exit\nEnter ur choice ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "enter the element ";
            cin >> ele;
            sl = sl + 1;
            push(ele);
            break;
        case 2:
            cout << "deleted  " << pop() << endl << endl;
            break;
        case 3:
            display();
            cout << endl;
            break;
        case 4:
            exit(0);
        }
    }
    return 0;
}*/

/*
#include <iostream>
#include <stdlib.h>
using namespace std;
int sl = -1;


void push(int data, int arr[])
{
    if (sl == 10){
        cout << "Stack is full!" << endl;
        return;}
    else
        arr[sl] = data;
}

int pop(int arr[])
{
    int j = arr[sl];
    arr[sl] = arr[sl + 1];
    sl--;
    return j;
}
void display(int arr[])
{
    cout << "The elements of stack are" << endl;
    int i = sl;
    while (i>=0)
    {
        cout << arr[i] << endl;
        i--;
    }
    
}

int main()
{
    int ch, ele;
    int arr[10];
    int max = 10;
    while (1)
    {
        cout << "\n1.push  2.pop  3.display  4.exit\nEnter ur choice ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "enter the element ";
            cin >> ele;
            sl = sl + 1;
            push(ele, arr);
            break;
        case 2:
            cout << "deleted  " << pop(arr) << endl;
            break;
        case 3:
            display(arr);
            break;
        case 4:
            exit(0);
        }
    }
    return 0;
}
*/

#include <iostream>
#include <stack>
#include <typeinfo>
using namespace std;

//Write code here
class BracesBalance
{
public:
    bool areBalancedBraces(string str)
    {
        int n = str.length();
        if (n % 2 != 0)
            return false;
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            st.push(str[i]);
        }
        int i = 0;
        while (!st.empty())
        {
            if (char(st.top()) == (str[i])){

            }
            else
                return false;
            st.pop();
            i++;
        }
        return true;
    }
};

int main()
{
    BracesBalance bb;
    string expr;
    cout << "Enter expression" << endl;
    cin >> expr;
    if (bb.areBalancedBraces(expr))
        cout << "Braces are balanced";
    else
        cout << "Braces are imbalanced";
    return 0;
}