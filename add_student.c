#include"header.h"
void add_student(int *p) {
    int student_count = *p;
    int depart_id;

    array_student[student_count].student_id = *p;

    
    printf("\nDonner le prénom de l'étudiant : ");
    scanf("%[^\n]", array_student[student_count].first_name);
    getchar();

    
    printf("\nDonner le nom de l'étudiant : ");
    scanf("%[^\n]", array_student[student_count].last_name);
    getchar();

    
    printf("\nDonner la date de naissance (jour mois année) : ");
    scanf("%d %d %d", &array_student[student_count].birthday_day, &array_student[student_count].birthday_month, &array_student[student_count].birthday_year);
    getchar(); 

    
    printf("\nDonner le département de l'étudiant : "
           "\n 0 - Computer Science"
           "\n 1 - Mathematics"
           "\n 2 - Physics"
           "\n 3 - Chemistry ");
    scanf("%d", &depart_id);
    getchar();
                switch (depart_id)
                {
                case 0:
                        strcpy(array_student[student_count].department, "Computer Science");
                        array_student[student_count].department_id = 0;
                        break;
                case 1:
                        strcpy(array_student[student_count].department, "Mathematics");
                        array_student[student_count].department_id = 1;
                        break;
                case 2:
                        strcpy(array_student[student_count].department, "Physics");
                        array_student[student_count].department_id = 2;
                        break;
                case 3:
                        strcpy(array_student[student_count].department, "Chemistry");
                        array_student[student_count].department_id = 3;
                        break;
                default:
                        break;
                }

    
    printf("\nDonner la note générale : ");
    scanf("%d", &array_student[student_count].general_note);
    getchar(); 
    printf("\nL'étudiant %s %s est ajouté dans le département %s avec l'ID %d\n", array_student[student_count].first_name, array_student[student_count].last_name, array_student[student_count].department, array_student[student_count].student_id);

    ++student_count;
    *p = student_count;
}