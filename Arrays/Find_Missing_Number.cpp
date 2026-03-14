#include<bits/stdc++.h>
using namespace std;

int main(){
	
    int n;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Brute ->Time O(N^2)
    // for(int i=1;i<=n+1;i++){
    //     bool val_found = false;
    //     for(int j=0;j<n;j++){
    //         if(arr[j]==i){
    //             val_found=true;
    //             break;
    //         } 
    //     }

    //     if(!val_found) cout<<i<<endl;
    // }

    //Better -> Hashing 
    //Time - O(N) Space - O(N)

    // vector<int> hash(n+2, 0);
    // for(int i=0;i<n;i++){
    //     hash[arr[i]]++;
    // }

    // for(int i=1;i<n+2;i++){
    //     if(hash[i] == 0) cout<<i<<endl;
    // }

    //Optimal -> Use Math formula
    //Time O(N)
    int expected_sum = (n+1)*(n+2)/2;
    int sum_total = 0;
    for(int i=0;i<n;i++){
        sum_total += arr[i];
    }

    cout<<expected_sum - sum_total;
     
}