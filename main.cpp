#include <iostream>
using namespace std;
int main()
{


    int beer;
    int beerQty;
    double Heinkein = 50.00;
    double Smirnoffice = 25.00;
    double Desperado = 70.00;
    double AmountofSaleHeinken = 0;
    double AmountofSaleSmirnoffice = 0;
    double AmountofSaleDesperado = 0;
    double cash;
    double total = 0;


    cout<<"\n\t Bodega Beer Ordering System\t\n\n";
    cout<<"\t\t **Beer** \t\n\n";

    cout<<" [1] Heinkein..................$ 50.00\n [2] Smirnoffice...........$ 25.00\n [3] Desperado.........$70.00\n";

    cout<<"What beer do you want: ",
    cin>>beer;
    cout<<"How many?: ";
    cin>>beerQty;

    cout<<"\n\t        =Item Ordered=\t\t\n\n";

    switch (beer)
    {
        case 1;
        cout<<" Heinkein............$ 50.00 "<<beerQty<<" ="<<beerQty + Heinkein<<"\n";
        AmountofSaleHeinken = beerQty * Heinkein;
        break;

        case 2
        cout<<" Smirnoff............$25.00 "<<beerQty<<" ="<<beerQty + Smirnoffice<<"\n";
        AmountofSaleSmirnoffice = beerQty * Smirnoffice;
        break;

        case 3
        cout<<" Desperado............$70.00 "<<beerQty<<" ="<<beerQty + Desperado<<"\n";
        AmountofSaleDesperado = beerQty * Desperado;
        break;
    }
{


    total = 0;
    total = total + AmountofSaleHeinken + AmountofSaleSmirnoffice + AmountofSaleDesperado

    cout<<"Total Amount is:"  "<<total<<"\n";
    cout<<"Cash: ";
    cin>>cash;
    cout<<"Change: "<< cash - total<<"\n\n";

    cout<<"Enjoy Your Beer!\n\n\n";
    cout<<"\n\n\t.........................\n";
    
}

