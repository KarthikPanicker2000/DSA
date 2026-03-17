#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int non_zero = 0;
    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[non_zero], nums[j]);
            non_zero++;
        }
    }
}

int main(){
	
    int n;
    cin>>n;
    vector<int> v(n);
    for( int i=0;i<n;i++){
        cin>>v[i];
    }

    //Brute -> Copy the array into a new array

    // vector<int> temp(n);
    // for( int i=0;i<n;i++){
    //     temp[i] = arr[i];
    // }

    // int non_zero_ptr = 0;
    // for( int i=0;i<n;i++){
    //     if(temp[i]!=0){
    //         arr[non_zero_ptr++] = temp[i];
    //     }
    // }

    // //Assigning rest of the zeros to arr
    // for(int j = non_zero_ptr;j<n;j++){
    //     arr[j] = 0;
    // }
    
    //Optimal -> 2 pointer
    moveZeroes(v);

    for( int i=0;i<n;i++){
        cout<<v[i]<< " ";
    }
}
