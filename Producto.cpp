

#include "Producto.h"
using namespace std;

//
// Set/Get Methods for message data
//
string Producto::getShortMessage(){
    return shortMessage;
};
void Producto::sendShortMessage(string newMessage){
    shortMessage = newMessage;
};


//
// Set/Get Methods for name data
//
string Producto::getNombre(){
    return nombre;
};
void Producto::setNombre(string nom){
    nombre = nom;
};


//
// Set/Get Methods for categ
//
int Producto::getCategoria() {
    return categ;
};
void Producto::setCategoria(int categ){
    Categoria = categ;
};


int Producto::getCantvoltaje() {
    return cantv;
};
void Producto::setCantvoltaje(int cantv){
    Cantvoltaje = cantv;
};
//Set/Get precio


int Producto::getPrecio() {
    return precio;
};
void Producto::setPrecio(int precio){
    precio = precio;
};

//

int Producto::getTamanio() {
    return tam;
};
void Producto::setTamanio(int tam){
    tamanio = tam;
};
//

int Producto::getCantidad() {
    return cant;
};
void Producto::setCantidad(int cant){
    cantidad = cant;
};

//

int Producto::getCapacidad() {
    return capacidad;
};
void Producto::setCapacidad(int cap){
    capacidad = cap;
};




//
//constructor
//
Producto::Producto(int cantv,int cant,int cap,int tam, int precio,string categ string nom){
    setNombre(nom);
    setCantvoltaje(cantv);
    setCantidad(cant);
    setCapacidad(cap);
    setTamanio(tam);
    setPrecio(precio);
    setCategoria(categ);

};

//
//destructor
//
Producto::~Producto(){

};
