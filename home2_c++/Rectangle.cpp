#include <iostream>
#include <conio.h>
using namespace std;
class Rectangle
{
 private:
		 double width, height;
  public:
    Rectangle (double x, double y)   
	{
			 width =x;
			 height =y;
		} 
    double perimeter() ;
    double area() ;
};
 main()
   {
   Rectangle rec1(23,20); 
   Rectangle rec2 (40,50); 
   cout<<"area of rec1 is : "<< rec1.area();
   cout<<"\n area of rec2 is : "<<rec2.area();
getch();  
}
	
		 
		 double  Rectangle::perimeter()
		 {
		          return 2*(this->width + this->height);
		 }
		
		 double  Rectangle::area()
		 {
		          return width * height;
		 }


