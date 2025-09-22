#include <stdio.h>
#include<stdbool.h>
int main(){
    int correct_password= 12345678;
    int password;
    do {
        printf("Enter the password: ");
        scanf("%d",&password);

        if (password==correct_password) {
            printf("Access granted!\n");
            break;
        } else {
          printf("Incorrect password.Try again.\n");
        }
    } while(true);
    return 0;
}
