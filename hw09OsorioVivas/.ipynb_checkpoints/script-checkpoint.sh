#!/bin/bash
#Script en bash: Ejecuta main y grafica
g++ main.cpp && ./a.out
#Manda la salida de a.out a datos
./a.out > datos.txt
#Grafica y guarda en grafico.pdf
python grafica.py