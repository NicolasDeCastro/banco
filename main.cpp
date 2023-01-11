#include <iostream>
#include "conta.hpp"
#include "titular.hpp"

using namespace std;

int main()
{
    Titular um_titular("123.456.789-10", "nicolas");
    Conta uma_conta("12345", um_titular);

    uma_conta.depositar(100);
    uma_conta.sacar(2);

    cout << uma_conta.recupera_saldo() << endl;

    return 0;
}
