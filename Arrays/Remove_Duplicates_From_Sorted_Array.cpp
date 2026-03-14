#include<bits/stdc++.h>
using namespace std;

int main(){
	
    int n;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Brute -> Use Set
    // set<int> unique_elements;
    // for(int i=0;i<n;i++){
    //     unique_elements.insert(arr[i]);
    // }

    // for(int i:unique_elements){
    //     cout<<i<<endl;
    // }

    //Optimal -> 2 pointer approach
    int unique_ptr = 0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            unique_ptr++;
            arr[unique_ptr]=arr[i];
        }
    }
    
    for(int j=0;j<unique_ptr+1;j++){
        cout<<arr[j]<<" ";
    }
}