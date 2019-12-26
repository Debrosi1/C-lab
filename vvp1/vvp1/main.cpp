//
//  main.cpp
//  vvp1
//
//  Created by Александр дэброси on 23.12.2019.
//  Copyright © 2019 Александр дэброси. All rights reserved.
//
#include <math.h>
#include <iostream>
using namespace std;

int main()

{
    int zad = 0;
    cout << "Ведите номер задания : ";
    cin >> zad;
    switch (zad) {
        case 1:
    int a, b, s, p;
    cout << "введи значение" << endl;
    cin >> a >> b;
    s = a * b;
    p = 2 * (a + b);
    cout << "S=" << s << endl << "P=" << p;
    break;
case 2:{
        int d, L, pi;
        cout << "введи значение" << endl;
        cin >> d;
        pi = 3.14;
        L = d * pi;
        cout << "L=" << L;
    }break;
            case 3:
                
                cout << "введи значение" << endl;
                cin >> a >> b;
                s = (a + b) / 2;
                cout << "среднее арифметическое=" << s;
break;
        case 4:
            int  o, ch;
            cout << "введите не нулевое значение" << endl;
            cin >> a >> b;
            s = pow(a,2) + pow(b, 2);
            o = pow(a, 2) - pow(b, 2);
            p = pow(a, 2) * pow(b, 2);
            ch = pow(a, 2) / pow(b, 2);
            cout << "сумма=" << s << endl << "разность'=" << o << endl << "произведение'=" << p << endl << "частное'=" << ch;
            break;
        case 5:
            int    g;
            cout << "vvedite NE NULEVIE zna4enie" << endl;
            cin >> a >> b;
            s = abs(a) + abs(b);
            g = abs(a) - abs(b);
            p = abs(a) * abs(b);
            ch = abs(a) / abs(b);
            cout << "Summ=" << s << endl << "raznost'=" << g << endl << "proizvedenie'=" << p << endl << "4astnoe'=" << ch;
            break;

    }
}
