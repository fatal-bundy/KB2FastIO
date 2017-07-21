// Idmacdrv32.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "common.h"
#include <stdio.h>
#include "config.h"

//#define DUALNODE


__declspec (dllexport) DWORD iDmacDrvOpen(int a1, LPVOID lp, LPVOID a3)
{
	*(DWORD *)lp = 1;
	*(DWORD *)a3 = -1;
	return 0;
}

__declspec (dllexport) DWORD iDmacDrvClose(int a1, LPVOID lp)
{

	return 0;

}

__declspec (dllexport) int iDmacDrvDmaRead(int a1, LPVOID lp, UINT_PTR ucb, LPVOID a4)
{

	return 0;

}

__declspec (dllexport) int iDmacDrvDmaWrite(int a1, void *lp, UINT_PTR ucb, LPVOID a4)
{

	return 0;

}

__declspec (dllexport) int iDmacDrvRegisterWrite(int a1, DWORD command, int data, LPVOID lp)
{
#ifdef DEBUG
	char outString[256];
#endif
	switch (command)
	{
	case NODE0_RESET:
		return 0;

	case NODE1_RESET:
		return 0;

	case FIO_NODE0P1_COINCOUNTER:
		decCoinP1();
		return 0;

	case FIO_NODE0P2_COINCOUNTER:
		decCoinP2();
		return 0;

	case FIO_NODE1P1_COINCOUNTER:
		decCoinP3();
		return 0;

	case FIO_NODE1P2_COINCOUNTER:
		decCoinP4();
		return 0;

	case FIO_NODE0_GPIOBANK1:
		return node0GPIOBank1();

	case FIO_NODE0_GPIOBANK2:
		return node0GPIOBank2();

	case FIO_NODE0_GPIOBANK3:
		return node0GPIOBank3();

	case FIO_NODE0_GPIOBANK4:
		return node0GPIOBank4();

	case FIO_NODE1_GPIOBANK1:
		return node1GPIOBank1();

	case FIO_NODE1_GPIOBANK2:
		return node1GPIOBank2();

	case FIO_NODE1_GPIOBANK3:
		return node1GPIOBank3();

	case FIO_NODE1_GPIOBANK4:
		return node1GPIOBank4();
		
	default:
#ifdef DEBUG

		sprintf(outString, "\nUnknown RegWrite command\n Command: %X\nData Written:%X\n", command, data);
		OutputDebugStringA(outString);
#endif
		return 0;
	}

#ifdef DEBUG
	sprintf(outString, "\nUnknown RegWrite command\n Command: %X\nData Written:%X\n", command,data);
	OutputDebugStringA(outString);
#endif
	return 0;

}

__declspec (dllexport) int iDmacDrvRegisterRead(int a1, DWORD command, LPVOID ret_pointer, LPVOID a4)
{

	int node1status;
#ifdef DUALNODE
	node1status = 0x01FF00FF;
#else
	node1status = 0;
#endif // P2
	switch (command)
	{
	case DMAC_ID:
		*(DWORD *)ret_pointer = 0x01010313;
		return 0;

	case FIO_NODE_1_STATUS:

		*(DWORD *)ret_pointer = node1status;
		return 0;

	case FIO_NODE_0_STATUS:

		*(DWORD *)ret_pointer = 0xff00ff;
		return 0;

	case FIO_NODE_0_INPUT:
		*(DWORD *)ret_pointer = btnHandleNode1();
		return 0;

	case FIO_NODE0_ANALOG1:
		*(DWORD *)ret_pointer = analog(command);
		return 0;

	case FIO_NODE0_ANALOG2:
		*(DWORD *)ret_pointer = analog(command);
		return 0;

	case FIO_NODE0_ANALOG3:
		*(DWORD *)ret_pointer = analog(command);
		return 0;

	case FIO_NODE_1_INPUT:
		*(DWORD *)ret_pointer = btnHandleNode2();
		return 0;

	case FIO_NODE1_ANALOG1:
		*(DWORD *)ret_pointer = analog(command);
		return 0;

	case FIO_NODE1_ANALOG2:
		*(DWORD *)ret_pointer = analog(command);
		return 0;

	case FIO_NODE1_ANALOG3:
		*(DWORD *)ret_pointer = analog(command);
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

	case FIO_HUB_PORT_1:
		*(DWORD *)ret_pointer = 0x1823c;
		return 0;

	case FIO_HUB_PORT_2:
		*(DWORD *)ret_pointer = 0;
		return 0;

	case FIO_HUB_PORT_3:
		*(DWORD *)ret_pointer = 0;
		return 0;

	case FIO_HUB_PORT_4:
		*(DWORD *)ret_pointer = 0;
		return 0;

	/* Commands coming from Grooove Coaster 3. need a Fast IO Hub to log for details*/



	/*case 0x41D0:

	case 0x41D4:

	case 0x41D8:

	case 0x41DC:
	*/
	default:
		//*(DWORD *)ret_pointer = 0;
#ifdef DEBUG
		char outString[256];
		sprintf(outString, "\nUnknown RegRead command, Command: %X\n",command);
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