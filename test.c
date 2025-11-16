#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    printf("Hello");
    printf("Coucou \n");

    int var = 4;
    int var_carre = pow(var,2);


    char mot_deviner[] = "bonjour";
    int len = strlen(mot_deviner);

    char joueur ;

    int lettre_presente = 0 ;
    for(int i = 0 ; i < len ; i++)
    {
        printf("%c" , mot_deviner[i]);

        if( joueur == mot_deviner[i])
        {
            lettre_presente++;
        }
    }


    return 0;
}