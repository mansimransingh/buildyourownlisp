#include <stdio.h>
const int buffer_size = 2048;
static char input[buffer_size];

int main(int argc, char** argv){
    puts("Lispy");

    while(1){
        fputs("lispy> ", stdout);

        fgets(input, buffer_size, stdin);

        printf("No? %s", input);
    }

    return 0;
}
