//#include <iostream>

//#include "../level2/gbmv.tcc"			<-- NA
#include "../level2/gemv.tcc"
//#include "../level2/ger.tcc"				<-- NA



extern "C" {

//-----------------------------------------------------------------//
//----------------------------Level 2------------------------------//
//-----------------------------------------------------------------//

//-------Single Precision-------//

//sgbmv									<-- Not available
void
(sgbmv_)(char			*TRANS,
		 int			*M,
		 int			*N,
		 int			*KL,
		 int			*KU,
		 const float	*ALPHA,
		 const float	*A,
		 int			*LDA,
		 const float	*X,
		 int			*INCX,
		 const float	*BETA,
		 float			*Y,
		 int			*INCY)
{
	//sgbmv(*TRANS,*M,*N,*KL,*KU,*ALPHA,A,*LDA,X,*INCX,*BETA,Y,*INCY);
}

//sgemv
void
(sgemv_)(char			*TRANS,
		 int			*M,
		 int			*N,
		 const float	*ALPHA,
		 const float	*A,
		 int			*LDA,
		 const float	*X,
		 int			*INCX,
		 const float	*BETA,
		 float			*Y,
		 int			*INCY)
{
	gemv(*TRANS,*M,*N,*ALPHA,A,*LDA,X,*INCX,*BETA,Y,*INCY);
}

//ger									<-- Not available
void
(sger_)(int				*M,
		int				*N,
		const float		*ALPHA,
		const float		*X,
		int				*INCX,
		const float		*Y,
		int				*INCY,
		float			*A,
		int				*LDA)
{
	//ger(*M,*N,*ALPHA,X,*INCX,Y,*INCY,A,*LDA);
}

//sbmv
void
(ssbmv_)(char			*UPLO,
		 int			*N,
		 int			*K,
		 const float	*ALPHA,
		 const float	*A,
		 int			*LDA,
		 const float	*X,
		 int			*INCX,
		 const float	*BETA,
		 float			*Y,
		 int			*INCY)
{
	//sbmv(*UPLO,*N,*K,ALPHA,*LDA,X,*INCX,*BETA,Y,*INCY);
}

//spmv
void
(sspmv_)(char			*UPLO,
		 int			*N,
		 const float	*ALPHA,
		 const float	*AP,
		 const float	*X,
		 int			*INCX,
		 const float	*BETA,
		 float			*Y,
		 int			*INCY)
{
	//sspmv(*UPLO,*N,*ALPHA,AP,X,*INCX,*BETA,Y,*INCY);
}

//spr2
void
(sspr2_)(char			*UPLO,
		 int			*N,
		 const float	*ALPHA,
		 const float	*X,
		 int			*INCX,
		 const float	*Y,
		 int			*INCY,
		 float			*AP)
{
	//spr2(*UPLO,*N,*ALPHA,X,*INCX,Y,*INCY,AP);
}

//spr
void
(sspr_)(char			*UPLO,
		int				*N,
		const float		*ALPHA,
		const float		*X,
		int				*INCX,
		float			*AP)
{
	//spr(*UPLO,*N,*ALPHA,X,*INCX,AP);
}

//symv
void
(ssymv_)(char			*UPLO,
		 int			*N,
		 const float	*ALPHA,
		 const float	*A,
		 int			*LDA,
		 const float	*X,
		 int			*INCX,
		 const float	*BETA,
		 float			*Y,
		 int			*INCY)
{
	//symv(*UPLO,*N,*ALPHA,A,*LDA,X,*INCX,*BETA,Y,*INCY);
}

//syr2
void
(ssyr2_)(char			*UPLO,
		 int			*N,
		 const float	*ALPHA,
		 const float	*X,
		 int			*INCX,
		 const float	*Y,
		 int			*INCY,
		 float			*A,
		 int			*LDA)
{
	//syr2(*UPLO,*N,*ALPHA,X,*INCX,Y,*INCY,A,*LDA);
}
		 
//syr
void
(ssyr_)(char			*UPLO,
		int				*N,
		const float		*ALPHA,
		const float		*X,
		int				*INCX,
		float			*A,
		int				*LDA)
{
	//syr(*UPLO,*N,*ALPHA,X,*INCX,A,*LDA);
}

//tbmv
void
(stbmv_)(char			*UPLO,
		 char			*TRANS,
		 char			*DIAG,
		 int			*N,
		 int			*K,
		 const float	*A,
		 int			*LDA,
		 float			*X,
		 int			*INCX)
{
	//tbmv(*UPLO,*TRANS,*DIAG,*N,*K,A,*LDA,X,*INCX);
}

//tbsv
void
(stbsv_)(char			*UPLO,
		 char			*TRANS,
		 char			*DIAG,
		 int			*N,
		 int			*K,
		 const float	*A,
		 int			*LDA,
		 float			*X,
		 int			*INCX)
{
	//tbsv(*UPLO,*TRANS,*DIAG,*N,*K,A,*LDA,X,*INCX);
}

//tpmv
void
(stpmv_)(char			*UPLO,
		 char			*TRANS,
		 char			*DIAG,
		 int			*N,
		 const float	*AP,
		 float			*X,
		 int			*INCX)
{
	//tpmv(*UPLO,*TRANS,*DIAG,*N,AP,X,*INCX);
}

//tpsv
void
(stpsv_)(char			*UPLO,
		 char			*TRANS,
		 char			*DIAG,
		 int			*N,
		 const float	*AP,
		 float			*X,
		 int			*INCX)
{
	//tpsv(*UPLO,*TRANS,*DIAG,*N,AP,X,*INCX);
}

//trmv
void
(strmv_)(char			*UPLO,
		 char			*TRANS,
		 char			*DIAG,
		 int			*N,
		 const float	*A,
		 int			*LDA,
		 float			*X,
		 int			*INCX)
{
	//trmv(*UPLO,*TRANS,*DIAG,*N,A,*LDA,X,*INCX);
}

//trsv
void
(strsv_)(char			*UPLO,
		 char			*TRANS,
		 char			*DIAG,
		 int			*N,
		 const float	*A,
		 int			*LDA,
		 float			*X,
		 int			*INCX)
{
	//trsv(*UPLO,*TRANS,*DIAG,*N,A,*LDA,X,*INCX);
}








}	//extern "C"