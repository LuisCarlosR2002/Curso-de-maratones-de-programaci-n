#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	int N, M, Q;
	
	cin >> N;
	cin >> M;
	
	Q = (N - M);
	
	if(Q<0){
		Q = Q*(-1);
		if(Q>1){
			cout<<"Dr. Chaz will have "<< Q <<" pieces of chicken left over!";	
		}
		else{
			cout<<"Dr. Chaz will have "<< Q <<" piece of chicken left over!";		
		}
	}
	else{
		if(Q>1){
			cout<<"Dr. Chaz needs "<< Q <<" more pieces of chicken!";
		}
		else{
			cout<<"Dr. Chaz needs "<< Q <<" more piece of chicken!";
		}
		
	}
		

	
	
	
	
	
	return 0;
}
