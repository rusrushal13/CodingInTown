ass Solution:
        def findComplement(self, num):
                    """
                    :type num: int
                    :rtype: int
                    """
                    bits = int(math.log2(num)  + 1)
                    return (((1 << bits) - 1) ^ num) 
