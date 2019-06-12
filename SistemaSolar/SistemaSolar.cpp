#include<iostream>
#include<string>

using namespace std;

#include"SistemaSolar.h"

		//construtor
		SistemaSolar::SistemaSolar(const string &nm, const string &edl, const string &gal, double ma, double tmp, double vel, double vol, double ag, double dim, int idd)
		{	setNome(nm);
			setEspectroDeLuz(edl);
			setGalaxia(gal);
			setMassa(ma);
			setTemperatura(tmp);
			setVelocidade(vel);
			setVolume(vol);
			setAcelGravidade(ag);
			setDiametro(dim);
			setIdade(idd);
		}
		//sobrecarga do construtor
		SistemaSolar::SistemaSolar(const string &nm, const string &gal, int idd)
		{	setNome(nm);
			setGalaxia(gal);
			setIdade(idd);
		}
		//destrutor
		SistemaSolar::~SistemaSolar()
		{	cout<<"\nUm buraco negro apareceu e sugou tudo.\n\n";
		}
		
		//getters
		string SistemaSolar::getNome()	const 	{	return nome;	}
		string SistemaSolar::getEspectroDeLuz()	const	{	return espectroDeLuz;	}
		string SistemaSolar::getGalaxia() const	{	return galaxia;	}
		double SistemaSolar::getMassa()	{	return massa;	}
		double SistemaSolar::getTemperatura()	{	return temperatura;	}
		double SistemaSolar::getVelocidade()	{	return velocidade;	}
		double SistemaSolar::getVolume()	{	return volume;	}
		double SistemaSolar::getAcelGravidade() { return acelGravidade; }
		double SistemaSolar::getDiametro() { return diametro; }
		int SistemaSolar::getIdade()	{	return idade;	}
	
		//setters
		void SistemaSolar::setNome(const string &nm)	{	nome=nm;	}
		void SistemaSolar::setEspectroDeLuz(const string &edl)	{	espectroDeLuz=edl;	}
		void SistemaSolar::setGalaxia(const string &gal)	{	galaxia = gal;	}
		void SistemaSolar::setMassa(double ma)	{	massa=ma;	}
		void SistemaSolar::setTemperatura(double tmp)	{	temperatura=tmp;	}
		void SistemaSolar::setVelocidade(double vel)	{	velocidade=vel;	}
		void SistemaSolar::setVolume(double vol)	{	volume=vol;	}
		void SistemaSolar::setAcelGravidade(double ag) { acelGravidade =ag;}
		void SistemaSolar::setDiametro(double dim) { diametro = dim; }
		void SistemaSolar::setIdade(int idd)	{	idade=idd;	}
		
		double SistemaSolar::calcDensidade(){
			return 0;
		}

		void SistemaSolar::imprime(){		//será redefinido
			cout<<"\nNome: "<<getNome()
				<<"\nEspectro de Luz: "<<getEspectroDeLuz()
				<<"\nGaláxia: "<<getGalaxia()
				<<"\nMassa: "<<getMassa()<<" t."
				<<"\nTemperatura Média: "<<getTemperatura()<<" ºC."
				<<"\nVelocidade de órbita: "<<getVelocidade()<< "km/h."
				<<"\nVolume: "<<getVolume()<<" km³."
				<<"\nDiâmetro: "<<getDiametro()<<" km."
				<<"\nAceleração da Gravidade: "<<getAcelGravidade()<<" m/s²."
				<<"\nIdade: "<<getIdade()<<" anos. \n\n";
		}
		void SistemaSolar::impSisSolar(){
			cout<<"\nNome: "<<getNome()
				<<"\nGaláxia: "<<getGalaxia()
				<<"\nIdade: "<<getIdade()<<" bilhões de anos. \n\n";
		}
		    
//fim da implementação da classe
