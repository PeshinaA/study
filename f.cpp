#include <iostream>
#include <fstream>
using namespace std;
int main(){
	cout <<"File name: ";
	char name1[20];
	cin >>name1;
	ifstream f1(name1);

	char lang[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *mass;
	mass = new char;

	cout <<"File name: ";
	char name2[20];
	cin >>name2;
	ofstream f2(name2);

	int count = 0;
	while(!f1.eof())
		count++;
 
	for(int k=0; k<count; k++) 
		f1>>mass[k];

	for(int i=0; mass[i]!='.'; i++){
		while (mass[i]!=' '){
			for(int j=0; j<52; j++)
				if (mass[i]==lang[j]){
					f2<< mass[i];
				}
			i++;
		}
		f2<<" ";
	}

	delete mass;
	f2.close();
	f1.close();

	return 0;
}
