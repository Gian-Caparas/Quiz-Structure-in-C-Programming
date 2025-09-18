// Online C compiler to run C program online
#include <stdio.h>

struct date{
  
  int day;
  int month;
  int year;
    
};

void input(struct date *d1, struct date *d2){
    printf("Enter the date 1:\n");
    printf("Month: ");
    scanf("%d", &d1->month);
    printf("Day: ");
    scanf("%d", &d1->day);
    printf("Year: ");
    scanf("%d", &d1->year);
    
    printf("\nEnter the date 2:\n");
    printf("Month: ");
    scanf("%d", &d2->month);
    printf("Day: ");
    scanf("%d", &d2->day);
    printf("Year: ");
    scanf("%d", &d2->year);
    
}

int process(struct date d1, struct date d2){
    int dif, date1, date2;
    
    date1 = d1.year * 360 + d1.month * 30 + d1.day;
    date2 = d2.year * 360 + d2.month * 30 + d2.day;
    dif = date1>date2 ? date1-date2 : date2-date1;

    return dif;
}

void display(struct date d1, struct date d2, int diff){

    printf("\nDate 1: %d/%d/%d\n", d1.month, d1.day, d1.year);
    printf("Date 2: %d/%d/%d\n", d2.month, d2.day, d2.year);
    printf("Day: %d", diff);
}
int main() {

    struct date d1, d2;
    input(&d1, &d2);
    int diff = process(d1, d2);
    display(d1, d2, diff);

    return 0;
}