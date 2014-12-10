/* Coche.cc
*  Simple declaration of a car class
*
*  @author  Jose Luis Jimenez Urbano | <ijos@ijos.es> | < @iJos >
*  December 2014
*/

#ifndef __COCHE_H__
#define __COCHE_H__


class Coche {
public:
	Coche();
  Coche(float g);
  Coche(int g, int p);
	void ponerGasolina(int g);
	void consumirGasolina(int g);
	void abrirPuertas();
	void cerrarPuertas();

	int puertas_;
	bool abiertas_;
	float gasolina_;

private:

};

#endif  // __COCHE_H__