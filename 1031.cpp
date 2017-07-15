#include<iostream>
#define NMAX 100000
using namespace std;
//ÄÑÌâ 
int min(int a,int b) { 
	return a<b?a:b;
}

int solve(int t,int a[],int j,int i=0){
    if(t==0) return 0;
    if(i>=j || t<a[i]) return NMAX;
    return min(solve(t,a,j,i+1),solve(t-a[i],a,j,i)+1);
}
int main(){
	while(1){
		int M;
		cin>>M;
		if(M==0) break;
		else{
			int K;
			cin>>K;
			int money[K];
			for(int i=0;i<K;i++){
				cin>>money[i];
			}
			int result=solve(M,money,K);
			if(result>=100000) cout<<"Impossible"<<endl;
			else cout<<result<<endl;
		}
	}
	return 0;
} 
