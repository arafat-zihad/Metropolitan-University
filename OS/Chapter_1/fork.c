#include<stdio.h>
#include <unistd.h>
int main(){
    fork();
    fork();
    printf("Hello!\n");
    fork();
    printf("Zihad!\n");

    return 0;
}