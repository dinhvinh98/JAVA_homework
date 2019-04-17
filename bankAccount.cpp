
#include <iostream>

using namespace std ;

class bankAccount
{
	public :
		// Constructor
		bankAccount(long newID, string newName , double firstBalance)
		{
			if (newID>=0)
				{
					id = newID ;
					balance = firstBalance ;
					name = newName ;
				}
			else
				{
					cout << "Syntax error :id and balance must not less than zero\n" ;
				}
		}
		// Destructor
		~bankAccount()
		{
			delete &id ;
			delete &balance ;
			delete &name ;
		}
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
			cout << "ID      : "<< id  << endl ;
			cout << "Balance : "<< balance << endl ;
			cout << "Name    : "<< name  << endl ;
		}
	private :
		double balance ;
		long id ;
		string name ;

};
int main()
{
	bankAccount Vinh(12310071, "Vinh" ,0) ;
	bankAccount Duc(123456789, "Duc", 0) ;
	bankAccount Khai(11236942, "Khai",0) ;
	Vinh.getInfor() ;
	Khai.getInfor() ;
	Duc.getInfor()	;
	system("pause") ;

	Vinh.deposit(123123) ;
	Duc.deposit(-123123) ;
	Khai.deposit(1) ;

	Vinh.withdraw(123123) ;
	Duc.withdraw(-123123) ;
	Khai.withdraw(10) ;

	Vinh.getInfor() ;
	Khai.getInfor() ;
	Duc.getInfor()	;
	system("pause") ;

	Vinh.~bankAccount() ;
	Duc.~bankAccount()	;
	Khai.~bankAccount() ;
	return 0 ;

}

