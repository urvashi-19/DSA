# include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;

    // constructor
    node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
     }
};

void print(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertatHead(node* &head , int data){
    node * temp = new node(data);
    temp->next = head;
    head->prev =  temp;
    head = temp;
    
}
void insertTail(node* &tail , int data){
    node* temp = new node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = tail->next;
}

int main(){
      node* head = new node(10);
    // insertion at head
    node*head1 = head;
     insertatHead( head1 , 5);

     // insertion at tail
     node* tail = head;
     insertTail(tail , 6);
}