//Emmanuel Nii-Akwei Mingle
//June 10, 2015. 3:14PM
//Multiplying a matrix by a constant
#include<iostream>
using namespace std;

int main()
{
	float a,b,c,d,e,f,g,h,i,mattype,num;
	cout<<"Enter the Matrix type\n";
	cout<<"1 for 2*2 matrix\n" <<"2 for 3*3 matrix\n";
	cin>> mattype;
	
	if(mattype==1)
	{
		cout<<"You are using a 2*2 matrix\n";
		cout<<"Enter the value of the constant\n";
		cin>> num;
		cout<<"Constant = " <<num <<endl;
		cout<<"Enter the values of matrix a,b,c,d\n";
		cin>>a >>b >>c >>d;
		cout<<"MatA = \n" <<"|" <<a <<" \t" <<b <<"\t|\n" <<"|" <<c <<" \t" <<d <<"\t|\n";
		a=num*a; b=num*b; c=num*c; d=num*d;
		cout<<"Const*MatA = \n" <<"|" <<a <<" \t" <<b <<"\t|\n" <<"|" <<c <<" \t" <<d <<"\t|\n";
	}
	
	else
	{
		cout<<"You are using a 3*3 matrix\n";
		cout<<"Enter the value of the constant\n";
		cin>>num;
		cout<<"Constant = " <<num <<endl;
		cout<<"Enter the values of matrix a,b,c,d,e,f,g,h,i\n";
		cin>>a >>b >>c >>d >>e >>f >>g >>h >>i;
		cout<<"MatA = \n" <<"|" <<a <<" \t" <<b <<" \t" <<c <<"\t|\n";
		cout<<"|" <<d <<" \t" <<e <<" \t" <<f <<"\t|\n" <<"|" <<g <<" \t" <<h <<" \t" <<i <<"\t|\n";
		a=num*a; b=num*b; c=num*c; d=num*d; e=num*e; f=num*f; g=num*g; h=num*h; i=num*i;
		cout<<"Const*MatA = \n" <<"|" <<a <<" \t" <<b <<" \t" <<c <<"\t|\n";
		cout<<"|" <<d <<" \t" <<e <<" \t" <<f <<"\t|\n" <<"|" <<g <<" \t" <<h <<" \t" <<i <<"\t|\n";
	}
	return 0;
}
