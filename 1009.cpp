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
//想必大家早已知道getchar()在这里的作用：清除缓冲区中的残留的'\n'。

//而'\n'正是cin.getline()的结束符，所以程序还没有等用户进行下一次输入，cin.getline就已经从缓冲区将残留的换行符'\n'读了进来，提前结束了程序。

//没错，换行符的确是cin>>的结束符，但是，在cin执行的时候，它是会忽略一开始输入的所有换行符'\n'和空格的！所以它并不会将残留的'\n'当做它的结束符！

//而cin.getline()是不会忽略的！


