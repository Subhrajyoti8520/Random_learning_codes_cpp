#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-- && 1<=t<=1000){
        int n,x;
        cin>>n;
        x=n%10;
        int a;
        while(n>0){
            a=n%10;
            n=n/10;
            if(n==0){
                cout<<a+x;
            }
        }
    }
}