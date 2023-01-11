#pragma once
#include <iostream>
#include "conta.hpp"

int conta::NumeroDeContas = 0;
conta::conta(std::string numero,Titular Titular):
    numero(numero),
    Titular(Titular),
    saldo(0)
{

    NumeroDeContas++;

}

void conta::sacar(float valor_a_sacar){

 if (saldo<valor_a_sacar){
           std:: cout<<"nao tem como vc sacar menos do que vc tem !!" << std::endl;
            return;
        }
        if(valor_a_sacar<0){

           std::cout<<"não pode sacar um valor negativo"<< std::endl;
            return;
        }
    saldo -= valor_a_sacar;
}






void conta::depositar(float valor_a_depositar){


 if(valor_a_depositar<0){

        std::cout<<"nao pode depositar valor negativo!!"<< std::endl;
        return;
    }
    saldo += valor_a_depositar;

}

float conta::recupera_saldo()
{
    return saldo;
}



conta:: ~conta() 
{

    NumeroDeContas--;


}

