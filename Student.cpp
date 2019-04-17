#include <iostream>
using namespace std ;

    class Student
    {
        private :
            string name;
            long id;
            double mathMark, englishMark, physicsMark, chemistryMark;

        public:
            Student(string newname, long newid)
            {
                name = newname;
                id = newid;
            }
            void setMathMark(double value)
            {
                   if(value>0 && value<=100)
                   {
                        mathMark = value;
                   }
            }
            void setEnglishMark (double value)
            {
                    if(value>0 && value<=100)
                    {
                        englishMark = value;
                    }
            }
            void setPhysicsMark (double value)
            {
                    if(value>0 && value<=100)
                    {
                        physicsMark = value;
                     }
            }
            void setChemistryMark (double value)
            {
                    if(value>0 && value<=100)
                        chemistryMark = value;
            }
            double getAverage()
            {
                   double result=0;
                   result = ( mathMark + englishMark + physicsMark +chemistryMark) / 4;
                   return result;
            }
            void displayDetails()
            {
                    cout << "\n name    = " << name ;
                    cout << "\n id      = " << id;
                    cout << "\n average = " << getAverage() << endl ;
            }
    };


        int main ()
        {
                   Student stu("Haim",123123);
                   stu.setChemistryMark(98);
                   stu.setEnglishMark(88);
                   stu.setPhysicsMark(78);
                   stu.setMathMark(100);
                   stu.displayDetails();
                return 0 ;
        }
