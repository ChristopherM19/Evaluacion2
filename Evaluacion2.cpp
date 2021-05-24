#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

class Forma{
    private:
     string Color, NombreForma;
     float X, Y;
    public:
     Forma();
     void Imprimir();
     void CambiarColor();
     void Mover();
};

class Rectangulo : public Forma{
    private:
     int LadoMenor, LadoMayor, Area;
    public:
     Rectangulo();
     void CalcularArea();
     void CalcularPerimetro();
     void CambiarTamano();
};

class Cuadrado : public Rectangulo{};

Forma::Forma(){
    Color = "";
    NombreForma = "Forma";
    X = 0;
    Y = 0;
}

Rectangulo::Rectangulo(){
    LadoMenor = 0;
    LadoMayor = 0;
}

void Forma::Mover(){
    cout<<"Ingrese coordenada de X: ";
    cin>>X;
    cout<<"Ingrese coordenada de Y: ";
    cin>>Y;
}

void Forma::CambiarColor(){
    cout<<"Ingrese el color de la forma: ";
    cin>>Color;
}

void Forma::Imprimir(){
    system("cls");

    cout<<"\nEl nombre de la forma es: "<<NombreForma;
    cout<<"\nEl color de la forma es: "<<Color;
    cout<<"\nLa coordenada en el eje X es: "<<X;
    cout<<"\nLa coordenada en el eje Y es: "<<Y;
    system("\npause");
}

void Rectangulo::CalcularArea(){

    do{
        system("cls");
        cout<<"Ingrese valor del lado menor: ";
        cin>>LadoMenor;
        cout<<"Ingrese valor del lado mayor: ";
        cin>>LadoMayor;

        if (LadoMenor < LadoMenor)
        {
            cout<<"\nEl valor ingresado no es valido"<<endl;
            system("pause");
        }
    } while (LadoMenor < LadoMayor);
    
    Area = LadoMenor * LadoMayor;
    cout<<"El area es: "<<Area<<endl;
}

void Rectangulo::CambiarTamano(){

    int Tamano;
    cout<<"\nIngrese valor de la escala: ";
    cin>>Tamano;
    Tamano = Tamano * Area;

    cout<<"El tamaño es: "<<Tamano<<endl;
    system("pause");
}

void Rectangulo::CalcularPerimetro(){

    float Perimetro;
    Perimetro = (2*LadoMenor) + (2*LadoMayor);
    cout<<"El perimetro es: "<<Perimetro<<endl;
}

int main(){

    Rectangulo obj;
    obj.Mover();
    obj.CambiarColor();
    obj.Imprimir();
    obj.CalcularArea();
    obj.CambiarTamano();
    obj.CalcularPerimetro();
    return 0;

}