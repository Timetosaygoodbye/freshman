#include<iostream>
using namespace std;
int main(){
	while(1){
	char a[200];
	string b,c;
	cin>>b;
	if(b=="ENDOFINPUT")break;
	getchar();
	cin.getline(a,201);
	cin>>c;
	if(b=="START"&&c=="END"){
		for(int i=0;a[i]!='\0';i++){
			if(int(a[i])>=65&&int(a[i])<=90){
				if(a[i]-5<65) a[i]=char(a[i]+21);
				else a[i]=char(a[i]-5);
			}
				
		}
		
			cout<<a<<endl;
	}
	
	}
	return 0;
}
//��ش������֪��getchar()����������ã�����������еĲ�����'\n'��

//��'\n'����cin.getline()�Ľ����������Գ���û�е��û�������һ�����룬cin.getline���Ѿ��ӻ������������Ļ��з�'\n'���˽�������ǰ�����˳���

//û�����з���ȷ��cin>>�Ľ����������ǣ���cinִ�е�ʱ�����ǻ����һ��ʼ��������л��з�'\n'�Ϳո�ģ������������Ὣ������'\n'�������Ľ�������

//��cin.getline()�ǲ�����Եģ�


