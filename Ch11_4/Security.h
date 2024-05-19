#ifndef Security_H
#define Security_H
#include <string>
class Security{
public:
	static int validate(std::string username, std::string password);
};
#endif //Security_H