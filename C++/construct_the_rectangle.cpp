class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> result;
        int n = int(sqrt(area));
        
        for(int i = n; n > 0; i--) {
            if(area % i == 0) {
                result.push_back(i);
                result.push_back(area / i);
                break;
            }
        }
                
        if(result[0] < result[1]) {
            int tmp = result[0];
            result[0] = result[1];
            result[1] = tmp;
        }
            
        return result;
        
    }
};
