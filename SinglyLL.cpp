#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;

    }

};

void insertL(Node * &head,int d){
    if(head==NULL){
        Node*temp=new Node(d);
        head=temp;
    }
    else{
        Node* temp=new Node(d);
    temp->next=head;
    head=temp;

    }
    

}

void print(Node* &head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertTail(Node* &tail,int d){
    Node *temp=new Node(d);
    tail->next=temp;
    tail=tail->next;

}


void insertAtPosition(Node* &tail,Node* &head,int position,int d){
    Node*temp=head;
    //insert at first
    if(position==1){
        insertL(head,1);
        return;
    }

    //insert at last
    
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertTail(tail,d);
        return;
    }
    Node*insert=new Node(d);
    insert->next=temp->next;
    temp->next=insert;


}

void deleteNode(int position,Node* &head,Node *&tail){
    Node* temp=head;
    int cnt=1;
    if(position==1){
        head=head->next;
    }
    
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //handeling the last position
    if(temp==NULL){

        Node *ele=temp->next;
        temp->next=ele->next;
        delete ele;
    }

    else {
        Node *ele=temp->next;
    temp->next=ele->next;
    delete ele;
    }

    
}
void reverse(Node* &head,Node* &tail){
    swap(head->data,tail->data);

}

int main(){
    Node*node1=new Node(10);
    // cout<<node1->data<<endl;
    Node *head=node1;
    Node *tail=node1;
    // print(head);
    insertL(head,20);
    // print(head);

    insertTail(tail,30);
    insertTail(tail,40);

    insertAtPosition(tail,head,5,5);
    deleteNode(5,head,tail);

    

    print(head);

    cout<<"head is at position   "<<head->data<<endl;
    cout<<"tail is at position    "<<tail->data<<endl;

    // dl(head,30);

    // print(head);
    

    
    



}