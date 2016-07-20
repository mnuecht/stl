#include "includes.h"
#include <vector>

vector<int> vec(4,100);

void printVec() {
	printf("Vector size: %li\n", vec.size());
	printf("Vector capacity: %lu\n", vec.capacity());
	for (int i = 0; i < vec.size(); i++) {
		printf("vec[%i] = %i\n", i, vec[i]);
	}
	printf("\n");
}

void testVector() {
	printf("testVector\n");
	printVec();
	
	vec.push_back(33);
	printVec();
	
	vec.reserve(12);
	vec.resize(7);
	printVec();
}
