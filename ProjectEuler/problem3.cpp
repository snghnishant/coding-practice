#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main(){
    lli N;
    cin>>N;
    for(lli i{2}; i*i<=N; i++){
        if(N%i == 0){
            while(N%i == 0){
                N /= i;
            }
        }
    }
    if(N>1){
        cout<<N;
    }

}