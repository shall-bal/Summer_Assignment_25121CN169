#include <stdio.h>

int main() {
    int a[100], n, i, j;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Array without duplicates: ");

    for(i = 0; i < n; i++) {
        int duplicate = 0;

        for(j = 0; j < i; j++) {
            if(a[i] == a[j]) {
                duplicate = 1;
                break;
            }
        }

        if(!duplicate)
            printf("%d ", a[i]);
    }

    return 0;
}
