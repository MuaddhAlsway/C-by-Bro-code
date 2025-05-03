#include <stdio.h>
#include <string.h>


typedef struct  {
    char name[25];
    char password[15];
    int id;
} User;

int main() {
    User user1 = {"Moath", "Password123", 12345};
    User user2 = {"Me" , "Pass" , 78910};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("\n");
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);

    return 0;



}