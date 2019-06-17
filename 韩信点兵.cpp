#include <iostream>
#include <cstdio>
using namespace std;
class HanXin{
	public:
		int n,n1,n2,n3;
		void showMany(){
			if(n!=1){
			cout<<n<<endl;	
			}else{
				cout<<"Impossible"<<endl;	
			} 
		}
		void line3(int i){
			n1=i;
		}	
		void line5(int i){
			n2=i;
		}
		void line7(int i){
			n=1; 
			n3=i;
			for(int s=10;s<=100;s++){
				if(s%3==n1&&s%5==n2&&s%7==n3){
					n=s;
				}
			}
		}
};
int main() {
    int n, n1, n2, n3;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2 >> n3;
        HanXin hx;  //韩信
        hx.line3(n1);  //3人一排
        hx.line5(n2);   //5人一排
        hx.line7(n3);   //7人一排
        hx.showMany();
    }
}
