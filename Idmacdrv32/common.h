#pragma once
#include "registerRead.h"
#include "registerWrite.h"
#include "output.h"
#include <windows.h>
#define WIN32_LEAN_AND_MEAN
#define DEBUG
#define FIO_BOARDID_NOG3 0x1823c

DWORD btnHandleNode1();
DWORD btnHandleNode2();

int readCoinsP1();
int readCoinsP2();
int readCoinsP3();
int readCoinsP4();

int analog1();
int analog2();

