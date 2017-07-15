#include<iostream>
using namespace std;
int R1,R2,R3;
void A(int M1){
	R1=M1;
}
void B(int M2){
	R2=M2;
}
void C(int &M1){
	M1=R3;
}
void D(int &M2){
	M2=R3;
}
void E(){
	R3=R1+R2;
}
void F(){
	R3=R1-R2;
}
int main(){
	int M1,M2;
	string order;
	while(cin>>M1>>M2){
		cin>>order;
		for(int i=0;i<order.length();i++){
			if(order[i]=='A') A(M1);
			else if(order[i]=='B') B(M2);
			else if(order[i]=='C') C(M1);
			else if(order[i]=='D') D(M2);
			else if(order[i]=='E') E();
			else if(order[i]=='F') F();
		}
		cout<<M1<<','<<M2<<endl;
	}
	return 0;
} 
