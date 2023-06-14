
#include <stdio.h>
struct POINT{
    int x;
    int y;
};

void Double(struct POINT* coodinate){
    coodinate->x *=2;
    coodinate->y *=2;
}

int main()
{
    struct POINT home ={1,5};
    Double(&home);
    
    printf("%d, %d", home.x, home.y);

    return 0;
}
