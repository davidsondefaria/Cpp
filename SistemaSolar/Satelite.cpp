#include<iostream>
using namespace std;

#include"SistemaSolar.h"
#include"Satelite.h"

		//getters
		double Satelite::getDistPlaneta() {	return distPlaneta;	}		
		bool Satelite::getArtificial() { return artificial; }
		
		//setters
		void Satelite::setDistPlaneta(double dp) { distPlaneta = dp;}
		void setArtificial(bool art) { artificial =art;}
		
		// Função Membro
		void Satelite::imprimirDistancia() {
			cout << "Distância  ao planeta em que orbita:" << getDistPlaneta() << endl;
		} 
		
		Satelite Satelite::imprimirDistancia(Satelite s){
			cout<<"\nA Distância do satélite é: "<<distPlaneta<<" km.\n\n";
		}

//fim da implementação da classe
