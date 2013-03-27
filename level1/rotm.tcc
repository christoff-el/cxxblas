#ifndef CXXBLAS_LEVEL1_ROTM_TCC
#define CXXBLAS_LEVEL1_ROTM_TCC 1

template <typename IndexType, typename X, typename Y, typename ParamType>
void
rotm(IndexType n, X *x, IndexType incX, Y *y, IndexType incY, const ParamType *param)
{
	
	ParamType h11, h12, h21, h22;
	
	switch ((int)param[0]) {
		case 0:
			h11 = 1.;
			h21 = param[2];
			h12 = param[3];
			h22 = 1.;
			break;
		case 1:
			h11 = param[1];
			h21 = -1.;
			h12 = 1.;
			h22 = param[4];
			break;
		case -2:
			h11 = 1.;
			h21 = 0.;
			h12 = 0.;
			h22 = 1.;
			break;
		default:
			h11 = param[1];
			h21 = param[2];
			h12 = param[3];
			h22 = param[4];
			break;
	}
	
	X tmpX;
	for (IndexType i=0, iX=0, iY=0; i<n; ++i, iX+=incX, iY+=incY) {
		tmpX = x[iX];
		x[iX] = h11*tmpX + h12*y[iY];
		y[iY] = h21*tmpX + h22*y[iY];
	}
	
}

#endif	// CXXBLAS_LEVEL1_ROTM_TCC 1


/*Based on param(1) as parameter flag:

param(1):	|	h11			h21			h12			h22
-1.0	-->	|	param(2)	param(3)	param(4)	param(5)
0.0		-->	|	1.0			param(3)	param(4)	1.0
1.0		-->	|	param(2)	-1.0		1.0			param(5)
-2.0	-->	|	1.0			0.0			0.0			1.0

*/