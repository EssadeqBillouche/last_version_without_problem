#include"header.h"
void display_data(int *student_count) {
    int id;
    for (int i = 0; i < *student_count; i++) {
        
            printf("\nNom et prénom : %s %s"
                   "\nDate de naissance : %02d/%02d/%04d"
                   "\nDépartement : %s"
                   "\nID : %d"
                   "\nNote générale : %d\n", 
                   array_student[i].last_name, 
                   array_student[i].first_name, 
                   array_student[i].birthday_day, 
                   array_student[i].birthday_month, 
                   array_student[i].birthday_year, 
                   array_student[i].department, 
                   array_student[i].student_id, 
                   array_student[i].general_note);
            
        }
}