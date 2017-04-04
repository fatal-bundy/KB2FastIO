#pragma once
#include <windows.h>
#define WIN32_LEAN_AND_MEAN

#define DMAC_ID		   0x400
#define FIO_NODE_0_STATUS   0x4000
#define FIO_NODE_1_STATUS   0x4004
#define FIO_NODE_0_INPUT    0x4120
#define FIO_INPUT_ST_0 0x4124
#define FIO_NODE_1_INPUT    0x41A0
#define FIO_INPUT_ST_1 0x41A4
#define FIO_NODE_0_COINSLOT_1   0x4140
#define FIO_NODE_0_COINSLOT_2   0x4144
#define FIO_NODE_1_COINSLOT_1   0x41C0
#define FIO_NODE_1_COINSLOT_2   0x41C4

DWORD btnHandleNode1();
DWORD btnHandleNode2();

int readCoinsP1();
int readCoinsP2();
int readCoinsP3();
int readCoinsP4();

int analog1();
int analog2();