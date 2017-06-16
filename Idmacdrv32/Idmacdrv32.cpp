// Idmacdrv32.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "common.h"
#include <stdio.h>
#include "config.h"


__declspec (dllexport) DWORD iDmacDrvOpen(int a1, LPVOID lp, LPVOID a3)
{

	*(DWORD *)lp = (1 + a1);
	*(DWORD *)a3 = -1;
	return 0;

}

__declspec (dllexport) DWORD iDmacDrvClose(int a1, LPVOID lp)
{

	return 1;

}

__declspec (dllexport) int iDmacDrvDmaRead(int a1, LPVOID lp, UINT_PTR ucb, LPVOID a4)
{

	return 0;

}

__declspec (dllexport) int iDmacDrvDmaWrite(int a1, void *lp, UINT_PTR ucb, LPVOID a4)
{

	return 0;

}

__declspec (dllexport) int iDmacDrvRegisterWrite(int a1, DWORD in_pointer, int a3, LPVOID lp)
{

#ifdef DEBUG
	char outString[256];
	sprintf(outString, "Unknown RegWrite command\n Command: %X\nData Written:%X", in_pointer,lp);
	OutputDebugStringA(outString);
#endif
	return 0;

}

__declspec (dllexport) int iDmacDrvRegisterRead(int a1, DWORD a2, LPVOID ret_pointer, LPVOID a4)
{

	int node1status;
#ifdef DUALNODE
	node1status = 0xFF00FF;
#else
	node1status = 0;
#endif // P2
	switch (a2)
	{
	case DMAC_ID:
		*(DWORD *)ret_pointer = 0x01010221;
		return 0;

	case FIO_NODE_1_STATUS:

		*(DWORD *)ret_pointer = node1status;
		return 0;

	case FIO_NODE_0_STATUS:

		*(DWORD *)ret_pointer = 0xff00ff;
		return 0;

	case FIO_NODE_0_INPUT:
		*(DWORD *)ret_pointer = 0;//btnHandleNode1();
		return 0;

	case FIO_INPUT_ST_0:
		*(DWORD *)ret_pointer = analog1();
		return 0;

	case FIO_NODE_1_INPUT:
		*(DWORD *)ret_pointer = 0;//btnHandleNode2();
		return 0;

	case FIO_INPUT_ST_1:
		*(DWORD *)ret_pointer = analog2();
		return 0;

	case FIO_NODE_0_COINSLOT_1:
		*(DWORD *)ret_pointer = readCoinsP1();
		return 0;

	case FIO_NODE_0_COINSLOT_2:
		*(DWORD *)ret_pointer = readCoinsP2();
		return 0;

	case FIO_NODE_1_COINSLOT_1:
		*(DWORD *)ret_pointer = readCoinsP3();
		return 0;

	case FIO_NODE_1_COINSLOT_2:
		*(DWORD *)ret_pointer = readCoinsP4();
		return 0;
/* unknown commands
	case 0x4100:
		*(DWORD *)ret_pointer = 0;
		return 0;
	case 0x4104:
		*(DWORD *)ret_pointer = 0;
		return 0;
	case 0x4180:
		*(DWORD *)ret_pointer = 0;
		return 0;
	case 0x4184:
		*(DWORD *)ret_pointer = 0;
		return 0;*/


	/* Commands coming from Grooove Coaster 3. need a Fast IO Hub to log for details*/
	case 0x4150:
		*(DWORD *)ret_pointer = 0x1823c;
		return 0;
	/*case 0x4154:

	case 0x4158:

	case 0x415C:

	case 0x41D0:

	case 0x41D4:

	case 0x41D8:

	case 0x41DC:
	*/
	case 0x4128:
		*(DWORD *)ret_pointer = 50;
		return 0;
	case 0x412C:
		*(DWORD *)ret_pointer = 50;
		return 0;
		/*
	case 0x41A8:
		*(DWORD *)ret_pointer = 0;
		return 0;
	case 0x41AC:
		*(DWORD *)ret_pointer = 0;
		return 0;
		*/
	default:
		//*(DWORD *)ret_pointer = 0;
#ifdef DEBUG
		char outString[256];
		sprintf(outString, "Unknown RegRead command, Command: %X",a2);
		OutputDebugStringA(outString);
#endif
		return 0;
	}

}
// new calls from ttx 3 platform
__declspec (dllexport) int iDmacDrvRegisterBufferRead(int a1, DWORD BytesReturned, LPVOID lp, UINT_PTR ucb, LPVOID a5)
{
#ifdef DEBUG
	char outString[256];
	sprintf(outString, "Unknown RegBufferRead command, Command: %X", BytesReturned);
	OutputDebugStringA(outString);
#endif
	//*(DWORD *)a5 = 0;
	return 0;
}
__declspec (dllexport) int iDmacDrvRegisterBufferWrite(int a1, DWORD BytesReturned, LPVOID lp, UINT_PTR ucb, LPVOID a5)
{
#ifdef DEBUG
	char outString[256];
	sprintf(outString, "Unknown RegBufferWrite command, Command: %X", BytesReturned);
	OutputDebugStringA(outString);
#endif
	//*(DWORD *)a5 = 0;
	return 0;
}
__declspec (dllexport) int iDmacDrvProgramDownload(int a1, void *lp, LPVOID a3)
{
	//*(DWORD *)a3 = 0;
	return 0;
}