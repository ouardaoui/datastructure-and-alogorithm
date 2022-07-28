#include<stdio.h>
#include<math.h>
#include<float.h>

struct Point {
    int x,y;
};

float stripClosesest(struct Point S[],int n ,float d);
float min(float a, float b)
{
    float m = (a < b) ? a : b ;
    return m; 
}

float f_abs(float a,float b)
{
    float diff = (a > b) ? a - b  : b - a;
    return (diff > 0 ) ? diff : -diff;
}

float dist(struct Point P1,struct Point P2)
{
    float X = P1.x - P2.x;
    float Y = P1.y - P2.y;
    return sqrt((X*X) + (Y*Y));
}

float brute_force(struct Point P[], int n)
{
    int i ,j ;
    float d = FLT_MAX;
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

void sort(struct Point *P,int n){
    struct Point temp ;
    int i = 0;
    int j; 
    while(i < n)
    {
     j = 0;
     while(j < n - 1 )
     {
        if(P[j].x > P[j + 1].x)
        {
            temp = P[j];
            P[j] = P[j+1];
            P[j+1] = temp;
        }
        j++;
     }
     i++;   
    }
}

float closest(struct Point P[],int n)
{
    sort(P,n);
    if(n  <= 3)
         return brute_force(P,n);
    int mid = n/2;
    int i =  0;
    int j = 0;
    float S = 0;
    struct Point Strip[n];
    struct Point middle = P[mid];
    float dl = closest(P,mid);
    float dr = closest(P + mid, mid);
    float d = min(dl,dr);
    while(i < n )
    {
        if(f_abs(middle.x, P[i].x) < d)
        {
            Strip[j] = P[i];
            j++;
        }
        i++;
    }
    S = stripClosesest(Strip,3,d);
    return min(d,S);
}

float stripClosesest(struct Point S[],int n ,float d)
{
    sort(S,n);
    float m = d;
    int i = 0;
    int j ;
    while(i < n)
    {
        j = i + 1;
        while(j < n - 1)
        {
            if(dist(S[i],S[j]) < m)           
                m =  dist(S[i],S[j]) ;
            j++;
        }
        i++;
    }
    return m;
}

void main()
{
    struct Point P[] = {{2, 3}, {12, 30}, {40, 50}, {5, 1}, {12, 10}, {3, 4}};
    int n = sizeof(P) / sizeof(P[0]);
    float x = closest(P,n);
    printf("%f\n",x);
}
