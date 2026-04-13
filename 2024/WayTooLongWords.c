#include <stdio.h>

/*
Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special abbreviation.

This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.

Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n"
*/

typedef struct{

    char word[101];
    int size;

} palavras;

int main(void){

    palavras input[100];

    int n;

    scanf("%d ", &n);

    char ch;
    
    for(int i = 0; i < n; i++){

        while(1){

        ch = getchar();

        if(ch == '\n')
            break;;
        
        input[i].word[input[i].size] = ch;
        input[i].size++;
        }
    
        input[i].word[input[i].size] = '\0';
    
    }

        for(int i = 0; i < n; i++){

            if(input[i].size > 10)
            printf("%c%d%c", input[i].word[0],input[i].size - 2, input[i].word[input[i].size - 1]);

            else
                for(int j = 0; j < input[i].size; j++)
                    printf("%c",input[i].word[j]);

            printf("\n");
        }

    return 0;

}