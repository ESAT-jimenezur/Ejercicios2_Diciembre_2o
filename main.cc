/* main.cc
*  Main function
*
*  @author  Jose Luis Jimenez Urbano | <ijos@ijos.es> | < @iJos >
*  December 2014
*/

#include <stdio.h>
#include "clock.h"

int main(int argc, char **argv) {

  Clock clock;
  Clock clock2;

  clock.lapseSecs(clock2);

  getchar();

	return 0;
}