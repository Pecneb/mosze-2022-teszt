#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // fix typo N_ELEMENTS
    int *b = new int[NELEMENTS];
    // fix ; line ending
    std::cout << '1-100 ertekek duplazasa'
    // fix for( int i = 1; i <= N_ELEMENTS; i++ )
    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    // fix for ( int i = 1; i <= N_ELEMENTS; i++ )
    for (int i = 0; i; i++)
    {
	// fix ; line ending
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    // fix: en adnek neki kezdo erteket, ne legyen benne memoriaszemet --> int atlag = 0;
    int atlag;
    // fix: for ( int i = 1; i <= N_ELEMENTS; i++)
    for (int i = 0; i < N_ELEMENTS, i++)
    {
	// fix: ; line ending
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
