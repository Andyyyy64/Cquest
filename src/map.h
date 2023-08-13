#ifndef MAP_H
#define MAP_H

#define SIZE 10

typedef struct {
    int grid[SIZE][SIZE];
    // 0 = unvisited
    // 1 = visited
    // 2 = enemy
    // 3 = player
} Map;

#endif
