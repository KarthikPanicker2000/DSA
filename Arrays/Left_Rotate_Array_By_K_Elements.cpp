#include<bits/stdc++.h>
using namespace std;

int main(){
	
    int n,k;
    cin>>n>>k;
    int arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Incase k overshoots n
    k = k % n;
    //Brute -> TC ->O(N) SC ->O(K)
    /*
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }
    for(int i=n-k;i<n;i++){
        arr[i]=temp[i-(n-k)];
    }
    */

    //Optimal Solution -> Literally rearranging parts of array lol. TC->O(N) SC->O(1)
    for(int i=0;i<k/2;i++){
        swap(arr[i],arr[k-i-1]);
    }
    for(int i=k;i<(n+k)/2;i++){
        swap(arr[i],arr[n-(i-k)-1]);
    }

    //Full array reverse
    for(int i = 0;i < n/2 ; i++ ){
        swap(arr[i],arr[n-i-1]);
    }

    //Display
    for( int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}