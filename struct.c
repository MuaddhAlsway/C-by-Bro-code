#include <stdio.h>
#include <string.h>


struct Player 
{
    char name[15];
    int score;
};

int main()
{

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Moath");
    player1.score = 4;

    strcpy(player2.name, "memo");
    player2.score = 5;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);

    return 0;
}