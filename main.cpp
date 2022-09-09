#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];//hibas nev megadasa
    std::cout << "1-100 ertekek duplazasa" << std::endl;//sortores, es pontosvesszo hianya, illetve ' helyett " hasznalata
    for (int i = 0; i < N_ELEMENTS; i++)//hianyzik, hogy meddig tartson a ciklus es, hogy mi a lepeskoz
    {
        b[i] = (i + 1) * 2;//nem egytol szamol, hanem nullatol
    }
    for (int i = 0; i < N_ELEMENTS; i++)//hianyzik, hogy meddig tartson a ciklus
    {
        std::cout << "Ertek:" << b[i] << std::endl;//eredmeny kiiratas-, sortores-, es pontosvesszo hianya
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;//atlagszamitasnal meg kell adni egy kezdo erteket, amibol kiindul
    for (int i = 0; i < N_ELEMENTS, i++)// vesszo helyett pontosvesszo
    {
        atlag += b[i];//pontosvesszo hianya
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    delete[] b;//pointer felszabaditasa
    return 0;
}
