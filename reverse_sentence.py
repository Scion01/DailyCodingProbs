#Given a string of words delimited by spaces, reverse the words in string. For example, given "hello world here", return "here world hello"

st=input("Enter: ")
print(" ".join(st.split(' ')[::-1]))
