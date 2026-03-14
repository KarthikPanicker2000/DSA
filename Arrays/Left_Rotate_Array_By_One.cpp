#include<bits/stdc++.h>
using namespace std;

int main(){
	
    int n;
    cin>>n;
    int arr[n];

    //Optimal Solution
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }

    arr[n-1]=x;

    //Display
    for( int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}