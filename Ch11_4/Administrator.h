#ifndef Administrator_H
#define Administrator_H
#include "Security.h"

class Administrator{
public:
    static bool login(std::string username, std::string password);
};

#endif //Administrator_H