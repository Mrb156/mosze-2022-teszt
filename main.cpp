#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];//hibas nev megadasa
    std::cout << '1-100 ertekek duplazasa'//sortores, es pontosvesszo hianya, illetve ' helyett " hasznalata
    for (int i = 0;)//hianyzik, hogy meddig tartson a ciklus es, hogy mi a lepeskoz
    {
        b[i] = i * 2;//nem egytol szamol, hanem nullatol
    }
    for (int i = 0; i; i++)//hianyzik, hogy meddig tartson a ciklus
    {
        std::cout << "Ertek:"//eredmeny kiiratas-, sortores-, es pontosvesszo hianya
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;//atlagszamitasnal meg kell adni egy kezdo erteket, amibol kiindul
    for (int i = 0; i < N_ELEMENTS, i++)// vesszo helyett pontosvesszo
    {
        atlag += b[i]//pontosvesszo hianya
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    //pointer felszabaditasa
    return 0;
}
