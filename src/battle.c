#include <stdio.h>
#include "battle.h"

void startBattle(Character *player, Enemy *enemy) {
    while (1) {
        // player's turn
        printf("%s attacks! ", player->name);
        enemy->health -= player->attack;
        if(enemy->health <= 0) {
            printf("the enemy is defeated!\n");
            break;
        }

        // enemy's turn

        printf("Enemy attacks! ");
        player->health -= enemy->attack;
        if(player->health <= 0) {
            printf("%s is defeated!\n", player->name);
            break;
        }
    }
    
}