/* Coche.cc
*  Simple implementation of a car class
*
*  @author  Jose Luis Jimenez Urbano | <ijos@ijos.es> | < @iJos >
*  December 2014
*/

#include "coche.h"

Coche::Coche(){
	puertas_ = 0;
	abiertas_ = false;
	gasolina_ = 0.0f;
}

void Coche::init(int g, int p){
	puertas_ = p;
	gasolina_ = g;
	abiertas_ = true;
}

/// Refills gas
void Coche::ponerGasolina(int g){
	gasolina_ = gasolina_ + g;
}

/// Use gas
void Coche::consumirGasolina(int g){
	gasolina_ = gasolina_ - g;
}

/// Open the doors
void Coche::abrirPuertas(){
	abiertas_ = true;
}

/// Close the doors
void Coche::cerrarPuertas(){
	abiertas_ = false;
}