#include<iostream>
#include<string>
using namespace std;

#include"EstacaoEspacial.h"

		//construtor
		EstacaoEspacial::EstacaoEspacial(const string &n,int al, double alt, double vo, double vm)
		{	setNome(n);
			setAnoLancamento(al);
			setAltura(alt);
			setVelOrbita(vo);
			setVelMax(vm);
		}
		//destrutor
		EstacaoEspacial::~EstacaoEspacial()
		{	cout<<"\nA Estação foi invadida por aliens.\n\n";	}

		//getter
		string EstacaoEspacial::getNome()	const	{	return nome;	}
		int EstacaoEspacial::getAnoLancamento()	{	return anoLancamento;	}
		double EstacaoEspacial::getAltura()	{	return altura;	}
		double EstacaoEspacial::getVelOrbita()	{	return velOrbita;	}
		double EstacaoEspacial::getVelMax()	{	return velMax;	}
		//setter
		void EstacaoEspacial::setNome(const string &n)	{	nome = n;	}
		void EstacaoEspacial::setAnoLancamento(int al)	{	anoLancamento = al;	}
		void EstacaoEspacial::setAltura(double alt)	{	altura = alt;	}
		void EstacaoEspacial::setVelOrbita(double vo)	{	velOrbita = vo;	}
		void EstacaoEspacial::setVelMax(double vm)	{	velMax = vm;	}

		void EstacaoEspacial::imprime(){
			cout<<"\nNome da Estação: "<<getNome()
				<<"\nAno de Lançamento: "<<getAnoLancamento()
				<<"\nAltura de Órbita: "<<getAltura()<<"km. "
				<<"\nVelocidade de Órbita: "<<getVelOrbita()<<"km/h. "
				<<"\nVelocidade Máxima: "<<getVelMax()<<"km/h. \n\n";
		}
//fim da implementacao