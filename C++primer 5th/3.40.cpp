#include<iostream>
#include<cstring>
using namespace std;
int main(void){
    char ca[]="hello";
    char cb[]="world";
	char cc[]="";
	strcpy(cc,ca);
	strcat(cc,cb);
	char* p=cc;
	while(*p){
		cout<<*p;
		++p;
	}
	cout<<endl;
	return 0;

}
