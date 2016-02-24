struct pt {
    double x, y;
    pt(double xx=0.0, double yy=0.0) { x=xx; y=yy; }
};

pt operator+(const pt &p1, const pt &p2) {
    return pt(p1.x+p2.x, p1.y+p2.y); }

pt operator-(const pt &p1, const pt &p2) {
    return pt(p1.x-p2.x, p1.y-p2.y); }

double operator*(const pt &p1, const pt &p2) {
    return p1.x*p2.x + p1.y*p2.y; }

double operator^(const pt &p1, const pt &p2) {
    return p1.x*p2.y - p1.y*p2.x; }

double norm(const pt &p) { return sqrt(p*p); }

double dist(const pt &p1, const pt &p2) {
    return norm(p1-p2); }
