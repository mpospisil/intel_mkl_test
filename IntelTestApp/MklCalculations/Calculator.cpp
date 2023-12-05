#include "pch.h"
#include "Calculator.h"
#include <iostream>
#include "..\intel\omp.h"

int Calculator::Calculate(int)
{
	std::cout << "Calculate\n";

	void* p = kmp_malloc(100);
	int num;
	omp_get_partition_place_nums(&num);

	int device = omp_get_initial_device();
	kmp_free(p);
	return 100;
}
