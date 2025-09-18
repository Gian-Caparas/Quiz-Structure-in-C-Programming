#include <stdio.h>

struct Students{

    char name[50];
    int rollNumber;
    float gpa;

};

void display(struct Students student[], int size){

    for(int i=0; i<size; i++){
        printf("Name:\t%s, Roll number:\t%d, GPA:\t%f\n", student[i].name, student[i].rollNumber, student[i].gpa);
    }
}

int main(){

    struct Students student[3] = {
        {"Gian", 101, 5.0},
        {"Ray", 100, 4.9},
        {"Jay", 102, 4.8},
    };

    int size = sizeof(student)/sizeof(student[0]);
    
    display(student, size);

    return 0;
}

