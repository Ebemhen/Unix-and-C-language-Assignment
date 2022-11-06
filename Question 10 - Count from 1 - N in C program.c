#include<stdio.h>

int main()
{
    int N;
    int count;
    printf("Please enter the number you want to count to:");
    scanf("%d",&N);
    for(count=1; count<=N; count++) {
        printf("%d\n",count);
    }
    return 0;
}