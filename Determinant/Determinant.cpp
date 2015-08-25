//Emmanuel Mingle
//June 7, 2015. 2:55PM
//Finding the Determinant
#include<iostream>
using namespace std;

int main()
{
	int DetA,a,b,c,d,e,f,g,h,i,mattype;
	cout<<"Enter Matrix type\n";
	cout<<"1 for 2*2 matrix\n";
	cout<<"2 for 3*3 matrix\n";
	cin>>mattype;
	if(mattype==1)
	{
	cout<<"You are working with a 2*2 matrix\n" <<"Enter values of matrix a,b,c,d\n";
	cin>>a >>b >>c >>d;
	cout<<"MatA = \n" <<"|" <<a <<" \t" <<b <<"|\n" <<"|" <<c <<" \t" <<d <<"\t|\n\n";
	DetA=(a*d)-(c*b);
	cout<<"DetA = " <<DetA;
	}
	
	else
	{
	cout<<"You are working with a 3*3 matrix\n" <<"Enter values of matrix a,b,c,d,e,f,g,h,i\n";
	cin>>a >>b >>c >>d >>e >>f >>g >>h >>i;
	cout<<"MatA = \n" <<"|" <<a <<" \t" <<b <<" \t" <<c <<"\t|\n" <<"|" <<d <<" \t" <<e <<" \t" <<f <<"\t|\n";
	cout<<"|"<<g <<" \t" <<h <<" \t" <<i <<"\t|\n\n";
	DetA=(a*(e*i-h*f)-b*(d*i-g*f)+c*(d*h-g*e));
	cout<<"DetA = " <<DetA;
	}
	return 0; 
}
