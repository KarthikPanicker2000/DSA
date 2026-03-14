#include<bits/stdc++.h>
using namespace std;

int main(){
	
    int n,m,final;
    cin>>n>>m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    vector<int> final_arr;
    for( int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for( int i=0;i<m;i++){
        cin>>arr2[i];
    }

    //Brute -> put all elements into a sorted set and then transfer to an array
    // set<int> s;
    // for( int i=0;i<n;i++){
    //     s.insert(arr1[i]);
    // }
    
    // for(int i=0;i<m;i++){
    //     s.insert(arr2[i]);
    // }
    
    // for(auto x:s){
    //     final_arr.push_back(x);
    // }
    // for(int z = 0;z<final_arr.size(); z++){
    //     cout<< final_arr[z]<< " ";
    // }

    //Optimal ->2 pointer
    int i,j;
    i=j=0;
    while( i<n && j<m )
    {
        if(arr1[i]<arr2[j]){
            final_arr.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j]){
            final_arr.push_back(arr2[j]);
            j++;
        }
        else if(arr1[i] == arr2[j]){
            final_arr.push_back(arr1[i]);
            i++,j++;
        }
    }
    //Adding the elements of the array that remains directly to the final array
    if(i==n){
        while(j<m){
            final_arr.push_back(arr2[j]);
            j++;
        }
    }
    else if(j==m){
        while(i<n){
            final_arr.push_back(arr1[i]);
            i++;
        }
    }
    //Priting final array
    for(int z = 0;z<final_arr.size(); z++){
        cout<< final_arr[z]<< " ";
    }

    
}