#include<iostream>
using namespace std;
int main(){
	for(int a=1;a<=13;++a)
		for(int b=1;b<=18;++b)
			if((100-a-b)%3==0 && 7*a+5*b+(100-a-b)/3==100)
				cout<<"a:"<<a<<"b:"<<b<<"c"<<100-a-b<<endl;
}