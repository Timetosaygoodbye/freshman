#include<iostream>
#define INF 1000000000
using namespace std;
int map[105][105];
void judge(){
	for(int k=1;k<=100;k++)
		for(int i=1;i<=100;i++)
			for(int j=1;j<=100;j++)
				if(map[i][j]>map[i][k]+map[k][j])
   					map[i][j]=map[i][k]+map[k][j];
}
int minn(int x, int y){
   return x<y?x:y;
}
int main(){
	int n,m;
	int i,j,a,b,c;
	char str[10];
	while(1){
		cin>>n>>m;
		if(n==0&&m==0) break;
		else{
			for(i=1;i<=100;i++)
				for(j=1;j<=100;j++){
					if(i==j) map[i][j]=0;
					else map[i][j]=INF;
				}
			for(i=1;i<=n;i++){
				cin>>str;
				a=str[0];
				b=str[1];
				c=str[2];
				map[a][b]=1;
				map[a][c]=1;
			}
			judge();
			for(i=1;i<=m;i++){
				cin>>str;
				a=str[0];
				b=str[1];
				c=min(map[a][b],map[b][a]);
				if(c==INF||!c){
					cout<<'-'<<endl;
					continue;
				}
				if(c==1){
					if(map[a][b]==1) cout<<"child"<<endl;
            		else cout<<"parent"<<endl;
				}
				else{
					if(map[a][b] != INF){
               			c-=2;
               			for(j = 1 ;j <= c ;j ++)
              				cout<<"great-";
               			cout<<"grandchild"<<endl;
            		}
            		else{
               			c-=2;
               			for(j = 1 ;j <= c ;j ++)
               				cout<<"great-";
               			cout<<"grandparent"<<endl;
            		}
				}
			}
		}
	}
	return 0;
}
