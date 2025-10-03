test: test_exo_1

test_exo_1: ./exo1_prime_numbers/prime_numbers ./correction/prime_numbers
    ./exo1_prime_numbers/prime_numbers > out_exo1.txt
    ./correction/prime_numbers > out_exo1_reference.txt

./correction/prime_numbers: ./correction/prime_numbers.c
    gcc ./correction/prime_numbers.c -o ./correction/prime_numbers
