class Node():

    def __init__(self, indata):
        self.data = indata
        self.next = None

    def get_data(self):
        return self.data

    def get_next(self):
        return self.next

    def set_data(self, newdata):
        self.data = newdata

    def set_next(self, newnext):
        self.next = newnext


class MyList:

    def __init__(self):
        self.head = None

    def my_print(self):
        current = self.head
        while current != None:
            print(current.get_data())
            current = current.get_next()

    def is_empty(self):
        return self.head == None

    def add(self, item):
        new_node = Node(item)
        new_node.set_next(self.head)
        self.head = new_node

    def size(self):
        current = self.head
        count = 0
        while current != None:
            count = count + 1
            current = current.get_next()

        return count

    def search(self, item):
        current = self.head
        while current != None:

            if current.get_data() == item:
                return True
            current = current.get_next()

        return False


    def remove(self, item):

        # first, verify it is in list
        if self.search(item) == False:
            print(str(item) + " not found")
            return False

        # using current and previous markings, we get to the node we
        # want to remove
        current = self.head
        previous = None
        found = False

        # search the list for our wanted element
        while not found:
            if current.get_data() == item:
                found = True
            else:
                previous = current
                current = current.get_next()

        # special case, where our wanted element is the first one
        if previous == None:
            self.head = current.get_next()
        # change the link: next of current is now the next of the previous
        else:
            previous.set_next(current.get_next())
