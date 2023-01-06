#include <iostream>
using namespace std;


class testClass{
    public:
        int thisis_var_a;

        //////// CONSTRACTOR
        testClass(){
            thisis_var_a = 10;
        };

        ///// METHOD
        int Tambah(int varA , int varB){
            return varA + varB;
        };
        int OnChangeVarA(int VarA){
            thisis_var_a = VarA;
            return VarA;
        }
        int Kurang(int VarA , int VarB);
};

int testClass::Kurang(int VarA , int VarB){
    return VarA - VarB;
}