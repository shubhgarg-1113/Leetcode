class Solution {
public:
    string intToRoman(int num) {
    static char result[30]; 
    int ch = 0;

    while (num >= 1000) {
        num -= 1000;
        result[ch++] = 'M';
    }
    
    while (num >= 900) {
        num -= 900;
        result[ch++] = 'C';
        result[ch++] = 'M';
    }
    while (num >= 500) {
        num -= 500;
        result[ch++] = 'D';
    }

    while (num >= 400) {
        num -= 400;
        result[ch++] = 'C';
        result[ch++] = 'D';
    }

    while (num >= 100) {
        num -= 100;
        result[ch++] = 'C';
    }
    while (num >= 90) {
        num -= 90;
        result[ch++] = 'X';
        result[ch++] = 'C';
    }
    while (num >= 50) {
        num -= 50;
        result[ch++] = 'L';
    }

    while (num >= 40) {
        num -= 40;
        result[ch++] = 'X';
        result[ch++] = 'L';
    }

    while (num >= 10) {
        num -= 10;
        result[ch++] = 'X';
    }

    while (num >= 9) {
        num -= 9;
        result[ch++] = 'I';
        result[ch++] = 'X';
    }

    while (num >= 5) {
        num -= 5;
        result[ch++] = 'V';
    }

    while (num >= 4) {
        num -= 4;
        result[ch++] = 'I';
        result[ch++] = 'V';
    }

    while (num >= 1) {
        num -= 1;
        result[ch++] = 'I';
    }
    result[ch] = '\0'; 

    return result;
    }
};