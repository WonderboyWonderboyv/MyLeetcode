class Solution(object):
    def countBits(self, num):
        """
        :type num: int
        :rtype: List[int]
        """
        if num == 0:
            return [0]
        dp = [0, 1]
        last = 0
        for i in range(2, num+1):
            val = 0;
            if i and not(i&(i-1)):
                last = i;
            else:
                rem = i - last
                val += dp[rem];
            val += 1
            dp.append(val)

        return dp
