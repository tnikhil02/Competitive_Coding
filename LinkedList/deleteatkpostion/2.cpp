#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *next;
    node(int data1,node* next1){
        data=data1;
        next=next1;
    }
};
node* artol(vector<int>v){
    node *head=new node(v[0],nullptr);
    node *tail=head;
    for(int i=1;i<v.size();i++){
        node* temp=new node(v[i],nullptr);
        tail->next=temp;
        tail=temp;
    }
    return head;
}
node* insertatk(node* &head,int k){
    node* insert=new node(k,nullptr);
    if(head==NULL){
        if(k==1){return insert;}
    }
    if(k==1){
        insert->next=head;
        head=insert;
    }
    node* temp=head;
    int counter=0;
    while(temp!=NULL){
        counter++;
        if(counter==k-1){

            insert->next=temp->next;
            temp->next=insert;
        }
        temp=temp->next;
    }
}
node* deleteposk(node* &head,int k){
    if(head==NULL){
        return head;
    }
    node* temp=head;
    if(head->data==k){
        head=head->next;
        delete temp;
        return head;
    }
    node* prev;
    while(temp!=NULL){
        if(temp->data==k){
            prev->next=temp->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}   
int main(){
    vector<int>v{5,2,3,4,6,7,9};
    artol(v);
    node* head=artol(v);
    node* temp=head;
    cout<<"BEFORE DELETION"<<endl;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    head= deleteposk(head,7);
    cout<<"AFTER DELETION"<<7<<endl;
    node* temp1=head;
    while(temp1){
    cout<<temp1->data<<" ";
    temp1=temp1->next;
    }

}

