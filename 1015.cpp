#include<iostream>
using namespace std;
int main(){
	char a[1024];
	cin.getline(a,1024);
	int count[10]={0}; 
	for (int i = 0;a[i]!='\0'; i++){  
        if (a[i]<'0' || a[i]>'9')  
            cout << a[i];  
        else {  
            switch (a[i]){  
            case '0':cout << "(Zero)"; count[0]++; break;  
            case '1':cout << "(One)"; count[1]++; break;  
            case '2':cout << "(Two)"; count[2]++; break;  
            case '3':cout << "(Three)"; count[3]++; break;  
            case '4':cout << "(Four)"; count[4]++; break;  
            case '5':cout << "(Five)"; count[5]++; break;  
            case '6':cout << "(Six)"; count[6]++; break;  
            case '7':cout << "(Seven)"; count[7]++; break;  
            case '8':cout << "(Eight)"; count[8]++; break;  
            case '9':cout << "(Nine)"; count[9]++; break;  
            }  
        }  
    }  
    cout << endl;  
    for (int i = 0; i < 10; i++)  {
    	if(i!=9)  cout << count[i] << ' ';
    	else cout<<count[i];
	}
       
    return 0;  
}
