#include <bits/stdc++.h>

int main(int argc, char* argv[]) {

    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    /* get number of element and divisor element's value */
    size_t number_of_element, divisor_element;
    std::cin >> number_of_element >> divisor_element;

    /* get the elements */
    size_t number, total_count{0};
    for (size_t i{1};i <= number_of_element;i++) {
        std::cin >> number;
        if ((number % divisor_element) == 0) {
            /* if number under consideration is
             * divisible by divisor_element */
            total_count++;
        }
    }

    /* print the total_count of elements
     * that get divided by divisor_element */
    std::cout << total_count << std::endl;

    return 0;
}