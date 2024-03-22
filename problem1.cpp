#include <iostream>

using namespace std;

class Node{
public:
    int value;
    Node *next;
    Node(){
        value=0;
        next=NULL;
    }
    Node(int val){
        value=val;
        next=NULL;
    }
};
class LinkedList{
    Node *head;
public:
    LinkedList(){
        head=NULL;
    }
    LinkedList(int val){
        head = new Node(val);
    }
    void printAll(){
        if(head==NULL){
            return;
        }
        cout<<head->value<<endl;
    }
  
    void insertBack(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=newNode;
        }
        else{
            Node *temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newNode;
        }
    }
    
    void deleteFront(){
        head=head->next;
    }
    
    void deleteLast(){
        if(head==NULL){
            return;
        }
        if(head->next==NULL){
            head=NULL;
            return;
        }
        Node *temp=head;
        while(temp->next->next!=NULL){
            temp = temp ->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    
    int size(){
        int count=0;
        Node *temp=head;
        while(temp!= NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    
    int max(){
        if(head==NULL){
            return 0;
        }
        int max_val = head->value;
        Node *temp = head->next;
        while(temp!=NULL){
            if(temp->value>max_val){
                max_val=temp->value;
            }
            temp=temp->next;
        }
        return max_val;
    }
    
    int min(){
        if(head==NULL){
            return 0;
        }
        int min_val = head->value;
        Node *temp = head->next;
        while(temp!=NULL){
            if(temp->value<min_val){
                min_val=temp->value;
            }
            temp=temp->next;
        }
        return min_val;
    }
    
    int first(){
        if(head==NULL){
            return 0;
        }
        return head->value;
    }
};


int main() {
    LinkedList l1;
    int val;
    
    while(true){
        if(cin>>val){
            l1.insertBack(val);
        }
        else{
            break;
        }
    }
    
    cout<<l1.max()<<" "<<l1.first()<<" "<<l1.size()<<" "<<l1.min()<<" ";
    
    return 0;
}
