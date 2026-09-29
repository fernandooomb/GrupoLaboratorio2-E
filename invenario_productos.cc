#include <iostream>

struct Productos
{
    std::string nombre;
    int codigo_producto;
    float precio;
};
struct Nodo
{
    Productos productos;
    Nodo *siguiente;
    Nodo *anterior;
};

//Parametros
void InsertarInicio(Nodo **lista, Productos p);
void EliminarFinal(Nodo **lista);
void Imprimir(Nodo *lista);

int main()
{
    Nodo *lista =nullptr;


    return 0;
}

//Funciones
void InsertarInicio(Nodo **lista, Productos p){

}
void EliminarFinal(Nodo **lista){

}
void Imprimir(Nodo *lista){
    
}