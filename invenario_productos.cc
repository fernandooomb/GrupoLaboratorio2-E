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
 
    Nodo *nuevo_nodo = new Nodo;
    nuevo_nodo->productos = p;
    nuevo_nodo->siguiente = nullptr;
    nuevo_nodo->anterior = nullptr;

    if(*lista == nullptr){

        *lista = nuevo_nodo;
    }else{
        nuevo_nodo->anterior = *lista;
        (*lista)->siguiente = nuevo_nodo;
        *lista = nuevo_nodo;
    }

    std::cout<<"Producto agregado"<<"\n";

}
void EliminarFinal(Nodo **lista){

}
void Imprimir(Nodo *lista){
    
}