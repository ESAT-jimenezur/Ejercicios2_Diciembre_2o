/*  main.cc
*  Main function
*
*  @author  Jose Luis Jimenez Urbano | <ijos@ijos.es> | < @iJos >
*  December 2014
*/

#include <stdio.h>
#include "clock.h"

int main(int argc, char **argv) {

  Clock clock;


  clock.print24h();

  getchar();

	return 0;
}