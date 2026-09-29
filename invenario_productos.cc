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
    Productos p1, p2;
    p1.nombre = "Manzana";
    p1.codigo_producto = 010111;
    p1.precio = 3.14;

    p2.nombre = "Banana";
    p2.codigo_producto = 020222;
    p2.precio = 2.82;

    InsertarInicio(&lista, p1);
    InsertarInicio(&lista, p2);
    Imprimir(lista);
    EliminarFinal(&lista);
    Imprimir(lista);

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

    std::cout<<"Producto agregado"<< p.nombre<<"\n";

}
void EliminarFinal(Nodo **lista){

}
void Imprimir(Nodo *lista){
    
}