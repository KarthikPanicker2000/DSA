#include<bits/stdc++.h>
using namespace std;

void print_helper(int counter,int n){
    if(counter>n) return;
    cout<<counter<<" ";
    print_helper(counter+1,n);
}
int main(){
	
    int n;
    string name;
    cin>>n>>name;
    
    print_helper(1,n);
}