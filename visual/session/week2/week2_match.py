status = 400
is_alive = False

match status:
    case 400 if is_alive: # if is_alive는 Guard
        print("Bad request")
    
    case 404 if is_alive:
        print("Not found")
    
    case 418 | 419 | 420: # | 는 Or 역할
        print("I'm a teapot")
    
    case _: # _는 default 역할
        print("Wrong status")

if status == 400:
    print("Bad request")
elif status == 404:
    print("Not found")
elif status == 418 or status == 419 or status == 420:
    print("I'm a teapot")
else:
    print("Wrong status")