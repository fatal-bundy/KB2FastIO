/*
Coin handler. 
Need to implement a counter and decrementer. 
Need to research a method to check or key press constantly rather than on call of function. this work as the command is called often
*/

#include "stdafx.h"
#include "common.h"
#include "vk.h"


int readCoinsP1()
{
	if (GetAsyncKeyState(VK_KEY_6) & 0x8000)
	{
		//OutputDebugStr("P1 Coin");
		return 1;
	}
	else
	{
		return 0;
	}
}
int readCoinsP2()
{
	if (GetAsyncKeyState(VK_KEY_7) & 0x8000)
	{
		//OutputDebugStr("P1 Coin");
		return 1;
	}
	else
	{
		return 0;
	}
}
int readCoinsP3()
{
	if (GetAsyncKeyState(VK_KEY_8) & 0x8000)
	{
		//OutputDebugStr("P1 Coin");
		return 1;
	}
	else
	{
		return 0;
	}
}
int readCoinsP4()
{
	if (GetAsyncKeyState(VK_KEY_9) & 0x8000)
	{
		//OutputDebugStr("P1 Coin");
		return 1;
	}
	else
	{
		return 0;
	}
}