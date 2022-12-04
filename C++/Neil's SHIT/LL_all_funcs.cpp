#include <iostream>
#include <string>
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
    void display()
    {
        cout << data << " ";
    }
};

class Linkedlist
{
public:
    int length;
    Node *hptr;
    Linkedlist()
    {
        hptr = NULL;
        length = 0;
    }
    void insertNode(int data);
    void printList();
    void deleteNode(int data);
    void deleteNode_pos(int pos);
    void deleteWhole();
    void delAlt();
    void listlength();
    void reverse_pos(int k);
    int Nth_node(int pos);
    void find(int d);
    void sum();
    void mid_element();
    void palindrome();
    void rem_dupes();
    int num;
    Linkedlist *next;
};

void Linkedlist::insertNode(int data)
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
    length++;
}

void Linkedlist::deleteNode(int d)
{
    Node *nptr;
    Node *prev;
    Node *temp = hptr;
    while (temp != NULL)
    {
        if (temp->data == d)
        {
            hptr = hptr->next;
            delete temp;
            break;
        }
        if ((temp->next)->data == d)
        {
            prev = temp;
            nptr = temp->next->next;
            delete temp->next;
            prev->next = nptr;
            break;
        }
        if (temp->data == d && temp->next == NULL)
        {
            delete temp;
            break;
        }
        temp = temp->next;
    }
}

void Linkedlist::deleteNode_pos(int pos)
{
    Node *nptr;
    Node *prev;
    Node *temp = hptr;
    int len = 0;
    if (pos == 0)
    {
        hptr = temp->next;
        delete temp;
        return;
    }
    while (temp != NULL)
    {
        len = len + 1;
        if (len == pos)
        {
            if (temp->next == NULL)
            {
                delete temp;
                return;
            }
            else
            {
                prev = temp;
                nptr = temp->next->next;
                delete temp->next;
                prev->next = nptr;
                return;
            }
        }
        temp = temp->next;
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
    cout << endl << endl;
}

void Linkedlist::deleteWhole()
{
    Node *temp = hptr;
    while (temp != NULL)
    {
        temp = hptr;
        hptr = temp->next;
        delete temp;
    }
}

void Linkedlist::delAlt()
{
    if (length < 3)
    {
        cout << "Its a small list!" << endl;
        return;
    }
    Node *curr = hptr->next, *prev = hptr, *next = curr->next;
    while (next != NULL && length > 2)
    {
        delete curr;
        prev->next = NULL;
        cout << prev->data << " " << curr->data << " " << next->data << endl;
        prev->next = next;
        prev = next;
        curr = next->next;
        next = curr->next;
    }
}

void Linkedlist::listlength()
{
    int len = 0;
    Node *temp = hptr;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    if (len == 0)
        cout << "No list";
    else
        cout << "List length: " << len << endl;
}

int Linkedlist::Nth_node(int pos)
{
    Node *temp = hptr;
    int len = 0;
    if (pos == 0)
        return temp->data;
    while (temp != NULL)
    {
        if (len == pos)
        {
            return temp->data;
        }
        len++;
        temp = temp->next;
    }
    cout << "Not Found";
    return 0;
}

void Linkedlist::reverse_pos(int k)
{
    Node *curr = hptr, *prev = NULL, *next = NULL;
    while (curr != NULL)
    {
        if (k == 0)
            break;
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        k--;
    }
    hptr = prev;
    while (prev->next != NULL)
    {
        prev = prev->next;
    }
    prev->next = next;
}

void Linkedlist::sum()
{
    Node *temp = hptr;
    int sum = 0;
    while (temp->next != NULL)
    {
        sum += temp->data;
        temp = temp->next;
    }
    cout << "The sum is " << sum;
}

void Linkedlist::find(int d)
{
    Node *temp = hptr;
    int num = 1, flag = 0;
    while (temp != NULL)
    {

        if (temp->data == d)
        {
            cout << "Found at " << num << " Linked List" << endl;
            flag = 1;
            break;
        }
        num++;
        temp = temp->next;
    }
    if (flag == 0)
        cout << "Not Found" << endl;
}

void Linkedlist::mid_element()
{
    Node *temp = hptr, *temp1 = hptr;
    while (temp1->next != NULL)
    {
        if (temp1->next->next != NULL)
            temp1 = temp1->next->next;
        else
            break;
        temp = temp->next;
    }
    cout << "The Mid Element : " << temp->data << endl
         << endl;
}

void Linkedlist::palindrome()
{
    Node *temp = hptr;
    int flag = 0;
    string s[length], s2[length];

    for (int i = 0; i < length; i++)
    {
        s[i] = to_string(temp->data);
        temp = temp->next;
    }

    for (int i = 0; i < length; i++)
    {
        s2[i] = s[length - 1 - i];
        if (s[i] == s2[i])
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        cout << "It is palindrome";
    else
        cout << "It is not palindrome";
}

void Linkedlist::rem_dupes()
{
    Node *temp = hptr;
    while (temp != NULL)
    {
        Node *chk = temp->next;
        Node *prev = temp;
        while (chk != NULL)
        {
            if (chk->data == temp->data)
            {
                prev->next = chk->next;
                delete chk;
                chk = prev->next;
                continue;
            }
            prev = prev->next;
            chk = chk->next;
        }
        temp = temp->next;
    }
}

// Driver Code

int main()
{
    Linkedlist lister;
    lister.insertNode(11);
    lister.insertNode(192);
    lister.insertNode(4);
    lister.insertNode(93);
    lister.insertNode(34);
    cout << "Elements of the list are: ";
    lister.printList();

    // Deletes the specific value which is passed - deleteNode(int data)
    // lister.deleteNode(11);
    // cout << "Elements of the list after deletion are: ";
    // lister.printList();
    // cout << endl;

    // Deletes the list at a specific position - deleteNode_pos(int data)
    // lister.deleteNode_pos(4);
    // cout << "Elements of the list are: ";
    // lister.printList();
    // cout << endl;

    // Deletes the whole list - deleteWhole()
    //lister.deleteWhole();
    //lister.printList();

    // Deletes the list alternatively - delAlt()
    // lister.delAlt();
    // cout << "Elements of the list after alternate deletion: ";
    // lister.printList();
    // cout << endl;

    // Tells the length of the list - listlength()
    // lister.listlength();

    // Prints the value at certain position in the list - Nth_node(int pos)
    // int num = lister.Nth_node(5);
    // cout << "\nAt that Node : " << num << endl;

    // Reverses the list until a certain position - reverse_pos(int k)
    // lister.reverse_pos(2);
    // cout << "Elements of the list after reversing: ";
    // lister.printList();

    // Finds the position at which the element is present - find(int d)
    // list.find(num);

    // Finds the sum of the list elements - sum()
    // list.sum();

    // Prints the Middle Element of the list - mid_element()
    // lister.mid_element();

    // To check if the Linked list is palindrome or not - palindrome()
    // lister.insertNode(4);
    // lister.insertNode(93);
    // lister.insertNode(192);
    // lister.insertNode(11);
    // lister.palindrome();

    // To remove duplicates in the linked list - rem_dupes()
    // lister.insertNode(11);
    // lister.insertNode(192);
    // lister.insertNode(93);
    // lister.insertNode(4);
    // lister.rem_dupes();
    // cout << "Elements of the list after removing duplicates are: ";
    // lister.printList();

    return 0;
}
