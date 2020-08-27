/*Multiples of 3 and 5*/
#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int sum{0};
    for(auto i=3;i<1000;i++){
        if(i%3==0 || i%5==0)
        sum+=i;
    }
    cout<<sum;
}