#include <stdio.h>
#include <string.h>
#include "character.h"

void createCharacter(Character *character)
{
    printf("Enter your name: ");

    // use fgets to get the name,
    // first parameter is the variable to store the input,
    // second parameter is the maximum length of the input,this is to prevent buffer overflow
    // third parameter is the input source
    fgets(character->name, 50, stdin);

    // fgets will insort a new line character at the end of the input,
    // so we need to replace it with a null character(\0) using strcspn
    // first parameter is the string to be processed,
    // second parameter is the string containing the characters to match
    character->name[strcspn(character->name, "\n")] = 0;

    // set initital status
    character->health = 100;
    character->magic = 50;
    character->attack = 20;
    character->defense = 10;
}