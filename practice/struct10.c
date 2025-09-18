#include <stdio.h>

struct Student{
    char name[30];
    float gpa;
};


int main(){

    struct Student students[4] = {
        {"Gian", 3.2},
        {"Ray", 3.9},
        {"Melvin", 2.8},
        {"Jay", 3.5}
    };

    int size = sizeof(students)/sizeof(students[0]);

    //bubble sort by GPA (descending) from a higher to a lower

    for(int i=0; i<size; i++){
        for(int j=0; j<size-i-1; j++){
            if(students[j].gpa < students[j+1].gpa){ //change (students[j].gpa > students[j+1].gpa) if mag ascending
                struct Student temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }

    printf("Students sorted by GPA:\n");
    for (int i = 0; i < 4; i++) {
        printf("%s - %.2f\n", students[i].name, students[i].gpa);
    }


    return 0;
}