/*
 * File:    pipe_limit.c
 * Author:  Alexander Vindelinckx
 * Date:    14-4-2026
 *
 * Description:
 *   Finds the pipe buffer capacity by writing one byte at a
 *   time in non-blocking mode until EAGAIN, then reporting
 *   the total bytes written.
 */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <math.h>

int main(void)
{
    double x = 3, y = HUGE_VAL;

    signal(SIGFPE, SIG_IGN);
    printf("Ignore signal: x / 0 = %e\n", x/0.0);
    signal(SIGFPE, SIG_DFL);
    printf("Default signal: x / 0 = %e\n", x/0.0);
    return 0;
}
