#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

class Stack
{
public:
    Node *top;
    Stack()
    {
        top = NULL;
    }
    void push(int data)
    {
        Node *temp = new Node(data);
        if (top == NULL)
        {
            top = temp;
            return;
        }
        temp->next = top;
        top = temp;
    }

    int isEmpty()
    {
        return top == NULL;
    }

    int peek()
    {
        if (!isEmpty())
            return top->data;
        else
            exit(1);
    }

    int pop()
    {
        class Node *temp;
        if (top == NULL)
        {
            cout << "\nStack Underflow" << endl;
            exit(1);
        }
        else
        {
            int dat = top->data;
            temp = top;
            top = top->next;
            temp->next = NULL;
            delete temp;
            return dat;
        }
    }
    void display()
    {
        class Node *temp;
        if (top == NULL)
        {
            cout << "\nStack Underflow";
            exit(1);
        }
        else
        {
            temp = top;
            while (temp->next != NULL)
            {
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << temp->data << endl;
        }
    }
};

int main()
{
    Stack st;
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
            st.push(ele);
            break;
        case 2:
            cout << "deleted  " << st.pop() << endl;
            break;
        case 3:
            st.display();
            break;
        case 4:
            exit(0);
        }
    }
    return 0;
}
