import re
def repl_func(m): return m.group(1) + m.group(2).upper()
def capitalize(string): return re.sub("(^|\s)(\S)", repl_func, string)
