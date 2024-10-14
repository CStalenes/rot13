#include "test.h"


Text *createText(char *str){
    Text *text = malloc(sizeof(Text));
    if(text == NULL){
        return NULL;
    }

    text->length = strlen(str)
    text->chaine = malloc(text->length+1);

    if (text->chaine == NULL) {
        free(newText); // Libération de la mémoire si l'allocation échoue
        return NULL;
    }
    
    strcpy(text->chaine, str); // Copie de la chaîne dans la structure
    return text;
}

void freeText(Text *text) {
    if (text != NULL) {
        free(text->chaine); // Libération de la chaîne
        free(text); // Libération de la structure
    }
}

int main() {
    Text *newText = createText("Hello tout le monde");
    if (newText!= NULL) {

        printf("Texte: %s\n", newText->chaine);
        printf("Longueur: %zu\n", newText->length);
        freeText(newText);
    
    } else {
        printf("Erreur lors de la création du texte.\n");
    }
    
    return 0;
}