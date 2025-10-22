#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertNode(Node *&tail, int element, int data)
{
    if (tail == NULL)
    {
        // for empty list
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
        newNode->prev = newNode;
    }
    else
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next->prev = temp;
        temp->prev = curr;
        curr->next = temp;
    }
}

void printNode(Node *&tail)
{
    Node *temp = tail;
    if (tail == NULL)
    {
        cout << "list is empty : " << endl;
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deleteNode(Node *&tail, int value)
{
    if (tail == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        if (curr == prev)
        {
            tail = NULL;
        }
        else if (tail == prev)
        {
            tail = prev;
        }

        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
        curr->next = NULL;
        curr->prev = NULL;
        delete curr;
    }
}
int main()
{
    Node *tail = NULL;
    insertNode(tail, 5, 3);
    printNode(tail);
    insertNode(tail, 3, 5);
    printNode(tail);
    insertNode(tail, 3, 4);
    printNode(tail);

    deleteNode(tail, 4);
    printNode(tail);

    deleteNode(tail, 5);
    printNode(tail);

    deleteNode(tail, 3);
    printNode(tail);

    insertNode(tail, 5, 6);
    printNode(tail);
    insertNode(tail, 6, 9);
    printNode(tail);
    insertNode(tail, 9, 15);
    printNode(tail);
    insertNode(tail, 9, 11);
    printNode(tail);
}
