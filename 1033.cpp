//(n - m)*t + L*p = x-y    n m x y l ��֪ ��t����Сֵ
//��չŷ����ö����󲻶����� pΪ����ֵ  ���t����С��
//���� 
#include<iostream>
using namespace std;
int gcd(int a,int b,int &x,int &y){
    if (b==0){
        x=1,y=0;
        return a;
    }
    int q=gcd(b,a%b,y,x);
    y-=a/b*x;
    return q;
}

int main(){
	int x,y,m,n,l;
	cin>>x>>y>>m>>n>>l;
	int ar,br;
	int result=gcd(n-m,l,ar,br);
	if((x - y) % result || (m == n)){
            cout<<"Impossible";
    }
    else{
    	int s = l / result;
        ar = ar * ((x - y) / result);
        ar = (ar % s + s) % s;
        cout<<ar;
	}
	return 0;
}
