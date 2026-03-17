#include<bits/stdc++.h>
using namespace std;

int main(){
	
    int arr[5];
    for( int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<arr[3]<<endl;
    arr[3]+=2;
    cout<<arr[3];
}