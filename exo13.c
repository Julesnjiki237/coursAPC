#include <stdio.h>
#include <math.h>
typedef struct {
    float x, y;
} Point;

int main() {
    Point p1, p2;
    float distance;

    printf("Entrez les coordonnées du premier point (x y) : ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Entrez les coordonnées du deuxième point (x y) : ");
    scanf("%f %f", &p2.x, &p2.y);

    distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    printf("Distance entre les deux points : %.2f\n", distance);

    return 0;
}
