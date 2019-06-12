#include <iostream>
#include <string>
using namespace std;

#include "SistemaSolar.h"
#include "Estrela.h"

	//metodo construtor
	Estrela::Estrela(const string &nm, const string &edl, const string &gal, double m, double temp, double vel, double vol, double dm, double acelg, int idd, double tr, double tp, int k, int fl, int mn, bool e):
			SistemaSolar(nm, edl, gal, m, temp, vel, vol, dm, acelg, idd)
	{	setTpTranslacao(tp);
		setTpRotacao(tr);
		setKp(k);
		setFluxo(fl);
		setManchas(mn);
		setEmc(e);
	}
	//destrutor
	Estrela::~Estrela()
	{	cout<<"\nEsfriou!\n\n";	}

	//interface getters
	double Estrela::getTpTranslacao()	{	return tpTranslacao;	}
	double Estrela::getTpRotacao()	{	return tpRotacao;	}
	int Estrela::getKp()	{	return kp;	}
	int Estrela::getFluxo()	{	return fluxo;	}
	int Estrela::getManchas()	{	return manchas;	}
	bool Estrela::getEmc()	{	return emc;	}

	//interface setters
	void Estrela::setTpTranslacao(double tp)	{	tpTranslacao=tp;	}		
	void Estrela::setTpRotacao(double tr)	{	tpRotacao=tr;	}
	void Estrela::setKp(int k)	{	kp = k;	}
	void Estrela::setFluxo(int fl)	{	fluxo=fl;	}
	void Estrela::setManchas(int mn)	{	manchas=mn;	}
	void Estrela::setEmc(bool e)	{emc = e;	}
	
	void Estrela::inversao(int ultima) {
		int x = 11 - (2014-ultima);
		if (x > 0)
			cout<<"\nFaltam, aproximadamente, "<<x<<" anos para próxima inversão.";
		else if (x<0)
			cout<<"\nA última inversão ocorreu há, aproximadamente, "<<x<<" anos.";
		else
			cout<<"\nA inversão poderá ocorrer nesse ano.";
	} 

	//Passagem por referência
	//Incrementa o valor da varável Kp na main será passado a variável.
	void Estrela::incrementaKp(int &kp){
		kp++; //o aportado será incrementado mais 1
	}

	//Passagem por parâmetro
	//Incrementa o valor da varável Kp na main será passado o endereço da variável.
	void Estrela::incrementaKp2(int *kp){
		kp++;
	}

	void Estrela::imprime(){
		cout<<"\nNome: "<<getNome()
			<<"\nEspectro de Luz: "<<getEspectroDeLuz()
			<<"\nMassa: "<<getMassa()<<" t."
			<<"\nTemperatura Média: "<<getTemperatura()<<"K na superfície."
			<<"\nVelocidade de órbita: "<<getVelocidade()<< "m/s."
			<<"\nVolume: "<<getVolume()<<" km³."
			<<"\nDiâmetro: "<<getDiametro()<<" m."
			<<"\nAceleração da Gravidade: "<<getAcelGravidade()<<" m/s²."
			<<"\nIdade: "<<getIdade()<<" bilhões anos. ";

		cout<<"\nTempo de Translação: "<<getTpTranslacao()<<" milhões de anos em relação ao centro da galáxia."
			<<"\nTempo de Rotação: "<<getTpRotacao()<<" dias na linha do equador."
			<<"\nEjeção de Massa Coronal: "<<getEmc()
			<<"\nIntensidade de EMC: "<<getKp()
			<<"\nFluxo de Raios X: "<<getFluxo()
			<<"\nManchas: "<<getManchas()<<"\n\n";
	}


//fim da implementação da classe
