/* Clock.h
*  Simple declaration of a clock class
*
*  @author  Jose Luis Jimenez Urbano | <ijos@ijos.es> | < @iJos >
*  December 2014
*/

#ifndef __CLOCK_H__
#define __CLOCK_H__

class Clock {
public:
  Clock();
  void setTime();
  void print12h();
  void print24h();

private:
  char hours, minutes, seconds;
  char years, months, days;

};

#endif __CLOCK_H__