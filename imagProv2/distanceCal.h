#pragma once
#include <math.h>
using namespace std;

double EuclideanDistance(int x, int y, int dx, int dy)
{
	return sqrt((x - dx) * (x - dx) + (y - dy) * (y - dy));
}
double CityblockDistance(int x, int y, int dx, int dy)
{
	return abs(x - dx) + abs(y - dy);
}
double ChessboardDistance(int x, int y, int dx, int dy)
{
	return max(abs(x - dx), abs(y - dy));
}
double GetMin(double a, double b, double c, double d, double e)
{
	return min(min(min(a, b), min(c, d)), e);
}

double GetDistance(int x, int y, int dx, int dy, int mode)
{
	double result = 0;
	switch (mode)
	{
	case 1:
		result = EuclideanDistance(x, y, dx, dy);
		break;
	case 2:
		result = CityblockDistance(x, y, dx, dy);
		break;
	case 3:
		result = ChessboardDistance(x, y, dx, dy);
		break;
	}
	return result;
}
int cmp(const void *a, const void *b)
{
	return*(int*)a - *(int*)b;
}