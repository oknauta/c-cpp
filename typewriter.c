/***************************************************************************
 *        File: typewriter.c
 *     Created: 2024-05-20
 *    Modified: 2024-05-20
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
 * @param wait The wait to print another character.
 */
void Typewriter(const char *string, unsigned long int wait);

int main(int argc, char const *argv[]) 
{
    int wait = 100000;
    Typewriter("Hello...", wait);
    sleep(1);
    Typewriter(" world!", wait);
    return 0;
}

void Typewriter(const char *string, unsigned long int wait)
{
                                   // This function is accessing each character from `string`.
    for(int i = 0; string[i]; ++i) // When a loop is finished, a number is added. So I'm selecting the character from `string`.
     {
        printf("%c", string[i]);   // Prints the selected character.
        usleep(wait);              // The wait.
    }
}