#include <iostream>
#include <vector>

#include "../level1/asum.tcc"
#include "../level1/axpy.tcc"
#include "../level1/copy.tcc"
#include "../level1/dot.tcc"

#include "../level1/scal.tcc"
#include "../level1/swap.tcc"
#include "../level1/rot.tcc"

#include "../level1/iamax.tcc"
#include "../level1/iamin.tcc"


using namespace std;


int main() {

	//asum//
	double *A = new double[5];

	for(int i=0; i<5; i++) {
		A[i]=(double)i;
	}
	
	double dSum;
	asum(5,A,1,dSum);
	cout << dSum << endl;			// <--- 10

	//scal//
	scal(5,2.,A,1);
	
	for(int i=0; i<5; i++) {
		cout << A[i] << " ";
	}
	cout << endl;					// <--- 0 2 4 6 8
	
	//swap//
	double *B = new double[5];
	
	for(int i=0; i<5; i++) {
		B[i]=(double)i*3;
	}
	
	swap(5,A,1,B,1);
	
	for(int i=0; i<5; i++) {
		cout << A[i] << " ";
	}
	cout << "  --  ";
	
	for(int i=0; i<5; i++) {
		cout << B[i] << " ";
	}
	cout << endl;					// <--- 0 3 6 9 12  --  0 2 4 6 8
	
	//rot//
	rot(5,A,1,B,1,3.,4.);
	
	for(int i=0; i<5; i++) {
		cout << A[i] << " ";
	}
	cout << "  --  ";
	
	for(int i=0; i<5; i++) {
		cout << B[i] << " ";
	}
	cout << endl;					// <--- 0 17 34 51 68  --  0 -6 -12 -18 -24
	
	//iamax
	A[2] = 100;
	B[0] = -100;
	int Amax;
	int Bmax;
	iamax(5,A,1,Amax);
	iamax(5,B,1,Bmax);
	cout << Amax << " " << Bmax << endl; 	// <--- 2 0
	
	//iamin
	int Amin;
	int Bmin;
	iamin(5,A,1,Amin);
	iamin(5,B,1,Bmin);
	cout << Amin << " " << Bmin << endl;	// <--- 0 1
	
	
	

	return 0;
}