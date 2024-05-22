/***************************************************************************
 *        File: bad_malloc.c
 *     Created: 2024-05-21
 *    Modified: 2024-05-21
 *      Author: oknauta
 * Description: Creates GARBAGE in memory.
 *        Note: Created with Microsoft Notepad.
***************************************************************************/

#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const* argcv[])
{
    while(true)
    {
        malloc(1); // Moves 1 byte to memory.
    }
    return 0;
}
