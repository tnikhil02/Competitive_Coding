#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int data,node* next){
        this->data=data;
        this->next=next;
    }
    node(int data){
        this->data=data;
        next=NULL;
    }
};
void display(node* head){
    node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}
void addatk(node* &head,int k,int pos){
    node* temp=new node(k);
    if(head==NULL){
        if(pos==1){
            head=temp;
            return;

        }
        else{
            return;
        }
    }
    if(pos==1){
        temp->next=head;
        head=temp;
        return;
    }
    node* mover=head;
    int count=0,cake=0;
    while(mover->next){
        count++;
        if(pos-1==count){
            temp->next=mover->next;
            mover->next=temp;
            cake=1;
            break;
        }
        mover=mover->next;
    }
    if(cake==0){
        cout<<"invalid index";
        exit(0);
    }
    return;
}
void deleteatk(node* &head,int pos){
    if(head==NULL){
        return ;
    }
    if(pos==1){
        node*temp=head;
        head=temp->next;
        delete temp;
        return;
    }
    node* mover=head;
    node* need;
    int counter=0;
    while(mover->next){
        counter++;
        if(counter==pos){
            need->next=mover->next;
            delete mover;
            break;
        }
        need=mover;
        mover=mover->next;
    }
    return;
}
int main(){
    node* temp=new node(1,nullptr);
    node* temp1=new node(2);
    node* temp2=new node(3);
    node* temp3=new node(4);
    node* temp4=new node(5);
    node* temp5=new node(6);
    temp->next=temp1;
    node* head=temp;
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=temp4;
    temp4->next=temp5;
    display(head);
    addatk(head,9,4);
    display(head);

}
