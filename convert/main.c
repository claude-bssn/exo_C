#include <stdio.h>
#include <stdlib.h>

int main()
{
    float euro = 0.86;
    float dollar = 1.16;
    int num;
    char devise;

    printf("choisissez votre devise de conversion. Tapez: \n E pour euro \n D pour dollar \n");
    scanf("%s", &devise);

    if ( devise == 'E' ||  devise == 'e'){
        printf("Quel est votre montant: ");
        scanf("%d",  &num);
        printf( "%f € ", num * euro);
    }else if ( devise == 'D' ||  devise == 'd'){
        printf("Quel est votre montant: ");
        scanf("%d",  &num);
        printf("%f $", num * dollar);
    } else{
        printf("Valeur inconue !");
    }

    return 0;

}
