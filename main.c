#include <stdio.h>
#include <stdlib.h>

int main()
{   int i;

for (i=1;i<=50;++i){

    if ((i>=21 && i<=22) || (i>=41 && i<=49)){
        continue;
    }

    printf("%d\n",i);

}



    return 0;
}
