bool isPalindrome(int x) {
        int x, reversed=0, remainder, original;

    printf(\Enter a number: \);
    scanf(\%d\, &x);

    original= x;

    while(num !=0){

        remainder= x %10;
        reversed= (reversed*10)+ remainder;

        x/=10;
    }

    if(original == reversed){
        printf(\%d is a palindrome\
\, original);
    }
    else{
        printf(\%d is not a palindrome\
\, original);
    }
    return 0;
}