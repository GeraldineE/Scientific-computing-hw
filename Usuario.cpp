#include "Usuario.h"
using namespace std;

//
// Set/Get Methods for message data
//
string Usuario::getShortMessage(){
    return shortMessage;
};
void Usuario::sendShortMessage(string newMessage){
    shortMessage = newMessage;
};


//
// Set/Get Methods for name data
//
string Usuario::getNombre(){
    return nombre;
};
void Usuario::setNombre(string nom){
    nombre = nom;
};


//
//constructor
//
Usuario::Usuario(string nom){
    setNombre(nom);
    

};

//
//destructor
//
Usuario::~Usuario(){

};
