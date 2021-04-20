/*
** EPITECH PROJECT, 2021
** lib-csfml
** File description:
** sprite_is_hovered
*/

#include "../../includes/oli_struct.h"

bool sprite_hover(sprite_t *sprite, sfMouseMoveEvent event)
{
    sfFloatRect zone = sfSprite_getGlobalBounds(sprite->sprite);

    if (sfFloatRect_contains(&zone, event.x, event.y))
        return (true);
    return (false);
}