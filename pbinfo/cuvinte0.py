cuvinte = (raw_input()).split()
cuvinte = list(set(cuvinte))
cuvinte.sort()
for cuvant in cuvinte:
    print cuvant
