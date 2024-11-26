# a, b = 1, 'a'
# try:
#     c = a + b
# except:
#     try:
#         c = int(a) + int(b)
#     except:
#         if not ('0' <= b <= '9'):
#             b = 0

#         c = a + b
#         print("exception")
# finally:
#     print(c)


try:
    raise
except TypeError:
    print('TypeError')
