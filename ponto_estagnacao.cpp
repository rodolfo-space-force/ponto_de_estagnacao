//Rodolfo Milhomem
//https://github.com/rodolfo-space-force/

#include <cstdlib>
#include <iostream>
#include <cmath>

//Livro Introdução à Tecnologia de Foguetes / Ariovaldo Felix Palmerio pag. 244

using namespace std;

int main()

{ 
    
    double  te,r,gamma,m,tf,k;
    
    r= 0.85;//escoamento laminar
    gamma= 1.4;// Ar
       
    cout <<"Input Mach= "; cin >> m;
    cout <<"Temperatura do escoamento na fronteira da camada limite (kelvins)= "; cin >>te;// Temperatura do escoamento na fronteira da camada limite
     
    tf=te*(1+r*((gamma-1)/2)*(pow((m),((2)))));
    k=tf-273.15;
    
    cout <<"================================="<< endl;
    cout <<"Temperatura na vizinhanca do ponto de estagnacao do escoamento aerodinamico (celsius)= "<< k << endl;
    cout <<"================================="<< endl;
    
    system("PAUSE");
    return 0;

}

// Licença
//Este projeto está licenciado sob a **Licença MIT**.  
//Você pode usar, modificar e redistribuir este código livremente, **desde que mencione o autor original**.
