#include <iostream>
#include <vector>
using namespace std;


//Exercice 1.1
int isPair(int i){
    return (i%2 == 0);
}

//Exercice 2.1
//Tableau à taille fixe
int getPositive(int tab[], int taille){
    int i;
    int result=0;
    for (i = 0; i < taille; ++i)
    {
        if (tab[i]>0){
            result++;
        }
    }
    return result;
}

//Exercice 2.2
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

    //Exercice 2.3
int rechercheMax(list<int> liste){
    int max= liste.front();
	for(list<int>::iterator it = liste.begin(); it != liste.end(); it++){
	    if (max< *it){
	        max= *it;
	    }
	}
	return max;
}

//Exercice 3.1
int areDivisible(int x, int y){
  return x%y ==0 || y%x==0;
}

//Exercice 3.2
void swap(int &x, int &y){
    int c=x;
    x=y;
    y=c;
}


int main() {
    
    
 //Exercice 1.1
 bool pair = isPair(6);

 //Exercice 2.1
 cout << pair << endl;
 int tab[5]={1, -1, 6, 5, 2};
 int resultExo1 = getPositive(tab,5);
 cout << resultExo1 << endl;;

 //Exercice 2.2
 vector<int> vect;
 vect.push_back(8);
 vect.push_back(4);
 vect.push_back(2);
 vect.push_back(1);
 int result2=getSomme(vect);
 cout << result2 << endl;
    
 //Exercice 2.3
 list<int> l = { 7, 5, 16, 8 }; 
 int max=rechercheMax(l);
 cout << max << endl;

 //Exercice 3.1
 int x=5;
 int y=15;
 
 bool divisible = areDivisible(6,15);
 cout <<divisible<<endl;
	
 //Exercice 3.2
 swap(x,y);
 cout << x << endl;
 cout << y << endl;
}
