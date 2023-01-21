// Alejandro Hidalgo Badillo A01423412
// Actividad 2 punto 1 Implementacion de Hash String
// 5 de octubre del 2022
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
// en esta funcion se realiza la conversion del string deseado encontrar y la
// linea de texto en la cual se quiere buscar el string osea se hace el
// hashstring y su misma comparacion para saber si si buscar la palabra
// posteriormente en esa misma linea o no.

bool KMP(string text, string word) {
  string asciiText, asciiWord;
  // Ascii de la linea de texto en la que se va a buscar.
  for (int i = 0; i < text.length(); i++)

  {
    char x = text.at(i);
    // cout << int(x)<<" ";
    int number = int(x);
    if (text[i] == ' ') {
      asciiText = asciiText + ' ';
    } else {
      asciiText = asciiText + std::to_string(number);
    }
  }
  // Ascii de la palabra buscada
  for (int i = 0; i < word.length(); i++)

  {
    char x = text.at(i);
    // cout << int(x)<<" ";
    int number = int(x);
    if (text[i] == ' ') {
      asciiWord = asciiWord + ' ';
    } else {
      asciiWord = asciiWord + std::to_string(number);
    } 
  }
  // cout<<endl;

  // cout<<"ascii Text: "<<asciiText<<endl;
  // cout<<"ascii Word: "<<asciiWord<<endl;

  bool found = asciiText.find(asciiWord) != std::string::npos;
//se comparan los string convertidos en ASCII y si se encuentra la cadena regresa verdadero, si no regresa  falso y ya no busca la cadena de string en esa linea
  if (found) {
    return true;
  } else {
    return false;
  }
}
//la complejidad de KMP es lineal On debido a que no tiene ningun for anidado y solo tiene condiciones

int main() {
  // declaracion de variables
  bool status;

  vector<string> texto;
  string linea;
  string word;
  int contLinea = 0;

  // almacenamiento de datos
  cin >> word;

  getline(cin, linea);

  // se introduce el texto completo
  while (getline(cin, linea)) {
    texto.push_back(linea);
    contLinea++;
  }

  // cout<<contLinea<<endl;
  //cout << "ocurrences: " << endl;
  for (int i = 0; i < contLinea; i++) {
    linea = texto[i];
    // cout<<linea<<endl;
    status = KMP(linea, word);
    if (status == true) { // se verifica primero que haya una ocurrencia con el
                          // hash string



      int total = 0;
      size_t found = texto[i].find(word);

      while (found != std::string::npos) {
        // si ubo ocurrencia toma la primera
        // y vuelve a iterar para encontrar
        // mas ocurrencias en el mismo string

        if (found != string::npos)
          cout << i + 1 << " " << found + 1 << " " << found + word.length()
               << endl;
        found = texto[i].find(word, found + word.size());
      } //cierra while
    }

  } // cierra for
}
//la complejidad del main es O(n x n) debido a un while anidado en un for 

// La complejidad mas alta del programa se encuentra en el for que tiene anidado
// un for en el main, este tiene una complejidad de O(n x n) debido a que tiene un while anidado