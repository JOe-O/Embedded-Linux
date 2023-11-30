import pyautogui as auto
import time

#open up windows search
auto.hotkey('win')
time.sleep(1)

#search for vscode and launch it up
auto.typewrite('vsc')
time.sleep(1)
auto.hotkey('Enter')
time.sleep(1)

#shortcut for entering Extensions tab
auto.hotkey('ctrl', 'shift', 'x')
time.sleep(2)

#installing 'clangd' extension
auto.typewrite('clangd')
time.sleep(3)
auto.hotkey('Tab')
time.sleep(0.5)
auto.press('down')
time.sleep(0.5)
auto.hotkey('Tab')
time.sleep(0.5)
auto.hotkey('Enter')
time.sleep(3)

#installing 'c++ testmate' extension
auto.hotkey('ctrl', 'shift', 'x')
time.sleep(2)

auto.hotkey('ctrl', 'a')
time.sleep(1)

auto.typewrite('c++ testmate')
time.sleep(3)
auto.hotkey('Tab')
time.sleep(0.5)
auto.hotkey('Tab')
time.sleep(0.5)
auto.hotkey('Enter')
time.sleep(3)

#installing 'c++ helper' extension
auto.hotkey('ctrl', 'shift', 'x')
time.sleep(2)

auto.hotkey('ctrl', 'a')
time.sleep(1)

auto.typewrite('c++ helper')
time.sleep(3)
auto.hotkey('Tab')
time.sleep(0.5)
auto.hotkey('Tab')
time.sleep(0.5)
auto.hotkey('Enter')
time.sleep(3)

#installing 'cmake' extension
auto.hotkey('ctrl', 'shift', 'x')
time.sleep(2)

auto.hotkey('ctrl', 'a')
time.sleep(1)

auto.typewrite('cmake')
time.sleep(3)
auto.hotkey('Tab')
time.sleep(0.5)
auto.hotkey('Tab')
time.sleep(0.5)
auto.hotkey('Enter')
time.sleep(3)

#installing 'cmake tools' extension
auto.hotkey('ctrl', 'shift', 'x')
time.sleep(2)

auto.hotkey('ctrl', 'a')
time.sleep(1)

auto.typewrite('cmake tools')
time.sleep(3)
auto.hotkey('Tab')
time.sleep(0.5)
auto.hotkey('Tab')
time.sleep(0.5)
auto.hotkey('Enter')
time.sleep(3)

