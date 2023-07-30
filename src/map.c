#include <stdio.h>
#include <time.h>

#include "map.h"

void intializeMap(Map* map) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            map->grid[i][j] = 0;
        }
    }
    // place the player at the center
    map->grid[SIZE / 2][SIZE / 2] = 3;
}

void updateMap(Map *map) {
    // Spawn a new enemy randomly
    srand(time(NULL)); // seed the random number generator
    if (rand() % 10 == 0) {
        // get a random number between 0 and SIZE - 1
        int x = rand() % SIZE; 
        int y = rand() % SIZE; 
        map->grid[x][y] = 2; // place an enemy
    }
}