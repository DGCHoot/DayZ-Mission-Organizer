# DayZ-Mission-Organizer
This is a template for my fellow gamers and server owners out there who want to learn and are wanting to keep things tidy.

# Narration
Hello and thank you for taking the time to open this and come to my github to pursue a better more organized mission!
Inside this folder contains all the files you will need for a chernarusplus map, the same concept is applicable for all other missions.

## Overview of variates of .XML within Dayz
# attributes 
defines the type of given xml, can be one of the following:


# types <types> </types>
    interprets file as types.xml
    This is what balances your stuff.
This can be created from scratch, all you need is the mod's class IDs and lift off.

# spawnabletypes <spawnabletypes> </spawnabletypes>
    interprets file as cfgspawnabletypes.xml
    This helps your weapons and spawns with variety and variation.
When you create a CE folder, its typically a good thing to put the mods spawnable types in there.

# globals <globals> </globals>
    interprets file as globals.xml
    Don't mess with this unless you know what you are doing.
Don't mess with this until your older. I mean more informed on how to do things.

# economy <economy> </economy>
    interprets file as economy.xml
    Don't mess with this if you do not know what you are doing.
Don't mess with this until your older. I mean more informed on how to do things.

# events <events> </events>
    interprets file as events.xml

Use this if you wish to add custom vehicle events.
This is typically used with modded or custom vehicles, 
however you can split up the db folders events into a more organized.
You are able to put wrecks, and all sorts of things, I suggest looking up tutorials.

# messages <messages> </messages>
    interprets file as messages.xml
    Don't ... just don't ... use this... get a mod for this...

# Open the folder

Start with cfgeconomycore.xml this is your first stop and will be your last stop on the way out, you always doublecheck the econ core.
Ensure you stay within the "bumpers" 	<!-- Try and keep CE within --> & <!-- CE End Here! -->
CE stands for Central Economy, the system that Bohemia uses.

# Creating a folder

You can name the folder whatever you want, aslong as it resides within your mission.
Notate or edit the economycore.xml to reflect the changes within cfgeconomycore.xml

# Creating a file

Ensure you always start your files with <types> and </types> when you are finished, things to note, there are only every 2 of those on types xml documents.
Understand that you can have different types within your folder let alone other types.xml.
**Make sure you validate before closing this document, go to the utilities section if you havent.**

# Review
    Please proceed to cfgeconomycore.xml once you have sorted your types.
    There are examples within that mission folder to help get you on your way. 

# How your layout should look, mind you this is an example. It is up to you to organize your work.
    
    <ce folder="ThankyouHootforthis">
    <file="reallyhoot.xml" type="types" />
    </ce>


# Utilities
Get yourself Visual Studio Code.
    https://code.visualstudio.com/download
    
Get yourself the XML Validator.
    https://marketplace.visualstudio.com/items?itemName=raffazizzi.sxml






https://community.bistudio.com/wiki/DayZ:Central_Economy_mission_files_modding


# If you run into any issues with this mission, please add me on discord. Hoot#0