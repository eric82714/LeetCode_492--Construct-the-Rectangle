class Solution:
    def constructRectangle(self, area: int) -> List[int]:
        result = []
        n = int(sqrt(area))
        
        for i in range(n, 0, -1):
            if area % i == 0:
                result.append(i)
                result.append(area // i)
                break
                
        if result[0] < result[1]:
            tmp = result[0]
            result[0] = result[1]
            result[1] = tmp
            
        return result
