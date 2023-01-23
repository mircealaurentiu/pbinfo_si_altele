n = input()

unu="  @\n @@\n  @\n  @\n@@@@@\n"
doi="@@@@\n@  @\n  @\n @\n@@@@\n"
trei="@@@@@\n    @\n@@@@@\n    @\n@@@@@\n"
patru="@   @\n@   @\n@@@@@\n    @\n    @\n"
cinci="@@@@@\n@\n@@@@@\n    @\n@@@@@\n"
sase="@@@@@\n@\n@@@@@\n@   @\n@@@@@\n"
sapte="@@@@\n   @\n  @@@\n   @\n   @\n"
opt="@@@@@\n@   @\n@@@@@\n@   @\n@@@@@\n"
noua="@@@@@\n@   @\n@@@@@\n    @\n    @\n"
zero="@@@@@\n@   @\n@   @\n@   @\n@@@@@\n"

cifre_dict = {
"1":unu,
"2":doi,
"3":trei,
"4":patru,
"5":cinci,
"6":sase,
"7":sapte,
"8":opt,
"9":noua,
"0":zero
}

#n = n[::-1]
for i in range(len(n)):
    print(cifre_dict[str(n[i])])