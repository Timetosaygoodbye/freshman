#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
struct Node{
	public:
		int coefficient;//系数 
		int exp;//指数 
		Node(int co=0,int ex=0){
			this->coefficient=co;
			this->exp=ex;
		}
};

void Input(vector<Node>&ivec){
	while(1){
		int co,ex;
		cin>>co>>ex;
		if(co==0&&ex==0){
			break;
		}
		else {
			Node node(co,ex);
			ivec.push_back(node);
		}
	}
}

void Output(const vector<Node>& ivec){
	for(vector<Node>::const_iterator iter=ivec.begin();iter!=ivec.end();iter++){
		cout<<(*iter).coefficient<<' '<<(*iter).exp<<endl;
	}
	
}

void Add(vector<Node>&ivec1,const vector<Node>&ivec2){
		for(vector<Node>::const_iterator iter2=ivec2.begin();iter2!=ivec2.end();iter2++){
			bool judge=false;
			for(vector<Node>::iterator iter1=ivec1.begin();iter1!=ivec1.end();iter1++){
				if((*iter2).coefficient==(*iter1).coefficient){
					(*iter1).exp+=(*iter2).exp;
					judge=true;
				}
			}
			if(judge==false){
				Node node((*iter2).coefficient,(*iter2).exp);
				ivec1.push_back(node);
			}
			
		}
    
  	
}

bool Compare(const Node& a,const Node&  b){
	if(a.coefficient>=b.coefficient) return true;
	else return false;
}

int main(){	
	vector<Node>ivec1, ivec2;
	Input(ivec1); //为ivec1输入值，遇到0 0结束输入
	Input(ivec2); //为ivec2输入值，遇到0 0结束输入 
 	Add(ivec1, ivec2);  //实现两个多项式的加法，结果赋予ivec1
	sort(ivec1.begin(), ivec1.end(), Compare);  //调用sort算法，按降幂输出排序ivec1
	Output(ivec1);	//输出ivec1元素的指数和系数 
	return 0;
}

