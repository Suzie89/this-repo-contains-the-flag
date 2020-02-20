#include <iostream>
#include <fstream>

using namespace std;

void performTheBetrayal() {
	ofstream myfile;
	myfile.open("fakefile.bad");
	myfile << "Your next step is some recon once you identify the Probably Disastrous Betrayal :)\n";
	myfile.close();
}

int main() {
	performTheBetrayal();
    cout << "Hello World!\n";
}
