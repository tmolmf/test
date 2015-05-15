#include <fstream>
#include <iostream>

using namespace std;

int main(){
	char inputString[1000];

	ifstream inFile("people.dat");
	cout << "PRAIRIEVILLE POPULATION GROWTH\n(each * represents 1000 people)\n\n";
    while(!inFile.eof()){
		char *ptr;
		int tmp;

		inFile.getline(inputString, 100);
		ptr = strtok(inputString, " ");
		printf( "%s\t" , ptr);
		ptr = strtok(NULL, " ");
		tmp = atoi(ptr);
		while(tmp-1000>=0)
		{
			cout << "*";
			tmp-=1000;
		}
		cout << endl;
    }
    inFile.close();
    return 0;
}