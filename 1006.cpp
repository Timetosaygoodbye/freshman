#include<iostream>
using namespace std;
bool runnian(int n){
	if(((n%4==0)&&(n%100!=0))||(n%400==0))
		return true;
	else 
		return false;
} 

int main(){
	int n;
	while(cin>>n&&n!=-1){
		
		//2000-1-1 Saturday
		
			 //int year=n/365;
			 //int day=n%365+1;
			 int year[2]= {365, 366};  
			 int Month[2][12] = {31, 28, 31, 30, 31, 30, 31, 31, 30,31, 30, 31,31, 29, 31, 30, 31, 30, 31, 31, 30,31, 30, 31}; 
			 int month;
			 int date;
			 int week=n%7;
			 string Week;
			 if(week==0) Week="Saturday";
			 else if(week==1) Week="Sunday";
			 else if(week==2) Week="Monday";
			 else if(week==3) Week="Tuesday";
			 else if(week==4) Week="Wednesday";
			 else if(week==5) Week="Thursday";
			 else if(week==6) Week="Friday";
			 
			/* for(int i=2000;i<=1999+year;i++){
			 	if(runnian(i)==1) day--;
			 }
			 if(day==0){
			 	year--;
			 	if(runnian(1999+year)==1) day=366;
			 	else day=365;
			 }*/
			int i,j=0;
			for( i = 2000; n >= year[runnian(i)]; i++)  
            n -= year[runnian(i)];    
  			
  			int day=n+1;
        	/*for( j = 0; n >= Month[runnian(i)][j]; j++)  
            n -= Month[runnian(i)][j];  */
			 
			 if(runnian(2000+i)==1){
			 	if(1<=day&&day<=31){
			 		month=1;
			 		date=day;
				 }
				 else if(32<=day&&day<=60){
				 	month=2;
				 	date=day-31;
				 }
				 else if(61<=day&&day<=91){
				 	month=3;
				 	date=day-60;
				 }
				 else if(92<=day&&day<=121){
				 	month=4;
				 	date=day-91;
				 }
				 else if(122<=day&&day<=152){
				 	month=5;
				 	date=day-121;
				 }
				 else if(153<=day&&day<=182){
				 	month=6;
				 	date=day-152;
				 }
				 else if(183<=day&&day<=213){
				 	month=7;
				 	date=day-182;
				 }
				 else if(214<=day&&day<=244){
				 	month=8;
				 	date=day-213;
				 }
				 else if(245<=day&&day<=274){
				 	month=9;
				 	date=day-244;
				 }
				 else if(275<=day&&day<=305){
				 	month=10;
				 	date=day-274;
				 }
				 else if(306<=day&&day<=335){
				 	month=11;
				 	date=day-305;
				 }
				 else if(336<=day&&day<=366){
				 	month=12;
				 	date=day-335;
				 }
			 }
			 else{
			 	if(1<=day&&day<=31){
			 		month=1;
			 		date=day;
				 }
				 else if(32<=day&&day<=59){
				 	month=2;
				 	date=day-31;
				 }
				 else if(60<=day&&day<=90){
				 	month=3;
				 	date=day-59;
				 }
				 else if(91<=day&&day<=120){
				 	month=4;
				 	date=day-90;
				 }
				 else if(121<=day&&day<=151){
				 	month=5;
				 	date=day-120;
				 }
				 else if(152<=day&&day<=181){
				 	month=6;
				 	date=day-151;
				 }
				 else if(182<=day&&day<=212){
				 	month=7;
				 	date=day-181;
				 }
				 else if(213<=day&&day<=243){
				 	month=8;
				 	date=day-212;
				 }
				 else if(244<=day&&day<=273){
				 	month=9;
				 	date=day-243;
				 }
				 else if(274<=day&&day<=304){
				 	month=10;
				 	date=day-273;
				 }
				 else if(305<=day&&day<=334){
				 	month=11;
				 	date=day-304;
				 }
				 else if(335<=day&&day<=365){
				 	month=12;
				 	date=day-334;
			     }
			}
			cout<<i<<'-';
			if(1<=month&&month<=9) cout<<'0'<<month<<'-';
			else cout<<month<<'-';
			
			if(1<=date&&date<=9) cout<<'0'<<date<<' ';
			else cout<<date<<' ';
			
			cout<<Week<<endl;
					
	}


return 0;
}
