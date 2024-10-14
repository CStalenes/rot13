#include "rot13.h"
#include <string.h>
#include <stdio.h>


#define LEN_STR 256


char* rot13_malloc(char *str){

    if (str == NULL) {
        return NULL;
    }


    //int nb_str = strlen(str);
    char *str_crypted = (char *)calloc(LEN_STR, sizeof(char));


    if(!str_crypted){
        fprintf(stderr, "Erreur d'allocation mémoire\n");
        exit(1);
    }

    for(int i = 0; i < LEN_STR; i++){
        char c = str[i];
        
        if(c >='A' && c <= 'Z'){
            str_crypted[i] = (c-'A' + 13) % 26 + 'A';
        }

        else if( c>= 'a' && c<= 'z'){
            str_crypted[i] = (c-'a' + 13) % 26 + 'a';
        }
    }

    str_crypted[LEN_STR] = '\0';

    return str_crypted;

}