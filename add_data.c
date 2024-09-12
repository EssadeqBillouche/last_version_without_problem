#include"header.h"

void add_data(int *counter, const char *first_n, const char *last_n, int birth_y, int birth_m, int birth_d, const char *department, int note, int dep_id)
{
        int id = *counter;
    printf("%s %s\n", first_n, last_n);
    strcpy(array_student[*counter].first_name, first_n);
    strcpy(array_student[*counter].last_name, last_n);
    strcpy(array_student[*counter].department, department);
    array_student[*counter].birthday_day = birth_d;
    array_student[*counter].birthday_month = birth_m;
    array_student[*counter].birthday_year = birth_y;
    array_student[*counter].general_note = note;
    array_student[*counter].department_id = dep_id;
    array_student[*counter].student_id = id;
    id ++;
    *counter = id;
}