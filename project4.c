#include <stdio.h>
#include <string.h>
struct Item {
    char name[50];
    float price;
    int stock;
    char category[50];
};
void addItem(struct Item *items, int *n) {
    printf("\nEnter item details:\n");
    printf("Name: ");
    scanf("%s", items[*n].name);
    printf("Price: ");
    scanf("%f", &items[*n].price);
    printf("Stock: ");
    scanf("%d", &items[*n].stock);
    printf("Category: ");
    scanf("%s", items[*n].category);
    (*n)++;
}
void displayItems(struct Item *items, int n) {
    printf("Item Inventory:\n");
    for (int i = 0; i < n; i++) {
        printf("\nItem %d:\n", i + 1);
        printf("Name: %s\n", items[i].name);
        printf("Price: %.2f\n", items[i].price);
        printf("Stock: %d\n", items[i].stock);
        printf("Category: %s\n", items[i].category);
    }
}
void searchItem(struct Item *items, int n, const char *name) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(items[i].name, name) == 0) {
            printf("Item Found:\n");
            printf("Name: %s\n", items[i].name);
            printf("Price: %.2f\n", items[i].price);
            printf("Stock: %d\n", items[i].stock);
            printf("Category: %s\n", items[i].category);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nItem not found.\n");
    }
}
void updateStock(struct Item *items, int n, const char *name) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(items[i].name, name) == 0) {
            printf("Enter new stock: ");
            scanf("%d", &items[i].stock);
            printf("\nStock updated.\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nItem not found.\n");
    }
}
void deleteItem(struct Item *items, int *n, const char *name) {
    int found = 0;
    for (int i = 0; i < *n; i++) {
        if (strcmp(items[i].name, name) == 0) {
            for (int j = i; j < *n - 1; j++) {
                items[j] = items[j + 1];
            }
            (*n)--;
            printf("\nItem deleted.\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nItem not found.\n");
    }
}

int main() {
    struct Item items[100];
    int n = 0;
    int choice;
    char itemName[50];

    do {
        printf("\nGrocery Store Inventory\n");
        printf("Menu Options:\n");
        printf("1. Add an item\n");
        printf("2. Display all items\n");
        printf("3. Search an item by name\n");
        printf("4. Update stock of an item\n");
        printf("5. Delete an item\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addItem(items, &n);
                break;
            case 2:
                displayItems(items, n);
                break;
            case 3:
                printf("Enter item name to search: ");
                scanf("%s", itemName);
                searchItem(items, n, itemName);
                break;
            case 4:
                printf("Enter item name to update stock: ");
                scanf("%s", itemName);
                updateStock(items, n, itemName);
                break;
            case 5:
                printf("Enter item name to delete: ");
                scanf("%s", itemName);
                deleteItem(items, &n, itemName);
                break;
            case 6:
                printf("\nExiting...\n");
                break;
            default:
                printf("\nInvalid choice!\n");
        }
    } while (choice != 6);

    return 0;
}