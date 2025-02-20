#include <stdio.h>
#include <math.h>

int main() {
int point1_x, point1_y, point2_x, point2_y; 
double distance;

scanf("%d %d %d %d", &point1_x, &point1_y, &point2_x, &point2_y);

distance = sqrt((point2_x - point1_x) * (point2_x - point1_x) + (point2_y - point1_y) * (point2_y - point1_y));

printf("%.6f\n", distance);

return 0;
}
