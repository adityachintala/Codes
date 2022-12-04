#include <iostream>
using namespace std;
class Term
{
public:
    int e, c;
    Term *next;
    //write code here
    Term(int a, int b)
    {
        next = NULL;
        c = a;
        e = b;
    }
    void display()
    {
        if (next != NULL)
        {
            cout << c << "x^" << e << "+";
        }
        else
        {
            cout << c << "x^" << e << " " << endl;
        }
    }
};

class Polynomial
{
    // write code here
public:
    Term *head = NULL;
    void append(int a, int b)
    {
        if (head == NULL)
        {
            head = new Term(a, b);
        }
        else
        {
            Term *nptr = head;
            while (nptr->next != NULL)
            {
                nptr = nptr->next;
            }
            Term *temp = new Term(a, b);
            nptr->next = temp;
        }
    }
    void display()
    {
        Term *temp = head;
        while (temp != NULL)
        {
            temp->display();
            temp = temp->next;
        }
    }
    void add(Polynomial a, Polynomial b)
    {
        Polynomial pr;
        Term *t1 = a.head, *t2 = b.head;
        while (t1 != NULL && t2 != NULL)
        {
            if (t1->e > t2->e)
            {
                pr.append(t1->c, t1->e);
                t1 = t1->next;
            }
            if (t1->e < t2->e)
            {
                pr.append(t2->c, t2->e);
                t2 = t2->next;
            }
            if (t1->e == t2->e)
            {
                pr.append((t1->c) + (t2->c), t1->e);
                t1 = t1->next;
                t2 = t2->next;
            }
        }
        pr.display();
    }
};
int main()
{
    Polynomial p, p1, p2;
    p.append(5, 4);
    p.append(3, 3);
    p.append(2, 2);
    p.append(7, 1);
    p.append(5, 0);
    p.display();
    p1.append(3, 4);
    p1.append(7, 2);
    p1.append(8, 0);
    p1.display();
    p2.add(p, p1);
    // write display
    /*	5x^4+3x^3+2x^2+7x+5*/
    return 0;
}
