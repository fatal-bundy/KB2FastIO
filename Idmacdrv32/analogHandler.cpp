/*
Analog controls
need to find a use case game to test out analog input.
Darius uses channel 1 of node 0 for sound volume.
Groove coaster uses channel 2 of node 0 for sound volume
*/
#include "stdafx.h"
#include "common.h"
#include "analogHandler.h"

int analog(int channel)
{
	switch (channel)
	{
	case FIO_NODE0_CHANNEL1:
		return 50;

	case FIO_NODE0_CHANNEL2:
		return 50;

	case FIO_NODE0_CHANNEL3:
		return 0;

	case FIO_NODE1_CHANNEL1:
		return 0;

	case FIO_NODE1_CHANNEL2:
		return 0;

	case FIO_NODE1_CHANNEL3:
		return 0;
	default:
		return 0;
	}
}

