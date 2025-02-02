#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 50
#define MAX_PLAYERS 50

struct Player
{
    char name[MAX_NAME];
    char country[MAX_NAME];
    double batting_avg;
};

int main()
{
    struct Player players[MAX_NAME];

    int num_players, i;
    printf("Enter the number of players(up to %d):\n", MAX_NAME);
    scanf("%d", &num_players);
    getchar();

    for (i = 0; i < num_players; i++)
    {
        printf("Enter the details of players: %d", i + 1);

        printf("\nEnter the name of player: ");
        fgets(players[i].name, MAX_NAME, stdin);
        players[i].name[strcspn(players[i].name, "\n")] = '\0';

        printf("\nEnter the country of player: ");
        fgets(players[i].country, MAX_NAME, stdin);
        players[i].country[strcspn(players[i].country, "\n")] = '\0';

        printf("\nEnter the batting average of player: ");
        scanf("%lf", &players[i].batting_avg);
        getchar();
    }

    printf("\nDetails of Players:\n");
    for (int i = 0; i < num_players; i++)
    {
        printf("\nName: %s\t", players[i].name);
        printf("\nCountry: %s\t", players[i].country);
        printf("\naverage: %.2lf\t", players[i].batting_avg);
    }

    return 0;
}