#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    if( n == 2 || n ==3){
        cout<<"NO SOLUTION";
    }
    else if(n == 1){
        cout<<1;
    }else{
        for(int i=1; i<=n; i++){
            if(i%2 == 0){
                v.push_back(i);
            }
        }
        for(int i=1; i<=n; i++){
            if(i%2 != 0){
                v.push_back(i);
            }
        }
        for(int i: v){
            cout<<i<<"\n";
        }
    }
}