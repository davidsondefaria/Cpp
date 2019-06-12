#ifndef SATELITE_H
#define SATELITE_H

#include"SistemaSolar.h"
#include"Planeta.h"		//Satelite herda de Planeta

class Satelite:public SistemaSolar
{
	private:
	double distPlaneta;
	bool artificial;
	
	public:
	Satelite()
	//interface setters
	void setDistPlaneta(double);		
	void setArtificial(bool);		
	//interface getters
	double getDistPlaneta();
	bool getArtificial();
	
	//método friend
	friend Satelite imprimirDistancia();
};
#endif
