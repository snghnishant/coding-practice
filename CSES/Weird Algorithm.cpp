#include<bits/stdc++.h>
using namespace std;
int main(){
    long int x{0};
    scanf("%ld", &x);
    printf("%ld ", x);
    while(x != 1){
        if(x % 2 == 0){
            x /=2;
        }else{
            x  = x*3+1;
        }
        printf("%ld ", x);
    }
}