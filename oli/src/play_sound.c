/*
** EPITECH PROJECT, 2021
** lib-csfml
** File description:
** play_sound
*/

#include "../../includes/oli_struct.h"

void play_sound(char *path)
{
    sfMusic *tmp = sfMusic_createFromFile(path);

    sfMusic_play(tmp);
    sfMusic_destroy(tmp);
}
