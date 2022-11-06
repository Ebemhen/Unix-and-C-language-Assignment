
#include<stdio.h>
#include<string.h>
 
int main() 
{
    int MAX_LIMIT = 1000;
    char sentence [MAX_LIMIT];
    printf("Enter Sentence Here: ");
    fgets(sentence, MAX_LIMIT, stdin);
    printf("Your sentence is: %s\n",sentence);
    int start=0, end=strlen(sentence)-1;
 
    // start variable points at the first index which is the first index of the sentence
    // end Variable points at the last index, which is the last character of the sentence
    while(start<end)
    {
        //Swapping characters at start and end
        char temp=sentence[start];
        sentence[start]=sentence[end];
        sentence[end]=temp;
 
        //Incrementing start and decrementing end
        start++;
        end--;
    }
    printf("The reversed sentence is: %s", sentence);
 
    return 0;
}