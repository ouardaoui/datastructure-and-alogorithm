#include<stdio.h>
#include<math.h>

struct Point {
    int x,y;
};

float min(float a, float b)
{
    float m = (a < b) ? a : b ;
    return m; 
}

float dist(struct Point P1,struct Point P2)
{
    float X = P1.x - P2.x;
    float Y = P1.y - P2.y;
    return sqrt((X*X) + (Y*Y));
}

float closest(struct Point P[], int n)
{
    int i ,j ;
    float d = dist(P[0],P[1]);
    i = 0; 
    while(i<n)
    {
        j = i +1 ;
        while(j < n )
        {
            d = min(d,dist(P[i],P[j]));
            j++;       
        }
        i++;
    }
    return d ;
}

int main()
{
    struct Point P[] = {{2, 3}, {12, 30}, {40, 50}, {5, 1}, {12, 10}, {3, 4}};
    int n = sizeof(P) / sizeof(P[0]);
    printf("%f\n",closest(P,n));
}