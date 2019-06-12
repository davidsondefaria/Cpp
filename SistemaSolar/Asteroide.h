#ifndef ASTEROIDE_H
#define ASTEROIDE_H

class Asteroide:public SistemaSolar
{	private:
		//double periodicidade;
		double risco;
		char *classe;		//vai apontar para o ponteiro cls da main
		//double inclinacao;
		//double excentricidade;
		
	public:
		Asteroide(const string &, const string &, const string &, double, double, double, double, double, double, int, char *, double);
		~Asteroide();

		//getter
		double getRisco() const;
		char* getClasse();

		//setter
		void setRisco(double);
		void setClasse(char *);
		
		//método membro	
		void imprimeCaracteres(const char *);
		void converter(char *);

		void imprime();	//sobreposição
};

#endif
