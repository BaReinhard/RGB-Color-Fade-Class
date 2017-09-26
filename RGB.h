#include "fade.h"
<<<<<<< HEAD
class RGB
{
=======
// This class will likely get rewritten for something a bit simpler, 
// possibly even rewritten as some sort of factory/ HOF (High order function)
class RGB{
    
>>>>>>> 4d722d9043bc8b9e9ccaa643413d0aa887f469aa
    int _r;
    int _g;
    int _b;
    int _delay;
    void cleanUp()
    {
        analogWrite(_r, 0);
        analogWrite(_g, 0);
        analogWrite(_b, 0);
    }

  public:
    void init()
    {
        analogWrite(_r, 255);
        analogWrite(_g, 0);
        analogWrite(_b, 0);
    }
    // Customize Pins
    RGB(int r, int g, int b, int d) : _r(r), _g(g), _b(b), _delay(d) {}
    // Default Pins
<<<<<<< HEAD
    RGB() : _r(9), _g(10), _b(11), _delay(25) {}
    ~RGB() { cleanUp(); }
    void fadeGreenUp()
    {
        auto f = curry(Fade, GREEN, true, _r, _g, _b, _delay);
        f();
    }
    void fadeGreenDown()
    {
        auto f = curry(Fade, GREEN, false, _r, _g, _b, _delay);
        f();
    }
    void fadeGreenUp(int newDelay)
    {
        auto f = curry(Fade, GREEN, true, _r, _g, _b, newDelay);
        f();
    }
    void fadeGreenDown(int newDelay)
    {
        auto f = curry(Fade, GREEN, false, _r, _g, _b, newDelay);
        f();
    }
    void fadeRedUp()
    {
        auto f = curry(Fade, RED, true, _r, _g, _b, _delay);
        f();
    }
    void fadeRedDown()
    {
        auto f = curry(Fade, RED, false, _r, _g, _b, _delay);
        f();
    }
    void fadeRedUp(int newDelay)
    {
        auto f = curry(Fade, RED, true, _r, _g, _b, newDelay);
        f();
    }
    void fadeRedDown(int newDelay)
    {
        auto f = curry(Fade, RED, false, _r, _g, _b, newDelay);
        f();
    }
    void fadeBlueUp()
    {
        auto f = curry(Fade, BLUE, true, _r, _g, _b, _delay);
        f();
    }
    void fadeBlueUp(int newDelay)
    {
        auto f = curry(Fade, BLUE, true, _r, _g, _b, newDelay);
        f();
    }
    void fadeBlueDown()
    {
        auto f = curry(Fade, BLUE, false, _r, _g, _b, _delay);
        f();
    }
    void fadeBlueDown(int newDelay)
    {
        auto f = curry(Fade, BLUE, false, _r, _g, _b, newDelay);
        f();
    }

    void fadeGreenUpFlash()
    {
        auto f = curry(fadeGreenIncFlash, _r, _g, _b, _delay);
        f();
    }
    void fadeGreenDownFlash()
    {
        auto f = curry(fadeGreenDecFlash, _r, _g, _b, _delay);
        f();
    }
    void fadeRedUpFlash()
    {
        auto f = curry(fadeRedIncFlash, _r, _g, _b, _delay);
        f();
    }
    void fadeRedDownFlash()
    {
        auto f = curry(fadeRedDecFlash, _r, _g, _b, _delay);
        f();
    }
    void fadeBlueUpFlash()
    {
        auto f = curry(fadeBlueIncFlash, _r, _g, _b, _delay);
        f();
    }
    void fadeBlueDownFlash()
    {
        auto f = curry(fadeBlueDecFlash, _r, _g, _b, _delay);
        f();
    }
    void fadeGreenUpFlash(int newDelay)
    {
        auto f = curry(fadeGreenIncFlash, _r, _g, _b, newDelay);
        f();
    }
    void fadeGreenDownFlash(int newDelay)
    {
        auto f = curry(fadeGreenDecFlash, _r, _g, _b, newDelay);
        f();
    }
    void fadeRedUpFlash(int newDelay)
    {
        auto f = curry(fadeRedIncFlash, _r, _g, _b, newDelay);
        f();
    }
    void fadeRedDownFlash(int newDelay)
    {
        auto f = curry(fadeRedDecFlash, _r, _g, _b, newDelay);
        f();
    }
    void fadeBlueUpFlash(int newDelay)
    {
        auto f = curry(fadeBlueIncFlash, _r, _g, _b, newDelay);
        f();
    }
    void fadeBlueDownFlash(int newDelay)
    {
        auto f = curry(fadeBlueDecFlash, _r, _g, _b, newDelay);
        f();
    }
};
=======
    RGB(){
        _r = 9;
        _g = 10;
        _b = 11;
        _delay = 25;
    }
    ~RGB(){
        analogWrite(_r,0);
        analogWrite(_g,0);
        analogWrite(_b,0);
    }
    void fadeGreenUp(){
        // This instance we could choose to simply call Fade
        // and not use the extra complexity that curry uses. However, curry provides us the ability to not get caught up in the
        // colors enum and the increase/decrease bool as the fadeGreenInc function has already had it's parameters partially applied.
        // This is comparable to Fade(GREEN,true,_r,_g,_b,_delay);
        //
       auto f = curry(fadeGreenInc,_r,_g,_b,_delay);
       f();
    }
    void fadeGreenDown(){
        auto f = curry(fadeGreenDec,_r,_g,_b,_delay);
        f();
     }
     void fadeRedUp(){
         auto f = curry(fadeRedInc,_r,_g,_b,_delay);
         f();
     }
     void fadeRedDown(){
         auto f = curry(fadeRedDec,_r,_g,_b,_delay);
         f();
     }
     void fadeBlueUp(){
         auto f = curry(fadeBlueInc,_r,_g,_b,_delay);
         f();
     }
     void fadeBlueUp(int newDelay){
        auto f = curry(fadeBlueInc,_r,_g,_b,newDelay);
        f();
    }
     void fadeBlueDown(){
         auto f = curry(fadeBlueDec,_r,_g,_b,_delay);
         f();
     }
     void fadeBlueDown(int newDelay){
        auto f = curry(fadeBlueDec,_r,_g,_b,newDelay);
        f();
    }
     




     void fadeGreenUpFlash(){
        auto f = curry(fadeGreenIncFlash,_r,_g,_b,_delay);
        f();
     }
     void fadeGreenDownFlash(){
         auto f = curry(fadeGreenDecFlash,_r,_g,_b,_delay);
         f();
      }
      void fadeRedUpFlash(){
          auto f = curry(fadeRedIncFlash,_r,_g,_b,_delay);
          f();
      }
      void fadeRedDownFlash(){
          auto f = curry(fadeRedDecFlash,_r,_g,_b,_delay);
          f();
      }
      void fadeBlueUpFlash(){
          auto f = curry(fadeBlueIncFlash,_r,_g,_b,_delay);
          f();
      }
      void fadeBlueDownFlash(){
          auto f = curry(fadeBlueDecFlash,_r,_g,_b,_delay);
          f();
      }
    
    
    
    
};
>>>>>>> 4d722d9043bc8b9e9ccaa643413d0aa887f469aa
