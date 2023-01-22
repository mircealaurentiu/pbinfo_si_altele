def main():
    a, b, c = map(float, input().split())

    if ( (a+b)>c and (a+c)>b and (b+c)>a ):
        print("da")
    else:
        print("nu")

if __name__ == "__main__":
    main()
