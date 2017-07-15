#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int awin=0;
	int alose=0;
	int aping=0;
	int achui=0;
	int ajian=0;
	int abu=0;
	int bchui=0;
	int bjian=0;
	int bbu=0;
	for(int i=0;i<n;i++){
		char A,B;
		cin>>A>>B;
		if(A=='C'&&B=='J'){
			awin++;
			achui++;
		}
		else if(A=='J'&&B=='B'){
			awin++;
			ajian++;
		}
		else if(A=='B'&&B=='C'){
			awin++;
			abu++;
		}
		else if(B=='C'&&A=='J'){
			alose++;
			bchui++;
		}
		else if(B=='J'&&A=='B'){
			alose++;
			bjian++;
		}
		else if(B=='B'&&A=='C'){
			alose++;
			bbu++;
		}
		else if(A=='C'&&B=='C'){
			aping++;
		}
		else if(A=='J'&&B=='J'){
			aping++;
		}
		else if(A=='B'&&B=='B'){
			aping++;
		}
	}
	cout<<awin<<' '<<aping<<' '<<alose<<endl;
	cout<<alose<<' '<<aping<<' '<<awin<<endl;
	if(achui>ajian&&achui>abu) cout<<'C';
	else if(ajian>achui&&ajian>abu) cout<<'J';
	else if(abu>achui&&abu>ajian) cout<<'B';
	else if(achui>ajian&&achui==abu) cout<<'B';
	else if(achui>abu&&achui==ajian) cout<<'C';
	else if(ajian>achui&&ajian==abu) cout<<'B';
	else if(ajian>abu&&ajian==achui) cout<<'C';
	else if(abu>ajian&&abu==achui) cout<<'B';
	else if(abu>achui&&abu==ajian) cout<<'B';
	else if (achui==ajian&&ajian==abu) cout<<'B';
	cout<<' ';
	if(bchui>bjian&&bchui>bbu) cout<<'C';
	else if(bjian>bchui&&bjian>bbu) cout<<'J';
	else if(bbu>bchui&&bbu>bjian) cout<<'B';
	else if(bchui>bjian&&bchui==bbu) cout<<'B';
	else if(bchui>bbu&&bchui==bjian) cout<<'C';
	else if(bjian>bchui&&bjian==bbu) cout<<'B';
	else if(bjian>bbu&&bjian==bchui) cout<<'C';
	else if(bbu>bjian&&bbu==bchui) cout<<'B';
	else if(bbu>bchui&&bbu==bjian) cout<<'B';
	else if (bchui==bjian&&bjian==bbu) cout<<'B';
	return 0;
}
