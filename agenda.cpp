#include <iostream>
using namespace std;

struct Contacto{
    string nombre;
    string telefono;
    string email;
};
const int contactos_maximos = 100;
Contacto agenda[contactos_maximos];
int totalContactos = 0;

void mostrarAgenda(Contacto agenda[], int n){
    cout<<"Agenda de contactos \n";
    if (n==0){
        cout<<"No hay contactos\n";
        return;
    }
    for(int i = 0; i < n; i++){
        cout<<"Nombre:  "<<agenda[i].nombre<<endl;
        cout<<"Telefono:  "<<agenda[i].telefono<<endl;
        cout<<"Email:  "<<agenda[i].email<<endl;

    }
}
int agregarContacto(Contacto agenda[], int n){
    if(n >= contactos_maximos){
        cout<<"Agenda llena\n";
        return n;
    }
    Contacto nuevo_contacto;
    cout<<"Ingrese nombre:";
    //el ws ignora el salto de linea para que no genere error en la entrada de datos
    getline(cin>>ws,nuevo_contacto.nombre);
    cout<<"Ingrese telefono:";
    getline(cin,nuevo_contacto.telefono);
    cout<<"Ingrese Email:";
    getline(cin,nuevo_contacto.email);

    agenda[n] = nuevo_contacto;
    cout<<"Contacto creado\n";
    return n+1;
}
int main(){
    return 0;

}