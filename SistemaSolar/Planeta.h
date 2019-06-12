#ifndef PLANETA_H
#define PLANETA_H

class EstacaoEspacial;	//predefinição da friend

class Planeta: public SistemaSolar
{	private:
		double tpRotacao;
		double distanciaSol;
		double excentricidade;
		
	public:
		//construtor
		Planeta(const string &, const string &, const string &, double, double, double, double, double, double, int, double, double, double);
		~Planeta();

		//interface setters
		void setTpRotacao(double);
		void setDistanciaSol(double);		
		void setExcentricidade(double);		
		
		
		//interface getters
		double getTpRotacao();
		double getDistanciaSol();
		double getExcentricidade();
		
		//virtual
		double calcDensidade();

		//interface funçoes Membros??	
		double calcVelRot();
		void imprime();
	
		//metodo que vamos usar na classe EstacaoEspacial
		void calcTempoOrbita(EstacaoEspacial);

};

#endif