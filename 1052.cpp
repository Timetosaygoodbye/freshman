#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main(){
	float Q;
	int N;
	while(1){
		cin>>Q>>N;
		if(N==0) break;
		else{
			float max=0;
			float Total[N];
			for(int i=0;i<N;i++){
				Total[i]=0;
				bool judge=true;
				float total=Total[i];
				int n;
				cin>>n;
				getchar();
				char type[n][2];
				float Type[n];
				for(int j=0;j<n;j++){
					cin.getline(type[j],2,':');
					cin>>Type[j];
					getchar(); 
				}
				for(int j=0;j<n;j++){
					if(type[j][0]!='A'&&type[j][0]!='B'&&type[j][0]!='C'){
						judge=false;
						break;
					}
					if(Type[j]>600){
						judge=false;
						break;
					}
					total+=Type[j];
				}
				if(total>1000){
					judge=false;
				}
				total=0;
				if(judge==true){
					for(int j=0;j<n;j++){
						total+=Type[j];
					}
				}
				Total[i]=total;
			}
			sort(Total,Total+N);
			for(int i=N-1;i>=0;i--){
				if(max+Total[i]<=Q){
					max+=Total[i];
				}
			}
			cout<<fixed<<setprecision(2)<<max<<endl;
		}
	}
	return 0;
}
