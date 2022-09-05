#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    void insertAtHead(Node* &head,int data){
        Node* temp = new Node(data);
        temp->next=head;
        head=temp;
    }
    

};
void insertAtTail(Node* head,int x){
        while(head!=NULL)
        {
            head=head->next;
        }
         Node* temp = new Node(x);
        head->next= temp;
        
    }
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" "<<head->next;
        head=head->next;
    }
}
int main(){
    Node* node1 = new Node(0);
    Node* head = node1;
    node1->insertAtHead(head,2);
    node1->insertAtHead(head,4);
    node1->insertAtHead(head,6);
    print(head);

    return 0;
}