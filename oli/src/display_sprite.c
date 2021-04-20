/*
** EPITECH PROJECT, 2021
** lib-csfml
** File description:
** display_sprite
*/

#include "../../includes/oli_struct.h"

void display_sprite(sprite_t *sprite, sfRenderWindow *window)
{
    sfSprite_setPosition(sprite->sprite, sprite->pos);
    sfSprite_setScale(sprite->sprite, sprite->size);
    sfRenderWindow_drawSprite(window, sprite->sprite, NULL);
}