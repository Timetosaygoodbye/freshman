#include<iostream>
#include<cstring>
using namespace std;
//难  
int Height[26];  
int MaxLen[26];    
void fx(int k){  
    memset(MaxLen,0,sizeof(MaxLen));  
    for(int i = 0;i < k; i++){  
        MaxLen[i] = 1;  
        //遍历其前所有导弹高度   
        for(int j = 0;j < i;j++){  
            //如果当前导弹高度小于等于j号导弹   
            if(Height[i] <= Height[j]){  
                //把当前导弹放在j号导弹后，其最长不增子序列长度为j号导弹结尾的最长不增子序列长度 + 1   
                int preMax = MaxLen[j] + 1;  
                if(preMax > MaxLen[i]){  
                    MaxLen[i] = preMax;  
                }  
            }  
        }  
    }  
}  

int main(){
	int k;
	while(cin>>k){
		for(int i=0;i<k;i++){
			cin>>Height[i];
		}
		fx(k);
		int Max=-1;
		for(int i = 0;i < k;i++){  
            if(Max < MaxLen[i]){  
                Max = MaxLen[i];  
            }  
        }  
		cout<<Max<<endl;
	}
	return 0;
}
