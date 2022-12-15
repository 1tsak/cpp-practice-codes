#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        this->head = NULL;
    }
    void insertAtHead(Node *node)
    {
        node->next = head;
        head = node;
    }
    void insertAtTail(Node *node)
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = node;
    }
    void printElements()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
   void insertAtX(int pos, Node *node)
{
    if (pos == 0)
    {
        insertAtHead(node);
        return;
    }

    Node *temp = head;
    for (int i = 0; i < pos; i++)
    {
        if (temp == NULL)
        {
            cout << "Invalid Index to insert, doesnt exists" << endl;
            return;
        }

        temp = temp->next;
    }

    node->next = temp->next;
    temp->next=node;
}
};

int main()
{
    LinkedList ll;
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *nx = new Node(5);
    ll.insertAtHead(n1);
    ll.insertAtHead(n3);
    ll.insertAtTail(n2);
    ll.insertAtX(1, nx);
    ll.printElements();
    return 0;
}