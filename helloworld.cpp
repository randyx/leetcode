#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void sphere();
int main(){
	cout << "hello world .\nI am a student!!! \n";
	cout << "   *   \n  ***  \n ***** \n*******\n ***** \n  ***  \n   *   \n";
	sphere();
}
void sphere(){
	/*double radius;
	cout << "Please input radius!!! \n";
	cin >>radius;
	if(radius<0) return;
	(radius>0 && radius<50) ? cout<< "OK !!!\n" : cout << "NOT OK!!\n";
	cout << "the result is\n" <<radius*radius*3.14*4 <<"\n";
	char grade='B';
	switch(grade){
	case 'A':cout<<"90--100\n";break;
	case 'B':cout<<"80-90\n";break;
	default :cout<<"0--80";
	}
	for(int i=1;i<=10;++i){
		for(int j=1;j<=i;++j)
			cout<<"M";
		cout<<endl;
	}*/
	cout<<showpos<<12<<"\n";
	cout<<hex<<18<<" "<<showbase<<18<<"\n";
	cout<<showpoint<<123.0<<"\n";
	cout<<scientific<<123456.789<<"\n";
	ifstream in("a.in");
	ofstream out("a.out");
	for(string str; getline(in, str); )
		out<<str<<endl;
}
