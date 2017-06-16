#include "stdafx.h"
#include "common.h"
#include "vk.h"



DWORD btnHandleNode1()
{
DWORD val1 = 0;
DWORD val2 = 0;
	if (GetAsyncKeyState(VK_F1) & 0x8000)
	{
		//OutputDebugStr("P1 SERVICE");
		val1 |= 1 << 2;
	}
	if (GetAsyncKeyState(VK_KEY_I) & 0x8000)
	{
		//OutputDebugStr("P1 SERVICE");
		val1 |= 1 << 1;
	}
	if (GetAsyncKeyState(VK_KEY_P) & 0x8000)
	{
		//OutputDebugStr("P1 SERVICE");
		val1 |= 1 << 3;
	}

	if (GetAsyncKeyState(VK_F2) & 0x8000)
	{
		//OutputDebugStr("P2 SERVICE");
		val2 |= 1 << 2;
	}

	if (GetAsyncKeyState(VK_KEY_1) & 0x8000)
	{
		//OutputDebugStr("P1 START");
		val1 |= 1 << 4;
	}

	if (GetAsyncKeyState(VK_KEY_2) & 0x8000)
	{
		//OutputDebugStr("P2 START");
		val2 |= 1 << 5;
	}

	if (GetAsyncKeyState(VK_KEY_T) & 0x8000)
	{
		//OutputDebugStr("TEST Node 1");
		val1 |= 1 << 6;
	}
	//coin_thing_1 = (GetAsyncKeyState(0x71) & 0x8000) ? 1 : 0;


	if (GetAsyncKeyState(VK_UP) & 0x8000)

	{
		//OutputDebugStr("P1 UP");
		val1 |= 1 << 8;
	}
	if (GetAsyncKeyState(VK_NUMPAD8) & 0x8000)
	{
		//OutputDebugStr("P2 UP");
		val2 |= 1 << 9;
	}

	if (GetAsyncKeyState(VK_DOWN) & 0x8000)
	{
		//OutputDebugStr("P1 DOWN");
		val1 |= 1 << 10;
	}

	if (GetAsyncKeyState(VK_NUMPAD2) & 0x8000)
	{
		//OutputDebugStr("P2 DOWN");
		val2 |= 1 << 11;
	}

	if (GetAsyncKeyState(VK_LEFT) & 0x8000)
	{
		//OutputDebugStr("P1 LEFT");
		val1 |= 1 << 12;
	}

	if (GetAsyncKeyState(VK_NUMPAD4) & 0x8000)
	{
		//OutputDebugStr("P2 LEFT");
		val2 |= 1 << 13;
	}

	if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
	{
		//OutputDebugStr("P1 RIGHT");
		val1 |= 1 << 14;
	}

	if (GetAsyncKeyState(VK_NUMPAD6) & 0x8000)
	{
		//OutputDebugStr("P2 RIGHT");
		val2 |= 1 << 15;
	}

	if (GetAsyncKeyState(VK_KEY_A) & 0x8000)
	{
		//OutputDebugStr("P1 BUTTON 1");
		val1 |= 1 << 16;
	}

	if (GetAsyncKeyState(VK_NUMPAD7) & 0x8000)
	{
		//OutputDebugStr("P2 BUTTON 1");
		val2 |= 1 << 17;
	}

	if (GetAsyncKeyState(VK_KEY_S) & 0x8000)
	{
		//OutputDebugStr("P1 BUTTON 2");
		val1 |= 1 << 18;
	}

	if (GetAsyncKeyState(VK_NUMPAD9) & 0x8000)
	{
		//OutputDebugStr("P2 BUTTON 2");
		val2 |= 1 << 19;
	}

	if (GetAsyncKeyState(VK_KEY_D) & 0x8000)
	{
		//OutputDebugStr("P1 BUTTON 3");
		val1 |= 1 << 20;
	}

	if (GetAsyncKeyState(VK_NUMPAD1) & 0x8000)
	{
		//OutputDebugStr("P2 BUTTON 3");
		val2 |= 1 << 21;
	}

	if (GetAsyncKeyState(VK_KEY_Z) & 0x8000)
	{
		//OutputDebugStr("P1 BUTTON 4");
		val1 |= 1 << 22;
	}

	if (GetAsyncKeyState(VK_NUMPAD3) & 0x8000)
	{
		//OutputDebugStr("P2 BUTTON 4");
		val2 |= 1 << 23;
	}

	if (GetAsyncKeyState(VK_KEY_X) & 0x8000)
	{
		//OutputDebugStr("P1 BUTTON 5");
		val1 |= 1 << 24;
	}

	if (GetAsyncKeyState(VK_NUMPAD0) & 0x8000)
	{
		//OutputDebugStr("P2 BUTTON 5");
		val2 |= 1 << 25;
	}

	if (GetAsyncKeyState(VK_KEY_C) & 0x8000)
	{
		//OutputDebugStr("P1 BUTTON 6");
		val1 |= 1 << 26;
	}
	if (GetAsyncKeyState(VK_DECIMAL) & 0x8000)
	{
		//OutputDebugStr("P2 BUTTON 6");
		val2 |= 1 << 27;
	}
	DWORD ret = val1 | val2;
	return ret;
}

DWORD btnHandleNode2()
{
	DWORD val3 = 0;
	DWORD val4 = 0;
	if (GetAsyncKeyState(VK_F3) & 0x8000)
	{
		//OutputDebugStr("P3 SERVICE");
		val3 |= 1 << 2;
	}

	if (GetAsyncKeyState(VK_F4) & 0x8000)
	{
		//OutputDebugStr("P4 SERVICE");
		val4 |= 1 << 2;
	}

	if (GetAsyncKeyState(VK_KEY_3) & 0x8000)
	{
		//OutputDebugStr("P3 START");
		val3 |= 1 << 4;
	}

	if (GetAsyncKeyState(VK_KEY_4) & 0x8000)
	{
		//OutputDebugStr("P4 START");
		val4 |= 1 << 5;
	}

	if (GetAsyncKeyState(VK_KEY_Y) & 0x8000)
	{
		//OutputDebugStr("Node 2 TEST");
		val3 |= 1 << 6;
	}
	//coin_thing_1 = (GetAsyncKeyState(0x71) & 0x8000) ? 1 : 0;


	if (GetAsyncKeyState(VK_KEY_O) & 0x8000)

	{
		//OutputDebugStr("P3 UP");
		val3 |= 1 << 8;
	}
	if (GetAsyncKeyState(VK__none_) & 0x8000)
	{
		//OutputDebugStr("P4 UP");
		val4 |= 1 << 9;
	}

	if (GetAsyncKeyState(VK_KEY_L) & 0x8000)
	{
		//OutputDebugStr("P3 DOWN");
		val3 |= 1 << 10;
	}

	if (GetAsyncKeyState(VK__none_) & 0x8000)
	{
		//OutputDebugStr("P4 DOWN");
		val4 |= 1 << 11;
	}

	if (GetAsyncKeyState(VK_OEM_1) & 0x8000)
	{
		//OutputDebugStr("P3 LEFT");
		val3 |= 1 << 12;
	}

	if (GetAsyncKeyState(VK__none_) & 0x8000)
	{
		//OutputDebugStr("P4 LEFT");
		val4 |= 1 << 13;
	}

	if (GetAsyncKeyState(VK_KEY_K) & 0x8000)
	{
		//OutputDebugStr("P3 RIGHT");
		val3 |= 1 << 14;
	}

	if (GetAsyncKeyState(VK__none_) & 0x8000)
	{
		//OutputDebugStr("P4 RIGHT");
		val4 |= 1 << 15;
	}

	if (GetAsyncKeyState(VK_INSERT) & 0x8000)
	{
		//OutputDebugStr("P3 BUTTON 1");
		val3 |= 1 << 16;
	}

	if (GetAsyncKeyState(VK__none_) & 0x8000)
	{
		//OutputDebugStr("P4 BUTTON 1");
		val4 |= 1 << 17;
	}

	if (GetAsyncKeyState(VK_HOME) & 0x8000)
	{
		//OutputDebugStr("P3 BUTTON 2");
		val3 |= 1 << 18;
	}

	if (GetAsyncKeyState(VK__none_) & 0x8000)
	{
		//OutputDebugStr("P4 BUTTON 2");
		val4 |= 1 << 19;
	}

	if (GetAsyncKeyState(VK_NEXT) & 0x8000)
	{
		//OutputDebugStr("P3 BUTTON 3");
		val3 |= 1 << 20;
	}

	if (GetAsyncKeyState(VK__none_) & 0x8000)
	{
		//OutputDebugStr("P4 BUTTON 3");
		val4 |= 1 << 21;
	}

	if (GetAsyncKeyState(VK_DELETE) & 0x8000)
	{
		//OutputDebugStr("P3 BUTTON 4");
		val3 |= 1 << 22;
	}

	if (GetAsyncKeyState(VK__none_) & 0x8000)
	{
		//OutputDebugStr("P4 BUTTON 4");
		val4 |= 1 << 23;
	}

	if (GetAsyncKeyState(VK_END) & 0x8000)
	{
		//OutputDebugStr("P3 BUTTON 5");
		val3 |= 1 << 24;
	}

	if (GetAsyncKeyState(VK__none_) & 0x8000)
	{
		//OutputDebugStr("P4 BUTTON 5");
		val4 |= 1 << 25;
	}

	if (GetAsyncKeyState(VK_PRIOR) & 0x8000)
	{
		//OutputDebugStr("P3 BUTTON 6");
		val3 |= 1 << 26;
	}
	if (GetAsyncKeyState(VK__none_) & 0x8000)
	{
		//OutputDebugStr("P4 BUTTON 6");
		val4 |= 1 << 27;
	}
	DWORD ret = val3 | val4;
	return ret;
}