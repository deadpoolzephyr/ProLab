









/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct s_words {
    char *str;                  //word
    int say;                  //number of times word occurs
    struct s_words *sonraki;       //pointer to next word
} words;


words *create_words (char *word){
    //+allocate space for the structure
    printf ("%lu ", strlen (word));
    words *newWord = malloc (sizeof (words));
    if(NULL != newWord) {
        //+allocate space for storing the new word in "str"
        //+if str was array of fixed size, storage wud be wasted
        newWord->str = (char *) malloc ((strlen (word)) + 1);
        strcpy (newWord->str, word);    //+copy “word” into newWord->str
        newWord->str[strlen (word)] = '\0';
        printf ("%s ", newWord->str);
        //+initialize say to 1;
        newWord->say = 1;
        //+initialize sonraki;
        newWord->sonraki = NULL;
    }
    return newWord;
}


words *kelime_ekle (words **wordList, char *word)
{
    if (!*wordList) {       // handle EMPTY list
        return *wordList = create_words (word);
    }

    words *temp = *wordList;
    //+ search if word exists in the list; if so, make found=1
    while (temp->sonraki != NULL) {    // iterate while temp->sonraki != NULL

        if (strcmp (temp->str, word) == 0) {    //+use strcmp command
            temp->say = temp->say + 1;      //+increment say;
            return *wordList;
        }
        else
            temp = temp->sonraki;  //+update temp
    }
    words *newWord = create_words (word);
    if (NULL != newWord) {  // insert at TAIL of list
        temp->sonraki = newWord;
        //printf ("%s\n ", newWord->str);
    }
    return newWord;
}



int main (int argc, char *argv[]){

    char metin[100];
    words *mywords;             //+head of linked list containing words
    mywords = NULL;
    char *delim = ", :;!?\t\n";

    FILE *myFile;

    myFile = fopen("metin.txt", "r");     //+first parameter is input file
    if (myFile == 0){
        printf ("Dosya acilamadi...\n");
        return 1;
    }

    //+start reading file character by character;
    //+when word has been detected; call the kelime_ekle function

    int ch = 0, word = 1, k = 0;

    while ((ch = fgetc (myFile)) != EOF){  // for each char
        if(strchr (delim, ch)){           // check if delim
            if(word == 1){    // if so, terminate word, reset
                word = 0;
                metin[k] = '\0';

                //printf ("\n%s\n", metin);
                // do NOT overwrite list address each time,
                // * you must send ADDRESS of list to kelime_ekle
                // * to handle EMPTY list case.

                if(kelime_ekle (&mywords, metin)){
                    printf ("%s:\n", mywords->str);
                }

                k = 0;
            }
        }
        else{  // if not delim, add char to string, set word 1
            word = 1;
            metin[k++] = tolower (ch);   // make ch lowercase
        }
    }

    /*
    words *currword;
    currword = mywords;


    while (currword != NULL){  // just test currword here
        //add word name then word count to file, then move to sonraki
        printf ("%s ", currword->str);
        currword = currword->sonraki;
    }
    */
    /*
    putchar ('\n');
    return 0;
}
*/
