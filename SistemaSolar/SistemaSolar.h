#ifndef SISTEMASOLAR_H
#define SISTEMASOLAR_H


class SistemaSolar
{	protected:
		string nome;
		string espectroDeLuz;
		string galaxia;
		double massa;
		double temperatura;
		double velocidade;	//de órbita
		double volume;
		double diametro;
		double acelGravidade;
		int idade;
	public:
		SistemaSolar(const string &, const string &, const string &, double, double, double, double, double, double, int);	//construtor
		SistemaSolar(const string &, const string &, int); //sobrecarga
		~SistemaSolar();	//destrutor
	
		//getters
		string getNome() const;
		string getEspectroDeLuz() const;
		string getGalaxia() const;
		double getMassa();
		double getTemperatura();
		double getVelocidade();
		double getVolume();
		int getIdade();
		double getDiametro();
		double getAcelGravidade();
		//setters
		void setNome(const string &);
		void setEspectroDeLuz(const string &);
		void setGalaxia(const string &);
		void setMassa(double);
		void setTemperatura(double);
		void setVelocidade(double);
		void setVolume(double);
		void setIdade(int);
		void setDiametro(double);
		void setAcelGravidade(double);
		
		//Método Membro

		virtual double calcDensidade();

		void imprime();
		void impSisSolar();
};

#endif
