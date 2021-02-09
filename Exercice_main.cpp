#include <iostream>
#include <vector>
using namespace std;


//Tableau à taille fixe
int isPair(int i){
    return (i%2 == 0);
}

//Tableau à taille fixe
int getPositive(int tab[], int taille){
    int i;
    i=0;
    int result=0;
    for (i = 0; i < taille; ++i)
    {
        if (tab[i]>0){
            result++;
        }
    }
    return result;
}

//Tableau à taille variable (vector)
int getSomme(vector<int> tab){
    int result=0;
    int i;
    for (i = 0; i < tab.size(); i++)
    {
        result+=tab[i];
    }
    return result;
}

//Tableau à taille


int main() {

 bool pair = isPair(6);

 cout << pair << endl;
 int tab[5]={1, -1, 6, 5, 2};
 int resultExo1 = getPositive(tab,5);
 cout << resultExo1 << endl;;


 vector<int> vect;
 vect.push_back(8);
 vect.push_back(4);
 vect.push_back(2);
 vect.push_back(1);
 int result2=getSomme(vect);
 cout << result2 << endl;;
}
