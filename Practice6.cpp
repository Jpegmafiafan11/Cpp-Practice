#include <iostream>
//Array practice

int Array(int a) {

	int example[5];

	for (int i = 0; i < 5; i++) {
		example[i] = i+2;
	}

	return example[a];
}