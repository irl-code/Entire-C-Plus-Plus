#include <iostream>

int main() {
	int example[5];
	int* ptr = example;
	//*(ptr + 1) = 9;
	//example[3] = 7;
	//int b = 9;
	//example[0] = 1;
	//example[1] = 2;
	//example[2] = 3;
	//example[3] = 4;
	//e//xample[4] = 5;
	for (int i = 0; i < 5; i++) {
		*(int*)((char*)ptr + (i * 4)) = i;
	}
	for (int i = 0; i < 5; i++)
		std::cout << *ptr++ << std::endl;
	return 0;
}