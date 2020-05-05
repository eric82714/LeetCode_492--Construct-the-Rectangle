/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructRectangle(int area, int* returnSize){
    *returnSize = 2;
    int* result = malloc(*returnSize * sizeof(int));
    int n = sqrt(area);
        
    for(int i = n; n > 0; i--){
        if(area % i == 0){
            result[0] = i;
            result[1] = area / i;
            break;
        }
    }
                
    if(result[0] < result[1]){
        int tmp = result[0];
        result[0] = result[1];
        result[1] = tmp;
    }
            
    return result;
}
