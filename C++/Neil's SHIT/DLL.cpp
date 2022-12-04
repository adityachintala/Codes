#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int d)
    {
        next = NULL;
        prev = NULL;
        data = d;
    }
};

class DLL
{
public:
    Node *head, *last;
    DLL()
    {
        head = NULL;
        last = NULL;
    }
    void push(int d)
    {
        Node *temp = new Node(d);
        if (head == NULL)
        {
            head = temp;
            last = temp;
            return;
        }
        last->next = temp;
        temp->prev = last;
        last = temp;
    }

    void printlist()
    {
        Node *cur = head;
        while (cur != NULL)
        {
            cout << cur->data << " ";
            cur = cur->next;
        }
        cout << endl
             << endl;
    }

    void rev_printlist()
    {
        Node *cur = last;
        while (cur != NULL)
        {
            cout << cur->data << " ";
            cur = cur->prev;
        }
    }

    void delete_node(int val)
    {
        Node *cur = head;
        if (cur->data == val)
        {
            head = head->next;
            delete cur;
            return;
        }
        while (cur->next != NULL)
        {
            if (cur->data == val)
            {
                cur->prev->next = cur->next;
                cur->next->prev = cur->prev;
                delete cur;
                return;
            }
            cur = cur->next;
        }
        if (cur->data == val)
        {
            cur->prev->next = NULL;
            delete cur;
            return;
        }
        cout << "Node not found" << endl;
    }
};

int main()
{
    DLL lister;
    lister.push(1);
    lister.push(2);
    lister.push(3);
    lister.push(4);
    lister.push(5);
    lister.push(6);
    cout << "Elements of the list are : ";
    lister.printlist();
    lister.delete_node(90);
    cout << "Elements of the list after deletion are : ";
    lister.printlist();
}