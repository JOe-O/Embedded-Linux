import FireLinkModule


print("Websites Available: \nyoutube,\nfacebook,\ninstagram,\nnetflix\n-----------------")

link = input("Please Enter Fav Website: ").casefold()


FireLinkModule.webOpen(link)