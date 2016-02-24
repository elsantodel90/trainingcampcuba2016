line bisectriz(const pt &p1, const pt &pc, const pt &p2) {
    pt pc1 = p1-pc, pc2 = p2-pc;

    if (ABS(pc1^pc2) < EPS) {
        if (pc1*pc2 > ZERO) return line_pp(pc, p1);
        else return line_perp_p(line_pp(p1, p2), pc);
    }
    return line_pp(pc,pc+(pc1/norm(pc1)+pc2/norm(pc2))/2.0);
}

int inter_ll(const line &l1, const line &l2, pt &p) {
    double det = l1.a*l2.b - l1.b*l2.a;

    if (ABS(det) < EPS) {
        if (ABS(l1.a*l2.c - l1.c*l2.a) < EPS) return -1;
        else return 0;
    }
    p.x = (l1.b*l2.c - l2.b*l1.c)/det;
    p.y = (l2.a*l1.c - l1.a*l2.c)/det;
    return 1;
}
