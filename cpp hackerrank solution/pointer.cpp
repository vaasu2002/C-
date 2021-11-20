#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int x = *a + *b;
    int y = abs(*a - *b);
    *a = x;
    *b = y;
    
      
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

/*

THEORY 


#include <iostream>
using namespace std;

int main()
{
    int a;
    a = 13;
    int *p = &a;
    cout<<a<<endl;  PRINTS a
    cout<<p<<endl;  PRINTS address of a
    cout<<*p<<endl; PRINTS a
    cout<<*p + 1<<endl;
    
}
*/
