#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
int a, b;
int i=0,x;
string input;
cout << "How many lines to read in: ";
getline(cin,input);
stringstream(input) >> x;
char lines[x-1][50];

	while(i < x){
	sscanf(lines[i], "%d %d", &a, &b);
	printf("You typed %d and %d", &a, &b);
	//cout <<"Reading in line "<<i+1<<" : ";
	//cin.getline(lines[i], 50);
	//cout <<"Your input was: "<<lines[i]<<endl;
	i++;
	}
	return 0;
}