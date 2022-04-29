// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        double L = 1;
        double R = n;
        double res = 1;
        while(R-L > 1){
            double mid = (L+R)/2;
            if(isBadVersion(mid)){
                res = mid;
                R = mid -1;
            }
            else{
                L = mid+1;
            }
            
        }
        
        if(isBadVersion(R)) res = R;
        if(isBadVersion(L)) res = L;
        
        return (int)res;
    }
};