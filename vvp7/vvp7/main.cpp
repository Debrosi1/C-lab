//
//  main.cpp
//  vvp7
//
//  Created by Александр дэброси on 23.12.2019.
//  Copyright © 2019 Александр дэброси. All rights reserved.
//
#include <math.h>
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int nomer;
        cout << "Ведите номер задания : ";
        cin >> nomer;

        switch (nomer)
        {

        case 1:
        {
            int a, b;
            cout << "Ведите A и B: ";
            cin >> a >> b;
            if (a > 2 && b <= 3)
                cout << "истено ";
            else
                cout << "ложно ";
        }
        break;

        case 2:
        {

            int a, b, c;
            cout << "Ведите A , B и C : ";
            cin >> a >> b >> c;
            if (a < b && b < c)
                cout << " истено ";
            else
                cout << " ложно ";

        }

        break;

        case 3:
        {
            int a;
            cout << "Ведите A : ";
            cin >> a;
            if (a > 9 && a < 100 && (a % 2) == 0)
                cout << " истено ";
            else
                cout << " ложно ";
        }
        break;

        case 4:
        {
            int a;
            cout << "Ведите A : ";
            cin >> a;
            if (a > 99 && a < 1000 && (a / 100) < ((a / 10) % 10) && ((a / 10) % 10) < (a % 10))
                cout << " истено ";
            else
                cout << " ложно ";
        }
        break;

        case 5:
        {
            int a;
            cout << "Ведите A : ";
            cin >> a;
            if (a > 999 && a < 10000 && (a / 1000) == (a % 10) && ((a / 100) % 10) == ((a % 100) / 10))
                cout << " истено ";
            else
                cout << " ложно ";
        }
        break;

        case 6:
        {
            int a, b, c;
            cout << "Ведите A , B и C : ";
            cin >> a >> b >> c;

            if (a > 0 && b > 0 && c > 0 && a == (sqrt(pow(b, 2) + pow(c, 2))))
                cout << " истено ";

            if (a > 0 && b > 0 && c > 0 && b == (sqrt(pow(a, 2) + pow(c, 2))))
                cout << " истено ";

            if (a > 0 && b > 0 && c > 0 && c == (sqrt(pow(b, 2) + pow(a, 2))))
                cout << " истено ";

            else
                cout << " ложно ";
        }
        break;

        case 7:
        {
            int a, b, c;
            cout << "Ведите A , B и C : ";
            cin >> a >> b >> c;
            if (a > 0 && b > 0 && c > 0 && (a + b) > c && (a + c) > b && (c + b) > a)
                cout << " истено ";
            else
                cout << " ложно ";
        }
        break;

        default:
            break;
        }


    }

