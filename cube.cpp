#include <iostream>
using namespace std ;

class Cube
{
	private :
		double size ;
	public :
		
		Cube(double val)
		{
			if (val>0)
				size = val ;
			else size = 0 ;
		}
		void setSize(double val)
		{
			if (val>0)
				size = val ;
		}
		double getSize()
         {
            return size;
         }
         double volume()
         {
            return size*size*size;
         }
         void details()
         {
		 	cout << "\nDetail of cube :" <<endl;
		 	cout << "Width = height = length = " << size  <<endl ;
		 	cout << "Volume = "<< volume() << endl << endl  ;
		 }
	};
int main()
	{
        Cube cube1 (4);
        Cube cube2 (3);
        Cube cube3 (-2);
        cube1.details();
        cube2.details();
        cube3.details();
    	return 1 ;

	}
	
