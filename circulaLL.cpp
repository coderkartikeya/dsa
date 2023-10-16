#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node *next;

    Node(int d){
        this->val=d;
        this->next=NULL;
    }

    ~Node(){
        int value=this->val;
        if(this->next==NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for the value "<<val<<endl;
    }
};

void insertNode(Node*&tail,int element,int d){
    //when there is element present in the list
    if(tail==NULL){
        Node*temp=new Node(d);
        tail=temp;
        temp->next=temp;
    }
    else {
        Node*curr=tail;
        while(curr->val!=element){
            curr=curr->next;
        }
        //element found and now that is at current pointer
        Node*temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;

    }
    
}
void print(Node*tail){
    Node*temp=tail;
    do{
        cout<<tail->val<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;

}

void deleteNode(Node*&tail,int element){
    if(tail==NULL){
        cout<<"LL is already empty "<<endl;
        return;
    }

    else{
        Node*prev=tail;
        Node*curr=prev->next;
        while(curr->val!=element){
            prev=curr;
            curr=curr->next;

        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main(){
    
    Node*tail=NULL;
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,10);
    insertNode(tail,10,5);
    insertNode(tail,5,8);
    print(tail);

    // int num=3;

    // for(int i=0;i<5;i++){
        
    //     insertNode(tail,num,i);
    //     print(tail);
    //     num=i;
    // }
    deleteNode(tail,5);
    print(tail);


}