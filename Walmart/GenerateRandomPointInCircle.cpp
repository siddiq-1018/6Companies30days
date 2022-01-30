class Solution {
public:
     double rad, x, y;
    Solution(double radius, double x_center, double y_center) {
        rad = radius;
        x = x_center;
        y = y_center; 
    }
    
    vector<double> randPoint() {
        double st = (double)rand() / RAND_MAX * 2 * M_PI,
            hyp = sqrt((double)rand() / RAND_MAX) * rad,
            adj = cos(st) * hyp,
            opp = sin(st) * hyp;
        return vector<double>{x + adj, y + opp};
    }
};
