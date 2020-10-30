#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, flag{0};
    cin>>n;
    int arr[n];
    for(int i{0}; i<n-1; i++)
        cin>>arr[i];
    sort(arr, arr+(n-1));
    for(int i=0; i<n-2; i++){
        if(arr[i+1]-arr[i] != 1){
            flag = 1;
            if(flag == 1){
                cout<<arr[i] + 1;
                break;
            }
        }
    }
    if(flag == 0){
        if(arr[n-2] == n)
        cout<<1;
        else
        cout<<n;
    }
}