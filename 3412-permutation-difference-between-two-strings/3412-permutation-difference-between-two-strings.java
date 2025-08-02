class Solution {
    public int findPermutationDifference(String s, String t) {
        int res = 0; 
        for(int i = 0 ; i<s.length(); i++){
            char c = s.charAt(i) ;
            for(int j = 0 ; j<s.length(); j++){
                if(t.charAt(j)==c){
                    res+= Math.abs(i-j); 
                }
            }
        }

        return res; 
    }
}