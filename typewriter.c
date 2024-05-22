/***************************************************************************
 *        File: typewriter.c
 *     Created: 2024-05-20
 *    Modified: 2024-05-21
 *      Author: oknauta
 * Description: Prints "Hello, world!" character by character.
 *        Note: Created with Microsoft Notepad.
***************************************************************************/

#include <stdio.h>  // The library used to print.
#include <unistd.h> // The library used to add `sleep()`.

// Function prototype

/**
 * @brief Prints a string character by character.
 * @param string The text.
 * @param wait Microseconds to print another character.
 */
const char* Typewriter(const char *string, unsigned long int wait);

int main(int argc, char const *argv[]) 
{
    Typewriter("Hello, world!", 500000);
    return 0;
}

const char* Typewriter(const char *string, unsigned long int wait)
{
    // This `for` is selecting each character from `string`.
    for(int i = 0; string[i]; ++i) // When a loop is finished, a number is added. So I'm selecting the next character from `string` to print it.
     {
        printf("%c", string[i]);   // Prints the selected character.
        usleep(wait);              // The wait.
    }
    return string;
}