#include<iostream>
using namespace std;
int total(int n){
	int f;
	if(n==1) f=1;
	else f=n+total(n-1);
	return f;
}
int judge(int day){
	int n=1;
	while(total(n)<day){
		n++;
	}
	n--;
	return n;
}
int money(int n){
	int f;
	if(n==1) f=1;
	else f=n*n+money(n-1);
	return f;
}
int main(){
	int day;
	while( cin>>day){
		int n=judge(day);
		int m=day-total(n);
		int total=money(n)+m*(n+1);
		cout<<day<<' '<<total<<endl;
	}
	return 0;
}
