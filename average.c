#include"header.h"
void average(int *p)
{ int averge_math = 0,averge_Comp = 0,averge_bilo = 0, averge_phy = 0;
int averge_math_counter = 0,averge_Comp_counter = 0,averge_bilo_counter = 0, averge_phy_counter = 0;
        for (int i = 0; i < *p; i++)
        {
                if(array_student[i].department_id == 0){
                    averge_Comp += array_student[i].general_note;
                    averge_Comp_counter++;    
                }
                if(array_student[i].department_id == 1){
                        averge_math += array_student[i].general_note;
                        averge_math_counter++;
                }
                if(array_student[i].department_id == 2){
                        averge_phy += array_student[i].general_note;
                        averge_phy_counter++;
                }
                if(array_student[i].department_id == 3){
                        averge_bilo += array_student[i].general_note;
                        averge_bilo_counter++;
                }
        }
        printf(" \n la note general de Computer Science :%d", averge_Comp/averge_Comp_counter);
        printf("\n  la note general de Mathematics :%d", averge_math/averge_math_counter);
        printf(" \n la note general de Physics :%d", averge_phy/averge_math_counter);
        printf(" \n la note general de Chemistry :%d", averge_bilo/averge_bilo_counter);
}