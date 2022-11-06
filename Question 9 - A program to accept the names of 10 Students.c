#include <stdio.h>


int main()
{
    int MAX_LIMIT = 30;
    char names [10][MAX_LIMIT];
    int i;
    for(i=0; i<10; i++) {
        printf("Please Enter your name\n");
        fgets(names[i], MAX_LIMIT, stdin);
    }
    
    printf("\nSee list of names below: \n");
    
    for(i=0; i<10; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}