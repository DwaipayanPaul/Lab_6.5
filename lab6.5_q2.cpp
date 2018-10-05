
/*
Question 2 (Functions): You are a salesperson of Bata shoe company, where each shoe is Rs 225. Company gave you three options for the salary. 
1. Just a salary of Rs 600 per week;
2. A salary of Rs7.00 per hour plus a 10% commission on sales; (Assume you work 40 hours a week) 
3. No salary, but 20% commissions and Rs20 for each pair of shoes sold
Write a program to help decide the best choice of compensation. You ask the user for input (Write a function for this). Then write other functions for each of the options. Write a driver program to use the 4 functions and decide the best option for yourself. (Of course, the weekly sales - the number of shoes sold per week has to be given by the user) 
*/

#include <iostream>
using namespace std;

int input()                   //For input of number of shoes
{
	int i;
	cout<<"The number of shoes sold per week="<<endl;
	cin>>i;                           //User input
	return i;
}

void op1()                       //Function for only salary option 1,
{

	cout <<"Option (1) gives 600 rupee salary"<<endl;

}



int op2(int i)              //Function for salary + commission option 2,
{
	int s=7*40 + i*225*0.1;              //Calculation of salary +commision
	cout <<"Option (2) gives "<<s<<" rupee salary"<<endl;
	return s;

}



int op3(int i)               //Function for only commission  option 3,
{
	int s=0.2*i*225 +25*i;               //calculation of commision
	cout <<"Option (3) gives "<<s<<" rupee salary"<<endl;
	return s;
}

//main function

int main()
{



	int i,sa2,sa3,max1;        //variable declaration
	int op;                     //option



	i=input();                    //function call
	op1();
	sa2=op2(i);
	sa3=op3(i);



	if (sa2>=sa3)                      //Comparing which salary is bigger
	{
		max1=sa2;
		op=2;
	}
	else 
	{
		max1=sa3;
		op=3;
	}
	if(max1<=600)
		op=1;

//output

	cout <<"Hence the correct option for the employee is ("<<op<<")"<<endl;

}