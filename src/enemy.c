#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "enemy.h"

void createEnemy(Enemy *enemy) {
    const char *names[] = {"Goblin", "Orc", "Troll", "Dragon"};
    strncpy(enemy->name,names[rand() % 4], 50);
    enemy->health = rand() % 61 + 40;
    enemy->attack = rand() % 16 + 10;
    enemy->speed = rand() % 11 + 5;
}

