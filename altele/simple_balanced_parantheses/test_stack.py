import my_stack

# better to have a function that checks the type of open-closed parenthesis

def simple_balanced_parantheses(parantheses_string):
    # a stack as data structure is used
    stack = my_stack.Stack()

    # process the string of parantheses
    for elem in parantheses_string:
        if elem in "([{":
            stack.push(elem)
            # print(elem)

        # if the parentheses is a closing one, we have to chech
        # that we can get the last elem. added out of the stack
        # i.e. stack has at least one element
        # and it is the same type
        elif elem in ")]}":
            if not stack.isEmpty():
                if elem==")" and stack.peek()=="(":
                    stack.pop()
                elif elem == "]" and stack.peek() == "[":
                    stack.pop()
                elif elem == "}" and stack.peek() == "{":
                    stack.pop()
                else:
                    return  False
                # print(elem)
            else:
                return False  # can't pop from empty stack

    return stack.isEmpty()


def main():
    a_string = input("Give some parantheses: ")
    print(simple_balanced_parantheses(a_string))


if __name__ == "__main__":
    main()


