#include <bits/stdc++.h>

using namespace std;

vector<double> X(4);
vector<double> Y(4);

int qualQuadrante(double x1, double y1, double x2, double y2){
    double x = x1 - x2;
    double y = y1-y2;

    if(x > 0){
        if(y > 0){
            return 0;
        }
        return 1;
    }
    if(y > 0){
        return 3;
    }
    return 2;
}


int main(){
    int n;
    cin >> n;
    int aux = 1;
    while(n--){
        aux = aux * 2;
    }

    X[0] = 0;
    Y[0] = 0;
    X[1] = 0;
    Y[1] = (double) aux;
    X[2] = (double) aux;
    Y[2] = (double) aux;
    X[3] = (double) aux;
    Y[3] = 0;

    double xTarget;
    double yTarget;
    cin >> xTarget >> yTarget;

    double meuX = aux/2;
    double meuY = aux/2;
    double erro = 0.0000001;
    double xConv = meuX - xTarget;
    double yConv = meuY - yTarget;

    if(xConv < 0){
        xConv = xConv * (-1);
    }

    if(yConv < 0){
        yConv = yConv * (-1);
    }

    int cont = 0;

    while(xConv > erro || yConv > erro){
        int quad = qualQuadrante(meuX, meuY, xTarget, yTarget);
        meuX = (meuX + X[quad])/2;
        meuY = (meuY + Y[quad])/2;

        xConv = meuX - xTarget;
        yConv = meuY - yTarget;
        if(xConv < 0){
            xConv = xConv * (-1);
        }

        if(yConv < 0){
            yConv = yConv * (-1);
        }
        cont++;
    }

    cout << cont << endl;
    
    return 0;
}