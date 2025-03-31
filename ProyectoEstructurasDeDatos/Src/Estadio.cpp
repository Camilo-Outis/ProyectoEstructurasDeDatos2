#include <iostream>
#include <string>
using namespace std;



class Estadio {
public:
    string nombre;
    string ciudad;
    string estado;
    string pais;
    int capacidad;
    int anio;

    Estadio(string nombre, string ciudad, string estado, string pais, int capacidad, int anio) {
        this->nombre = nombre;
        this->ciudad = ciudad;
        this->estado = estado;
        this->pais = pais;
        this->capacidad = capacidad;
        this->anio = anio;
    }

    string getNombre() { return nombre; }
    string getPais() { return pais; }
    int getCapacidad() { return capacidad; }
    string toString() {
        return nombre + ", " + ciudad + ", " + estado + ", " + pais + ", Capacidad: " + to_string(capacidad) + ", Año: " + to_string(anio);
    }
};
