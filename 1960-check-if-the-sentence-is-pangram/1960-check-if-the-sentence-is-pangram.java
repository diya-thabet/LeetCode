class Solution {
    public boolean checkIfPangram(String sentence) {
        if (sentence.length() < 26)
            return false;
        char ch=97;
        for (int i = 0; i < 26; i++) {
            if (sentence.indexOf(ch+i) == -1)
                return false;
        }
        return true;

    }
}