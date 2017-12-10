#include <iostream>

    bool isLowerVowel(char c)
    {
        switch (c)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                return true;
            default:
                return false;
        }
    }

// returns the number of the test that failed, or 0 if all tests passed
    int test()
    {
        if (isLowerVowel('a') != true) return 1;
        if (isLowerVowel('q') != false) return 2;

        return 0;
    }
    int main()
    {
        int result;
        result = test();
        return result;
    }