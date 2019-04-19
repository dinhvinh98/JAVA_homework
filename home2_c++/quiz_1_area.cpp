#include <iostream>
using namespace std ;

class Area
{
  	private :
  	    
	public :		
		static int num ;
	
        Area()
	    {   num++ ;
	    }
	    
		// Get number of objects
		int getNumOfObject()
		{
		    return Area::num ;
		}
		// Area of square
		static double gett(double a)
		{
			return a*a ;
		}
		// Area of rectangle
		static double gett(double a , double b)
		{
			return a*b ;
		}
		// Area of triangle
		static int gett(int a , int b)
		{
			return int (a*b/2);
		}
		// Area of circle
		static int gett(int r)
		{
			return int (r*r*3.14) ;
		}

} ;	


	int Area::num = 0 ;
	
	int main()
	{
	    
		cout << "Area of square with a = 4.0 is " << Area::gett(4.0) << endl;
		cout << "Area of rectangle with a = 4.0, b= 5.0 is " << Area::gett(4.0,5.0) << endl ;
		cout << "Area of triangle with a = 4, b= 5 is " << Area::gett(4,5) << endl ;
		cout << "Area of cirle with r = 4 is " << Area::gett(4)  << endl ;

		Area object1 ;
		Area object2 ;
		Area object3 ;
		cout << "Number of objects is : " << object3.getNumOfObject() <<endl ;

		return 0;
	}

