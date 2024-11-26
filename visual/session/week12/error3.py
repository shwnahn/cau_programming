try:
    print(1 + "2")
except Exception as e:
    # print(repr(e))
    # print(str(e))
    print(f"{type(e)} ({type(type(e))})")
    print(f"{type(e).__name__} ({type(type(e).__name__)})")
finally:
    print("Done")