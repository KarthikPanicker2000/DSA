#include<bits/stdc++.h>
using namespace std;

void rev_array(int i,vector<int> &v){
    if(i>=v.size()/2) return;
    swap(v[i],v[v.size()-1-i]);
    rev_array(i+1,v);
}


int main(){
	
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        v.push_back(j);
    }
    rev_array(0,v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}