#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>

int main(int argc, char** argv){
    puts("Lispy");

    while(1){
        char* input = readline("lispy> ");

        add_history(input);

        printf("No? %s\n", input);

        free(input);
    }

    return 0;
}
