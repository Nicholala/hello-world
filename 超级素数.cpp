#include <iostream> 
#include <cstdio>
using namespace std;
int pri[1000]={0};
int prim[1000]={0};
int sp[1000];
int main(){
	for(int i=2;i<=999;i++){
		for(int j=2;j*i<=999;j++){
			pri[i*j]=1;
		}
	}
	int s=0;
	for(int i=100;i<=999;i++){
		if(pri[i]==0){
			prim[s]=i;
			s++;
		}
	}
	int k=0;
	for(int i=0;i<=s;i++){
		int m=(prim[i]/100)*(prim[i]/10%10)*(prim[i]%10);
		int n=(prim[i]/100)+(prim[i]/10%10)+(prim[i]%10);
		int o=(prim[i]/100)*(prim[i]/100)+(prim[i]/10%10)*(prim[i]/10%10)+(prim[i]%10)*(prim[i]%10);
		if(pri[n]==0&&pri[m]==0&&m!=0&&pri[o]==0){
			sp[k]=prim[i];
			k++;
		}
	}
	for(int i=0;i<k;i++){
		cout<<sp[i]<<" ";
	} 
	return 0;
}








