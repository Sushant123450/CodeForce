Dubstep = input()
New_Dubstep = Dubstep.replace("WUB", " ")

List_of_Words = New_Dubstep.split()
for i in List_of_Words:
    print(i, end=" ")
# for i in List_of_Words:
#     if i == " ":
#         List_of_Words.remove(i)
#     else:
#         i.replace(" ", "")
# for i in List_of_Words:
#     print(i, end=" ")

