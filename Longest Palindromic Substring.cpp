#include <bits/stdc++.h>

string longestPalindrome(string s) {
    int n = s.length();
    int bestlen = 0,i,j;
    string best_s = "";
    for(i=0;i<n;++i){
        for(j=0;i-j>=0 && i+j<n;++j){
            if(s[i-j]!=s[i+j])
                break;
        int len = 2*j+1;
        if(len>bestlen){
            bestlen = len;
            best_s = s.substr(i-j,len);
        }
        }
    }
    for(i=0;i<n;++i){
        for(j=1;i-j+1>=0 && i+j<n ;++j){
            if(s[i-j+1]!=s[i+j])
                break;
        int len = 2*j;
        if(len>bestlen){
            bestlen = len;
            best_s = s.substr(i-j+1,len);
        }
        }
    }
    return best_s;
 }
 int main(){
    string s = "babad";
    cout<< longestPalindrome(s); //Excpected bab
 }
