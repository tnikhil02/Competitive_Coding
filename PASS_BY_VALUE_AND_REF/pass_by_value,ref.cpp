#include<bits/stdc++.h>
using namespace std;
void increment_by_val(int n){
	n++;
}
void increment_by_ref(int &n){
	n++;
}

int main(){
	int a=3;
	cout<<"initial value "<<a<<"\n";
	increment_by_val(a);
	cout<<"after pass by value a= "<<a<<"\n";
	increment_by_ref(a);
	cout<<"after pass by ref a="<<a;

        return 0;
}