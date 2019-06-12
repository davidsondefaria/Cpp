#ifndef ESTACAOESPACIAL_H
#define ESTACAOESPACIAL_H

class EstacaoEspacial
{	private:
		string nome;
		double altura;
		double velOrbita;
		double velMax;
		int anoLancamento;


	public:
		//construtor
		EstacaoEspacial(const string &, int, double, double, double);
		//destrutor
		~EstacaoEspacial();
		//getter
		string getNome()	const;
		int getAnoLancamento();
		double getAltura();
		double getVelOrbita();
		double getVelMax();
		//setter
		void setNome(const string &);
		void setAnoLancamento(int);
		void setAltura(double);
		void setVelOrbita(double);
		void setVelMax(double);

		//metodo membro
		void imprime();
		

		friend class Planeta; //classe amiga

};

#endif