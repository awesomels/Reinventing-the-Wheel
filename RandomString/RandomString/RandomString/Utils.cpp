#include"Utils.h"
#include <iostream>
#include <ctime>

char CStringUtils::sm_acElement[ELE_LEN] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
											 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
											 'U', 'V', 'W', 'X', 'Y', 'Z',
											 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
											 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
											 'u', 'v', 'w', 'x', 'y', 'z',
											 '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

std::string CStringUtils::GenerateRandomString(int nLen)
{
	char* pcBuf = new char[nLen + 1];
	if (NULL == pcBuf)
	{
		// TODO:¥ÌŒÛ¥¶¿Ì
		std::cout << "ÀÊª˙◊÷∑˚¥Æ…Í«Îƒ⁄¥Ê ß∞‹" << std::endl;
	}
	pcBuf[nLen] = '\0'; // ◊÷∑˚¥ÆΩ·Œ≤
	int nRand = 0;
	srand((unsigned)time(0));
	for (int i = 0; i < nLen; ++i)
	{
		nRand = rand() % ELE_LEN;
		pcBuf[i] = sm_acElement[nRand];
	}
	return std::string(pcBuf);
}
