#ifndef HEADER_H
#define HEADER_H

#include <string.h>
#include"stdio.h"

struct student
{
    int student_id;
    char first_name[20];
    char last_name[20];
    int birthday_year;
    int birthday_month;
    int birthday_day;
    char department[20];
    int general_note;
    int department_id;


};
struct student array_student[100]; // arrat of student


struct department
{
    int id;
    char name[40];
};
struct department array_department[4];

struct manag_stud_depar_ID // managment the ralation betzeen students and departments (many - to many 
{
    int student_id;
    int department_id;
    
};

void add_data(int *counter, const char *first_n, const char *last_n, int birth_y, int birth_m, int birth_d, const char *department, int note, int id);

void display_menu(int *i); // display menu

void add_student(int *a); // add student to database

void modify_fun(int *studt_coun,int *id); // modify data

void display_data(int * student_count); // display data with id

void add_data_depart();

void average(int *p);

void statis(int * pointer);

#endif