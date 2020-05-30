 #include <iostream>

using namespace std;

//Se define la Ecuacnion de la trayectoria
double trayectoria(double t, double v0);
double trayectoria(double t, double v0)
{
    return v0 + -(10.0)*t;
}
//Se define el metodo de runge kutta para la solucion del problema
double * rungekutta(double t, double h, double dt, double v0);
double * rungekutta(double t, double h, double dt, double v0)
{
    double rk1 = trayectoria(t, v0)*dt;
    double rk2 = trayectoria(t + dt/2, v0)*dt;
    double rk3 = trayectoria(t + dt/2, v0)*dt;
    double rk4 = trayectoria(t + dt, v0)*dt;
    double * position = new double[2];
    position[0] = t + dt; 
    position[1] = h + (rk1 + 2*rk2 + 2*rk3 + rk4)/6;
    
    return position;
}