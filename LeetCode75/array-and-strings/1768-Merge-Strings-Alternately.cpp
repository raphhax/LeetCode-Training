/*

    Exercicio com o objeto de concatenar duas strings, da seguinte forma:
    word1: a b 
    word2: p q r s
    merged: a p b q r s

*/

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        int i = 0, j = 0;
        int n1 = word1.length();
        int n2 = word2.length();

        while (i < n1 || j < n2) {
            if (i < n1) merged += word1[i++];
            if (j < n2) merged += word2[j++];
        }
        
        return merged;
    }       
};