#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;
int main() {

   string fecha;
   string oct = "OCT 31";
   string dec = "DEC 25";
   cin>> fecha;
   if(fecha == oct || fecha == dec) {
   	cout<< "yupe";
   }
   else{
   	cout<<"nope";
   }
  	
   

    return 0;

}
