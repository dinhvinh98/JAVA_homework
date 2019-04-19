package lab2;
//JAVA

//COMPLETE IT BY YOURSELF


import java.util.Scanner;

public class LinkedList
{
private  Node head, tail;

static class Node { 
    int data; 
    Node next; 
    Node() { next = null; data = 0;} 
    Node(int d)  { data = d;  next=null; } // Constructor 
} 

public LinkedList()
  {
    head=null;
    tail=null;
  }
  
//creation of a new node for the linked list    
public void createnode(int value)
  {
   Node temp=new Node(value);
   
    if(head==null)
    {
      head=temp;
      tail=temp;
      temp=null;
    }
    else
    {	
      tail.next=temp;
      tail=temp;
    }
  }

//displaying nodes of linked list

void display()
{
  Node temp=head;
  while(temp!=null)
  {
    System.out.print(temp.data + "-->");
    temp=temp.next;
  }
  System.out.println("NULL");
} 


//insert at the start
void insert_start(int value)
{
	Node temp = new Node(value);
    //temp.data = value;
    temp.next=head;
    head = temp;

}	

  //insert at the end
void insert_end(int value)
{
	Node temp=new Node(value) ;
    temp.data=value;
    temp.next= null;
    
    tail.next = temp;
    tail=temp;

}

//insert at the particular position
void insert_position(int pos, int value)
{
	Node pre=new Node() ;
    Node cur=new Node() ;
    Node temp=new Node() ;
    cur = head;
    for(int i=1;i<pos;i++)
    {
      pre=cur;
      cur = cur.next;
    }
    temp.data=value;
    pre.next=temp;	
    temp.next=cur;

}

//delete at the start	 
void delete_first()
{
    Node temp= new Node();
    temp=head;
    head=head.next;

}
	
//delete at the end
void delete_last()
{
	Node current=new Node();
    Node previous=new Node();
    current=head;
    while(current.next!=null)
    {
      previous=current;
      current=current.next;	
    }
    tail=previous;
    previous.next= null;
    

}

//Deletion at a particular position

void delete_position(int pos)
{
    Node current=new Node();
    Node previous=new Node();
    current=head;
    for(int i=1;i<pos;i++)
    {
      previous=current;
      current=current.next;
    }
    previous.next=current.next;

}
	 

  
public static void main(String[] arg)  
{  

LinkedList L = new LinkedList() ;

int n;

Scanner keyboard = new Scanner(System.in);
System.out.print("n = ");
n = keyboard.nextInt();

//input
for (int i= 1;i<=n; i++)
{
	int value;

	System.out.print("value = ");
	value = keyboard.nextInt();
	
	L.createnode(value);
}
//display

L.display();
    
L.insert_start(8);

L.insert_end(5);

L.insert_position(3,6);

L.display();

L.delete_first();
L.delete_last();
L.delete_position(3);

L.display();

} 
}
