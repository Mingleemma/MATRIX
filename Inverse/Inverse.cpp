//Emmanuel Nii-Akwei Mingle
//June 10, 2015. 4:30PM
//Finding the inverse of a matrix.
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	float a,b,c,d,e,f,g,h,i,num1,num2,num3,num4,num5,num6,num7,num8,num9, Det;
	char mattypes;
	
	cout<<"Are you using a 2*2 Matrix(y/n)\n";
	cin>>mattypes;
	
	if(mattypes=='y')
	{
	cout<<"Enter values of matrix a,b,c,d\n";
	cin>>a >>b >>c >>d;
	cout<<"MatA = \n" <<"|" <<a <<" \t" <<b <<"\t|\n" <<"|" <<c <<" \t" <<d <<"\t|\n\n";
	Det=a*d-b*c;
	cout<<"Determinant = " <<Det <<endl;
	num1=d/Det; num2=-b/Det; num3=-c/Det; num4=a/Det;
	
	cout<<"InvrsMatA = \n" <<"|" <<num1 <<" \t" <<num2 <<"\t|\n" <<"|" <<num3 <<" \t" <<num4 <<"\t|\n\n";
	}
	
	else if(mattypes=='n')
	{
		cout<<"Error";
	}
return 0;
}
