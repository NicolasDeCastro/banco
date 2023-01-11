#include <iostream>
#include "conta.hpp"
#include "titular.hpp"

using namespace std;

int main()
{
    
    conta umaconta("12345","nicolas");
    
    umaconta.depositar(100);
    umaconta.sacar(2);
 
    cout << umaconta.recupera_saldo() << endl;
    
    return 0;
}
