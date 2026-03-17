#include "../../drivers/gpio.h"

void bubble_sort(int* arr, int len) {
    int sort_num;
    do {
        sort_num = 0;
        for(int i = 0; i < len - 1; i++) {
            if(arr[i] > arr[i+1]) {
                int tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
                sort_num++;
            }
        } 
    } while(sort_num != 0);
}

// Custom array comparison to avoid libc dependencies
int check_arrays_equal(int* arr1, int* arr2, int len) {
    for (int i = 0; i < len; i++) {
        if (arr1[i] != arr2[i]) {
            return 0; // Arrays do not match
        }
    }
    return 1; // Arrays match perfectly
}

int main() {
    // 1. Initialize arrays
    int unsorted_arr[] = {195, 14, 176, 103, 54, 32, 128};
    int sorted_arr[]   = {14, 32, 54, 103, 128, 176, 195};
    int len = 7;

    // 2. Initial state: Turn LED off (0) to indicate test is running/hasn't passed
    gpio_set_trigger(0);

    // 3. Run the sort
    bubble_sort(unsorted_arr, len);

    // 4. Verify results and drive GPIO
    if (check_arrays_equal(unsorted_arr, sorted_arr, len)) {
        // Success! Turn LED ON
        gpio_set_trigger(1);
    } else {
        // Failure! Keep LED OFF
        gpio_set_trigger(0);
    }

    // 5. Halt processor execution
    while(1) {
        // Infinite loop to prevent the CPU from running off into random memory
    }

    return 0;
}