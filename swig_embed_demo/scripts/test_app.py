print("[python] starting script")

assert 'app_instance' in globals(), 'app_instance not injected'

app = app_instance
app.log("Hello from Python")
app.set_title("SWIG Demo App")
print("[python] title:", app.get_title())
print("[python] 2 + 40 =", app.add(2, 40))

