import pyautogui
import time

n = input("Give the number: ")
time.sleep(2)
pyautogui.typewrite(n)

for i in range(1, int(n) + 2):
    for _ in range(1, i):
        pyautogui.typewrite('#')
    pyautogui.press('enter')
