#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int n,aux;
	cin>>n;
	int d[n];
	int a[n];
	a[0]=1;
	for(int i=0;i<n-1;i++){
		cin>>d[i];	
	}
	for(int i=0;i<n-1;i++){
		aux=d[i];
		a[aux+1]=i+2;
	}
	for(int i =0;i <n ;i++) cout<<a[i]<<" ";
	return 0;
}
