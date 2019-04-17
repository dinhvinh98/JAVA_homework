package lab1;


/* Declare a class that describes a bank account. The class should have the following variables:
- balance: double
- id: long
and it should also have the following two methods:
- deposit(double): void
- withdraw(double): void
Check the class you declared by instantiating it and invoking the deposit and the withdraw methods.*/

class bankAccount 
{
	private double balance ;
	private long id ;
	private String name ;
		
	public 	bankAccount(long newID, String newName , double firstBalance)
	{
			if (newID>=0)
				{
					id = newID ;
					balance = firstBalance ;
					name = newName ;					
				}
			else 
				{
				System.out.println("Syntax error :id and balance must not less than zero\n") ;
				}
	}
		/*/ Destructor
	public DeletebankAccount()
	{
			delete &id ;
			delete &balance ;
			delete &name ;
	}*/
		// Add to balance
	void deposit (double cash)
		{
			if (cash>0)
				balance += cash ;
		}
		// Minus to balance
	void withdraw (double cash)
		{
			if(cash>0)
				balance -= cash ;
		}
	void getInfor()
		{
			System.out.println("ID      : "+id  ) ;
			System.out.println("Balance : "+balance) ;
			System.out.println( "Name    : "+name) ;
		}




	public static void main(String args[])
	{
	
	bankAccount Vinh = new bankAccount(12310071, "Vinh" ,0) ;
	bankAccount Duc = new bankAccount(12310072, "Duc" ,0) ;
	bankAccount Khai = new bankAccount(12310073, "Khai" ,0) ;
	
	Vinh.getInfor() ;
	Khai.getInfor() ;
	Duc.getInfor()	;
		Vinh.deposit(123123) ;
	Duc.deposit(-123123) ;
	Khai.deposit(1) ;
	
	Vinh.withdraw(123123) ;
	Duc.withdraw(-123123) ;
	Khai.withdraw(10) ;
	
	Vinh.getInfor() ;
	Khai.getInfor() ;
	Duc.getInfor()	;

	
	//Vinh.~bankAccount() ;
	//Duc.~bankAccount()	;
	//Khai.~bankAccount() ;	
	//return 0 ;
	}
}
