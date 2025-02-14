#include<bits/stdc++.h>
using namespace std;
struct node{
    node* link[26];
    bool flag=false;
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
        }
        Node->flag=true;
    }
    bool search(string word){
        node* temp=root;
        for(auto val:word){
            if(!temp->containskey(val)){
                return false;
            }
            temp=temp->move(val);
        }
        return(temp->flag);
    }
    bool startwith(string word){
        node* temp=root;
        for(auto val:word){
            if(!temp->containskey(val)){
                return false;
            }
            temp=temp->move(val);
        }
        return true;
    }

};
int main(){
    trie obj;
    obj.insert("nikhil");
    obj.insert("nikil");
    cout<<obj.search("nil")<<endl;
    cout<<obj.startwith("n");
}