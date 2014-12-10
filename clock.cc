/* Clock.cc
*  Simple implementation of a clock class
*
*  @author  Jose Luis Jimenez Urbano | <ijos@ijos.es> | < @iJos >
*  December 2014
*/

#include <stdio.h>
#include "clock.h"

Clock::Clock(){
  hours_ = 0;
  minutes_ = 0;
  seconds_ = 0;

  years_ = 1991;
  months_ = 12;
  days_ = 30;
}

void Clock::setTime(char h, char m, char s){
  
  if (h > 0 && h <= 24)
    hours_ = h;
  if (m > 0 && m <= 60)
    minutes_ = m;
  if (s > 0 && s <= 60)
    seconds_ = s;
}

void Clock::print12h(){

}

void Clock::print24h(){
  printf("%d:%d:%d", hours_, minutes_, seconds_);
}

void Clock::tick(){
  if (seconds_ == 59){
    seconds_ = 0;
    //aumentar horas y minutos
  }
  else if (seconds_ < 59){
    seconds_ = seconds_ + 1;
  }
}