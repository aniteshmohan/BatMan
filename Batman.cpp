#include<bits/stdc++.h>
using namespace std;

int batMan(int np, int steps){
		
		int p,i;
		if(np==1){
			return steps;
		}else{
		p = np*steps;
		return p; 
		}
}

int main(){
	int steps, np;
	cin>>np>>steps;
	cout<<batMan(np, steps);
	return 0;
}
	


