//
// Created by Javier on 31/8/2017.
//

#ifndef TAREA4_PROGRA3_EVALUADOR_H
#define TAREA4_PROGRA3_EVALUADOR_H

#include "Mascota.h"
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
using namespace std;

void evaluar();
void escribir(string nombre_archivo, Mascota*mascota, int posicion);
Mascota* leer(string nombre_archivo, int posicion);
vector<Mascota*> leerTodos(string nombre_archivo);


#endif //TAREA4_PROGRA3_EVALUADOR_H
