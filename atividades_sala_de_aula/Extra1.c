#include <stdio.h>

int main(){

    int x, y, z;

    x = y = 10;
    printf("%d, %d, -\n",x,y);
    z = (x++);
    printf("%d, %d, %d\n",x,y,z);
    x = -x;
    printf("%d, %d, %d\n",x,y,z);
    y++;
    printf("%d, %d, %d\n",x,y,z);
    x = x+y-(z--);
    printf("%d, %d, %d\n",x,y,z);

    return 0;
}
