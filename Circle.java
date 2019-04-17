package lab1;

	class Circle {
	        private double radius;
	         
	        public Circle(double value)
	         {
	          radius = value;
	         }
	         double perimeter()
	         {
	                  return 2*3.14159*radius;
	         }
	         double area()
	         {
	           return 3.1415926 * radius *radius ;
	         }
	
	
	public static void main(String args[])
	{
	          Circle circ1, circ2 ;
	          circ1 = new Circle(8) ;
	          circ2 = new Circle(16) ;
	          System.out.println("area of circ1 is : "+ circ1.area() );
	          System.out.println("perimeter of circ1 is : "+circ1.perimeter() );
	          System.out.println("area of circ2 is : "+ circ2.area() );
	          System.out.println("perimeter of circ2 is : "+circ2.perimeter() );
	}

}
