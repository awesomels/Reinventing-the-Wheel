#include <iostream>
#include "Utils.h"

int main()
{
	std::string strTemp = CStringUtils::GenerateRandomString(10);
	std::cout << strTemp << std::endl;
	getchar();
	return 0;
}