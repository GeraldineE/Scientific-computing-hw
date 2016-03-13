
#include "Compras.h"
using namespace std;




Producto::producto(){
    precio=2;
    nom="sara";
    cantv=3;
    cant=2;
    categ="tv"
    tam=50;
   
}



Compras::Producto(){
    return Producto;
};



string Compras::getShortMessage(){
    return shortMessage;
};
void Producto::sendShortMessage(string newMessage){
    shortMessage = newMessage;
};



string Compras::getIdnumerodefactura(){
    return idnumerodefactura;
};
void Compras::setIdnumerodefactura(string fact){
    idnumerodefactura = fact;
};


string Compras::getCantidadcomprada(){
    return cantcomprada;
};
void Compras::setCantcomprada(string comprada){
    cantcomprada = comprada;
};



string Compras::getTotal(){
    return total;
};
void Compras::setTotal(string total){
    total = total;
};


string Compras::getStrfecha(){
    return strfecha;
};
void Compras::setStrfecha(string fecha){
    total = fecha;
};

//
//constructor
//
Compras::Compras(int idnumerodefactura, int comprada,int total,int fact,string fecha){
    setIdnumerodefactura(idnumerodefactura);
    setCantcomprada(comprada);
    setTotal(total);
    setStrfecha(fecha);
   
};

//
//destructor
//
Compras::~Compras(){

};


