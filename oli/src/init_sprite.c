/*
** EPITECH PROJECT, 2021
** lib-csfml
** File description:
** create_sprite
*/

#include "../../includes/oli_struct.h"
#include <stdio.h>
#include <stdlib.h>

sprite_t *init_sprite(char *filepath)
{
    sprite_t *sprite = malloc(sizeof(sprite_t));

    if (sprite == NULL)
        return (NULL);
    sprite->texture = sfTexture_createFromFile(filepath, NULL);
    sprite->sprite = sfSprite_create();
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sprite->pos = (sfVector2f){0, 0};
    sprite->size = (sfVector2f){1, 1};
    return (sprite);
}