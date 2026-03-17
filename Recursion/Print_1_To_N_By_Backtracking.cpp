#include<bits/stdc++.h>
using namespace std;

void print_helper(int n){
    if(n==0) return;
    print_helper(n-1);
    cout<< n <<" ";
}
int main(){
	
    int n;
    string name;
    cin>>n>>name;
    
    print_helper(n);
}