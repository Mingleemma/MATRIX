//Emmanuel Mingle
//June 6, 2015 4:23 PM
//sUMMING TWO MATRICES

#include<iostream>
using namespace std;

int main()
{
	int a[2], b[2],c[2],d[2],e[2],f[2],g[2],h[2],i[2],num1,num2,num3,num4,num5,num6,num7,num8,num9,mattype;
	cout<<"Enter the Matrix type\n";
	cout<<"1 for 2*2 Matrix\n";
	cout<<"2 for 3*3 Matrix\n";
	cin>>mattype;
	
	if(mattype==1)
	{
		cout<<"Matrix is a 2*2 Matrix\n";
		cout<<"Enter values for MatA\n a1,b1,c1,d1";
		cin>> a[1] >>b[1] >>c[1] >>d[1];
		cout<<"MatA = \n";
		cout<<"|" <<a[1] <<" \t" <<b[1] <<"\t|\n";
		cout<<"|" <<c[1] <<" \t" <<d[1] <<"\t|\n\n";
		
		cout<<"Enter values for MatB\n a2,b2,c2,d2";
		cin>> a[2] >>b[2] >>c[2] >>d[2];
		cout<<"MatA = \n";
		cout<<"|" <<a[2] <<" \t" <<b[2] <<"\t|\n";
		cout<<"|" <<c[2] <<" \t" <<d[2] <<"\t|\n\n";
		
		num1=a[1]+a[2]; num2=b[1]+b[2]; num3=c[1]+c[2]; num4=d[1]+d[4];
		cout<<"MatSum = \n";
		cout<<"|" <<num1 <<" \t" <<num2 <<"\t|\n";
		cout<<"|" <<num3 <<" \t" <<num4 <<"\t|\n\n";
		
	}
	
	else
	{
		cout<<"Matrix is a 3*3 Matrix\n";
		cout<<"Enter values for MatA a1,b1,c1,d1,e1,f1,g1,h1i1\n";
		cin>> a[1] >>b[1] >>c[1] >>d[1] >>e[1] >>f[1] >>g[1] >>h[1] >>i[1];
		cout<<"MatA = \n";
		cout<<"|" <<a[1] <<" \t" <<b[1] <<" \t" <<c[1] <<"\t|\n";
		cout<<"|" <<d[1] <<" \t" <<e[1] <<" \t" <<f[1] <<"\t|\n";
		cout<<"|" <<g[1] <<" \t" <<h[1] <<" \t" <<i[1] <<"\t|\n\n";
		
		cin>> a[2] >>b[2] >>c[2] >>d[2] >>e[2] >>f[2] >>g[2] >>h[2] >>i[2];
		cout<<"MatB = a2,b2,c2,d2,e2,f2,g2,h2,i2\n";
		cout<<"|" <<a[2] <<" \t" <<b[2] <<" \t" <<c[2] <<"\t|\n";
		cout<<"|" <<d[2] <<" \t" <<e[2] <<" \t" <<f[2] <<"\t|\n";
		cout<<"|" <<g[2] <<" \t" <<h[2] <<" \t" <<i[2] <<"\t|\n\n";
		
		num1=a[1]+a[2]; num2=b[1]+b[2]; num3=c[1]+c[2]; num4=d[1]+d[4]; num5=e[1]+e[2]; num6=f[1]+f[2]; num7=g[1]+g[2];
		num8=h[1]+h[2]; num9=i[1]+i[2];
		
		cout<<"MatSum = \n";
		cout<<"|" <<num1 <<" \t" <<num2 <<" \t" <<num3 <<"\t|\n";
		cout<<"|" <<num4 <<" \t" <<num5 <<" \t" <<num6 <<"\t|\n";
		cout<<"|" <<num7 <<" \t" <<num8 <<" \t" <<num9 <<"\t|\n\n";
	}
	return 0;
}
