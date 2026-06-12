#include<stdio.h>
#include <unistd.h>
int main(){
    int a, b, c;
    a = 5, b = 3;
    if(fork() == 0){
        c = a - b;
        printf("Child result = %d\n", c);
    } else{
        c = a + b;
        printf("Parent result = %d\n", c);
    }


    return 0;
}