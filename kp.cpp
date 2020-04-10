#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char* argv[]){

	if(argc!=2){
		cout<<"Error"<<endl;
		return 1;
	}

	ifstream f(argv[1]);

	if(f.is_open())
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
	cout<<s<<endl;

	f.close();

	return 0;
}

