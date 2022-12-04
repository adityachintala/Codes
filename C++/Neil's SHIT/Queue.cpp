// Queue implementation using array and linked list

/* Array implementation
#include <iostream>
using namespace std;

void display(int arr[], int rear, int front){
    if(rear>-1){
        cout << "The elements of Queue are : ";
        for (int i = front; i <=(rear); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else{
        cout << "No elements in Queue" << endl;
    }
}

void push(int arr[], int max, int *front, int *rear, int data){
    if (*rear == max-1)
    {
        cout << "OVERFLOW" << endl;
        return;
    }
    if(*front == -1 && *rear == -1){
        *rear = 0;
        *front = 0;
    }
    else
        (*rear)++;
    arr[*rear] = data;
}

int pop(int arr[], int *front, int *rear){
    if (*front == -1 || *rear == -1 || *front == *rear){
        cout << "UNDERFLOW" << endl;
        exit(0);
    }
    int el = arr[*front];
    if(*front < *rear)
    (*front)++;
    return el;
}

int main()
{
    int ch, ele, front = -1, rear = -1;
    int arr[10];
    int max = 10;
    while (ch!=4)
    {
        printf("\n*************************Main Menu*****************************\n");  
        printf("\n=================================================================\n");  
        printf("\n1.Insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");  
        printf("\nEnter your choice ?");  
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "enter the element ";
            cin >> ele;
            push(arr, max, &front, &rear, ele);
            break;
        case 2:{
            cout << "deleted  " << pop(arr, &front, &rear) << endl;
            break;
        }
        case 3:
            display(arr, rear, front);
            break;
        }
    }
    return 0;
}
*/

// linked list implementation
#include <iostream>
using namespace std;

class Node
{
public:
    Node *next;
    int data;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

class Queue
{
    Node *front, *rear;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }
    void push(int data);
    int pop();
    void display();
};

void Queue::push(int data)
{
    Node *temp = new Node(data);
    if (temp == NULL)
    {
        cout << "OVERFLOW" << endl;
        return;
    }
    if (front == NULL)
    {
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = rear->next;
}

int Queue::pop()
{
    if (front == NULL || rear == NULL)
    {
        cout << "UNDERFLOW" << endl;
        exit(0);
    }
    if (front != rear)
    {
        int t = front->data;
        // cout << front->data << " ";
        Node *temp = front;
        Node *te = front;
        front = front->next;
        delete temp;
        return t;
    }
    else
    {
        int t = front->data;
        delete front;
        return t;
    }
}

void Queue::display()
{
    Node *temp = front;
    cout << "Elements in Queue are: ";
    while (temp != NULL)
    {
        cout << temp->data << " " ;
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int ch, ele;
    Queue q;
    while (ch != 4)
    {
        printf("\n1.Insert 2.Delete 3.Display 4.Exit");
        printf("\nEnter your choice: ");
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "enter the element ";
            cin >> ele;
            q.push(ele);
            break;
        case 2:
        {
            cout << "deleted " << q.pop() << endl;
            break;
        }
        case 3:
            q.display();
            break;
        }
    }
    return 0;
}


/*
1.Insert 2.Delete 3.Display 4.Exit
Enter your choice: 1
enter the element 10

1.Insert 2.Delete 3.Display 4.Exit
Enter your choice: 1
enter the element 20

1.Insert 2.Delete 3.Display 4.Exit
Enter your choice: 1
enter the element 30

1.Insert 2.Delete 3.Display 4.Exit
Enter your choice: 3
Elements in Queue are:  10 20 30

1.Insert 2.Delete 3.Display 4.Exit
Enter your choice: 2
deleted  10

1.Insert 2.Delete 3.Display 4.Exit
Enter your choice: 3
Elements in Queue are:  20 30

1.Insert 2.Delete 3.Display 4.Exit
Enter your choice: 4
*/