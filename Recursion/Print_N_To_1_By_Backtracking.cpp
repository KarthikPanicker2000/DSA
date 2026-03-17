#include<bits/stdc++.h>
using namespace std;

void print_helper(int counter,int n){
    if(counter>n) return;
    print_helper(counter+1,n);
    cout<<counter<<" ";
}
int main(){
	
    int n;
    string name;
    cin>>n>>name;
    
    print_helper(1,n);
}