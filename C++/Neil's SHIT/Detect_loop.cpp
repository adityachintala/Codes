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
    Node *hptr;
    LinkedList{
        hptr = NULL;
    }
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
    void printList();
};

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

    // Print the list
    lister.printList();

    cout << endl;
    return 0;
}

/*C++ program to print maximum element from linked list

Output
case=1
input=5 
12
23
34
6 
758 
output=Give n value  to create a list with n nodes: 5                                                                           

12                                                                                                          
    12                                                                                                                 
Enter a value:                                                                                                          
  23                                                                                                                   
Enter a value:                                                                                                          
    34                                                                                                                 
Enter a value:                                                                                                          
     6                                                                                                                 
Enter a value:                                                                                                          
      758                                                                                                              
elememts in the list are                                                                                                
12 23 34 6 758                                                                                                          
Maximum value : 758   
*/