//
//  main.cpp
//  vvp3
//
//  Created by Александр дэброси on 23.12.2019.
//  Copyright © 2019 Александр дэброси. All rights reserved.
//
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
   
    int nomer;
    cout << "Введите номер задания : ";
    cin >> nomer;
    switch (nomer)
    {
    case 1:
    {
        float a,b,x;
        cout << "введите a и b " << endl;
        cin >> a >> b;
        x = a;
        a = b;
        b = x;
        cout << a <<endl << b;

    }
    break;

    case 2:
    {
        float a, b, c, x;
        cout << "введите a, b, c " << endl;
        cin >> a >> b>> c;
        x = b;
        b = a;
        a = c;
        c = x;
        cout << a <<endl << b <<endl << c ;

    }
    break;

    case 3:
    {
        float a, b, c, x;
        cout << "введите a, b, c " << endl;
        cin >> a >> b>> c;
        x = c;
        c = a;
        a = b;
        b = x;
        cout << a <<endl << b <<endl << c ;

    }
    break;

    case 4:
    {
        float x, y;
        cout << "введите x " << endl;
        cin >> x;
        y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
        cout << y ;

    }
    break;

    case 5:
    {
       float x, y;
        cout << "введите x " << endl;
        cin >> x;
        y = 4 * pow((x-3), 6) - 7 * pow((x-3), 3) + 2;
        cout << y ;

    }
    break;

    case 6:
    {
        float x, y;
        cout << "введите x " << endl;
        cin >> x;
        y = x * x;
        x = y * y;
        y =x * x;
        cout << y;
    }
    break;

    case  7:
    {
       float x, y,c;
        cout << "введите x " << endl;
        cin >> x;
        y = x * x;
        c = y * y * x;
        y = c * c * c; 
        cout << y ;

    }

    default:
        break;
    }
}
