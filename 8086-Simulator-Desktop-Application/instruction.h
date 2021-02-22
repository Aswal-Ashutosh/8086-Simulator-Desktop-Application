#pragma once
#include"operands.h"
#include"typedef.h"
#include<string>



struct Instruction
{
	std::string Mnemonic;
	Operand operand;
	int LineNumber;
	_16Bit Offset;
};