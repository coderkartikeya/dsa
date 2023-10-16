#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node *prev;
    Node *next;

    Node(int d){
        this->val=d;
        this->prev=NULL;
        this->next=NULL;
    }
    
};

void insertAtHead(Node* &head,Node*&tail,int d){
    if(head==NULL){
        Node*temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
        Node*temp=new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;

    }
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtTail(Node* &tail,Node* &head,int d){
    if(tail==NULL){
        Node*temp=new Node(d);
        tail=temp;
        head=temp;
    }
    else{
        Node*temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;

    }
    

}
// void deleteNode(int position,Node* &head,Node* &tail){
//     int cnt=0;
//     Node*temp=head;

//     if(position==1){
//         head=head->next;
//     }
//     while(cnt<position-1){
//         temp=temp->next;
//         cnt++;
//     }
//     if(temp==NULL){

//     }

// }

void insertAtPosition(Node* &head,Node* &tail,int position,int d){
    Node*temp=head;
    int cnt=1;
    if(position==1){
        insertAtHead(head,tail,d);
        return;
    }
    
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(head,tail,d);
        

    }
    else{
        Node*tem=new Node(d);
    temp->next->prev=tem;
    tem->next=temp->next;
    temp->next=tem;
    
    tem->prev=temp;

    }
   
}

void deleteAtPosition(Node*&head,Node*&tail,int position){
   
    if(position==1){
        Node*temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
        
        
    }
    else{
        Node*curr=head;
        Node*prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        
        }
        if(curr->next==NULL){
            curr->prev=NULL;
            prev->next=curr->next;
            curr->next=NULL;
            tail=prev;
            delete curr;

        }
        else{
            curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

        }
        



    }
    
}
int main(){
    Node*node1=new Node(10);
    Node*head=node1;
    Node*tail=node1;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtTail(tail,tail,40);
    insertAtPosition(head,tail,3,80);
    // insertAtPosition(head,tail,6,5);

    // insertAtPosition(head,tail,5,3);
    print(head);
    deleteAtPosition(head,tail,5);
    
    print(head);
    cout<<"head of the LL is at  "<<head->val<<endl;
    cout<<"tail of the LL is at  "<<tail->val<<endl;


    

}