/***************************************************************
 * File: time_to_reach_ground.c
 * Created: 2024-05-23
 * Modified: 2024-05-23
 * Author: oknauta
 * Description: Calculate to
***************************************************************/

#include <stdio.h> // To print.
#include <math.h>  // To squareroot.

// The Earth gravity
#define GRAVITY 9.80665

/**
 * @brief Calculates the time to the object reach the ground.
 * @param HEIGHT The height from release.
*/
double TimeWhenDropped(const double HEIGHT);

int main(int argc, char *argv[])
{
    double userHeight;
    
    printf("Height: ");
    
    if(scanf("%lf", &userHeight) != 1)
    {
        printf("Must be numbers.");
    }
    
    printf("The time to reach the ground was %lf seconds.\n", TimeWhenDropped(userHeight));
    return 0;
}

double TimeWhenDropped(const double HEIGHT)
{
    return sqrt(2 * HEIGHT / GRAVITY);
}