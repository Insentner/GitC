#pragma once
#include <math.h>
#include <stdio.h>

static double a(int i)
{
	return pow(-1, i)*(i + 1.0) / (pow(i, 2) + 1.0);
}