#include <stdio.h>

//typedef alias at the end
typedef struct Temp
{
    float cel;
    float fah;
} Temp;   // <- This is the alias you can use directly

void display(Temp *t) {
    printf("Celcius: %.2f\n", t->cel);
    printf("Fahrenheit: %.2f\n", t->fah);
}

int main() {
    Temp t;   // Now you can use Temp directly
    t.cel = 123.12;
    t.fah = 12.23;

    display(&t);

    return 0;
}
