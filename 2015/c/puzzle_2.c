#include <stdio.h>

int one_side_area(int side_a, int side_b);
int total_area(int areaa, int areab, int areac);
int smallest_area(int areaa, int areab, int areac);

int main (void) {
    int l = 2;
    int w = 3;
    int h = 4;

    int side_a_area = one_side_area(l, h);
    int side_b_area = one_side_area(l, w);
    int side_c_area = one_side_area(w, h);
    int box_area = 2 * total_area(side_a_area, side_b_area, side_c_area);
    int small_side = smallest_area(side_a_area, side_b_area, side_c_area);

    int grand_total = box_area + small_side;

    printf("The area of side a is: %d\n", side_a_area);
    printf("The area of side b is: %d\n", side_b_area);
    printf("The area of side c is: %d\n", side_c_area);
    printf("The total area of the box is: %d\n", box_area);
    printf("The smallest area is: %d\n", small_side);
    printf("The grand total is: %d\n", grand_total);
}

int one_side_area(int side_a, int side_b) {
    int area = side_a * side_b;
    return area;
}


int total_area(int areaa, int areab, int areac) {
    int area = areaa + areab + areac;
    return area;
}

int smallest_area(int areaa, int areab, int areac) {
    int small;

    if (areaa < areab && areaa < areac) {
        small = areaa;
    }
    else if (areab < areaa && areab < areac) {
             small = areab;
    }
    else if (areac < areaa && areac < areab) {
        small = areac;
    }
    return small;
}
