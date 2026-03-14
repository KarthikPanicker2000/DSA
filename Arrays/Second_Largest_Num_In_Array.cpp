#include<bits/stdc++.h>
using namespace std;

int main(){
	
    int n;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max,s_max;
    max=s_max=INT_MIN;

    //Brute

    // sort(arr,arr+n);
    // cout<<arr[n-2];

    //Better - 2 pass

    // for(int i=0;i<n;i++){
    //     if(arr[i]>max) max=arr[i];
    // }

    // for(int j=0;j<n;j++){
    //     if(arr[j]>s_max && arr[j]<max)
    //     {
    //         s_max = arr[j];
    //     } 
    // }
    
    //Optimal
    
    for(int i=0;i<n;i++){
        if(arr[i] > max)
        {
            s_max=max;
            max = arr[i];
        } 
        else if(arr[i]>s_max){
            s_max=arr[i];
        }
    }
    cout<<s_max;
}