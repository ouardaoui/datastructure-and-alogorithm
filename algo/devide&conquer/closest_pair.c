#include<stdio.h>
#include<math.h>
#include<float.h>

struct Point {
    int x,y;
};

float stripClosesest(struct Point P[],int n ,float d,int mid);

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

void Strip(struct Point P[],int mid,float d,int n,int *k,struct Point *S)
{
    int i = 0;
    int j = 0;
    sort(P,n);
    while(i < n)
    {
         if(f_abs(P[i].x ,P[mid].x) < d)
         {
            S[j]  = P[i];
            j++;
         }
         i++;   
    }
    *k = j;
}

float closest(struct Point P[],int n)
{
    sort(P,n);
    if(n  <= 3)
         return brute_force(P,n);
    int mid = n/2;
    struct Point Strip[n];
    struct Point middle = P[mid];
    float dl = closest(P,mid);
    float dr = closest(P + mid, mid);
    float sd = min(dl,dr);
    float d = min(sd,stripClosesest(P,n,sd,mid));
    return d;
}

float stripClosesest(struct Point P[],int n ,float d,int mid)
{
    int j;
    int i = 0;
    struct Point S[n];
    Strip(P,mid,d,n,&j,S) ;
    return brute_force(S,j);
}

void main()
{
    struct Point P[] = {{2, 3}, {12, 30}, {5, 7}, {5, 10}, {12, 10}, {3, 4},{5, 8}, {3, 2} ,{8, 4}, {3, 6}, {6, 9}, {4, 9}};
    int n = sizeof(P) / sizeof(P[0]);
    float x = closest(P,n);
    printf("%f\n",x);
}
