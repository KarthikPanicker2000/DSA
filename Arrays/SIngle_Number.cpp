#include<bits/stdc++.h>
using namespace std;

int main(){
	
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    //Brute ->O(N^2)
    // bool dup_found;
    // for(int i=0;i<n;i++){
    //     dup_found = false;
    //     for(int j=0;j<n;j++){
    //         if(i==j) continue;
    //         if(v[i]==v[j]){
    //             dup_found = true;
    //         }
    //     }
    //     if(dup_found == false){
    //         cout<<v[i]<<endl;
    //         break;
    //     }
    // }

    //Better -> O(N*logN)
    // unordered_map<int,int> freq;
    // for(int i=0;i<n;i++){
    //     freq[v[i]]++;
    // }

    // for(auto item: freq){
    //     if(item.second == 1){
    //         cout<<item.first<<endl;
    //         break;
    //     }
    // }

    //Optimal ->O(N) Using logic gate XOR
    int single_number = 0;
    for(int i=0;i<n;i++){
        single_number = single_number ^ v[i];
    }

    cout<<single_number<<endl;
     
}