#include<iostream>
#include<string>
using namespace std;
bool issdigit(int m);
string decode(string code);
void main(){
	string code;
	cout << "please input a code \n";
	getline(cin,code);
	cout << "decode string is \n" <<decode(code)<<endl;
}
string decode(string code){
	int index=0;
	string retstr;
	int temp=code[index];
	string tempstr;
	int number;

	while(true){

	while(!issdigit(code[index])){
		tempstr+=code[index];
		index++;
	}
	number=0;
	while(issdigit(code[index])){
		if(int(code[index])==0) break;
		number=number*10+code[index]-48;
		index++;
	}
	for(int m=0;m<number;m++)
	{
		retstr.append(tempstr);
	}
	tempstr.erase();

	if(int(code[index])==0) break;
	}
	return retstr;
}
bool issdigit(int m){
	if (m>57) 
		return false;
	else 
		return true;
}