#include<iostream>
using namespace std;
void reverse(char a[]){
	char *p=a;
	while(*p!='\0')
	{
		p++;
	}
	p--;
	while(*p!=' '){
		p--;
	}
	p++;
	char *q=p;
	q-=2;
	char b[80];
	int i=0;
	while(*p!='\0')
	{
		b[i]=*p;
		p++;
		i++;
	}
	
	while(1){
		q--;
		if(q==a){
			b[i]=' ';
			i++;
			char *z=q;
			while(*z!=' '){
			b[i]=*z;
			z++;
			i++;
			}
			break;
		}
		else if(*q==' '){
			b[i]=' ';
			i++;
			char *z=q+1;
			while(*z!=' '){
			b[i]=*z;
			z++;
			i++;
			}
		}
		
		
	}
	
	
	for(int j=0;a[j]!='\0';j++)
	{
		a[j]=b[j];
	}
	
}
int main(){
	char S[80];
	cin.get(S,80);
	reverse(S);
	cout<<S;
	return 0;
} 
