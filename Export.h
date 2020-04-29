#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

void __declspec(dllexport) Solve(
	int numNode, double* x, double* y, double* demand, 
	int numCar, double* capacity, double* disLimit, 
	double k1, double k2, double k3, 
	int generation,
	void(*Callback)(int numCar, int** path, int* pathLen, double* load, double* mileage));

#ifdef __cplusplus
}
#endif
