#include <stdio.h>

void print_array(int i, int nums[]) {
    if (i == 10) {
        return;
    }

    printf("%d\n", nums[i]);
    print_array(i + 1, nums);
    return;
}

int main(void)
{
    int nums[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    print_array(0, nums);
    return 0;
}

