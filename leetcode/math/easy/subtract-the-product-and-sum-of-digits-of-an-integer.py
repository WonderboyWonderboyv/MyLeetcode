class Solution(object):
    def subtractProductAndSum(self, n):
        """
        :type n: int
        :rtype: int
        """
        n_str = str(n)
        s = 0
        product = 1
        for x in n_str:
            s += int(x)
            product *= int(x)
            
        return product - s