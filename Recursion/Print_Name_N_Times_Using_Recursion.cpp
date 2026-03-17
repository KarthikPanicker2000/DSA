#include<bits/stdc++.h>
using namespace std;

void print_N_Times(string name,int n){
    if(n==0) return;
    cout<<name<<endl;
    print_N_Times(name,n-1);
}
int main(){
	
    int n;
    string name;
    cin>>n>>name;
    
    print_N_Times(name,n);
}