#include <stdio.h>
#include <string.h>

int main(){

    char wrd[100];
    int length, flag=0;

    printf("\nEnter a word: ");
    fgets(wrd, 100, stdin);
    wrd[strlen(wrd)-1]='\0';

    length= strlen(wrd);

    for (int i = 0; i < length/2; i++)
    {
        if(wrd[i] !=wrd[length -i-1]){
            flag= 1;
            break;
        }
    }

    if (flag==0)
    {
        printf("%s is a palindrome.\n",wrd);
    }
    else{
        printf("%s is not palindrome.\n",wrd);
    }
    
    

    return 0;
}