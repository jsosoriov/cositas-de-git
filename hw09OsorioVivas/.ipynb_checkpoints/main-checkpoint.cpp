#include <iostream>
#include "funciones.h"

using namespace std;


int main()
{
    //Valores iniciales
    double t = 0; 
    double dt = 0.005; 
    double v0 = 20; 
    double h = 8.5;
    
    double * t_pos = new double[2];
    // Condiciones iniciales
    t_pos[0] = 0; t_pos[1] = h;

    while(0 < h)
    {
        cout << t_pos[0] << ',' << t_pos[1] << endl;
        h = t_pos[1];
        t = t_pos[0];
        t_pos = rungekutta(t, h, dt, v0);
    }
    
    return 0;
}