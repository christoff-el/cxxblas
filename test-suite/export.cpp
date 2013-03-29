//#include <iostream>

#include "../level1/asum.tcc"
#include "../level1/axpy.tcc"
#include "../level1/copy.tcc"
#include "../level1/dot.tcc"
#include "../level1/nrm2.tcc"
#include "../level1/rot.tcc"
#include "../level1/rotg.tcc"
#include "../level1/scal.tcc"
#include "../level1/swap.tcc"
#include "../level1/iamax.tcc"



extern "C" {

//-----------------------------------------------------------------//
//----------------------------Level 1------------------------------//
//-----------------------------------------------------------------//

//-------Single Precision-------//

//asum
float
(sasum_)(int 			*N,
		 const float 	*X,
         int			*INCX)
{
    return asum<float>(*N,X,*INCX);
}

//axpy
void
(saxpy_)(int 			*N,
		 const float 	*ALPHA,
         const float	*X,
         int 			*INCX,
         float			*Y,
         int			*INCY)
{
    axpy(*N,*ALPHA,X,*INCX,Y,*INCY);
}

//copy
void
(scopy_)(int 			*N,
         const float	*X,
         int 			*INCX,
         float			*Y,
         int			*INCY)
{
    copy(*N,X,*INCX,Y,*INCY);
}

//dot
float
(sdot_)(int 			*N,
        const float		*X,
        int 			*INCX,
        const float		*Y,
        int				*INCY)
{
    return dot<float>(*N,X,*INCX,Y,*INCY);
}

//nrm2
float
(snrm2_)(int 			*N,
         const float	*X,
         int 			*INCX)
{
    return nrm2<float>(*N,X,*INCX);
}

//rot
void
(srot_)(int 			*N,
        float			*X,
    	int 			*INCX,
        float			*Y,
        int				*INCY,
        float			*C,
        float			*S)
{
    rot(*N,X,*INCX,Y,*INCY,*C,*S);
}

//rotg
void
(srotg_)(float 			*A,
		 float 			*B,
		 float 			*C,
		 float 			*S)
{
    rotg(*A,*B,*C,*S);
}

//scal
void
(sscal_)(int 			*N,
		 float 			*ALPHA,
         float			*X,
    	 int 			*INCX)
{
    scal(*N,*ALPHA,X,*INCX);
}

//swap
void
(sswap_)(int 			*N,
        float			*X,
    	int 			*INCX,
        float			*Y,
        int				*INCY)
{
    swap(*N,X,*INCX,Y,*INCY);
}

//i_amax
int
(isamax_)(int 			*N,
          float			*X,
    	  int 			*INCX)
{
    return iamax(*N,X,*INCX);
}

//------------------------------//

//-------Double Precision-------//

//asum
double
(dasum_)(int 			*N,
		 const double 	*X,
         int			*INCX)
{
    return asum<double>(*N,X,*INCX);
}

//axpy
void
(daxpy_)(int 			*N,
		 const double 	*ALPHA,
         const double	*X,
         int 			*INCX,
         double			*Y,
         int			*INCY)
{
    axpy(*N,*ALPHA,X,*INCX,Y,*INCY);
}

//copy
void
(dcopy_)(int 			*N,
         const double	*X,
         int 			*INCX,
         double			*Y,
         int			*INCY)
{
    copy(*N,X,*INCX,Y,*INCY);
}

//dot
double
(ddot_)(int 			*N,
        const double	*X,
        int 			*INCX,
        const double	*Y,
        int				*INCY)
{
    return dot<double>(*N,X,*INCX,Y,*INCY);
}

//nrm2
double
(dnrm2_)(int 			*N,
         const double	*X,
         int 			*INCX)
{
    return nrm2<double>(*N,X,*INCX);
}

//rot
void
(drot_)(int 			*N,
        double			*X,
    	int 			*INCX,
        double			*Y,
        int				*INCY,
        double			*C,
        double			*S)
{
    rot(*N,X,*INCX,Y,*INCY,*C,*S);
}

//rotg
void
(drotg_)(double 		*A,
		 double 		*B,
		 double 		*C,
		 double 		*S)
{
    rotg(*A,*B,*C,*S);
}

//scal
void
(dscal_)(int 			*N,
		 double			*ALPHA,
         double			*X,
    	 int 			*INCX)
{
    scal(*N,*ALPHA,X,*INCX);
}

//swap
void
(dswap_)(int 			*N,
        double			*X,
    	int 			*INCX,
        double			*Y,
        int				*INCY)
{
    swap(*N,X,*INCX,Y,*INCY);
}

//i_amax
int
(idamax_)(int 			*N,
          double		*X,
    	  int 			*INCX)
{
    return iamax(*N,X,*INCX);
}

}