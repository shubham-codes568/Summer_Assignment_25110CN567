#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[100];
    int count = 0;
    int choice, i;
    char search[50];

    do {
        printf("\n1.Add Contact\n2.Display Contacts\n3.Search Contact\n4.Exit\n");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Name: ");
                scanf("%s", contacts[count].name);

                printf("Enter Phone: ");
                scanf("%s", contacts[count].phone);

                count++;
                break;

            case 2:
                printf("\nContact List:\n");
                for(i = 0; i < count; i++) {
                    printf("%s - %s\n",
                           contacts[i].name,
                           contacts[i].phone);
                }
                break;

            case 3:
                printf("Enter Name to Search: ");
                scanf("%s", search);

                for(i = 0; i < count; i++) {
                    if(strcmp(contacts[i].name, search) == 0) {
                        printf("Phone Number: %s\n",
                               contacts[i].phone);
                    }
                }
                break;
        }

    } while(choice != 4);

    return 0;
}