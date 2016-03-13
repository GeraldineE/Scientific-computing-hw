#ifndef Usuario_hpp
#define Usuario_hpp


#include <stdio.h>
#include <string>
using namespace std;

class Usuario {
 private:
  
    string nombre;




  public:

   string getShortMessage();
    void sendShortMessage(string newMessage);

    string getNombre();
    void setNombre(string nom);

    

    Usuario( string nom); //constructor
    ~Usuario(); //destructor
};


#endif /* Usuario_hpp */