#ifndef BATTLE_H
#define BATTLE_H

#include "character.h"

typedef struct {
    Character character;
    int health;
    int attack;
} Enemy;

void startBattle(Character *Player, Enemy *enemy);

#endif