#include <stdio.h>

// Define a struct for date
struct date {
    int day;
    int month;
    int year;
};

// Function to input a date and return it
struct date input() {
    struct date d;
    printf("Month: ");
    scanf("%d", &d.month);
    printf("Day: ");
    scanf("%d", &d.day);
    printf("Year: ");
    scanf("%d", &d.year);
    return d;
}

// Function to display two dates
void display(struct date d1, struct date d2) {
    printf("\nDate 1: %d/%d/%d\n", d1.month, d1.day, d1.year);
    printf("Date 2: %d/%d/%d\n", d2.month, d2.day, d2.year);
}

int main() {
    struct date d1, d2;

    // Get input for both dates
    d1 = input();
    d2 = input();

    // Display both dates
    display(d1, d2);

    return 0;
}
