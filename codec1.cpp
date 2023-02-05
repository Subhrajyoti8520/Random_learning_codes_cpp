#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
        int arr[n]; 
        int count;//declared as global variable as local variable declaration we cant cout count outside for loop
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if (arr[i]%k==0){
                //cout<<arr[i]<<endl;
                count++;
            }
        }
        /*for(int i=0; i<n; i++){
            if (arr[i]%k==0){
                //cout<<arr[i]<<endl;
                count++;
            }
            //cout<<count;here output will be 001122...
        }*/
        cout<<count;
    return 0;
}