#include <iostream>

using namespace std;

class Node{
public:
    int value;
    Node* next;
    Node* prev;
    Node(){
        value=0;
        next=NULL;
        prev=NULL;
    }
    Node(int val){
        value=val;
        next=NULL;
        prev=NULL;
    }
};

class BidirectionalLinkedList{
    Node *head;
    Node *tail;
    
public:
    BidirectionalLinkedList(){
        head=NULL;
        tail=NULL;
    }
    BidirectionalLinkedList(int val){
        head=new Node(val);
        tail=new Node(val);
    }
    
    
    void insertBack(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    
    void reverse(){
        if(head==NULL){
            return;
        }
        
        Node* current = head;
        Node* temp = NULL;
        
        while(current!=NULL) {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        }
        if (temp!=NULL) {
            head = temp->prev;
        }
    }
    
    void display(){
        Node* current = head;
        while(current!=NULL){
            cout<<current->value<<" ";
            current = current->next;
        }
        cout<<endl;
    }
};

int main() {
    int n;
    cin>>n;
    
    BidirectionalLinkedList BL;
    
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        BL.insertBack(num);
    }
    
    BL.reverse();
    
    BL.display();
    
    return 0;
}
