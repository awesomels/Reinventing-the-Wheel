#pragma once

#include <string>

const int ELE_LEN = 62; // 26 + 26 +10

class CStringUtils
{
public:
	static std::string GenerateRandomString(int nLen);
private:
	static char sm_acElement[ELE_LEN];
};