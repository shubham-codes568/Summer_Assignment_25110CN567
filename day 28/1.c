#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    int issued;
};

int main() {
    struct Book books[2] = {
        {1, "C Programming", 0},
        {2, "Data Structures", 0}
    };

    int choice, id, i;

    do {
        printf("\n1.Display Books\n2.Issue Book\n3.Return Book\n4.Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nBook List:\n");
                for(i = 0; i < 2; i++) {
                    printf("%d %s %s\n",
                           books[i].id,
                           books[i].title,
                           books[i].issued ? "Issued" : "Available");
                }
                break;

            case 2:
                printf("Enter Book ID: ");
                scanf("%d", &id);

                for(i = 0; i < 2; i++) {
                    if(books[i].id == id && books[i].issued == 0) {
                        books[i].issued = 1;
                        printf("Book Issued Successfully\n");
                    }
                }
                break;

            case 3:
                printf("Enter Book ID: ");
                scanf("%d", &id);

                for(i = 0; i < 2; i++) {
                    if(books[i].id == id && books[i].issued == 1) {
                        books[i].issued = 0;
                        printf("Book Returned Successfully\n");
                    }
                }
                break;
        }
    } while(choice != 4);

    return 0;
}