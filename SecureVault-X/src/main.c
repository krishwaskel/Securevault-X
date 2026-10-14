#include <stdio.h>

struct Credential {
    char website[50];
    char username[50];
    char password[50];
};


int main() {
    int choice;
    struct Credential vault[10];
    int count = 0;

    do {
        printf("\n========================\n");
        printf("      SECUREVAULT X\n");
        printf("========================\n");
        printf("1. Add Password\n");
        printf("2. View Passwords\n");
        printf("3. Search Password\n");
        printf("4. Update Password\n");
        printf("5. Delete Password\n");
        printf("0. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            
            
            case 1:
                if (count >= 10) {
                printf("Vault is full!\n");
                break;
        }

                printf("\nEnter website: ");
                scanf("%49s", vault[count].website);

                printf("Enter username: ");
                scanf("%49s", vault[count].username);

                printf("Enter demo password: ");
                scanf("%49s", vault[count].password);

            count++;

                printf("\nCredential added successfully!\n");
                break;
                
            case 2:
                if (count == 0) {
                printf("\nVault is empty!\n");
            } else {
                printf("\n=== SAVED ACCOUNTS ===\n");

                for (int i = 0; i < count; i++) {
                printf("\nAccount %d\n", i + 1);
                printf("Website: %s\n", vault[i].website);
                printf("Username: %s\n", vault[i].username);
            }
            }
                break;


            case 3:
                printf("Search Password selected\n");
                break;

            case 4:
                printf("Update Password selected\n");
                break;

            case 5:
                printf("Delete Password selected\n");
                break;

            case 0:
                printf("Exiting SecureVault X...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 0);

    return 0;
}