#include <iostream>

using namespace std;

// 1. Napisz funkcje, ktora oblicza pole trojkata o podanych d³ugoœciach podstawy a i wysokoœci h


int f (int a, int h)
{
    return (a*h)/2;
}
int main ()
{
    int a, b;
    cin >> a >> b;
    cout << "POLE:" << f(a, b);

}


// 2. SprawdŸ czy dana liczba jest liczb¹ Marsenne'a

void marsenne (int x)
{
    int t=x+1;
    while (t>1);
    {
        if (t%2==0)
            t=t/2;
        else cout << "NIE";
        return;
    }
    cout << "TAK";
    return;
}
int main ()
{
    int x;
    cin >> x;
    marsenne (x);
}

//Ten ca³y Niuton Rapson

//a, b        (a+b)/2
//1, 40 -     (1+40)/2
//40/20,5==1,95 , 20,5      (1,95+20,5)/2
//40/11,23==3,56 , 11,23     (3,56+11,23)/2
//...
