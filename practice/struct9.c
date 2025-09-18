#include <stdio.h>
#include <string.h>

struct Book{
    char title[30];
    char author[30];
};

int main(){
    
    struct Book library[3]={
        {"Encantadia", "Cedrik"},
        {"Barbie House", "Ray"},
        {"Ben 10", "Gian"},
    };

    char search[30];
    printf("Enter book title to search: ");
    scanf("%[^\n]s", search);

    int found = 0;
    int size = sizeof(library)/sizeof(library[0]);

    for(int i=0; i<size; i++){
        if(strcmp(library[i].title, search) == 0){
            printf("Bookfound!\n");
            printf("Title: %s\tAuthor: %s", library[i].title, library[i].author);
            found = 1;
            break;
        }
    }

    if(found == 0){
        printf("Book not found, Im sorry :(\n");
    }

    return 0;
}