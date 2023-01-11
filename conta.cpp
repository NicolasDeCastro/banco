#include <iostream>
#include "conta.hpp"

int Conta::NumeroDeContas = 0;
Conta::Conta(std::string numero,Titular titular):
    numero(numero),
    titular(titular),
    saldo(0)
{

    NumeroDeContas++;

}

void Conta::sacar(float valor_a_sacar){

 if (saldo<valor_a_sacar){
           std:: cout<<"nao tem como vc sacar menos do que vc tem !!" << std::endl;
            return;
        }
        if(valor_a_sacar<0){

           std::cout<<"n�o pode sacar um valor negativo"<< std::endl;
            return;
        }
    saldo -= valor_a_sacar;
}






void Conta::depositar(float valor_a_depositar){


 if(valor_a_depositar<0){

        std::cout<<"nao pode depositar valor negativo!!"<< std::endl;
        return;
    }
    saldo += valor_a_depositar;

}

float Conta::recupera_saldo()
{
    return saldo;
}



Conta:: ~Conta()
{

    NumeroDeContas--;


}

