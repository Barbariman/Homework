#include "User.h"

bool User::login(std::string username, std::string password){
    if(Security::validate(username,password)==2 || Security::validate(username,password)==1) return true;
    return false;
}