#include <stdio.h>
#include <stdlib.h>
#include "chastelib.h"
#include "nand.h"
int main(int argc, char *argv[])
{
 int a=3,b=5;
 putstring("Test of Bitwise Operations\n\n");
 
 turing_bitwise_nand(a,b);

 return 0;
}

