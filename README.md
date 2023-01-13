# my-scripts overview

Just a few scripts I wrote in my spare time, mainly just to help with my
work-flow.

**NOTE**: This repo and the scripts directory must be in your path to use
all the scripts.

## List of All External Programs Used

1. [choose-gui](https://github.com/chipsenkbeil/choose)
2. [pass](https://www.passwordstore.org)
3. [iCanHazShortcut](https://github.com/deseven/icanhazshortcut)

## Current Scripts List

### choose-scripts

- Just a simple script to help me choose what script to use.
- Uses choose to display an interactive menu with a fuzzy finder.
- Bound to ctrl+space with the help of iCanHazShortcut.
- **Change the scripts folder variable to the directory containing your scripts.**

### test-ls

- A simple script I used to test the functionality of choose.
- All it does is pipe "ls" into "choose" I think.

### password-chooser

- Allows me to copy a password to my clipboard.
- Uses pass, grep, and choose.
- **NOTE**: it's bugged and you need to unlock your password store through a
terminal first. I just used set pass to use pinentry-mac and saved my passphrase
to my keychain.

## Planned Scripts

- idk man a pomodoro timer ig
