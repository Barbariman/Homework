#ifndef BARLOG_H
#define BARLOG_H
#include "demon.h"

class Barlog:public Demon{
    public:
    Barlog();
    Barlog(int newStrength, int newHitpoints);
    int getDamage();
};

#endif //BARLOG_H