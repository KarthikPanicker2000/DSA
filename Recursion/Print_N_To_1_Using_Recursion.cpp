#include<bits/stdc++.h>
using namespace std;

void print_helper(int n){
    if(n==0) return;
    cout<< n <<" ";
    print_helper(n-1);
}
int main(){
	
    int n;
    string name;
    cin>>n>>name;
    
    print_helper(n);
}