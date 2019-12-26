//
//  main.cpp
//  vvp4
//
//  Created by Александр дэброси on 23.12.2019.
//  Copyright © 2019 Александр дэброси. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a;
        cout << "Ведите номер задания : ";
        cin >> a;
        switch (a)
        {
        case 1:
        {
            int a;
            double Pi;
            cout << "Ведите a: ";
            cin >> a;
            Pi = 3.14;
            if (0 < a && a < 360)
            {

                cout << " радианты = " << (Pi * a) / 180 << endl;
            }
            else {
                cout << "не соответствие условию " << endl;
            }
            system("pause");
            return 0;
        }
        break;

        case 2:
        {
            int a;
            double Pi;
            cout << "Ведите a: ";
            cin >> a;
            Pi = 3.14;
            if (0 < a && a < (2 * Pi))
            {

                cout << " градусы = " << (180 * a) / Pi << endl;
            }
            else {
                cout << "не соответствие условию " << endl;
            }
            system("pause");
            return 0;
        }

        break;

        case 3:
        {
            double x,y,a;
            cout << "введите числа " << endl;
            cin >> x>>a>>y;
            x = a / x;
            y = y * x;
            cout << x<< endl<< y;
            system("pause");
            return 0;
        }
        break;

        case 4:
        {
            double V1, V2, S, T;
            cout << "V1, V2, S, T ";
            cin >> V1 >> V2 >> S >> T;
            S = S + (V1 + V2) * T;
            cout << "расстояние между ними через T часов " << S << endl;

            system("pause");
            return 0;
        }
        break;

        case 5:
        {
            double a, b, x;
            cout << "Ведите a, b: ";
            cin >> a >> b;
            if (a != 0)
            {
                x = -b / a;
                cout << " x = " << x << endl;
            }
            else {
                cout << "не соответствие условию " << endl;
            }
            system("pause");
            return 0;
        }
        break;

        case 6:
        {
            double a1,b1,c1, a2,b2,c2, x,y,q,q1,q2;
            cout << "введите a1, b1,c1, a2, b2, c2" << endl;
            cin >> a1>>b1>>c1>>a2>>b2>>c2;
            q = a1 * b2 - a2 * b1;
            q1 = b2 * c1 - b1 * c2;
            q2 = a1 * c2 - a2 *c1;
            x = q1 / q;
            y = q2 / q;
            cout<<"x= " <<x<<endl<<"y= "<<y;
            return 0;
        }

        default:
            break;
        }
    }
   

