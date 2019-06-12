#ifndef ESTRELA_H
#define ESTRELA_H

class Estrela: public SistemaSolar
{	private:
	double tpTranslacao;
	double tpRotacao;
	int kp;
	int fluxo;
	int manchas;
	bool emc;
/*Estrela::Estrela(const string &nm, const string &edl, const string &gal, 
	double m, double temp, double vel, double vol, double dm, double acelg, 
	int idd, double tr, double tp, int k, int fl, int mn, bo e):
			SistemaSolar(nm, edl, gal, m, temp, vel, vol, dm, acelg, idd)
	
*/
	public:
	Estrela(const string &, const string &, const string &, 
			double, double, double, double, double, double, 
			int, double, double, int, int, int, bool);	//método construtor
	~Estrela();
	//interface setters
	void setTpTranslacao(double);			
	void setTpRotacao(double);
	void setKp(int);		
	void setFluxo(int);			
	void setManchas(int);
	void setEmc(bool);					
	
	//interface getters
	double getTpTranslacao();
	double getTpRotacao();
	int getKp();
	int getFluxo();
	int getManchas();
	bool getEmc();

 	//parametro de entrada é o ano da ultima inversao
	void inversao(int);
	//método com passagem por referência 
	void incrementaKp(int &);
	//método com passagem por parâmetro
	void incrementaKp2(int *);

	void imprime();
};

#endif
