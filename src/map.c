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