#include <iostream>
#include <string>

using namespace std;

// Funció per demanar i retornar un text introduït per l'usuari
string demanarText(string missatge);

// Funció per demanar i retornar un nombre introduït per l'usuari
int demanarNombre(string missatge);

// Funció per explicar una història utilitzant els paràmetres proporcionats
void explicarHistoria(string nom, string nomPlural, int nombre, string partCos, string verb);

int main()
{
    // Missatge de benvinguda
    cout << "Benvingut al test de Juanjo. \n\n";

    // Instruccions per a l'usuari
    cout << "Respon a les seguents preguntes per ajudar a crear una nova historia.\n";

    // Demana diverses dades a l'usuari
    
   
    string nom = demanarText("Si us plau, introdueixi un nom: ");
    string nomPlural = demanarText("Si us plau, introdueixi un nom en plural: ");
    int nombre = demanarNombre("Si us plau, introdueixi un nombre: ");
    string partCos = demanarText("Si us plau, introdueixi una part del cos: ");
    string verb = demanarText("Si us plau, introdueixi un verb: ");

    // Genera i mostra la història amb les dades proporcionades
    
   
    explicarHistoria(nom, nomPlural, nombre, partCos, verb);

    return 0;
}

// Funció per demanar i retornar un text introduït per l'usuari

/// <summary>
/// Demana a l'usuari que introdueixi un text i retorna el text introduït.
/// </summary>
/// <param name="missatge">Missatge que es mostra a l'usuari abans de demanar el text.</param>
/// <returns>Text introduït per l'usuari.</returns>
string demanarText(string missatge) {
    string text;
    cout << missatge;
    cin >> text;
    return text;
}


// Funció per demanar i retornar un nombre introduït per l'usuari

/// <summary>
/// Demana a l'usuari que introdueixi un nombre i retorna el nombre introduït.
/// </summary>
/// <param name="missatge">Missatge que es mostra a l'usuari abans de demanar el nombre.</param>
/// <returns>Nombre introduït per l'usuari.</returns>
int demanarNombre(string missatge) {
    int num;
    cout << missatge;
    cin >> num;
    return num;
}

// Funció per explicar una història utilitzant els paràmetres proporcionats

/// <summary>
/// Mostra una història utilitzant les dades proporcionades pels paràmetres.
/// </summary>
/// <param name="nom">Nom de l'explorador.</param>
/// <param name="nomPlural">Nom en plural utilitzat en la història.</param>
/// <param name="nombre">Nombre utilitzat en la història.</param>
/// <param name="partCos">Part del cos utilitzada en la història.</param>
/// <param name="verb">Verb utilitzat en la història.</param>
void explicarHistoria(string nom, string nomPlural, int nombre, string partCos, string verb) {
    cout << "\nAqui tens la teva història: \n";
    cout << "El famós explorador ";
    cout << nom;
    cout << " havia gairebé abandonat una cerca de tota la vida per trobar\n";
    cout << "La Ciutat Perduda de ";
    cout << nomPlural;
    cout << " quan un dia, el ";
    cout << nomPlural;
    cout << " troba a l'explorador.\n";
    cout << "Circulant per ";
    cout << nombre;
    cout << " " << nomPlural;
    cout << ", una llàgrima arriba a la ";
    cout << partCos;
    cout << " de ";
    cout << nom << ".\n";
    cout << "Després de tot aquest temps, la cerca finalment acaba.";
    cout << "\nI després, el ";
    cout << nomPlural;
    cout << "\nseguidament devora a ";
    cout << nom;
    cout << ", ";
    cout << "La moral de la història? Tingues cura amb allo que ";
    cout << verb;
    cout << ".\n";
}