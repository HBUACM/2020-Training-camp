r = '{} + {} = {}'
res = []
def isInt(string):
    for _ in string:
        if not str.isdigit(_):
            return False
    return True
    
nums = input().split(' ')

for _ in nums:
    if isInt(_):res.append(int(_))
    else : res.append('?')
if isinstance(res[0], int) and isinstance(res[1], int):
    res.append(res[0] + res[1])
else :
    res.append('?')
print(r.format(*res))