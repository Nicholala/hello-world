#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
class superprime{	
    public:
    	int pri[1000];
		int prim[1000];
		int sp[1000];
		int s;
		int k;
        void fpri();
        void fprim();
		void fspri();	
		void show(); 
}; 
void superprime::fpri(){
	for(int i=2;i<=999;i++){
		for(int j=2;j*i<=999;j++){
			pri[i*j]=1;
		}
	}
}
void superprime::fprim(){
	s=0;
	for(int i=100;i<=999;i++){
		if(pri[i]==0){
			prim[s]=i;
			s++;
		}
	}
}
void superprime::fspri(){
	k=0;
	for(int i=0;i<=s;i++){
		int m=(prim[i]/100)*(prim[i]/10%10)*(prim[i]%10);
		int n=(prim[i]/100)+(prim[i]/10%10)+(prim[i]%10);
		int o=(prim[i]/100)*(prim[i]/100)+(prim[i]/10%10)*(prim[i]/10%10)+(prim[i]%10)*(prim[i]%10);
		if(pri[n]==0&&pri[m]==0&&m!=0&&pri[o]==0){
			sp[k]=prim[i];
			k++;
		}
	} 
}
void superprime::show(){
	for(int i=0;i<k;i++){
		cout<<sp[i]<<" ";
	} 
}         
int main(){
	superprime x;
	x.fpri();
	x.fprim();
	x.fspri();
	x.show();
	return 0;
}
