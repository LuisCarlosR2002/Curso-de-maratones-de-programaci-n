#include <iostream>

using namespace std;

int main() {
	int g, s, c, r;
	cin>>g;
	cin>>s;
	cin>>c;
	
	r= 3*g+2*s+c;
	
	if(r>=8){
		cout<<"Province or Gold";
	}
	else if(r>=7){
		cout<<"Duchy or Gold";
	}
	else if(r>=6){
		cout<<"Duchy or Gold";
	}
	else if(r>=5){
		cout<<"Duchy or Silver";
	}
	else if(r>=4){
		cout<<"Estate or Silver";
	}
	else if(r>=3){
		cout<<"Estate or Silver";
	}
	else if(r>=2){
		cout<<"Estate or Copper";
	}
	else{
		cout<<"Copper";
	}
	
	
	
	return 0;
}
