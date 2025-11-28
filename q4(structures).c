#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    const int TUNNEL_HEIGHT = 41;

    for (int i = 0; i < n; i++) {
        int length, width, height;
        scanf("%d %d %d", &length, &width, &height);

        if (height < TUNNEL_HEIGHT) {
            int volume = length * width * height;
            printf("%d\n", volume);
        }
    }

    return 0;
}

