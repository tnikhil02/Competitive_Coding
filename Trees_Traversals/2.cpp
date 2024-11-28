#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
void PREORDER_ITERATIVE(node* root){
    stack<node* > st;
    vector<int>res;
    st.push(root);
    while(!st.empty()){
        node* current=st.top();
        st.pop();
        res.push_back(current->data);
        if(current->right!=NULL){
            st.push(current->right);
        }
        if(current->left!=NULL){
            st.push(current->left);
        }
    
    }
    for(auto val:res){
        cout<<val<<" ";
    }
}
void INORDER_RECURSIVE(node* root){
    if(root==NULL){
        return;
    }
    INORDER_RECURSIVE(root->left);
    cout<<root->data<<" ";
    INORDER_RECURSIVE(root->right);
}
void LEVEL_order(node* root){
    queue<node* >que;
    vector<int>res;
    if(root==NULL){
        return;
    }
    node* help=root;
    que.push(root);
    while(!que.empty()){
        node* help=que.front();
        int val=help->data;
        res.push_back(val);
        que.pop();
        if(help->left!=NULL){
            que.push(help->left);    
        }
        if(help->right!=NULL){
            que.push(help->right);
        }
    }
    for(int val:res){
        cout<<val<<" ";
    }
}
void INORDER_ITERATIVE(node* root){
     stack<node*>st;
     vector<int>res;
     if(root==NULL){
        cout<<"EMPTY";
        return;
     }
     node* current=root;
     while(true){
        if(current!=NULL){
            st.push(current);
            current=current->left;
        }
        else{
            if(st.empty()== true){
                break;
            }
            current=st.top();
            st.pop();
            res.push_back(current->data);
            current=current->right;
        }
     }
     for(auto val:res){
        cout<<val<<" ";
     }
}
int main(){
    node* root=new node(1);
    node* temp1=new node(2);
    node* temp2=new node(3);
    node* temp3=new node(4);
    node* temp4=new node(5);
    node* temp5=new node(6);
    node* temp6=new node(7);
    root->left=temp1;
    root->right=temp2;
    temp1->left=temp3;
    temp1->right=temp4;
    temp2->left=temp5;
    temp2->right=temp6;
    
}