#include"header.h"
void display_menu(int *i) {
    printf("\n1 - Ajouter un étudiant"
           "\n2 - Modifier ou supprimer un étudiant"
           "\n3 - Afficher les détails d'un étudiant"
           "\n4 - Calculer la moyenne générale"
           "\n5 - Statistiques"
           "\n6 - Rechercher un étudiant par"
           "\n7 - Trier un étudiant par"
           "\n0 - Quitter\n");

    scanf("%d", i);
    getchar(); 
}