#include <iostream>
#include <string>
#include <cctype>
using namespace std;

#include"SistemaSolar.h"
#include"Planeta.h"
#include"EstacaoEspacial.h"
#include"Asteroide.h"
//#include"Satelite.h"
#include"Estrela.h"
//rodar: "c++ SistemaSolar.cpp EstacaoEspacial.cpp Planeta.cpp Asteroide.cpp Estrela.cpp main.cpp"

main()
{
	{//inicio de um novo bloco para chamar o destrutor
		cout<<"\n----------------------------------------------------------------------\nSistema Solar: \n";
		SistemaSolar sis("Sistema Solar", "ViaLactea", 4);
		sis.impSisSolar();
	}

	{//parte de Planeta e Estação Espacial
		cout<<"\n----------------------------------------------------------------------\nPlaneta e Estação Espacial: \n";
		Planeta p1("Terra", "Azul", "ViaLactea", 5.9e24, 20, 107200, 1.08e123, 9.8, 12756.2, 4, 24, 1.4e8, 0.01);
		EstacaoEspacial ee1("ISS", 1998, 370, 27556, 27600);
		Planeta *pla1= &p1; // Se der erro tente criar o ponteiro *pla enviando as informações do construtor/ 
		//Cria um ponteiro com o endereço de memória do objeto de planeta. / Ponteiro da super classe para o polimorfismo.

		cout<<"A densidade é "<<pla1->calcDensidade()<<".\n";  //Já que pla1 possui o endereço de memória de p1, e é possível utilizar o
		//operador seta já que ele exergará o método.

		p1.imprime();
		p1.calcTempoOrbita(ee1);

		ee1.imprime();

		
	}

	{	//parte de asteroide
		cout<<"\n----------------------------------------------------------------------\nAsteroide: \n";
		char *cls;
		char str[] =  "Appolo";
		cls = new char[10];
		int i=0;
		while(str[i]!='\0'){
			cls[i] = str[i];
			i++;
		}
		Asteroide ast1("Harley", "Vermelho", "ViaLactea", 20.0, 15.0, 10.0, 30, 20, 0.01, 10, cls, 1/*risco*/);
		ast1.imprime();
		cout<<"\nFunção Imprime Caracteres antes da conversão: ";
		ast1.imprimeCaracteres(cls);
		ast1.converter(cls);
		cout<<"\nConversão Feita: "<<cls<<"\n";
		cout<<"Função Imprime Caracteres depois da conversão: ";
		ast1.imprimeCaracteres(cls);
		cout<<endl;
		delete[] cls;		//liberando memória alocada
	}

	{	//parte de Sol
		cout<<"\n----------------------------------------------------------------------\nSol: \n";
		Estrela s1("Sol", "Amarelo", "ViaLactea", 1.9e30, 5778, 2.2e5, 1.4e18, 1.3e9, 270, 4, 233, 25, 5, 10e-5, 71, true);
		s1.imprime();

		int x;
		cout<<"\nDigite um ano para saber sobre a inversão dos pólos do Sol: ";
		cin>>x;
		s1.inversao(x);
		cout<<"\n";
/*
		//ARRUMAR ESSA PARTE!!!!!
		int *kp;
		*kp = s1.getKp();
		s1.incrementaKp(kp);
		cout<<"\nKp incrementado por referencia: "<<kp;
		s1.incrementaKp2(&kp);
		cout<<"\nKp incrementado por parâmetro: "<<kp;
		const int *const p = &p1.getKp(); //é inutil mas tem que ter no projeto
		 // nada poderá ser feito pois ele não poderá apontar para outro lugar e nem alterar o valor dos dados
		
*/

	}






	{	//parte de Satelite
		cout<<"\n----------------------------------------------------------------------\nSatélie \n";

	}






	cout<<"\n----------------------------------------------------------------------\nFim. \n";






		/*incrementaKp(kp); //por referencia
		incrementaKp2(&kp);//por parametro 
		converte(classe)
		imprimeCaracteres(frase);

		Planeta p1 (..,...,...,..,..,..,..)


		// ponteiro const para dados não const
		int *const kp = &p1.getKp();   // os valores poderão ser alterados, mas o ponteiro não pode se modificar
		
		*kp = 11;

		p = &p1.getClasse(); //ERRO pois ele não poderá mudar da onde ele aponta.

		//Dados const e ponteiro const
 
		const int *const p = &p1.getKp();
		 // nada poderá ser feito pois ele não poderá apontar para outro lugar e nem alterar o valor dos dados
		

		 //no objeto const teremos que colocar o inicializador
		*/
	
}