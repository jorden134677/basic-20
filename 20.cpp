#include <stdio.h>  
#include <stdlib.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct phone {
   char brand[16],type[10];
   int year,price;
}; 

int main(void) {
    int i;
    struct phone p[5]={  
	"HTC", "U11", 2017, 19500, 
    "Samsung", "S9", 2018, 30000, 
    "Huawei", "P20 Pro", 2018, 32000, 
    "OPPO", "R17", 2018, 11735, 
    "ASUS", "Zenfone 5", 2018, 12000
	};

    for (i=0; i<5; i++) {
        printf("%s %s %4d %5d\n", p[i].brand, p[i].type, p[i].year, p[i].price);
    }
    
    system("pause"); 
    return 0;
}
