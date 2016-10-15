#include<iostream>
#include<cstring>
using namespace std;
int main(void){
    char c[]={'C','+','+'};
	char* cp=c;
	while(*cp){
		cout<<*cp<<endl;
		++cp;
	}
	return 0;

}
