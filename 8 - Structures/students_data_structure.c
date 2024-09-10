#include<stdio.h>
#include<string.h>

struct StudentsData
{
    char name[100];
    char reg[10];
    int  roll;
    float cgpa;
};


int main()
{
    struct StudentsData student1;
    strcpy(student1.name , "Bilawal");
    strcpy(student1.reg , "23MDSWE277");
    student1.roll = 36;
    student1.cgpa = 4.00;

    printf("\nName Of Student Is :    %s",student1.name);
    printf("\nRegistration Number :   %s",student1.reg);
    printf("\nRoll No :   %d",student1.roll);
    printf("\nCGPA :      %f",student1.cgpa);

    struct StudentsData student2;
    strcpy(student2.name , "Amna");
    strcpy(student2.reg , "23MDSWE278");
    student2.roll = 37;
    student2.cgpa = 2.8;

    printf("\n\n\nName Of Student Is :    %s",student2.name);
    printf("\nRegistration Number :   %s",student2.reg);
    printf("\nRoll No :   %d",student2.roll);
    printf("\nCGPA :      %f",student2.cgpa);

    struct StudentsData student3;
    strcpy(student3.name , "Ayaan");
    strcpy(student3.reg , "23MDSWE279");
    student3.roll = 38;
    student3.cgpa = 3.5;
    
    printf("\n\n\nName Of Student Is :    %s",student3.name);
    printf("\nRegistration Number :   %s",student3.reg);
    printf("\nRoll No :   %d",student3.roll);
    printf("\nCGPA :      %f",student3.cgpa);
}