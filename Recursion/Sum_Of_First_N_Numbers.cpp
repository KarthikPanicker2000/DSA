#include<bits/stdc++.h>
using namespace std;

//Paraterised Recursion
int sum_func(int sum,int n){
    if(n<1) return sum;
    return sum_func(sum+n,n-1);
}

//Functional Recursion -> Function returns value without extra parameters.
int helper_sum_func(int n){
    if(n==0) return 0;
    return n + helper_sum_func(n-1);
}
int main(){
	
    int n;
    string name;
    cin>>n>>name;
    
    //cout<<sum_func(0,n);
    cout<<helper_sum_func(10);

}