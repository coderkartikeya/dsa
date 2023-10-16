#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*prev;
    Node*next;

    Node(int d){
        this->val=d;
    }
    // ~Node(){
    //     cout<<"free for the value "<<val<<endl;
    //     delete val;
    // }

};
void insertAtTail(Node* &tail,Node*&head,int val){
    if(tail==NULL){
    Node*temp=new Node(val);
    tail=temp;
    head=temp;
    return;

    }
    else{
        Node*temp=new Node(val);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }


}

void print(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;

}
void reverse(Node*&curr){
    Node*temp=NULL;
    Node*current=curr;
    while(current!=NULL){
        temp=current->prev;
        current->prev=current->next;
        current->next=temp;
        current=current->prev;
        
    }
}

int main(){
    Node*node=new Node(10);
    Node*head=node;
    Node*tail=node;
    
    insertAtTail(tail,head,5);
    insertAtTail(tail,head,9);
    insertAtTail(tail,head,5);
    insertAtTail(tail,head,12);
    print(head);

    reverse(head);
    print(head);


}