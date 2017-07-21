/*
Coin handler. 
Need to implement a counter and decrementer. 
Need to research a method to check or key press constantly rather than on call of function. this work as the command is called often
*/

#include "stdafx.h"
#include "common.h"
#include "vk.h"
int coinsp1 = 0;
int coinsp2 = 0;
int coinsp3 = 0;
int coinsp4 = 0;

void coinThread()
{
	OutputDebugStringA("coin thread started");
	bool coinp1up = true;
	bool coinp2up = true;
	bool coinp3up = true;
	bool coinp4up = true;
	while (true)
	{
		if (coinp1up)
		{
			if (GetAsyncKeyState(VK_KEY_6) & 0x8000)
			{
				//OutputDebugStr("P1 Coin");
				coinsp1++;
				coinp1up = false;
			}
		}
		if (!coinp1up)
		{
			if (GetAsyncKeyState(VK_KEY_6) & 0x0001)
			{
				coinp1up = true;
			}
		}
		if (coinp2up)
		{
			if (GetAsyncKeyState(VK_KEY_7) & 0x8000)
			{
				//OutputDebugStr("P2 Coin");
				coinsp2++;
				coinp2up = false;
			}
		}
		if (!coinp2up)
		{
			if (GetAsyncKeyState(VK_KEY_7) & 0x0001)
			{
				coinp2up = true;
			}
		}
		if (coinp3up)
		{
			if (GetAsyncKeyState(VK_KEY_8) & 0x8000)
			{
				//OutputDebugStr("P3 Coin");
				coinsp3++;
				coinp3up = false;
			}
		}
		if (!coinp3up)
		{
			if (GetAsyncKeyState(VK_KEY_8) & 0x0001)
			{
				coinp3up = true;
			}
		}
		if (coinp4up)
		{
			if (GetAsyncKeyState(VK_KEY_9) & 0x8000)
			{
				//OutputDebugStr("P4 Coin");
				coinsp4++;
				coinp4up = false;
			}
		}
		if (!coinp4up)
		{
			if (GetAsyncKeyState(VK_KEY_9) & 0x0001)
			{
				coinp1up = true;
			}
		}
	}
}

void decCoinP1()
{
	if (coinsp1 > 0)
		coinsp1--;
}
void decCoinP2()
{
	coinsp2--;
}
void decCoinP3()
{
	coinsp3--;
}
void decCoinP4()
{
	coinsp4--;
}

int readCoinsP1()
{
	if (coinsp1 > 0)
	{
		return coinsp1;
	}
	else
	{
		return 0;
	}
}
int readCoinsP2()
{
	if (coinsp2 > 0)
	{
		return coinsp2;
	}
	else
	{
		return 0;
	}
}
int readCoinsP3()
{
	if (coinsp3 > 0)
	{
		return coinsp3;
	}
	else
	{
		return 0;
	}
}
int readCoinsP4()
{
	if (coinsp4 > 0)
	{
		return coinsp4;
	}
	else
	{
		return 0;
	}
}