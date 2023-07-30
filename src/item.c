#include <stdio.h>
#include "item.h"

void useItem(Character *character, Item *item) {
    printf("%s uses %s!", character->name, item->name);
    character->health += item->healthBoost;
    character->magic += item->magicBoost;
}