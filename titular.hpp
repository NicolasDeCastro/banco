#pragma once
#include <string>
#include <iostream>

struct Titular{
private:
	std::string nome_do_titular;
	std::string cpf_do_titular;
	
	
public:
	Titular(std::string cpf_do_titular, std::string nome_do_titular);
	std::string recupera_cpf (std::string cpf);
	std::string recupera_nome(std::string nome_do_titular);
	void VerificaTamanhoDeNome();
};