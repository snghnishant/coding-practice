#include<stdio.h>
#define range 4e6
main(){
    unsigned long sum = 0, x=1, y=2, z=0;
    while(y<=range){
        if(y%2==0)
            sum+=y;
        z=x+y;
        x=y;
        y=z; 
    }
    printf("%lu",sum);
}