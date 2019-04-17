package lab1;
class Rectangle
{
  private double width, height;
  public Rectangle (double x, double y)
    {
      width =x;
      height =y;
    }
  public double area()
    {
      return width * height;
    }
 public static void main(String args[])
    {
     Rectangle rec1 = new Rectangle(23,20);
     Rectangle rec2 = new Rectangle(40,50);
  System.out.println("area of rec1 is : "+rec1.area());
  System.out.println("area of rec2 is : "+rec2.area());
      }
}
