#include <iostream>

using namespace std;

int main(){
	
	int l, r;
	
	cin>>l;
	cin>>r;
	
	if(l==r){
		if(l==0 && r==0){
			cout<<"Not a moose";
		}
		else{
			cout<<"Even "<<l+r;
		}
	}
	else if(l!=r){
		if(l<r){
			cout<<"Odd "<<r*2;
		}
		else{
			cout<<"Odd "<<l*2;
		}
	}

    return 0;
}


