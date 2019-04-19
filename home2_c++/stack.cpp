#include<iostream>

#define SIZE 5
 
using namespace std;
 
class STACK
{
    private:
        int num[SIZE];
        int top;
    public:
        STACK();    //defualt constructor
        int push(int);
        int pop();
        int isEmpty();
        int isFull() ;
        void getTop() ;
        int getsize() ;
};

STACK::STACK(){
    top=-1;
}
 
int STACK::isEmpty(){
    if(top==-1)
        return 1;
    else
        return 0;   
}

int STACK::isFull(){
    if(top==(SIZE-1))
        return 1;
    else
        return 0;
}
 
int STACK::push(int n){
    if(isFull()){
        return 0;
    }
    ++top;
    num[top]=n;
    return n;
}
 
int STACK::pop(){
    int temp;
    if(isEmpty())
        return 0;
    temp=num[top];
    --top;
    return temp;
     
}
int STACK::getsize()
{
	return top+1 ;
}
 
void STACK::getTop()
{
    cout << " Top is " << num[top] ;
}
 

