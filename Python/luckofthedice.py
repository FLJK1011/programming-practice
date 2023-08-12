#calculate the chances of bringing 6 in the dice in Python

import random
n=1
while(random.randint(1,6) != 6):
    n +=1
print(n)