/*
** EPITECH PROJECT, 2021
** lib-csfml
** File description:
** move_sprite
*/

#include "../../includes/oli_struct.h"

void move_sprite(sprite_t *sprite, char dir)
{
    sfVector2f direction = (sfVector2f){0, 0};

    direction.x = sprite->speed * ((dir == 'd') - (dir == 'u'));
    direction.y = sprite->speed * ((dir == 'r') - (dir == 'l'));
    sfSprite_move(sprite->sprite, direction);
    sprite->pos = sfSprite_getPosition(sprite->sprite);
}