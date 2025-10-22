#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        if (next != NULL) // if next is not null then delete that element
        {
            delete next;
            next = NULL;
        }

        cout << "your memory block is now free for the data : " << value << endl;
    }
};

void insertAtHead(Node *&head, Node *&tail, int data)
{
    // if node is empty
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data); // create node
        temp->next = head;
        head->prev = temp;
        head = temp; // change the pointing postion of head
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data); // create  new node
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    // insert at start (special case)
    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }

    // then traverse for postion
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // insert at tail (special case)
    if (temp->next == NULL)
    {
        insertAtTail(head, tail, data);
        return;
    }

    // insert at middle (any postion).
    Node *nodeToInsert = new Node(data); // creatin node for data

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void printNode(Node *&head_tail)
{
    Node *temp = head_tail; // took node for iteration
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int nodeLength(Node *&head)
{
    Node *tempLen = head;
    int len = 0;
    while (tempLen != NULL)
    {
        len++;
        tempLen = tempLen->next;
    }

    return len;
}

void deleteNode(int position, Node *&head)
{
    // deletin start or first node
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // delting node if they in the last and middle  postion
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        // now node is reached for deleting position

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    // Node *node1 = new Node(4);
    // if node is empty
    Node *head = NULL;
    Node *tail = NULL;

    printNode(head);
    // cout << "\nlenth of list is : " << nodeLength(head) << endl;

    insertAtHead(head, tail, 12);
    insertAtHead(head, tail, 15);
    printNode(head);
    cout << endl;
    cout << "head : " << head->data << " , ";
    cout << "tail : " << tail->data << endl;

    insertAtTail(head, tail, 13);
    insertAtTail(head, tail, 15);
    printNode(head);
    cout << endl;
    cout << "head : " << head->data << " , ";
    cout << "tail : " << tail->data << endl;

    insertAtPosition(head, tail, 4, 7);
    insertAtPosition(head, tail, 6, 9);
    printNode(head);
    cout << endl;
    cout << "head : " << head->data << " , ";
    cout << "tail : " << tail->data << endl;

    insertAtPosition(head, tail, 5, 17);
    printNode(head);
    cout << endl;
    cout << "head : " << head->data << " , ";
    cout << "tail : " << tail->data << endl;

    deleteNode(1, head); // delete for starting position
    printNode(head);
    cout << endl;
    cout << "head : " << head->data << " , ";
    cout << "tail : " << tail->data << endl;

    deleteNode(6, head); // delete for last position
    printNode(head);
    cout << endl;
    cout << "head : " << head->data << " , ";
    cout << "tail : " << tail->data << endl;

    deleteNode(3, head); // delete memory for middle node
    printNode(head);
    cout << endl;
    cout << "head : " << head->data << " , ";
    cout << "tail : " << tail->data << endl;
}