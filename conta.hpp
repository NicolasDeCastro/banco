#pragma once
#include<string>
#include <iostream>
#include "titular.hpp"

struct conta{
private:
    std::string numero;
    Titular Titular;
    float saldo;

public: 
    conta(std::string numero,Titular Titular);
    void sacar(float valor_a_sacar);
    void depositar(float valor_a_depositar);
    float recupera_saldo();
    static int NumeroDeContas;
    ~conta();
    
    
};
