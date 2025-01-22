#include<bits/stdc++.h>
using namespace std;
struct node{
    node* link[26];
    int Ewith=0;
    int cprefix=0;
    bool containskey(char ch){
        if(link[ch-'a']==NULL){
            return false;
        }
        return true;
    }
    void put(char ch,node* temp){
        link[ch-'a']=temp;
    }
    node* move(char ch){
        return link[ch-'a'];
    }
};
class trie{
        node* root;
public:
    trie(){
        root=new node();
    }
    void insert(string word){
        node* Node=root;
        for(int i=0;i<word.size();i++){
            if(!Node->containskey(word[i])){
                Node->put(word[i],new node());
            }
            Node=Node->move(word[i]);
            Node->cprefix+=1;        
        }
        Node->Ewith+=1;
    }
    int countword(string word){
        node* temp=root;
        for(auto val:word){
            if(!temp->containskey(val)){
                return false;
            }
            temp=temp->move(val);
        }
        return temp->Ewith;
    }
    int countstartwith(string word){
        node* temp=root;
        for(auto val:word){
            if(!temp->containskey(val)){
                return false;
            }
            temp=temp->move(val);
        }
        return temp->cprefix;
    }
    void erase(string word){
        node* temp=root;
        for(auto val:word){
            temp=temp->move(val);
            temp->cprefix-=1;
        }
        temp->Ewith-=1;
    }

};
int main(){
    trie obj;
    obj.insert("nikhil");
    obj.insert("nikhil");
    obj.insert("nikh");
    cout<<obj.countword("nikhil")<<endl;
    cout<<obj.countstartwith("nikh")<<endl;
    obj.erase("nikh");
    cout<<obj.countstartwith("nikh")<<endl;
}