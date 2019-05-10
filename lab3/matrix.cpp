// How to get the zise of 2d diamnic memory
// How to avoid error if we enter the wrong size of array

#include <iostream>
using namespace std ;

class Matrix
{
	private :
		int row, col ;
		float **data  ;
	public :

		Matrix ()
		{
			row = col = 1 ;
			data = new float*[1] ;
			float* tmp = new float[1] ;
			data[0] = tmp ;
			tmp[0] = 1.0 ;
		}
		Matrix(int mrow, int mcol)
		{
			row = mrow ;
			col = mcol ;
			data = new float* [mrow] ;
			float* tmp = new float [mrow*mcol] ;
			for (int i = 0 ; i<mrow ; i++, tmp+= mcol)
			{

				for (int j = 0 ; j <mcol; j++)
				{
					tmp[i] = 1.0 ;
				}
				data[i] = tmp ;
			}
		}
		Matrix ( float **ary, int mrow, int mcol )
		{
			cout << endl << ary ;
			row = mrow ;
			col = mcol ;
			data = ary ;
		}
		Matrix ( const Matrix &A)
		{
			row = A.row ;
			col = A.col ;
			data = A.data ;
		}
		Matrix operator+(Matrix &B) //Addition of two Matrices
		{
			if ( row == B.row && col == B.col)
			{
				float** data_temp = new float* [row]() ;
				float* sequence = new float [row*col] ;
				for(int i = 0; i < row; ++i, sequence += col)
   				{
   					data_temp[i] = sequence ;
					for (int j = 0 ; j<col ; ++j)
					{
						data_temp[i][j] = data[i][j] + B.data[i][j] ;
		   			}
				}
				return Matrix(data_temp, row, col) ;
			}
		}

		Matrix operator-(Matrix &B) //Subtraction of two Matrices
		{
			if ( row == B.row && col == B.col)
			{
				float** data_temp = new float* [row]() ;
				float* sequence = new float [row*col] ;
				for(int i = 0; i < row; ++i, sequence += col)
   				{
   					data_temp[i] = sequence ;
					for (int j = 0 ; j<col ; ++j)
					{
						data_temp[i][j] = data[i][j] - B.data[i][j] ;
		   			}
				}
				return Matrix(data_temp, row, col) ;
			}
		}


		int operator==(Matrix &B) //Comparision of two Matrices
		{
				if ( row == B.row && col == B.col)
			{
				for(int i = 0; i < row; ++i)
   				{
					for (int j = 0 ; j<col ; ++j)
					{
						if ( data[i][j] != B.data[i][j] )
							return 0 ;
	   				}
				}
				return 1 ;
			}
				else return 0 ;
		}
		Matrix operator*(Matrix &b) //Production of two Matrices
		{
            Matrix tmp(row, b.col) ;
            for (int i = 0 ; i < row ; i++)
            {   for(int j = 0 ; j <b.col ; j++)
                {
                    tmp.data[i][j] = 0.0 ;
                    for (int k = 0 ; k < col ; k++)
                        tmp.data[i][j] += data[i][k]*b.data[k][j] ;
                }
            }
		}
		void display()// Print matrix
		{
			for(int i = 0; i < row; ++i)
			{
				for (int j = 0 ; j<col ; ++j)
				{
					cout << data[i][j] <<" ";
   				}
   				cout << endl ;
			}
		}
};

int main()
{
	Matrix matrixA(2,2);
	Matrix matrixB(2,2);
	matrixA.display() ;
	matrixB.display() ;
	//system("pause") ;
	Matrix matrixC = matrixA + matrixB ;
	matrixC.display() ;
	return 1;
}
