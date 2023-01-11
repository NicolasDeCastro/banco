#include<string>
#include<iostream>
#include "titular.hpp"

Titular::Titular(std::string cpf_do_titular, std::string nome_do_titular):
cpf_do_titular(cpf_do_titular),
nome_do_titular(nome_do_titular)
{
    VerificaTamanhoDeNome();
}
void Titular::VerificaTamanhoDeNome()
{

    if (nome_do_titular.size() < 5) {
        std::cout << "nome de com tamanho imcompleto" << std::endl;

        exit(1);

    }
}
    std::string Titular:: recupera_cpf(std::string cpf)
    {

        return cpf;



    }

   std:: string Titular::recupera_nome(std::string nome)
    {
       return nome;
    }
