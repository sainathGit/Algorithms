min_support = int(input("give min support: "))
min_confidence = int(input("confidence : "))

db = [];
tf = open("transactions.txt", "r")

for line in tf:
    db.append([int(x) for x in line.split()])

min_support = min_support*0.01*len(db)
min_confidence = min_confidence*0.01*len(db)



def clear(table):
    ktd = []
    for k in table.keys():
        if table[k] < min_support:
            ktd.append(k)

    for i in ktd:
        del table[i]


def apriori_gen(table):

    new_table = {}
    for l1 in table.keys:
        for l2 in table.keys:
            for i in range(len(table) - 1):


def count_values(tables):
    pass


l = []
table = {}
for t in db:
    for x in t:
        if x not in table.keys():
            table[(x)] = 1
        else
            table[(x)] += 1

clear(table)
l.append(table)

k = 1
while (len(l[k-1]) != 0) :
    table = apriori_gen(l[k-1])
    count_values(table,db)
    clear(table)

    if len(table) != 0:
        l.append(table)
    k += 1



