#include <stdio.h>
#include <math.h>

int main() {
    unsigned n = 0;

    scanf("%u", &n);

    const unsigned k_subsetsCount = 1 << n;

    for (unsigned subsetMask = 0; subsetMask < k_subsetsCount; ++subsetMask) {
        printf("{ ");

        for (unsigned bitIndex = 0; bitIndex < n; ++bitIndex) {
            if (subsetMask & (1 << bitIndex)) {
                unsigned subsetElement = bitIndex + 1;

                printf("%d ", subsetElement);
            }
        }

        printf("}\n");
    }

    return 0;
}
