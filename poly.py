import re
p =re.compile('[a-t]+')
match= p.match("cats and Dogs")
print(match.group())

f= open("pair.cpp","r")
print(f.name())
try:
    finally:
        print("finalbstat")
        
except Exception as e:
    print(e)
    