/***************************************************************************
 *        File: struct.c
 *     Created: 2024-05-31
 *    Modified: 2024-05-31
 *      Author: oknauta
 * Description: Defines a album music `struct` in C.
 *        Note: My first C compilation in Linux.
***************************************************************************/

#include <stdio.h> // Library to print.

struct album // Creates a `struct` that will be an music album.
{
    char *author;
    char *albumName;
    short int year; short int month; short int day; // @brief Released date.
};

int main(int argc, char const *argv[])
{
    // Declaring the album struct.
    struct album aMoonShapedPool =
    {
        .albumName = "A Moon Shaped Pool",
        .author    = "Radiohead",
        .year      = 2016,
        .month     = 5,
        .day       = 8
    };
    
    // Album information to be printed.
    printf
    (
        "Album:         %s\n"
        "Author:        %s\n"
        "Released date: %d-%02d-%02d\n",
        aMoonShapedPool.albumName,
        aMoonShapedPool.author,
        aMoonShapedPool.year,
        aMoonShapedPool.month,
        aMoonShapedPool.day
    );
    
    return 0;
}
