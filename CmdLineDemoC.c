#include <stdio.h>

int main(int argc, char **argv){
    printf("\n\t The entered arguments via cmd line are : \n");

    for(int i = 0; i < argc; i++){
        printf("\n %s", argv[i]);
    }

    return 0;
}