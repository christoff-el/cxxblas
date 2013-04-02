#include <iostream>
#include <vector>

#include "../level2/gemv.tcc"


using namespace std;



int main() {

	//gemv//
	doube *A = new double[25];
	A[0] = 0; A[1] = 1; A[2] = 2; A[3] = 3; A[4] = 4;
	A[0] = 2; A[1] = 4; A[2] = 7; A[3] = 3; A[4] = 9;
	A[0] = 0; A[1] = 2; A[2] = 2; A[3] = 4; A[4] = 1;
	A[0] = 2; A[1] = 6; A[2] = 4; A[3] = 2; A[4] = 7;
	A[0] = 2; A[1] = 6; A[2] = 4; A[3] = 7; A[4] = 3;
	
	double *x = new double[5]
	x[0] = 1; x[1] = 2; x[2] = 3; x[3] = 4; x[4] = 5;

	double *y = new double[5];
	y[0] = 3; y[1] = 4; y[2] = 4; y[3] = 0; y[4] = 1;
	double alpha = 2;
	double beta = 3;
	
	gemv('T', 5, 5, alpha, A, 5, x, 1, beta, y, 1);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}	//main()