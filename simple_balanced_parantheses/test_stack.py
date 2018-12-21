import my_stack


def simple_balanced_parantheses(parantheses_string):
    # a stack as data structure is used
    stack = my_stack.Stack()

    # process the string of parantheses
    for elem in parantheses_string:
        if elem == "(":
            stack.push(elem)
            # print(elem)

        # if the parantheses is a closing one, we have to chech
        # that we can get the last elem. added out of the stack
        # i.e. stack has at least one element
        elif elem == ")":
            if not stack.isEmpty():
                stack.pop()
                # print(elem)
            else:
                return False  # there's no opened-closed matching

    return stack.isEmpty()


def main():
    a_string = input("Give some parantheses: ")
    print(simple_balanced_parantheses(a_string))


if __name__ == "__main__":
    main()
