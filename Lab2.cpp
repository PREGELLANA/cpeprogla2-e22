#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>
#include <ctime>
using namespace std;

int main(){
	
	double n;
	
	cout<<" Enter number to Round off:";
	cin>>n;
	cout<< round(n)<<endl;
	cout<<fixed<< setprecision (1)<<endl;
	
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	int i, n, factorial =1;
	
	cout<<" Enter a number: ";
	cin>>n;
	
	for(i = 1; i<= n;++i){
		factorial*= i;
	}
	cout<<" The factorial of"<<n<<" = "<<factorial;
	
	return 0;
}

#include <iostream> 
#include <cstdio>
#include <cstdlib>
#include <string.h>
using namespace std; 

//Problem 3
int main()
{
	int a,b,c,d,e;
	char choice, routine, C;
	Start:
	cout<<"1. Area of Square"<<endl;
	cout<<"2. Area of Rectangle"<<endl;
	cout<<"3. Area of Triangle"<<endl;
	cout<<"4. Area of Circle"<<endl;
	cout<<"5. Exit"<<endl; 
	cout<<"-----------------------------------------"<<endl;
	cout<<"Enter Your Choice :"<<endl;
	cin>>choice;
	
	switch(choice)
	{
		case'1'://area of square 
			cout<<"Area of Square"<<endl;
			cout<<"Enter the Side of a square"<<endl;
			cin>>a;
			cout<<"The area is "<<a*a<<" sq. units"<<endl;
			cout<<"-----------------------------------------"<<endl;
			goto Choice;
			break;
		case'2'://area of rectangle
			cout<<"Area of Rectangle"<<endl;
			cout<<"Enter the length and width of the rectangle : "<<endl;
			cin>>c;
			cin>>b;
			cout<<"The area is "<<b*c<<" sq. units"<<endl;
			cout<<"-----------------------------------------"<<endl;
			goto Choice;
			break;
		case'3'://area of triangle
			cout<<"Area of Triangle"<<endl;
			cout<<"Enter the base and width of the Triangle : "<<endl;
			cin>>b;
			cin>>c;
			cout<<"The area is "<<b*c<<" sq. units"<<endl;
			cout<<"-----------------------------------------"<<endl;
			goto Choice;
			break;
		case'5'://exit
			cout<<"THANK YOU :) "<<endl;
			cout<<"-----------------------------------------"<<endl;
			goto End;
			break;
		
	}
	  
    {
     cout<<"Invalid \n"<<endl;
     cout<<"*************************************\n"<<endl;
Choice :                                                 //Function Call or "Subroutine"
           cout<<"Do you want to try again ?\n";
           cout<<"y = yes / n = no \n";
           cout<<"Please Enter Your Choice :  ";
           cin>>routine;
           cout<<"*************************************\n";
          if (routine == 'y') {
                 goto Start;
                 }
          else if (routine == 'n') {
               goto End;
               }
          else {
               cout<<"Invalid Input!!\n";
               goto Choice;
               cout<<"*************************************\n";
               
               End :  
    return 0;
               
}
	//cout<<"-----------------------------------------"<<endl;
	//cout<<a<<endl;
	//cout<<"-----------------------------------------"<<endl;
	
 } 
}
