#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	static int nim;
public:
	int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) { nim = pNim; /*Definisi function*/ }
	static int getNIm() { return nim; /*Definisi function*/ }

	mahasiswa(string pnama) :nama(pnama) { setID(); }
};
