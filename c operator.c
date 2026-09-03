#include <stdio.h>

int add(int itemprice ,int shippingcost){
    return itemprice+shippingcost;
}

int main() {
    int itemprice =600;
    int shippingcost = 140;
    
    int totalprice = add(itemprice,shippingcost);
    printf("Total price is %d ", totalprice);
    return 0;

}

