#include<stdio.h>
typedef struct{
    int x;
    int y;
} Point;
void modify(Point p) {
    p.x=10;
    p.y=20;
}

int main(){
    Point p={5,5};
    modify(p);
    printf("%d%d",p.x,p.y);
    return 0;
}