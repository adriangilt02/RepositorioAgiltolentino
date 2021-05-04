#include <iostream>

using namespace std;

int main()
{
    float M1,B1,M2,B2, X , Y;

    cout << "Ingrese la pendiente (M1) y el termino independiente (B1) de la expresion Y1 = M1 * X + B1" << endl; // Hacemos que ingreses las variables que tiene la ecuacion.
    cout << "M1 = ";
    cin >> M1 ;
    cout <<"B1 = ";
    cin >> B1 ;
    cout << "Ingrese la pendiente (M2) y el termino independiente (B2) de la expresion Y2 = M2 * X + B2" << endl; // Repetimos con la otra ecuacion
    cout << "M2 = ";
    cin >> M2 ;
    cout <<"B2 = ";
    cin >> B2 ;
    if (M1==M2)
    {
    if (B1==B2) // Dependiendo si las variables de las dos ecuaciones son iguales, se afirmara que las ecuaciones son iguales y se intersectan todo el timepo
    {
    cout << "Las rectas son iguales, por lo tanto se intersecan todo el tiempo" << endl;
    } else
    {
    cout<< "Las rectas son paralelas, por lo tanto no se van a intersectar" << endl; // en cuenta si las pendientes son iguales, se afirmara que las rectas son paralelas, y por lo tanto, no habra interseccion.
    }
    }
    else
    {
    if (B1==B2) //Por otro lado, si los terminos independientes son iguales, se afirmarara que las ordenadas al origen, es decir las Y en las respectivas ecuaciones, seran iguales , y por consecuente, se intersectaran en ese punto cuando la X sea 0.
    {
    cout<< "Se intersecan en el punto (0;" << B1 << ")" << endl;
    }
    else //El ultimop caso, es el de la interccion por metodo de igualacion
    {

    X=(B2-B1)/(M1-M2); //Es el despeje de X cuando las rectas son iguales, es decir M1*X+B1=M2*X+B2.
    Y=M1*X+B1; //Y aca se sustituye la X y se encuentra la interseccion.

    cout<< "La interseccion de las rectas es en el punto (" << X << ";" << Y <<")" << endl;
    }
    }



}
