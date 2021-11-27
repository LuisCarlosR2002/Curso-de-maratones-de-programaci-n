#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	int x , y;
	cin>>x;
	cin>>y;
	
	if(x>0){
		if(y>0){
			cout<<"1";
		}
		else{
			cout<<"4";
		}	
	}
	else{
		if(y<0){
			cout<<"3";
		}
		else{
			cout<<"2";
		}
	}
	
	
	return 0;
}
