#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

int main(){
    // Typy wyliczeniowe
    /*
    enum spectrum{czerwony, pomaranczowy, zolty, zielony, niebieski, fioletowy, indygo, ultrafiolet};
    spectrum pasmo;
    pasmo = pomaranczowy;
    */

    // Wskazniki i referencje
    /*
    int donuts = 6;
    double cups = 4.5;
    std::cout<<"Wartosc zmiennej donuts = "<<donuts<<"\nAdres zmiennej donuts = "<<&donuts<<std::endl;
    std::cout<<"Wartosc zmiennej cups = "<<cups<<"\nAdres zmiennej cups = "<<&cups<<std::endl;

    std::cout<<"\n";

    int updates = 6;
    int* pUpdates;
    pUpdates = &updates;
    std::cout<<"Wartosci: updates = "<<updates<<", *pUpdates = "<<*pUpdates<<std::endl;
    std::cout<<"Adresy: updates = "<<&updates<<", pUpdates = "<<pUpdates<<std::endl;
    
    *pUpdates += 1;
    std::cout<<"Zaktualizowana wartosc updates = "<<updates<<std::endl;         // Arytmetyka wskaznika

    int higgens = 5;
    int* pt = &higgens;
    std::cout<<"Wartosc zmiennej higgens = "<<higgens<<"\nAdres zmiennej higgens = "<<&higgens<<std::endl;
    std::cout<<"Wartosc *pt = "<<*pt<<"\nWartos pt = "<<pt<<std::endl;
    */
    
    // Uzycie operatora new do alokowania pamieci
    /*
    int nights = 1001;
    int* ptr = new int;              // alokacja pamieci na wartosc int
    *ptr = 1001;                     // zapis wartosci

    std::cout<<"wartosc nights = "<<nights<<": polozenie = "<<&nights<<std::endl;
    std::cout<<"int: wartosc = "<<*ptr<<": polozenie = "<<ptr<<std::endl;

    double* pd =  new double;       // alokacja pamieci na wartosc double
    *pd = 10000001.0;               // zapis wartosci

    std::cout<<"double: wartosc = "<<*pd<<": polozenie = "<<pd<<std::endl;
    std::cout<<"polozenie wskaznika pd = "<<&pd<<std::endl;
    std::cout<<"wielkosc ptr = "<<sizeof(ptr)<<": wielkosc *ptr = "<<sizeof(*ptr)<<std::endl;
    std::cout<<"wielkosc pd = "<<sizeof(pd)<<": wielkosc *pd = "<<sizeof(*pd)<<std::endl;
    */

    // Zwalnianie pamieci za pomoca delete
    /*
    double* p3 = new double[3];         // miejsce na 3 wartosci double
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    std::cout<<"p3[1] = "<<p3[1]<<"\n";
    p3 += 1;                            // zwiekszenie wskaznika
    std::cout<<"teraz p3[0] = "<<p3[0]<<", a p3[1] = "<<p3[1]<<std::endl;
    p3 -= 1;                            // znowu wskazujemy poczatek tablicy
    delete [] p3;                       // zwalniamy pamiec
    */

    // Wskazniki, tablice i arytmetyka wskaznikow
    
    // STL - Vector 
    /*
    std::vector<int>v;
    for(size_t i=0; i<10; ++i){
        v.push_back(i+1);
        std::cout<<v.size()<<std::endl;
    }
    std::cout<<"\n";
    std::cout<<"Pojemnosc prealokowanego miejsca w pamieci : "<<v.capacity()<<"\n\n";
    for(size_t i=0; i<10; ++i){
        std::cout<<v[i]<<"     "<<v.at(i)<<std::endl;
    }
    */

    // std::array
    /*
    std::array<int, 10> b;
    std::cout<<"Rozmiar array b = "<<b.size()<<'\n';
    for(std::array<int, 10>::iterator i = b.begin(); i != b.end(); ++i){  // mozna uzyc slowa auto
        *i = 1;
    }

    for(auto& i : b){
        i = 1;
    }

    std::fill(b.begin(), b.end(), 1);
    */

    // std::vector     
    return 0;
}