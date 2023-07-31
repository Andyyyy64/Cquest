#ifndef ENEMY_H
#define ENEMY_H

#include "character.h"

typedef struct {
    char name[50];
    int health;
    int attack;
    int speed;
} Enemy;

void createEnemy(Enemy *enemy);

#endif