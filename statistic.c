#include"header.h"
void statis(int * pointer)
{
        int user_needs;
        printf("\n 1 - Afficher le nombre total d'étudiants inscrits."

                "\n2 - Afficher le nombre d'étudiants dans chaque département."

                "\n3 - Afficher les étudiants ayant une moyenne générale supérieure à un certain seuil."

                "\n4 - Afficher les 3 étudiants ayant les meilleures notes."

                "\n5 - Afficher le nombre d'étudiants ayant réussi dans chaque département");
        scanf("%d", &user_needs);

        switch (user_needs)
        {
        case 1:
                printf("\nle nombre total d'étudiants inscrits : %d", *pointer);
                break;
        case 2:
                printf("\nle nombre total d'étudiants inscrits : %d", *pointer);
                break;
        default:

                break;
        }

}