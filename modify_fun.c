#include"header.h"

void modify_fun(int *studt_coun, int *id) {
    int user_needs;

    printf("\n1 - Modifier un étudiant 2 - Supprimer un étudiant: ");
    scanf("%d", &user_needs);
    getchar();

    if (user_needs == 1) {
        for (int i = 0; i < *studt_coun; i++) {
            if (array_student[i].student_id == *id) {
                printf("\nQue voulez-vous changer ?"
                       "\n1 - Modifier le prénom"
                       "\n2 - Modifier le nom"
                       "\n3 - Modifier l'ID"
                       "\n4 - Modifier le département"
                       "\n5 - Modifier la note"
                       "\n6 - Modifier la date de naissance\n");
                scanf("%d", &user_needs);
                getchar(); 

                switch (user_needs) {
                    case 1:
                        printf("Donner le nouveau prénom: ");
                        scanf("%[^\n]", array_student[i].first_name);
                        getchar(); 
                        break;
                    case 2:
                        printf("Donner le nouveau nom: ");
                        scanf("%[^\n]", array_student[i].last_name);
                        getchar(); 
                        break;
                    case 3:
                        printf("Donner le nouveau ID: ");
                        scanf("%d", &array_student[i].student_id);
                        getchar(); 
                        break;
                    case 4:
                        printf("Donner le nouveau département: ");
                        scanf("%[^\n]", array_student[i].department);
                        getchar();
                        break;
                    case 5:
                        printf("Donner la nouvelle note: ");
                        scanf("%d", &array_student[i].general_note);
                        getchar(); 
                        break;
                    case 6:
                        printf("Donner la nouvelle date (jour mois année): ");
                        scanf("%d %d %d", &array_student[i].birthday_day, &array_student[i].birthday_month, &array_student[i].birthday_year);
                        getchar(); 
                        break;
                    default:
                        printf("Choix incorrect\n");
                        break;
                }
            }
        }
    } else if (user_needs == 2) {
        for (int i = 0; i < *studt_coun; i++) {
            if (array_student[i].student_id == *id) {
                for (int j = i; j < *studt_coun - 1; j++) {
                    array_student[j] = array_student[j + 1];
                }
                (*studt_coun)--;
                break;
            }
        }
    }
}
