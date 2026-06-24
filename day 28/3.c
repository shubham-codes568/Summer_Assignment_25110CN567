#include <stdio.h>

int main() {
    int seats = 10;
    int choice, book;

    do {
        printf("\n1.Book Ticket\n2.Display Seats\n3.Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Available Seats: %d\n", seats);
                printf("Enter Number of Seats: ");
                scanf("%d", &book);

                if(book <= seats) {
                    seats -= book;
                    printf("Booking Successful\n");
                } else {
                    printf("Seats Not Available\n");
                }
                break;

            case 2:
                printf("Remaining Seats: %d\n", seats);
                break;
        }

    } while(choice != 3);

    return 0;
}