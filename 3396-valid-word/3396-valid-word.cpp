class Solution {
public:
    bool isValid(string word) {
        if (word.size() < 3) return false;

        bool vowel = false, consonant = false;

        for (char c : word) {
            if (!isAlphabet(c) && !isdigit(c)) return false;

            if (isAlphabet(c)) {
                if (isVowel(c)) vowel = true;
                else consonant = true;
            }
        }

        return vowel && consonant;
    }

    bool isAlphabet(char c) {
        return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
    }

    bool isVowel(char c) {
        char lowerChar = tolower(c);
        return lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' ||
               lowerChar == 'o' || lowerChar == 'u';
    }
};