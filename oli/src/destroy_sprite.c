/*
** EPITECH PROJECT, 2021
** lib-csfml
** File description:
** destroy_sprite
*/

#include "../../includes/oli_struct.h"
#include <stdlib.h>

void destroy_sprite(sprite_t *sprite)
{
    sfSprite_destroy(sprite->sprite);
    sfTexture_destroy(sprite->texture);
    free(sprite);
}