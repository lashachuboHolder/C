#include "stdio.h"
#include "string.h"
struct Student {
    char name[50];
    int age;
    float grade;
};

int main(){
    struct Student St1;

    strcpy(St1.name, "Alice"); St1.age = 20; St1.grade = 89.5;
    printf("Name: %s\nAge: %d\nGrade: %.2f\n", St1.name, St1.age, St1.grade);
    printf("\nAligning: name: %d, age: %d, grade: %d", &St1.name, &St1.age, &St1.grade)
}