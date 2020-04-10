#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char* argv[]){

	if(argc!=3){
		cout<<"Error"<<endl;
		return 1;
	}

	ifstream f(argv[1]);
	ofstream f2(argv[2]);

	if(f.is_open())
		cout<<"OK"<<endl;
	else{
		cout<<"Error"<<endl;
		return 1;
	}
	if(f2.is_open())
		cout<<"OK"<<endl;
	else{
		cout<<"Error"<<endl;
		return 1;
	}

	std::string s;
	std::getline(f,s);
	int a = s.find(' ');
	int b = s.rfind(' ');
	s.erase(b);
	s.erase(0, a+1);

	f2<<s;

	f.close();
	f2.close();

	return 0;
}

