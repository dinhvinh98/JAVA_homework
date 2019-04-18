#include <iostream>
using namespace std ;

class Area
{
	public :
		// Area of square
		static double get(double a)
		{
			return a*a ;
		}
		// Area of rectangle
		static double get(double a , double b)
		{
			return a*b ;
		}
		// Area of triangle
		static int get(int a , int b)
		{
			return int (a*b/2);
		}
		// Area of circle
		static int get(int r)
		{
			return int (r*r*3.14) ;
		}
} ;

	int main()
	{
		cout << "Area of square with a = 4.0 is " << Area::get(4.0) << endl;
		cout << "Area of rectangle with a = 4.0, b= 5.0 is " << Area::get(4.0,5.0) << endl ;
		cout << "Area of triangle with a = 4, b= 5 is " << Area::get(4,5) << endl ; 
		cout << "Area of cirle with r = 4 is " << Area::get(4)  << endl ;
																
		return 0;
	}

