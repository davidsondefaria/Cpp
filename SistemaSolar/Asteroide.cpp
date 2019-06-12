#include <iostream>
#include <string>
#include <cctype>
using namespace std;

#include"SistemaSolar.h"
#include"Asteroide.h"

		//construtor
		Asteroide::Asteroide(const string &nm, const string &edl, const string &gal, double m, double temp, double vel, double vol, double dm, double acelg, int idd, char *c, double ri)
					: SistemaSolar(nm, edl, gal, m, temp, vel, vol, dm, acelg, idd), classe(c), risco(ri)	{} //construtor da mãe e inicializador
		//destrutor
		Asteroide::~Asteroide(){
			cout<<"\nAsteroide entrou na atmosfera e desintegrou.\n\n";
		}

		//getter
		double Asteroide::getRisco() const  {   return risco;	} //metódo get é const já que o ele não alterará o valor do seu objeto
		//logo o seu objeto na main também será const 
		char* Asteroide::getClasse() {	return classe;	}
	
		//setter
		void Asteroide::setRisco(double ri)	{	risco=ri;	}
		void Asteroide::setClasse(char *cl){	classe=cl;	}


		void Asteroide::converter(char *c) { //exemplo de ponteiro não const para dados não const 
			while(*c!= '\0' ) { //pega as variáveis em minúsculas e aumenta para maiúscula 
				if( islower(*c) )
					*c = toupper(*c);
				c++;
			}
			//tanto o ponteiro muda a cada atualização como o valor do apontado também muda.
		}

		//exemplo de ponteiro não const para dados const
		void Asteroide::imprimeCaracteres(const char *c) { //o ponteiro se modifica mas o dado não
			for( ; *c != '\0'; c++)
				cout << *c; 
		}

		void Asteroide::imprime(){			//sobreposição de metodo herdado da mãe
			cout<<"\nNome: "<<getNome()
				<<"\nEspectro de Luz: "<<getEspectroDeLuz()
				<<"\nMassa: "<<getMassa()<<" t."
				<<"\nTemperatura Média: "<<getTemperatura()<<" ºC."
				<<"\nVelocidade de órbita: "<<getVelocidade()<< "km/h."
				<<"\nVolume: "<<getVolume()<<" km³."
				<<"\nDiâmetro: "<<getDiametro()<<" km."
				<<"\nAceleração da Gravidade: "<<getAcelGravidade()<<" m/s²."
				<<"\nIdade: "<<getIdade()<<" anos.";

			cout<<"\nRisco de Atingir a Terra: "<<getRisco()
				<<"\nClasse: "<<getClasse()<<"\n\n";
		}


//fim das implementações
