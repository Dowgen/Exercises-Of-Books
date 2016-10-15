#include<iostream>
#include<cstring>
using namespace std;
int main(void){
    char c[4]={'l','o','n','\0'};
	cout<<strlen(c)<<endl;
	char* cp=c;
	while(*cp){
		cout<<*cp<<endl;
		++cp;
	}
	return 0;

}
