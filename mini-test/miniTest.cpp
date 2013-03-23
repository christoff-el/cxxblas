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

#include "../level1/rotm.tcc"


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
	
	for(int i=0; i<5; i++) {cout << A[i] << " ";}
	cout << endl;					// <--- 0 2 4 6 8
	
	//swap//
	double *B = new double[5];
	
	for(int i=0; i<5; i++) {
		B[i]=(double)i*3;
	}
	
	swap(5,A,1,B,1);
	
	for(int i=0; i<5; i++) {cout << A[i] << " ";}
	cout << "  --  ";
	
	for(int i=0; i<5; i++) {cout << B[i] << " ";}
	cout << endl;					// <--- 0 3 6 9 12  --  0 2 4 6 8
	
	//rot//
	rot(5,A,1,B,1,3.,4.);
	
	for(int i=0; i<5; i++) {cout << A[i] << " ";}
	cout << "  --  ";
	
	for(int i=0; i<5; i++) {cout << B[i] << " ";}
	cout << endl;					// <--- 0 17 34 51 68  --  0 -6 -12 -18 -24
	
	//iamax//
	A[2] = 100;
	B[0] = -100;
	int Amax;
	int Bmax;
	iamax(5,A,1,Amax);
	iamax(5,B,1,Bmax);
	cout << Amax << " " << Bmax << endl; 	// <--- 2 0
	
	//iamin//
	int Amin;
	int Bmin;
	iamin(5,A,1,Amin);
	iamin(5,B,1,Bmin);
	cout << Amin << " " << Bmin << endl;	// <--- 0 1
	
	//rotm//
	double param1[5], param2[5], param3[5], param4[5];
	param1[0] = -1.;		param1[1] = 2.;		param1[2] = 3.;		param1[3] = 4.;		param1[4] = 5.;
	param2[0] = 0.;			param2[1] = 2.;		param2[2] = 3.;		param2[3] = 4.;		param2[4] = 5.;
	param3[0] = 1.;			param3[1] = 2.;		param3[2] = 3.;		param3[3] = 4.;		param3[4] = 5.;
	param4[0] = -2.;		param4[1] = 2.;		param4[2] = 3.;		param4[3] = 4.;		param4[4] = 5.;
	
	for(int i=0; i<5; i++) {
		A[i]=(double)i;
		B[i]=(double)(i+2);
	}
	
	rotm(5,A,1,B,1,param1);
	
	for(int i=0; i<5; i++) {cout << A[i] << " ";}
	cout << "  --  ";
	
	for(int i=0; i<5; i++) {cout << B[i] << " ";}
	cout << endl;					// <--- 8 14 20 26 32  --  10 18 26 34 42
	
	for(int i=0; i<5; i++) {
		A[i]=(double)i;
		B[i]=(double)(i+2);
	}
	
	rotm(5,A,1,B,1,param2);
	
	for(int i=0; i<5; i++) {cout << A[i] << " ";}
	cout << "  --  ";
	
	for(int i=0; i<5; i++) {cout << B[i] << " ";}
	cout << endl;					// <--- 8 13 18 23 28  --  2 6 10 14 18
	
	for(int i=0; i<5; i++) {
		A[i]=(double)i;
		B[i]=(double)(i+2);
	}
	
	rotm(5,A,1,B,1,param3);
	
	for(int i=0; i<5; i++) {cout << A[i] << " ";}
	cout << "  --  ";
	
	for(int i=0; i<5; i++) {cout << B[i] << " ";}
	cout << endl;					// <--- 2 5 8 11 14  --  10 14 18 22 26
	
	for(int i=0; i<5; i++) {
		A[i]=(double)i;
		B[i]=(double)(i+2);
	}
	
	rotm(5,A,1,B,1,param4);
	
	for(int i=0; i<5; i++) {cout << A[i] << " ";}
	cout << "  --  ";
	
	for(int i=0; i<5; i++) {cout << B[i] << " ";}
	cout << endl;					// <--- 0 1 2 3 4  --  2 3 4 5 6
	

	return 0;
}