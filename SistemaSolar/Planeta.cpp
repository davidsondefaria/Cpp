#include<iostream>
using namespace std;

#include"SistemaSolar.h"
#include"Planeta.h"
#include"EstacaoEspacial.h"

		//construtor
		Planeta::Planeta(const string &nm, const string &edl, const string &gal, double m, double temp, double vel, double vol, double dm, double acelg, int idd, double tr, double ds, double ex):
			SistemaSolar(nm, edl, gal, m, temp, vel, vol, dm, acelg, idd)
		{	setTpRotacao(tr);
			setDistanciaSol(ds);
			setExcentricidade(ex);
		}
		//destrutor
		Planeta::~Planeta()
		{	cout<<"\nO Planeta explodiu!!!\n\n";
		}

		//getters
		double Planeta::getTpRotacao() {	return tpRotacao;	}		
		double Planeta::getDistanciaSol() { return distanciaSol; }
		double Planeta::getExcentricidade() { return excentricidade; }
	
		//setters
		void Planeta::setTpRotacao(double tr) {tpRotacao=tr;}
		void Planeta::setDistanciaSol(double ds) { distanciaSol=ds;}
		void Planeta::setExcentricidade (double ex) { excentricidade = ex; }


		//virtual
		double Planeta::calcDensidade(){
			return getMassa()/getVolume();
		}




		double Planeta::calcVelRot()
		{	double circ;
			circ = (getDiametro()*3.1415);
			double tpr;
			tpr = getTpRotacao();

			return (circ/tpr);
		}


		void Planeta::calcTempoOrbita(EstacaoEspacial ee)		//chamar direto na main
		{	
			cout<<"\nEstação está em Órbita há "<<2014-ee.anoLancamento<<" anos.\n\n";
		}

		void Planeta::imprime(){			//sobreposição de metodo herdado da mãe
			cout<<"\nNome: "<<getNome()
				<<"\nEspectro de Luz: "<<getEspectroDeLuz()
				<<"\nMassa: "<<getMassa()<<" kg."
				<<"\nTemperatura Média: "<<getTemperatura()<<" ºC."
				<<"\nVelocidade de órbita: "<<getVelocidade()<< "km/h."
				<<"\nVolume: "<<getVolume()<<" km³."
				<<"\nDiâmetro: "<<getDiametro()<<" km."
				<<"\nAceleração da Gravidade: "<<getAcelGravidade()<<" m/s²."
				<<"\nIdade: "<<getIdade()<<" bilhões de anos. ";

			cout<<"\nTempo de Rotação: "<<getTpRotacao()<<" h."
				<<"\nDistância ao Sol: "<<getDistanciaSol()<<" km"
				<<"\nExcentricidade: "<<getExcentricidade()
				<<"\nVelocidade de Rotação: "<<calcVelRot()<<" km/h.";
		}



//fim da implementação da classe
