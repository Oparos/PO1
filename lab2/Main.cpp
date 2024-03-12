// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal się, 
// a wynik jego dzialania byl taki sam jak podany na końcu tego pliku.

// Prosze napisac odpowiednie funktory które mogą być wykorzystane w ramach std::sort
// Uwaga: w definicji tych funktorów można po prostu skorzystać z operatorów relacyjnych dla typu std::string

// Prosze zadbac o dobre zarzadzanie pamiecia.
// Pliku Main.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod), oraz powinna być spełniona zasada
// D.R.Y. - Don't Repeat Yourself.

// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani zadnych innych materialow.

// Kody źródłowe muszą znajdować się w katalogu do którego nikt oprócz
// właściciela nie ma praw dostępu.
// Rozwiazanie (czyli dodane pliki i Main.cpp należy wgrać do UPEL 
// jako archiwum tar.gz
// UWAGA:
// * archiwum powinno zawierać katalog z zadaniem, np. lab02/
// * archiwum nie powinno zawierać katalogu build/


#include <iostream>
#include "StringFun.h"

int main() {

  // Na start porównanie długości std::string z wykorzystaniem funktora:
  std::string nameA = "Abigale";
  std::string nameB = "Allesandro";

  Less less;
  std::string name = less.operator()(nameA,nameB) ? nameA : nameB;
  std::cout << "Name alphabetically going first:\n" << name << "\n" << std::endl;

  // Operacje na napisach przechowywanych w  std::vector, oraz z wykorzystaniem funktorów:
  std::vector<std::string> names = { "Abe", "Andrew", "Aaron", "Arthur", "Alfred", "Al", 
                      "Abdul", "Adrian", "Albert", "Alessandro" };

  std::cout << "Original unsorted names:" << std::endl;
  PrintNames(names);

  std::sort( names.begin(), names.end(), Less() ); // to jest ten sam funkctor co w linii 48
  std::cout << "Sorted names (alphabetical, ascending):" << std::endl;
  PrintNames(names);

  std::sort( names.begin(), names.end(), Greater() );
  std::cout << "Sorted names (alphabetical, descending):" << std::endl;
  PrintNames(names);

  std::sort( names.begin(), names.end(), Length() );
  std::cout << "Sorted names (string length, ascending):" << std::endl;
  PrintNames(names);

  return 0;  
}
/* wynik:
brachwal@dell-xps:~/workspace/po1/lab02/ex5/build$ ./sfun 
Name alphabetically going first:
Abigale

Original unsorted names:
Abe Andrew Aaron Arthur Alfred Al Abdul Adrian Albert Alessandro 

Sorted names (alphabetical, ascending):
Aaron Abdul Abe Adrian Al Albert Alessandro Alfred Andrew Arthur 

Sorted names (alphabetical, descending):
Arthur Andrew Alfred Alessandro Albert Al Adrian Abe Abdul Aaron 

Sorted names (string length, ascending):
Al Abe Abdul Aaron Arthur Andrew Alfred Albert Adrian Alessandro 

*/
