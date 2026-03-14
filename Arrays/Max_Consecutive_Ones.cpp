#include<bits/stdc++.h>
using namespace std;

int main(){
	
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    // int start_pos,i,max_ones;
    // start_pos=i=max_ones=0;
    // // for(int i=0;i<n;i++){
        
    // //     if(v[i]!=1){
    // //         max_count = max(max_count,i-start_pos);
    // //         start_pos = i+1;
    // //     }
    // //     if(v[start_pos] !=1 ){
    // //         start_pos++;
    // //     }
    // // }
    // while(i<n){
    //     if(v[i]!=1){
    //         max_ones = max(max_ones,i-start_pos);
    //         i++;
    //         start_pos=i;
    //     }
    //     else{
    //         i++;
    //     }
    // }
    // if(start_pos<n){
    //     max_ones = max(max_ones,i-start_pos);
    // }

    //Optimal Time Complexity -> O(N)

    int i,max_count,count;
    count=i=max_count=0;
    while(i<n){
        if(v[i]==1){
            count++,i++;
        }
        else{
            max_count = max(max_count,count);
            count=0,i++;
        }
    }
    max_count = max(max_count,count);
    cout<<max_count<<endl;
     
}