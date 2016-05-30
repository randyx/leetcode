class Queue(object):
    def __init__(self):
        """
        initialize your data structure here.
        """
        self.stack = []
        

    def push(self, x):
        """
        :type x: int
        :rtype: nothing
        """
        self.stack.append(x)
        


    def pop(self):
        """
        :rtype: nothing
        """
        self.stack.pop(0)

    def peek(self):
        """
        :rtype: int
        """
        if len(self.stack) == 0: 
            return None
        else:
            return self.stack[0]
        

    def empty(self):
        """
        :rtype: bool
        """
        if len(self.stack) == 0:
            return True
        else:
            return False