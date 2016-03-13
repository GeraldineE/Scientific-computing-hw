//

#ifndef Compras_hpp
#define Compras_hpp


#include <stdio.h>
#include <string>
using namespace std;

class Compras {
 private:
    int idnumerodefactura,cantcomprada,total;
    string strfecha;

  public:

   string getShortMessage();
    void sendShortMessage(string newMessage);

    string getIdnumerodefactura();
    void setIdnumerodefactura(string numfact);

    string getCantcomprada();
    void setCantcomprada(string cantcomp);

    int getTotal();
    void setTotal(int total);

    int getStrfecha();
    void setStrfecha(int fecha);

    

    Compras(int numfact, string fecha,int cantcomp,int total); //constructor
    ~Compras(); //destructor
};


#endif /* Comparas_hpp */