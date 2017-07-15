#include<iostream>
#include<cstring>
#define M 10
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int p=0;p<n;p++){
		int i;  
    	char a[M+1], b[M+1];  
    	int lena, lenb; 
    	cin>>a>>b;
    	lena = strlen(a);  
        for (i=M-1; i>=M-lena; i--)  
            a[i] = a[i-M+lena];  
        for (i=0; i<M-lena; i++)  
            a[i] = 'a';  
        a[M] = '\0';  
   
        lenb = strlen(b);  
        for (i=M-1; i>=M-lenb; i--)  
            b[i] = b[i-M+lenb];  
        for (i=0; i<M-lenb; i++)  
            b[i] = 'a';  
        b[M] = '\0'; 
        
        for (i=M-1; i>=0; i--){  
        	int tmp = int(a[i] + b[i]-'a');  
            if (tmp > int('z')){  
                a[i-1] += 1;  
                a[i] = char(tmp - 26);  
            }  
            else  a[i] = char(tmp);  
        }
		for (i=0;i<M;i++){  
            if (a[i] !='a')  
                break;  
        }  
        if (i == M)  cout<<'a'<<endl;  
        else{
        	for(int t=i;t<M;t++){
        		cout<<a[t];
			}
			cout<<endl;
		}
	}
}
