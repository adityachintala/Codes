//C++ program to implement Single linked list operations  


#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    
    node(int element)
    {
        data=element;
        next=NULL;
    }
};

class singlelinkedlist
{
    public:
    node *head = NULL;
    int l;
    node *temp = NULL;
    int element;
    
    void insertion()
    {
        l++;
        cout<<"enter the element: ";
        cin>>element;
        node *newnode = new node(element);
        if(head==NULL)
            head=newnode;
        else
        {
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
        }
        cout<<"element inserted"<<endl;
        return;
    }
    
    void deletion()
    {
        l--;
        if(head==NULL)
        {
            cout<<"linked list is empty"<<endl;
            return;
        }
        else
        {
            node *temp, *prev;
            temp=head;
            if(temp->next==NULL)
            {
                temp=head=NULL;
            }
            else
            {
                while(temp->next!=NULL)
                {
                    prev=temp;
                    temp=temp->next;
                }
                prev->next=NULL;
                delete temp;
            }
            cout<<"element deleted"<<endl;
        }
        return;
    }
    void display()
    {
        node *temp;
        temp=head;
        cout<<"linked list elements are: ";
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        return;
    }
};

int main()
{
    singlelinkedlist sll;
    int option;
    
    while(1)
    {
        cout<<endl<<"Single Linked List Operations"<<endl;
        cout<<"1. insertion"<<endl<<"2. deletion"<<endl<<"3. Display"<<endl<<"4.length"<< endl <<"5. exit"<<endl;
        cout<<"enter the option: ";
        cin>>option;
    
        switch(option)
        {
            case 1: 
                sll.insertion();
                break;
            case 2: 
                sll.deletion();
                break;
            case 3:
                sll.display();
                break;
            case 4:
                cout << "Length : " << sll.l << endl;
                break;
            case 5:
                exit(1);
            default:
                cout<<"wrong entry enter the correct option"<<endl;
        }
    }
    return 0;   
}

/*----------------------------------------------------------------


Single Linked List Operations
1. insertion
2. deletion
3. Display
4.length
5. exit
enter the option: 1
enter the element: 11
element inserted

Single Linked List Operations
1. insertion
2. deletion
3. Display
4.length
5. exit
enter the option: 1
enter the element: 22
element inserted

Single Linked List Operations
1. insertion
2. deletion
3. Display
4.length
5. exit
enter the option: 1
enter the element: 33
element inserted

Single Linked List Operations
1. insertion
2. deletion
3. Display
4.length
5. exit
enter the option: 4
Length : 3

Single Linked List Operations
1. insertion
2. deletion
3. Display
4.length
5. exit
enter the option: 3
linked list elements are: 11 22 33 

Single Linked List Operations
1. insertion
2. deletion
3. Display
4.length
5. exit
enter the option: 2
element deleted

Single Linked List Operations
1. insertion
2. deletion
3. Display
4.length
5. exit
enter the option: 3
linked list elements are: 11 22 

Single Linked List Operations
1. insertion
2. deletion
3. Display
4.length
5. exit
enter the option: 4
Length : 2

Single Linked List Operations
1. insertion
2. deletion
3. Display
4.length
5. exit
enter the option: 5



*/