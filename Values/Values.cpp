//Emmanuel Mingle
//June 7, 2015. 3:09PM
// Finding the values of x,y,and or z in a given quadratic equation.
#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
	float a,b,c,d,e,f,g,h,i,x,y,z,DetA,DetAx,DetAy,DetAz,m,n,o,mattype;
	cout<<"Enter the Matrix type\n" <<"1 for 2*2 matrix\n" <<"2 for 3*3 matrix\n";
	cin>>mattype;
	
	if(mattype==1)
	{
		cout<<"You are working with a 2*2 matrix\n";
		cout<<"Enter values for matrix a,b,c,d,m,n\n\n";
		cin>> a >>b >>c >>d >>m >>n;
		cout<<"Concactenated form of matrix is given below\n";
		cout<<"|" <<a <<" \t" <<b <<" \t" <<"|" <<" " <<m <<"\t|\n";
		cout<<"|" <<c <<" \t" <<d <<" \t" <<"|" <<" " <<n <<"\t|\n\n";
		DetA=(a*d)-(c*b); DetAx=(m*d)-(b*n);  DetAy=(a*n)-(n*c);
		cout<<"DetA = " <<DetA <<endl;
		cout<<"DetA|x =" <<DetAx <<endl;
		cout<<"DetA|y =" <<DetAy <<endl;
		x=DetAx/DetA; y=DetAy/DetA;
		cout<<"x = " <<x <<endl;
		cout<<"y = " <<y <<endl;
	}
	
	else
	{
		cout<<"You are working with a 3*3 matrix\n";
		cout<<"Enter the values for matrix a,b,c,d,e,f,g,h,i,m,n,o\n";
		cin>>a >>b >>c >>d >>e >>f >>g >>h >>i >>m >>n >>o;
		cout<<"Concactenatdd form of matrix is given below\n";
		cout<<"|" <<a <<" \t" <<b <<" \t" <<c <<" \t"<<"|" <<" " <<m <<"\t|\n";
		cout<<"|" <<d <<" \t" <<e <<" \t" <<f <<" \t"<<"|" <<" " <<n <<"\t|\n";
		cout<<"|" <<g <<" \t" <<h <<" \t" <<i <<" \t"<<"|" <<" " <<o <<"\t|\n";
		DetA=(a*(e*i-h*f)-b*(d*i-g*f)+c*(d*h-g*e));
		DetAx= (m*((e*i)-(h*f))-b*((n*i)-(o*f))+c*((n*h)-(o*e)));
		DetAy= (a*((n*i)-(h*f))-m*((d*i)-(g*f))+c*((d*o)-(g*n)));
		DetAz= (a*((e*o)-(h*n))-b*((d*o)-(g*n))+m*((d*h)-(g*e)));
		cout<<"DetA = " <<DetA <<endl;
		cout<<"DetA|x =" <<DetAx <<endl;
		cout<<"DetA|y =" <<DetAy <<endl;
		cout<<"DetA|z =" <<DetAz <<endl;
		
		x=DetAx/ DetA;
		y=DetAy/ DetA;
		z=DetAz/ DetA;
		
		cout<<"x = " <<x <<endl;
		cout<<"y = " <<y <<endl;
		cout<<"z = " <<z <<endl;
	}
	return 0;
}
