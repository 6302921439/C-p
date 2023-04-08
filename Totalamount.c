#include <stdio.h>

struct item {
    char name[50];
    int quantity;
    float price;
};

float find_total(struct item *items, int n) {
    float total = 0;

    for (int i = 0; i < n; i++) {
        total += items[i].price * items[i].quantity;
    }

    return total;
}

int main() {
    int n;
    printf("Enter number of items: ");
    scanf("%d", &n);

    struct item items[n];

    for (int i = 0; i < n; i++) {
        printf("\nItem %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", items[i].name);
        printf("Enter quantity: ");
        scanf("%d", &items[i].quantity);
        printf("Enter price: ");
        scanf("%f", &items[i].price);
    }

    float total = find_total(items, n);

    printf("\nTotal amount = $%.2f\n", total);

    return 0;
}
