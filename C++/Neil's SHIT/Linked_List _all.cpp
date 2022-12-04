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

class Linkedlist
{
public:
    int length = 0;
    Node *hptr = NULL;
    void insertNode(int data);
    void insertrec(int pos, int data, Node *curr);
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
    void reverse_rec(Node* curr, Node* prev, Node*next);
    int num;
    Linkedlist *next;
};

void Linkedlist::insertNode(int data){
    
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

void Linkedlist::insertrec(int pos, int data, Node *curr){
    if (pos == 0)
    {
        /* code */
    }
    else{

    }
    
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
    cout << endl;
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

void Linkedlist::delAlt(){
    if(length<3){cout << "Its a small list!" << endl; return; }
    Node *curr = hptr->next, *prev = hptr, *next = curr->next;
    while (next != NULL && length>2)
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

void Linkedlist::listlength(){
    int len = 0;
    Node *temp = hptr;
    while (temp != NULL){
        len++;
        temp = temp->next;
    }
    if(len == 0)
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

void Linkedlist::reverse_rec(Node* curr, Node* prev, Node*next){

}
void Linkedlist::sum(){
            Node* temp = hptr;
            int sum = 0;
            while(temp->next!=NULL){
                sum+=temp->data;
                temp = temp->next;
            }
            cout << "The sum is "<< sum;
}

void Linkedlist::find(int d){
            Node* temp = hptr;
            int num = 1,flag = 0;
            while(temp!=NULL){
                
                if(temp->data == d){
                    cout << "Found at " << num << " Linked List" << endl;
                    flag = 1;
                    break;
                }
                num++;
                temp = temp->next;
            }
            if(flag == 0)
                cout << "Not Found" << endl;
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

    // Reverses the whole Linked list - reverse_rec(Node* curr, Node* prev, Node* next)
    // lister.reverse_rec(lister.hptr, NULL, NULL);
    // cout << "Elements of the list after reversing: ";
    // lister.printList();

    // Insert a value at a given index into the list
    cout << "Enter the position and index of the element to insert : ";
    int pos;
    int data;
    cin >> pos;
    cin >> data;
    lister.insertrec(pos, data, lister.hptr);

    
    return 0;
}


