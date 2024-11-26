try:
    print("1" + 1)
except Exception as e:
    print(f"{f" Exception occurred!: {e} ":#^100}")
except TypeError:
    print("TypeError occurred!")
except ValueError:
    print("ValueError occurred!")
except SyntaxError:
    print("SyntaxError occurred!")
finally:
    print("Finished")