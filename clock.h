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

  void setTime(char h = 0, char m = 0, char s = 0);
  void print12h();
  void print24h();
  void tick();
  void lapseSecs(Clock other);
  void lapseClock(Clock other);

private:
  char hours_, minutes_, seconds_;
  char years_, months_, days_;

};

#endif __CLOCK_H__