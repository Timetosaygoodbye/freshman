#include<iostream>
#include<cstring>
using namespace std;
//��  
int Height[26];  
int MaxLen[26];    
void fx(int k){  
    memset(MaxLen,0,sizeof(MaxLen));  
    for(int i = 0;i < k; i++){  
        MaxLen[i] = 1;  
        //������ǰ���е����߶�   
        for(int j = 0;j < i;j++){  
            //�����ǰ�����߶�С�ڵ���j�ŵ���   
            if(Height[i] <= Height[j]){  
                //�ѵ�ǰ��������j�ŵ�����������������г���Ϊj�ŵ�����β������������г��� + 1   
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
