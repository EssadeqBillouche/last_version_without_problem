#include"header.h"

int main()
{
    int user_needs, student_count, id_To_dit;
    student_count = 0;
                                              // init to avoid probmlems
        add_data_depart();
    add_data(&student_count, "essadeq", "billouche", 2000, 2, 15, "Computer Science", 12, 0);
    add_data(&student_count, "ahmed", "ano22uar", 2010, 22, 1, "Computer Science", 15, 0);
    add_data(&student_count, "khalid", "tqhri", 2010, 22, 1, "Mathematics", 15, 1);
    add_data(&student_count, "TAHA", "anouzrear", 2010, 22, 1, "Mathematics", 15, 1);
    add_data(&student_count, "abdilah", "anou99ar", 2010, 22, 1, "Physics", 15, 2);
    add_data(&student_count, "Mahmoud", "anou99ar", 2009, 22, 1, "Physics", 15, 2);
    add_data(&student_count, "Tarik", "ano666uar", 2010, 22, 1, "Chemistry", 15, 3);
    add_data(&student_count, "Abdrazak", "an112ouar", 2010, 22, 1, "Chemistry", 15, 3);
    do
    {
        display_menu(&user_needs);
        switch (user_needs)
            {
                case 1:
                        add_student(&student_count);
                break;
                case 2:
                        printf("\n Quille l' Id que tu pe editer ou supprimer:");
                        scanf("%d", &id_To_dit);
                        getchar();
                        modify_fun(&student_count,&id_To_dit);
                        break;
                case 3:
                        display_data(&student_count);
                        break;
                case 4:
                        average(&student_count);
                        break;
                case 5:
                        statis(&student_count);
                        break;
                default:
                        printf("\n please read the menu and try again \n");
                break;
            }
    } while (user_needs != 0);
    

}