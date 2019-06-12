#include<iostream>
using namespace std;

#include"SistemaSolar.h"

	//metodo construtor
	Sol::Sol(string n, string el, string cp, double m, double temp, double vel, double vol, double dm, double acelg, int idd, double tr, double tp, int k, int fl, int mn, int e):
			SistemaSolar(n, el, cp, m, temp, vel, vol, dm, acelg, idd)
	{	setTpTranslacao(tp);
		setTpRotacao(tr);
		setKp(k);
		setFLuxo(fl);
		setManchas(mn);
		setEmc(e);
	}
	//destrutor
	Sol::~Sol()
	{	cout<<"\nEsfriou!\n\n";}

	//Planeta

	//interface getters
	double getTpTranslacao()	{	return tpTanslacao;	}
	bool getTpRotacao()	{	return tpRotacao;	}
	bool getArtificial()	{	return artificial;	}
	double getKp()	{	return kp;	}
	bool getFLuxo()	{	return fluxo;	}
	double getManchas()	{	return manchas;	}
	bool getEmc()	{	return emc;	}

	//interface setters
	void setTpTranslacao(double tp)	{	tpTanslacao=tp;	}		
	void setTpRotacao(double tr)	{	tpRotacao=tr;	}
	void setKp(int k)	{	kp = k;	}
	void setFLuxo(int fl)	{	fluxo=fl;	}
	void setManchas(int mn)	{	manchas=mn;	}
	void setEmc(int e)	{emc = e;	}
	
	double inversao(int ultima) {
		return 11 - (2014-ultima) ;
		 
	} 
	//Passagem por referência
	//Incrementa o valor da varável Kp na main será passado a variável.
	void incrementaKp(double &kp){
		kp++; //o aportado será incrementado mais 1

	}
	//Passagem por parâmetro
	//Incrementa o valor da varável Kp na main será passado o endereço da variável.
	void incrementaKp2(double *Kp){
		*kp++;
	} //Vale como exemplo de ponteiro não const para dados não const, já que o ponteiro pode apontar para outro e o valor do apontado 
	//pode ser modificado.
	
	



//fim da implementação da classe
