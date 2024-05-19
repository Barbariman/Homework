#include "Administrator.h"

bool Administrator::login(std::string username, std::string password){
    if(Security::validate(username,password)==2) return true;
    return false;
}