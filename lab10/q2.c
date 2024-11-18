#include<stdio.h>
#include<math.h> 
typedef struct {
    int x; 
    int y;
} point;

// Function to calculate the distance between two points
float distance(point p1, point p2) {
    float dis = sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
    return dis;
}

// Function to check if a point is inside a rectangle
int isInsideRectangle(point p, point topLeft, point bottomRight) { 
    return (p.x >= topLeft.x && p.x <= bottomRight.x &&
            p.y <= topLeft.y && p.y >= bottomRight.y); // If 1, the point is inside the rectangle
}

int main() {
    point p1, p2, p, topLeft, bottomRight;

    
  printf("Enter coordinates of first point (x1 y1): ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%d %d", &p2.x, &p2.y);

    float dist = distance(p1, p2);
    printf("Distance between points: %.2f\n", dist);

    \printf("Enter coordinates of the point to check (x y): ");
    scanf("%d %d", &p.x, &p.y);

    printf("Enter top-left corner of rectangle (x y): ");
    scanf("%d %d", &topLeft.x, &topLeft.y);
    printf("Enter bottom-right corner of rectangle (x y): ");
    scanf("%d %d", &bottomRight.x, &bottomRight.y);

    if (isInsideRectangle(p, topLeft, bottomRight)) {
        printf("The point is inside the rectangle.\n");
    } else {
        printf("The point is outside the rectangle.\n");
    }

    return 0;
}


