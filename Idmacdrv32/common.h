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

int analog(int);