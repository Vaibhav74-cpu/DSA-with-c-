#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constuctor for initilize
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor for deleting nodes from heap
    
    ~Node()
    {
        int value = this->data;
        // free the memory
        if (this->next = NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free with value : " << value << endl;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    // insert at start
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    // positon =3
    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at last postion
    if (temp->next == NULL) // updating tail
    {
        insertAtTail(tail, data);
        return;
    }

    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void printNode(Node *&head_tail)
{
    Node *temp = head_tail; // create new node for traversling
    while (temp != NULL)    // iterate until null  node is not found
    {
        cout << temp->data << " "; // intially print current node
        temp = temp->next;         // move to the next node by using temp.next
    }
    cout << endl;
}

void deleteNode(int position, Node *&head)
{
    // initial/first/start node deleting
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // free the memory
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // middle and last node deleting
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        // conditions for delelting middle and last node
        prev->next = curr->next;
        curr->next = NULL; // make sure that deleting node does not point to the other node. so before deleting, assign it with null value.
        // in this case we deleting curr node so make sure that curr->next=null
        delete curr;
    }
}

int main()
{
    // create initial node.
    Node *node1 = new Node(15);
    // cout << node1->data << endl; // 10
    // cout << node1->next << endl; // NULL value

    Node *head = node1; // head pointing to node1
    Node *tail = node1; // tail pointing to node1
    printNode(head);

    insertAtHead(head, 12);
    printNode(head);

    insertAtHead(head, 10);
    printNode(head);

    insertAtHead(head, 8);
    printNode(head);

    insertAtHead(head, 7);
    printNode(head);

    insertAtPosition(head, tail, 3, 9);
    printNode(head);

    insertAtPosition(head, tail, 5, 11);
    printNode(head);

    deleteNode(3, head);
    printNode(head);

    // deleteNode(6, head);
    // printNode(head);

    // insertAtTail(tail, 5);
    // printNode(tail);

    // insertAtTail(tail, 3);
    // printNode(tail);
}