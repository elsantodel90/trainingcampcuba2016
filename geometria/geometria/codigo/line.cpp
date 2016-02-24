struct line {
    double a, b, c;
    line(double aa=0.0, double bb=0.0, double cc=0.0) {
        a=aa; b=bb; c=cc;
    }
};

double dist(const pt &p, const line &l) {
    return ABS(l.a*p.x+l.b*p.y+l.c)/sqrt(SQ(l.a)+SQ(l.b)); }

line line_pp(const pt &p1, const pt &p2) {
    return line(p2.y-p1.y, p1.x-p2.x, p2^p1); }

line line_perp_p(const line &l, const pt &p) {
    return line(-l.b, l.a, l.b*p.x - l.a*p.y); } 

line mediatriz(const pt &p1, const pt &p2) {
    return line_perp_p(line_pp(p1, p2), (p1+p2)/2.0); }
