#include <iostream>
#include "test.h"
using namespace std;

testClass test;


int main(){
    cout << "Variable A sebelum dirubah = " <<test.thisis_var_a << "\n\n";
    cout << "THIS IS OOP CPP = " <<test.Tambah(2,3) << "\n";
    cout << "Change Variable A = " << test.OnChangeVarA(11)<< "\n";
    cout << "Changed = " << test.thisis_var_a << "\n";
    cout << "TEST METHOD KURANG = " << test.Kurang(12,10);
}