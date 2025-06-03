#include <iostream>
using namespace std;

class orang {
    public:
        int umur;

        orang(int pUmur) :
            umur (pUmur)
        {
            cout << "Orang dibuat dengan umur " << umur << "\n" << endl;
        }
};

class pekerja : public orang {
    public:
        pekerja(int pUmur) :
            orang(pUmur)
        {
            cout << "Pekerja dibuat\n" << endl;
        }
};

