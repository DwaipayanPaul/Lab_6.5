/*
Question 1 (Loops): Apples cost Re1 each, mangoes cost Rs3 each, and 1 banana is only Rs0.50.
You bought 100 fruits for Rs100, How many of each fruit did you buy? Display all variations of answer. 
   */
#include <iostream>

using namespace std;

int main()             //main function
{
    double h;
    for(int a=1;a<=100;a++)            //nested for loops
    {
        for(int m=1;m<=100;m++)
        {
            for(int b=1;b<=100;b++)
            {
                h=a+(m*3)+(b/2.0);                             //calculating cost
                if(h==100 && a+m+b==100)                      //checking if total number of fruit is hundred and cost is rs.100
                cout<<"apple="<<a<<"  mangoes="<<m<<"  banana="<<b<<endl; //printing various combinations
            }
        }
    }

    return 0;
}
