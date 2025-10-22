#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "your node is deleted for data : " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int data)
{
    if (tail == NULL)
    {
        // node is empty
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode; // make it circular
    }
    else
    {
        // node is not empty
        // assume that there is element present

        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void printNode(Node *&tail)
{
    Node *temp = tail;

    if (tail == NULL) // special case
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
    // while (tail->next!=temp)
    // {
    //     cout<<tail->data;
    //     tail=tail->next;
    // }
}

void deleteNode(Node *&tail, int value)
{

    if (tail == NULL)
    {
        // for empty list
        cout << "list is empty, insert data first" << endl;
        return;
    }
    else
    {
        // for non-empty list
        // assume that element is present

        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            // move forward until data is found
            prev = curr;
            curr = curr->next;
        }

        // handling 1 node link list
        if (curr == prev) // special case
        {
            tail = NULL;
        }

        // handling 2 node linked list
        //  now data as corresponding value is found for deleting
        else if (tail == curr) // special case
        {
            tail = prev;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    Node *tail = NULL;
    insertNode(tail, 3, 5);
    printNode(tail);

    insertNode(tail, 5, 9);
    printNode(tail);

    insertNode(tail, 5, 6);
    printNode(tail);

    insertNode(tail, 6, 2);
    printNode(tail);

    insertNode(tail, 9, 12);
    printNode(tail);

    insertNode(tail, 12, 16);
    printNode(tail);

    deleteNode(tail, 9);
    printNode(tail);

    insertNode(tail, 2, 7);
    printNode(tail);

    // deleteNode(tail, 5);
    // printNode(tail);

    // deleteNode(tail, 9);
    // printNode(tail);

    // deleteNode(tail, 6);
    // printNode(tail);
    return 0;
}