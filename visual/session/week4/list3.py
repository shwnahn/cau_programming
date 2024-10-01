a = '1,2,3,4,5'
tokens = a.split(',')
print(tokens)

print(len(tokens))
for i in range(len(tokens)):
	print(f"# {i}")
	tokens[i] = int(tokens[i])
print(tokens)