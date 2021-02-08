#pragma once
#include<string>
#include<iostream>
#include<bitset>

class Error
{
public:
	static bool LOG(const std::string& e)
	{
		std::cout << "ERROR: " + e;
		exit(0);//To be removed
		return false;
	}

	static void Debug(const std::string& e)
	{
		std::cout << e << '\n';
	}

	static void DebugBit(std::bitset<8> b)
	{
		std::cout << b << '\n';
	}
};