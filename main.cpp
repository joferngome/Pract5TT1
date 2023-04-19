#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

/*
 *

using namespace std;

const int n = 360;
const int size = n + 1;

int main() {
    double Cnm[size][size] = {};
    double Snm[size][size] = {};

    ifstream egm_file("egm.txt");
    for (int n = 0; n <= ::n; n++) {
        for (int m = 0; m <= n; m++) {
            int a, b;
            double c, d, e, f;
            egm_file >> a >> b >> c >> d >> e >> f;
            Cnm[n + 1][m + 1] = c;
            Snm[n + 1][m + 1] = d;
        }
    }

    ifstream eop_file("eop19620101.txt");
    vector<vector<int>> eopdata;
    while (eop_file) {
        vector<int> row(13);
        for (auto& val : row) {
            eop_file >> val;
        }
        eopdata.push_back(row);
    }
    eop_file.close();

    ifstream geos_file("GEOS3.txt");
    string line;
    while (getline(geos_file, line)) {
        int Y, M, D, h, m;
        double s, az, el, Dist;
        stringstream ss(line);
        ss >> Y >> M >> D >> h >> m >> s >> az >> el >> Dist;
        cout << Y << " " << M << " " << D << " " << h << " " << m << " " << s << " " << az << " " << el << " " << Dist << endl;
    }
    geos_file.close();

    return 0;
}
 */