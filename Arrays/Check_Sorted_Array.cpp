#include<bits/stdc++.h>
using namespace std;

bool is_Sorted(int n, int arr[]){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
	
    int n;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(is_Sorted(n,arr)){
        cout<<"Array is Sorted";
    }
    else{
        cout<<"Array is not Sorted";
    }
}