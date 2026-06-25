#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item item[100];
    int n = 0, choice, i;

    do {
        printf("\n--- Inventory Management ---\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item by ID\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Item ID: ");
                scanf("%d", &item[n].id);

                printf("Enter Item Name: ");
                scanf("%s", item[n].name);

                printf("Enter Quantity: ");
                scanf("%d", &item[n].quantity);

                printf("Enter Price: ");
                scanf("%f", &item[n].price);

                n++;
                printf("Item Added Successfully!\n");
                break;

            case 2:
                printf("\nInventory Details:\n");
                for(i = 0; i < n; i++) {
                    printf("ID: %d\n", item[i].id);
                    printf("Name: %s\n", item[i].name);
                    printf("Quantity: %d\n", item[i].quantity);
                    printf("Price: %.2f\n\n", item[i].price);
                }
                break;

            case 3: {
                int searchId, found = 0;

                printf("Enter Item ID to Search: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++) {
                    if(item[i].id == searchId) {
                        printf("Item Found!\n");
                        printf("Name: %s\n", item[i].name);
                        printf("Quantity: %d\n", item[i].quantity);
                        printf("Price: %.2f\n", item[i].price);
                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Item Not Found!\n");
                break;
            }

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}