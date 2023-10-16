#include <iostream>
using namespace std;
class node{
    public:
    int val;
    node*next;

    node(int val){
        this->val=val;
    }

};

void insert(node*&head,int element,int position){
    if(head==NULL){
        node*temp=new node(element);
        head=temp;
        temp->next=temp;
    }
    else {
        node*curr=head;
        while(curr->val!=position){
            curr=curr->next;
        }
        node*temp=new node(element);
        temp->next=curr->next;
        curr->next=temp;
        

    }
}
void print(node*head){
    node*temp=head;
    while(head!=temp){
        cout<<head

    }

}

int main(){

}