from settings import * # Adding all the variables in the setting file
from utilities import Img
# Initializing libs
pygame.init()

# The image loader we created at the ulilities file
img = Img()

# Created an Object for the IMG
cath = img.getimg("❤️ Cath/Cath Angery Blush.png")


# Creating Game Window
WIN = pygame.display.set_mode((WIN_SIZE[0],WIN_SIZE[1]))
pygame.display.set_caption(TITLE) # The title
clock = pygame.time.Clock() # This will help keep our game not running at full speed
running = True # This will just make our game run

gameInstance = "MENU" # Still not sure why I added this but it will help transitioning from one game instance to another


# This just group the sprites or objects
all_sprites = pygame.sprite.Group()

# The life of our game the Loop it will help the game run forever until we close it of course
while(running):
    clock.tick(FPS) # Will limit the rate per minute in our game using the clock the we created earlier


    # This command will check for every event in the game
    for event in pygame.event.get():

        #This if statement will check if the user close the game and if the user did close it close everythhing
        if event.type == pygame.QUIT:
            pygame.quit()
            running = False
            sys.exit()

    # Filles the window with black
    WIN.fill((0,0,0))



    # If the game instance is in the menu then print the menu xd still not finish
    if gameInstance == "MENU":
        print("Menu")

    # Drawing the cath obj that we created earlier
    WIN.blit(cath,(15,15))


# Update every object in our game
    pygame.display.update()
    pygame.display.flip()
