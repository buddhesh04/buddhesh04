// Circular Linked List

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *previous;
    Node *ptr;
};
int main(){
    Node* N1 = new Node();
    Node* N2 = new Node();
    Node* N3 = new Node();

    cout<<"\n Enter Num 1 \n";
    cin>>N1->data;
    cout<<"\n Enter Num 2 \n";
    cin>>N2->data;
    cout<<"\n Enter Num 3 \n";
    cin>>N3->data;

    N1-> previous = N3;
    N1-> next = N2;
    N2-> next = N3;
    N3-> next = N1;

    Node* head = N1;

    Node* tail = N3;

    Node* temp = tail;

    temp = head;

   
        while(temp->next!=head){

            cout<<temp->data<<endl;
            temp=temp->next;
            

            if(temp->next == head){
                cout<<temp->data<<endl;
                break;
            }
        }
        return 0;
}