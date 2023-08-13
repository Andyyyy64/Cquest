#include <stdio.h>
#include "battle.h"

void startBattle(Character *player, Enemy *enemy) {
    while (1) {

        if (player->speed >= enemy->speed) {
            printf("%s attacks! ", player->name);
            enemy->health -= player->attack;
            if(enemy->health <= 0) {
                printf("the enemy is defeated!\n");
                break;
            }
            
            printf("%s attacks! ", enemy->name);
            player->health -= enemy->attack;
            if(player->health <= 0) {
                printf("%s is defeated!\n", player->name);
                break;
            }
        } 
        else {
            printf("%s attacks! ", enemy->name);
            player->health -= enemy->attack;
            if(player->health <= 0) {
                printf("%s is defeated!\n", player->name);
                break;
            }
            
            printf("%s attacks! ", player->name);
            enemy->health -= player->attack;
            if(enemy->health <= 0) {
                printf("the enemy is defeated!\n");
                break;
            }
        }
    }
    
}