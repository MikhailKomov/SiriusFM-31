#pragma once 
#include<stdexcept>
#include<iostream>
using namespace std;

namespace SiriusFM
{

	enum class CcyE
	{
		USD = 0,
		EUR = 1,
		GBP = 2,
		CHF = 3,
		RUB = 4
		N = 5
	};

	enum class IRMode
	{
		Const = 0,
		FwdCurve = 1,
		Stoch = 2
	};
};
