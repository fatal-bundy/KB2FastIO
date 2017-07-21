#pragma once
#include "registerRead.h"
#include "registerWrite.h"
#include <windows.h>
#define WIN32_LEAN_AND_MEAN
DWORD btnHandleNode1();
DWORD btnHandleNode2();

int readCoinsP1();
int readCoinsP2();
int readCoinsP3();
int readCoinsP4();
void decCoinP1();
void decCoinP2();
void decCoinP3();
void decCoinP4();
int node0GPIOBank1();
int node0GPIOBank2();
int node0GPIOBank3();
int node0GPIOBank4();
int node1GPIOBank1();
int node1GPIOBank2();
int node1GPIOBank3();
int node1GPIOBank4();

int analog(int);