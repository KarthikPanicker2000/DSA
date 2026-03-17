#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n<=1) return n;
    return fibo(n-1)+fibo(n-2);
}

// 0 1 1 2 3 5 8 -> Considering zero indexed terms
int main(){
	
    int n;
    cin>>n;
    
    cout<<fibo(n);

}