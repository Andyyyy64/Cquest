#ifndef CHARACTER_H
#define CHARACTER_H
// this to prevent multiple inclusion of header files

typedef struct {
    char name[50];
    int health;
    int magic;
    int attack;
    int speed;
} Character;

#endif
