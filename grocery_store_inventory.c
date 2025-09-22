#include <stdio.h>
#include <string.h>
#define MAX_ITEMS 100
struct Item{
    char name[30];
    float price;
    int stock;
    char category[20];
};

struct Item inventory[MAX_ITEMS];
int itemCount = 0;

void addItem(){
    char choice;
    do {
        if (itemCount < MAX_ITEMS)
        {
            printf("Enter item name: ");
            scanf("%s", inventory[itemCount].name);
            printf("Enter item price: ");
            scanf("%f", &inventory[itemCount].price);
            printf("Enter item stock: ");
            scanf("%d", &inventory[itemCount].stock);
            printf("Enter item category: ");
            scanf("%s", inventory[itemCount].category);
            itemCount++;
        } else 
        {
            printf("Inventory is full.\n");
            break;
        }
        printf("Do you want to add another item? (y/n): ");
        scanf(" %c", &choice);
    }
    while (choice == 'y');
}

void displayItems()
{
    for (int i = 0; i < itemCount; i++) 
    {
        printf("Name: %s, Price: %.2f, Stock: %d, Category: %s\n", 
        inventory[i].name, inventory[i].price, inventory[i].stock, inventory[i].category);
    }
}

void searchItem()
{
    char name[30];
    printf("Enter item name to search: ");
    scanf("%s", name);
    for (int i = 0; i < itemCount; i++)
    {
        if (strcmp(inventory[i].name, name) == 0)
        {
            printf("Name: %s, Price: %.2f, Stock: %d, Category: %s\n", 
            inventory[i].name, inventory[i].price, inventory[i].stock, inventory[i].category);
            return;
        }
    }
    printf("Item not found!\n");
}

void updateStock()
{
    char name[30];
    int newStock;
    printf("Enter item name to update stock: ");
    scanf("%s", name);
    printf("Enter new stock value: ");
    scanf("%d", &newStock);
    for (int i = 0; i < itemCount; i++)
    {
        if (strcmp(inventory[i].name, name) == 0)
        {
            inventory[i].stock = newStock;
            printf("Stock updated!\n");
            return;
        }
    }
    printf("Item not found!\n");
}

void deleteItem()
{
    char name[30];
    printf("Enter item name to delete: ");
    scanf("%s", name);
    for (int i = 0; i < itemCount; i++)
    {
        if (strcmp(inventory[i].name, name) == 0)
        {
            for (int j = i; j < itemCount - 1; j++)
            {
                inventory[j] = inventory[j + 1];
            }
            itemCount--;
            printf("Item deleted!\n");
            return;
        }
    }
    printf("Item not found!\n");
}

int main()
{
    int choice;
    do
    {
        printf("Grocery Store Inventory\n");
        printf("Menu Options:\n");
        printf("1. Add an item\n");
        printf("2. Display all items\n");
        printf("3. Search an item by name\n");
        printf("4. Update stock of an item\n");
        printf("5. Delete an item\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1: 
                addItem(); 
                break;
            case 2: 
                displayItems(); 
                break;
            case 3:
                searchItem(); 
                break;
            case 4: 
                updateStock(); 
                break;
            case 5: 
                deleteItem(); 
                break;
        }
    }while(choice != 6);

    return 0;
}
