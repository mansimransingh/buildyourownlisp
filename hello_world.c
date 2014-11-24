#include <stdio.h>
#include <stdlib.h> // for atoi

int main(int argc, char** argv){
    int n = 1;
    if(argc > 1){ //first argument is program name
        n = atoi(argv[1]); //read the first arg as int
    }

    while(n > 0){
        puts("Hello, world!");
        n--;
    }
    return 0;
}