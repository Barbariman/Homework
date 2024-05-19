#ifndef User_H
#define User_H
#include "Security.h"

class User{
public:
    static bool login(std::string username, std::string password);
};

#endif //User_H