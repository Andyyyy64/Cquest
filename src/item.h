#ifndef ITEM_H
#define ITEM_H

#include "character.h"

typedef struct {
    char name[50];
    int healthBoost;
    int magicBoost;
} Item;

void useItem(Character *character, Item *item);

#endif
