#include<bits/stdc++.h>
using namespace std;

int main(){
	
    int n,k,max_count;
    max_count = 0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    //Brute -> Find sums of all possible subarrays. TC->O(N^2)
    /*
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum == k){
                max_count = max(max_count,j-i+1);
            }
            else if(sum>k) break;
        }
    }
    */

   //Better ->Prefix Sum. TC->O(n)(Worst Case O(N^2) i.e if there are maximum collisions) SC->O(n)
   /*
   unordered_map<int,int> prefix_sum;
   int sum =0;
   for(int i=0;i<n;i++){
       sum+=arr[i];
       if(sum==k){
        max_count = max(max_count,i+1);
       }
       int rem = sum-k;
       if(prefix_sum.find(rem)!=prefix_sum.end()){
        max_count = max(max_count,i-prefix_sum[rem]);
       }
       if(prefix_sum.find(sum)==prefix_sum.end()){
        prefix_sum[sum]=i;
       }
   }
   */

    //Optimal -> Sliding window TC->O(N) SC->O(1)
    int left,right,sum;
    left=right=sum=0;
    while(right<n){
        sum+=arr[right];
        while(left<=right && sum>k){
            sum-=arr[left];
            left++;
        }
        if(sum == k){
            max_count = max(max_count,right-left+1);
        }
        right++;
    }
    cout<<max_count<<endl;
    
}