#include "rot13.c"



int main(){
    
    //char s1[] = " Onizuka GTO";
    
    //declaration tableau pour la chaine
    //char input[LEN_STR];

    
    char choice;
    char continueChoice;

    //utilisation avec malloc
    char *input = NULL;

    char *cryptedText;
    int size = 256;
   

    //l'utilite du do while c'est de faire aussi une boucle lorsque'on 
    //n'a pas besoin d'incrementer avec i+1 dans notre cas c'est pas necessaire donc on use le do while

    input = (char *)malloc(size * sizeof(char));
    //on initialise en créeant un première chaine

    if (!input) {
        fprintf(stderr, "Erreur d'allocation mémoire\n");
        return 1;
    }
   
    do{
        printf(" Chiffrer (c) ou Dechiffrer (d) ?: \n");
        scanf("%c",&choice);

       
        // continue nous permet de refaire une demande sans interompre le prog
        printf("\n Entrer une chaine à chiffrer: ");

        
        //fgets(input, sizeof(input), stdin);
        fgets(input, size, stdin);
        //Lecture de la chaine


        if(choice == 'c'){

            
            cryptedText  = rot13_malloc(input);
            
            printf("Mots chiffré : %s\n",cryptedText);
            


        }else {            
           
            cryptedText  = rot13_malloc(input);
            
            printf("Mots dechiffré : %s\n",cryptedText);
           

        }
        
        printf(" On continue ? (y / n)");
        scanf("%s",&continueChoice);
        

    }while (continueChoice == 'y');
    

    free(input);
    return 0;
}