#include <stdio.h>
#include <stdlib.h>
#include "../src/throw.h"



int
main(void)
{
    throw("Runtime exception\n");

    printf("Program exit..\n");
    return EXIT_SUCCESS;
}


