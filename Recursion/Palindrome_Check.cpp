#include<bits/stdc++.h>
using namespace std;

bool palin_check(int i,string s){
    if(i>=s.length()/2) return true;
    if(s[i]!=s[s.length()-1-i]) return false;
    return palin_check(i+1,s);
}


int main(){
	
    string s;
    cin>>s;
    
    if(palin_check(0,s))
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }

}