/*C++ Program to print elements in a linked list
Elements of the list are: 11 192 93 4 34
*/

#include <iostream>
using namespace std;

// Node class to represent
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
    void display()
    {
        cout << data << " ";
    }
};
// a node of the linked list.
class Linkedlist
{
public:
    Node *hptr = NULL;
    void insertNode(int data)
    {
        if (hptr == NULL)
        {
            Node *temp = new Node(data);
            hptr = temp;
        }
        else
        {
            Node *temp = hptr;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            Node *nptr = new Node(data);
            temp->next = nptr;
        }
    }
    void sep_eve_odd();
    void printList();
};

void Linkedlist::sep_eve_odd(){
    Node *temp = hptr, *prev = hptr, *last = hptr;
    int i = 1;
    while (last->next != NULL){
        last = last->next;
        i++;
    }

    while(temp->next != NULL){
        if (temp->data % 2 != 0)
        {
            if(temp == hptr){
                hptr = temp->next;
                last->next = temp;
                last = last->next;                                      // prev temp       last
                temp->next = NULL;                                      // 192  4    34 11 93
                temp = hptr;
            }
            else{
                prev->next = temp ->next;
                temp->next = NULL;
                last->next = temp;
                last = temp ->next;
                temp = prev->next;
            }
        }
        else{
            prev = temp;
            temp = temp->next;
        }
    }
}

void Linkedlist::printList()
{
    Node *temp = hptr;

    // Check for empty list.
    if (hptr == NULL)
    {
        cout << "List empty" << endl;
        return;
    }

    // Traverse the list.
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Driver Code
int main()
{
    Linkedlist lister;
    // Inserting nodes
    lister.insertNode(11);
    lister.insertNode(192);
    lister.insertNode(93);
    lister.insertNode(4);
    lister.insertNode(34);

    cout << "Elements of the list are: ";
    lister.printList();
    cout << endl;

    lister.sep_eve_odd();
    cout << "Elements of the list are: ";
    lister.printList();
    cout << endl;
    return 0;
}
