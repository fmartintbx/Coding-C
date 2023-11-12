#include <stdio.h>

struct stonks {
    int sube;
    int baja;
};

struct stonks stonks_master(int tam, int a[]) {
    struct stonks result = {0, 0};
    int index = 0;

    while (index < tam - 1) {
        if (a[index] <= a[index + 1]) {
            result.sube++;
        } else {
            result.baja++;
        }
        index++;
    }

    return result;
}

int main() {
    const int N = 6;
    int a[N] = {6, 3, 7, 4, 1, 0};
    struct stonks result = stonks_master(N, a);

    printf("res.sube == %d\n", result.sube);
    printf("res.baja == %d\n", result.baja);

    return 0;
}
