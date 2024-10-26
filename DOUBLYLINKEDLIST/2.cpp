#include<bits/stdc++.h>
using namespace std;
//CREATION OF NODE OF A DOUBLY LINKED LIST
class node
{
public:
    int data;
    node* back;
    node* next;
    node(int data,node* back,node* next){
        this->data=data;
        this->back=back;
        this->next=next;
    }
    node(int data){
        this->data=data;
        back=nullptr;
        next=nullptr;
    }
};

// RATREIVING OF ELEMENTS IN A DOUBLY LINKED LIST
void display(node* head){
    node* temp=head;
    if(head==NULL){
        cout<<"EMPTY\n";
        return;
    }
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
//INSERTION OF DOUBLY LINKED LIST
void insertatk(node* &head,int val,int pos){
    node* temp=new node(val);
    if(head==NULL){
        if(pos==1){
            head=temp;
            return;
        }
    }
    if(pos==1){
        temp->next=head;
        head->back=temp;
        head=temp;
        return;
    }
    int count=0;
    node* mover=head;
    while(mover!=nullptr){
        count++;
        if(count==pos){
            if(mover->next==NULL){
                mover->next=temp;
                temp->back=mover;
                break;
            }
            temp->back=mover->back;
            mover->back->next=temp;
            temp->next=mover;
            mover->back=temp;
            break;
        }
        mover=mover->next;
    }
    return;
}
//DELETION OF DOUBLY LINKED LIST
void deleteatk(node* &head,int k){
    if(head==NULL){
        return;
    }
    node*temp=head;

    if(k==1){
        head=head->next;
        head->back=NULL;
        temp->next=NULL;
        delete temp;        
        return;
    }
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==k){
            if(temp->next==NULL){
                temp->back->next=nullptr;
                temp->back=NULL;
                delete temp;
                break;
            }
            temp->back->next=temp->next;
            temp->next->back=temp->back;
            temp->back=NULL;
            temp->next=NULL;
            delete temp;
            break;
        }
        temp=temp->next;
    }
    return;
}
//REVERSING A DOUBLY LINKED LIST
node* reverse(node* head){
    node* temp=head;
    node* last;
    while(temp!=NULL){
        last=temp->back;
        temp->back=temp->next;
        temp->next=last;

        temp=temp->back;
    }
    head=last->back;
    return head;
}
int main(){
    vector<int>arr={1,2,3,4,5,6};
    cout<<"ARRAY TO LINKED LIST\n";
    node* head=new node(arr[0]);
    node* prev=head;
    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i]);
        prev->next=temp;
        temp->back=prev;
        prev=prev->next;
    }
    display(head);
    deleteatk(head,3);
    cout<<"After Deletion\n";
    display(head);
    cout<<"After Insertion\n";
    insertatk(head,8,5);
    display(head);
    cout<<"AFTER REVERSING A DOUBLY LINKED LIST\n";
    node* header = reverse(head);
    display(header);

}