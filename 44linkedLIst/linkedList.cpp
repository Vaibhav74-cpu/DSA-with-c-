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

    // insertAtTail(tail, 5);
    // printNode(tail);

    // insertAtTail(tail, 3);
    // printNode(tail);
}