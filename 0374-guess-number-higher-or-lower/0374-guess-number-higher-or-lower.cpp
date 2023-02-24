/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int i = 1; int j = n;
        while(true){
            int mid = (j-i)/2+i;
            int res = guess(mid);
            if(res == 0){
                return mid;
            }
            else if(res == 1){
                i = mid+1;
            }
            else{
                j = mid-1;
            }
        }
        return i;
    }
};