//

#ifndef Producto_hpp
#define Producto_hpp


#include <stdio.h>
#include <string>
using namespace std;

class Producto {
 private:
    int idp,cantvoltaje,precio;
    int numordenlista,tamanio,cantidad,capacidad;
    string categoria;
    string nombre;




  public:

   string getShortMessage();
    void sendShortMessage(string newMessage);

    string getNombre();
    void setNombre(string nom);

    string getCategoria();
    void setCategoria(string categ);

    int getCantvoltaje();
    void setCantvoltaje(int cantv);

    int getPrecio();
    void setPrecio(int precio);

    string getNumordenlista();
    void  setNumordenlista(string numorden);

    string getTamanio();
    void setTamanio(string tam);

    int getCantidad();
    void setCantidad(int cant);

    int getCapacidad();
    void setCapacidad(int cap);

    Producto(int idp, string nom, string categ,int cantv,int precio,int numorden, string tam, string cant,int cap); //constructor
    ~Producto(); //destructor
};


#endif /* Producto_hpp */