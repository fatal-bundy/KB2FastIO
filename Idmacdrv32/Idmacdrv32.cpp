// Idmacdrv32.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "common.h"
#include <stdio.h>

//#define TWOPLAYER

__declspec (dllexport) DWORD iDmacDrvOpen(int a1, LPVOID lp, LPVOID a3)
{

	*(DWORD *)lp = -1;
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

__declspec (dllexport) int iDmacDrvRegisterWrite(int a1, DWORD a2, int a3, LPVOID lp)
{
	return 0;

}

__declspec (dllexport) int iDmacDrvRegisterRead(int a1, DWORD a2, LPVOID a3, LPVOID a4)
{

	int node1status;
#ifdef TWOPLAYER
	node1status = 0;
#else
	node1status = 0xFF00FF;
#endif // P2

	switch (a2)
	{
	case DMAC_ID:
		*(DWORD *)a3 = 0x10201;
		return 0;

	case FIO_NODE_0_STATUS:
		*(DWORD *)a3 = 0xFF00FF;
		return 0;

	case FIO_NODE_1_STATUS:
		*(DWORD *)a3 = node1status;
		return 0;

	case FIO_NODE_0_INPUT:
		*(DWORD *)a3 = btnHandleNode1();
		return 0;

	case FIO_INPUT_ST_0:
		*(DWORD *)a3 = analog1();
		return 0;

	case FIO_NODE_1_INPUT:
		*(DWORD *)a3 = btnHandleNode2();
		return 0;

	case FIO_INPUT_ST_1:
		*(DWORD *)a3 = analog2();
		return 0;

	case FIO_NODE_0_COINSLOT_1:
		*(DWORD *)a3 = readCoinsP1();
		return 0;

	case FIO_NODE_0_COINSLOT_2:
		*(DWORD *)a3 = readCoinsP2();
		return 0;

	case FIO_NODE_1_COINSLOT_1:
		*(DWORD *)a3 = readCoinsP3();
		return 0;

	case FIO_NODE_1_COINSLOT_2:
		*(DWORD *)a3 = readCoinsP4();
		return 0;
// unknown commands
	case 0x4100:
		*(DWORD *)a3 = 0;
		return 0;
	case 0x4104:
		*(DWORD *)a3 = 0;
		return 0;
	case 0x4180:
		*(DWORD *)a3 = 0;
		return 0;
	case 0x4184:
		*(DWORD *)a3 = 0;
		return 0;


	/* Commands coming from Grooove Coaster 3. need a Fast IO Hub to log for details
	case 0x4150:

	case 0x4154:
		
	case 0x4158:

	case 0x415C:

	case 0x41D0:

	case 0x41D4:

	case 0x41D8:

	case 0x41DC:

	case 0x4128:

	case 0x412C:

	case 0x41A8:

	case 0x41AC:
	*/
	default:
		*(DWORD *)a3 = 0;
		return 0;
	}

}
// new calls from ttx 3 platform
__declspec (dllexport) int iDmacDrvRegisterBufferRead(int a1, DWORD BytesReturned, LPVOID lp, UINT_PTR ucb, LPVOID a5)
{
	//*(DWORD *)a5 = 0;
	return 0;
}
__declspec (dllexport) int iDmacDrvRegisterBufferWrite(int a1, DWORD BytesReturned, LPVOID lp, UINT_PTR ucb, LPVOID a5)
{
	//*(DWORD *)a5 = 0;
	return 0;
}
__declspec (dllexport) int iDmacDrvProgramDownload(int a1, void *lp, LPVOID a3)
{
	//*(DWORD *)a3 = 0;
	return 0;
}