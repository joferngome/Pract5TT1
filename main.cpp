//
// Created by joferngome on 19/04/2023.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

const int size=361;

using namespace std;




int main(){

    cout<<"hola"<<endl;

   cout<<sizeof(double)<<endl;

    double Cnm[size][size] = {};
    double Snm[size][size] = {};
    /*

    ifstream fich("egm.txt");



    //Ns si los bucles están bien puestos?


     *

    for(int i=0;i<361;i++){
        for(int j=0;i<i+1;j++){
            int a, b;
            double c, d, e, f;
            fich >> a >> b >> c >> d >> e >> f;
            Cnm[i + 1][j + 1] = c;
            Snm[i + 1][j + 1] = d;

        }
    }

    for (int x=0; x < 361; x++) {
        for (int y=0; y < 361; y++) {
            cout<< (Cnm[x][y]);
        }
    }

    //Initialize UT1-UTC and TAI-UTC time difference

    ifstream fich2("eop19620101.txt");

    //| Date MJD x y UT1-UTC LOD dPsi dEpsilon dX dY DAT
    //|(0h UTC) " " s s " " " " s

    //No sé muy bien q estoy haciendo??
    vector<vector<int>> eopdata;
    while (fich2) {
        vector<int> row(13);
        for (auto& val : row) {
            fich2 >> val;
        }
        eopdata.push_back(row);
    }
    fich2.close();

    ifstream fich3("GEOS3.txt");


    int nobs=18;
    string line;

    for(int m=0;m<nobs+1;m++){
        while (getline(fich3, line)) {
            int Y, M, D, h, m;
            double s, az, el, Dist;
            stringstream ss(line);
            ss >> Y >> M >> D >> h >> m >> s >> az >> el >> Dist;
            cout << Y << " " << M << " " << D << " " << h << " " << m << " " << s << " " << az << " " << el << " " << Dist << endl;
        }




    }

    fich3.close();
     */






return 0;



}
