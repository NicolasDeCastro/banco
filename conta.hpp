#pragma once
#include<string>
#include <iostream>
#include "titular.hpp"

struct Conta{
private:
    std::string numero;
    Titular titular;
    float saldo;

public:
    Conta(std::string numero,Titular titular);
    void sacar(float valor_a_sacar);
    void depositar(float valor_a_depositar);
    float recupera_saldo();
    static int NumeroDeContas;
    ~Conta();


};
