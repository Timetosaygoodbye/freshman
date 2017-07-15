#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double fx(double x){
	double f=x*x*x-x-1;
	return f;
} 
int main(){
	float a,b,c=0.00001,x;
	while(cin>>a>>b){
		if(fx(a)*fx(b)>0) cout<<"No zero point in area("<<fixed<<setprecision(5)<<a<<','<<b<<')'<<endl;
		else{
			float A=a,B=b;
			while(fabs(b-a)>c){
				x=(a+b)/2;
				if(fx(a)*fx(x)<0) b=x;
				else a=x;
			}
			cout<<"The Zero Point is "<<fixed<<setprecision(5)<<(a+b)/2<<" in area("<<setprecision(5)<<A<<','<<B<<')'<<endl;
		}
	}
	return 0;
} 
