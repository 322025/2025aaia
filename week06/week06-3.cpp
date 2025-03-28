//week06-3.cpp
//Leetcode 1780.Check if Number is a Sum of Powers of Three
class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>0){//只要n還有數字，就剝皮，剝掉3的倍數
            //n%3會剩下??勝1很好，剩0很好，但剩2就不好
            if(n%3==2)return false;
            n=n/3;//剝掉的倍數
        }
    return true;
    }
};
