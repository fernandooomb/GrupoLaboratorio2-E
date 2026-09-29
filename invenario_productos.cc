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
            if (lista == nullptr)
    {
        std::cout << "No hay productos\n";
        return;
    }

    struct Nodo *temporal = lista;
    while (temporal != nullptr)
    {
        std::cout << "Nombre del producto: " << temporal->productos.nombre;
        std::cout << "Codigo del producto: " << temporal->productos.codigo_producto;
        std::cout << "Precio: " << temporal->productos.precio << "\n";
        
        temporal = temporal->siguiente;
    }
}