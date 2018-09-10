## Release 0.7.3 (2018-09-08)

### Changes:
* Gerneric SDL PDCurses support for all platforms
* Configurable font size for the SDL version
* Combat: take enemy size into account
* Combat: balance weapon damage
* Magic: Animate reflection of rays
* Magic: Magic Missile is handled as ray spell
* Magic: Terminate ray spells at medium sized monsters
* Magic: Balance spell damage
* Added cold resistance for monsters (the ice lizard, the yeti and the
  white dragon don't take damage from cone of cold)
* Minimalistic item descriptions when blinded
* Blinking display for very low HP (always with SDL PDCurses, when
  compiled with ncurses blinking depends on terminal support)
* Bright red warning when unarmed
* The potion of treasure finding now detects the bank branch office
* The potion of healing and the healing spell can now cure sickness
* Mitigated the scroll of spell extension
* Occasionally drop arrows when disarming arrow traps
* Pay taxes in one step
* Lock savegame file while the game is running (prevents accidentially
  launching the game multiple times from autosaves)
* Code cleanup

### Fixed bugs:
* Only erode player's exposed items from monster breath attacks
* Prevent increasing max. HP with healing spell
* Prevent wearing ring or body armour when wearing gloves or a cloak
* Prevent swapping weapons when secondary weapon is two-handed and
  holding a shield
* Match fountain event probabilities with those of the original Larn
* Fixed type II demon lords (who lost all their special abilities
  with the previous release)
* Fixed handling of itching when washing at a fountain
* Fixed crash when reading scroll of identify without or very few
  unidentified items
* Fixed burning of grass
* Corrected some messages
* Fixed some visual glitches

## Release 0.7.2 (2012-07-06)

### Changes:
* Added an OS X disk image with "installer".
* Use SDL PDCurses per default on OS X. This allows to scale the window
  and set the window icon and title when running.
* Implemented magic resistance for monsters. The hell hound, the spirit
  naga and the demon lords and prince are now resistant to damage cause
  by magic (currently only the magic missile).
* The spells lightning, cone of cold and fireball can now destroy doors.
* It is now possible to target a spell while blinded.
* Implemented the disarming of traps and the removal of traps from
  containers(key: 'D'). Moved the previous shortcut for the list of
  discovered landmarks from 'D' to CTRL+D.
* When quaffing healing or power potions at full hp or mp the maximum
  for the specific stat is increased.
* Allow ranged attacks on invisible monsters and decreased the chance
  to hit then with melee and ranged attacks.
* Abort searching when monsters are close.
* The metamorph will now drop it's weapon when changing into a monster
  that cannot use it; the new monster's hp depend on the relative amount
  of the new monster type's maximum hp.
* Show a message when an item is identified by wearing it.
* Ensure that unique weapons won't break.
* Added version information to the Windows installer.
* Display a message when using the potion of full healing.

### Fixed bugs:
* Fixed a crash that could occur when a blast of fire (caused by hell
  hounds or red dragon) destroyed items in the inventory.
* Fixed a crash when a monster triggerd a trap with a specific message.
* Various fixes and enhancements for spheres of anihillation.
* Do not swap weapons when none is readied.
* Inhibit various actions while paralyzed.
* Corrected combat messages and disable looking around while blinded.
* Fixed the spell "polymorph".
* Ensure the townsfolk don't block important places.
* Some fixes to the monastery:
  * Fix two crashes: one occured when aborting the item selection; the other
    when uncursing uncursed, but unidentified items.
  * The monastery will no longer "remove curses" on containers (i.e. traps).
  * Ensure the price for remove curse is at least 1gp.
  * Handle plural case in a monastery message.
* Avoid ammo that is stuck inside walls.
* Fix repair price calculation for blessed items.
* Ensure the scroll of blank paper is unlabeled.
* Show sec. weapon and quivered item in obituary.
* Corrected the description of the spell "cancellation".
* Don't show monster's name for unseen monsters.


Release 0.7.1 (2012-05-27)
-------------

### Changes:
* More armour:
  * a simple cloak.
  * Boots of Speed (unique).
  * Cloak of Invisibility (unique).
* Weapons can break during combat. The number of broken weapons is
  counted and shown in the postmortem.
* Make damaged items less effective: burnt, corroded or rusty weapons
  and ammunition will now cause less damage, damaged armour will protect
  less.
* Redesigned armour and weapon distribution in the dungeon. The elven
  chain is more heavy and unique.
* Reduced the availability of items in the store.
* Replaced the amulet of invisibility by the amulet of sustainment,
  which protects against attribute draining attacks.
* The bank pays less interest on player's savings.
* Increased school course prices. The course prices now depend on the
  length of the course, thus maintaining the balance between benefit
  and cost.
* Raise item identification and repair prices. The prices will now depend
  on the item's value. For lower-prices items the minimum charge stays at
  50 gold. Repair prices for item stacks depend on the amount of items.
* Generate monster item adequate to dungeon level. Previously troglodytes
  on dungeon level 3 could carry an amulet of power, which was not
  desirable. Another effect of this change is that monsters in the deep
  dungeon levels carry more interesting items.
* Do not erode items inside containers.
* Implemented scroll of hold monster. This scroll was in error set up as
  a scroll that affects the player, and as the effect "hold monster" has
  no effect on the player, this mistake went unnoticed until now.
* Reduced the range of enlightenment.
* Wizard Mode: allow to select stationary objects as teleport destination
  (as for auto-travel).
* Improved the help file.
* Modernized the Windows Installer.
* Windows Resources now allow icons for the executable and embedded
  dynamic version information in the executable.
* Accept ^U/^D in the inventory, spell list and message windows as
  PGUP/PGDOWN.
* Expanded scores in the memorial file onto two lines. This avoids ugly
  wraps and allows to display more information. Spelled out explanational
  remarks and added the dungeon level.
* Enhanced saving the memorial file:
  * Save the file in the user's home directory;
    on Windows save it under "My Documents".
  * Offer to chose a new file name if a file exists.
  * Wrap and indent long lines at column 78.
  * Choose the line terminator matching the plattform.
* Implemented working setgid for system-wide installations on \*nix systems.

### Fixed bugs:
* Adapted the map loading code to native EOL. This fixes unreachable
  areas when playing on Windows (reported by many).
* Fixed enlightenment for the upper left corner of the map
  (Reported by Krice).
* Fixed a crash after shooting the last ammo.
* Ensure player's experience can not sink below zero. This fixes a crash
  that occured when drinking from a fountain and loosing more experience
  than the player has.
* Calculate adjacent monsters while enlightened. This fixes targeting
  and allows to abort running or auto-travel.
* Fixed increase of spell effect duration when casting a spell known at
  a higher level of knowledge multiple times.
* Prevent swapping cursed weapons.
* Fixed the descriptions for item stacks in the shop (use the plural form
  when applicable).
* Fix the order of message when unequipping multiple item types: log
  success only after the time is passed. Fixed the order of messages
  when climbing out of a pit.
* Fixed ranged attacks to monsters over water/lava.
* Waste ammo when dropped on deep water or lava.
* Slings and bows are twohanded weapons, too.
* Recalc burdened status after fighter courses.
* Colour first headline in identified item's list.
* Count scrolls scribed at the school as item purchase, not as
  educational purpose.
* Fixed a memory leak and accesses to freed memory found by valgrind.

Release 0.7.0 (2011-11-04)
-------------

### Changes:
* A monastery in town can heal, remove curses and cure the most common
  diseases for a little. Some special items are available in the
  monastery's shop.
* Implemented a "storage room" at the player's home. It is now possible
  to store items at home and take them later. Items stored there are
  added to the player's score when the game ends.
* Scribes in the school of Larn can write any scroll on blank scrolls.
* Stop automatic movement or resting as soon as a monster enters the
  field of vision, not only when it is on a field next to the player.
  This should give the player more time to react accordingly.
* Spells that cause effects to the player now extend the effect amount
  or duration up to (spell knowledge level * base value). Messages are
  displayed to reflect that an effect has been extended or that the
  maximum has been reached.
* Added an intelligence requirement to learning spells and extended the
  requirement for casting spellst to 3 * spell level.
* Implemented raising taxes:
  For every difficulty level > 0 the player has to pay 5% of the income,
  i.e. money deposited on the bank, item sale revenue and interest as
  taxes. The maximum tax percentage is 20%.
  Added statistics about paid taxes to the obituary.
* Added traps to containers. Every generated container has a 33% chance
  of being trapped. Trap effects are:
   * itching (forces the player to remove the armour),
   * sickness (reduce chance to hit)
   * clumsiness (forces the player to the weapon)
   * slowness
* Implemented searching for traps on the ground or on containers.
  Searching is also useful to examine the surroundings when blinded.
* Containers known to be trapped are displayed as e.g. "trapped bag".
* Enhanced targeting mode:
  * target the closest monster if no previous selection has been made.
  * switch between visible monsters with SPACE.
  * remember the last targeted monster for subsequent targeting.
  * remember the monster last hit with a direct attack.
* Added ranged weapons and ammunition (fire with 'f').
* Added new item slots: secondary weapon and quiver.
* Enabled swapping primary and secondary weapon ('x').
* Implemented a "paperdoll", a list of all equipped items ('TAB').
* Implemented thwrowing of potions ('t').
* Most potions now work on monsters.
* Made the potion of holy water dangerous for undead monsters.
* Thrown or fired items will be picked up automatically regardless of
  autopickup settings.
* Added a command (M) to cast the previous spell again.
* It is now possible to pay with money stuffed in carried containers.
  The leprechaun can now to steal money hidden inside carried containers.
* Tweaked the behviour of the townsfolk. They will no longer walk around
  like drunk, do important town people business and only talk when the
  player is outside a building.
* Started to work on summoned monsters:
  * summoned monsters can follow the player,
  * do not impact automatic movement,
  * its possible to swap positions with them,
  * they disappear after some turns,
  * and killing them gives no experience points.
  This is a work in progress and not at all completed.
* Added monster's weapon to monster's description.
* Implemented a mana drain trap.
* Added dynamic help to the inventory dialog.
* Messages and dialogs can now be coloured, some already are.
* Spell rays or blasts now have differen colours.
* Modified effect list display on the right side of the screen:
  * unique entries only
  * positive effects coloured cyan
  * negative effects coloured magenta
  * fading effects coloured red
* Door glyphs now depend on the position of the door.
  For closed horizontal doors, it is '-', for vertical doors '|'. Opened
  doors are displayed as '/', but for double doors they become a pair
  of '/' and '\'.
* Reduced availability of rings in store at game start.
* Generate amulets starting on level 6 and do not generate a ring every
  time generating an amulet failed; choose a random item type instead.
  This should reduce the excessive amount of rings available in the game.
* Toggling the visibility of the entire map in wizard mode with ^V.
* Redefined quite a lot of keys, the most important being:
  * 'S' -> 'CTRL-S' (save)
  * 'Q' -> 'CTRL-Q' (quit)
  * 'T' -> 'V' (travel, silly memory hook: voyage)

### Fixed bugs:

* Purge dead monsters after player's extra moves (fixes crash bug).
* Only curse-id blessable items when dropping them on an altar.
* Fixed weight calculation for stackable items.
* Do not mention stationary object on tiles entered while blinded.


## Release 0.6.1 (2010-10-22)

### Changes:

* Several improvements to auto-travel.
* Permanently display the item description in the inventory.
* Modified behaviour when picking up items:
    ',' just gets the item
    'g' asks for the amount to pick up
  Reported by Xecutor.
* Use shortened weapon names for the wielded weapon display.
* Added an option to disable automatic saving.
* Show spell level in book description.
* Set native end-of-line characters for nlarn.ini-sample. Reported by
  R. Alan Monroe.
* Show a popup message when loading or saving the game.
* Display the message when selecting a position in an popup window.
  Return the cursor to the player with '@'.
* Disable auto-pickup for the player's position after the player has
  chosen to abort picking up an item.
* Added a message when aborting a spell or hitting an unseen monster
  with a spell.
* Blessed scrolls of teleport always take the player to town.

### Fixed bugs:

* Recognize keypad enter on Windows. Reported by Xecutor and Michael Ax.
* Allow using numpad direction keys for fast movement with num lock
  off on Windows.
* Offer only items that can be blessed or cursed for curse removal or
  blessing.
* Delete the player's memory of the map when successfully casting 'alter
  reality. Reported by Michael Ax.
* Fixed the scroll of genocide monster. Reported by Michael Ax.
* Interpret 'j' and 'k' as mnemonic letters in the spell casting dialog
  when another letter has been entered before.
* Abort spawning new monsters when a map is fully crowded.
  Recalculate number of monsters on a map when restoring a saved game.
  Previously, an unlimited number of monsters has been created when
  restoring a game frequently. Reported by Peter Casey and Michael Ax.
* Added missing monster effect descriptions. Without this, the monster
  description returned "An uninjured elf, fleeing ()." for an elf
  affected by "phantasmal forces".
* Fixed a very frequent random crash, a very rare crash, and some
  pieces of code that potentially could have caused crashes.
* Make aborted spells not cost turns.
* Fix an assertion when aborting phantasmal forces and an information
  leak in that spell.
* Initialize wizard_mode game property before creating a new game. This
  is necessary if we want to stock the DND store differently depending
  on whether a game is started in wizard mode or not.
* Remove notes from items sold to the trade post.
* Fixed many memory leaks.
* Fixed a typo.


## Release 0.6.0 (2010-09-19)

### Changes:

#### General

* Changed the flow of game time management and made actions
  interruptable. The result of an action that takes multiple turns
  is revealed after elapsing the required number of turns.
* Stats are now chosen from one of four fixed stat packages with high
  points in strength, constitution, dexterity and intelligence,
  respectively. At game start, the player is prompted to choose one or a
  random character stat set. This choice can be defined on the command
  line or in the ini file.
* Nuked the charisma stat.
* Added an auto-travel feature which allows to select a target with 'T'
  (features can be selected by their glyph) and to continue travel
  interrupted by e.g. a monster with 'C'.
* Automated saving points allow continuing games after crashes.
* Integrated Lua interpreter into the game. Moved monster data to external
  lua file.
* Movement speed is reduced when burdened. When going down a level while
  burdened, damage may be caused.
* Give a warning if the effects levitation, wall-walk or protection are
  about to time out.
* Use inverted colours to highlight stationary objects or traps with
  items on them.
* The statistics which are collected during the game play have been
  enhanced. A new statistics counter, "acts of vandalism", has been added,
  which counts destruction of walls, statues etc. via vaporisation, and
  also all those looted thrones.
* Added some new fortune/speech phrases.

#### Spells

* Make spell casting success depend on Int, spell level and knowledge.
* Magic missile is now a single-target spell, and sonic spear has been
  upped to level 2.
* Lightning deals double damage against flying monsters. Player also
  takes double damage from lightning while levitating.
* Make finger of death less likely to succeed against undead or demons.
* Make polymorph less likely to succeed the higher the monster level.
  A polymorphed monster that can't survive in its current place gets
  killed.
* Tweaked the spell "alter reality".
* Redesigned the spells "phantasmal forces" and "scare monsters".
  Phantasmal forces affects a single monster, scare monsters affects all
  monsters that surround the player.
* Flood effect areas shrink as they time out.

#### Monsters

* Overhauled to-hit calculations, now takes into account monster/player
  speed ratio. Saner AC values.
* Modified the monster generation to have a more interesting mix of
  monsters on a level, including out-of-depth monsters.
* Made some monsters significantly more rare.
* Tweaked monsters' gold property to make gold drops less reliable.
* Added ranged attacks: hell hounds and red dragons breathe bursts of
  fire, the green dragon spits poison and the platinum dragon can use its
  psionic attack at a distance. Gaze attacks are now possible at a
  distance with one third of their base chance.
* Xorns can pass through walls, water lords can swim.
* The ziller now has a random stat loss attack. The assassin beetle now has
  the poison attack. The green urchin and the lama nobe can now cause
  blindness.
* Hell hounds, red dragons and demon princes are resistant to fire, some
  monsters have sleep or poison resistance.
* Make monsters regenerate more often.
* Adjust some monsters' colours, get rid of dark grey monsters.
* A nymph will only steal a random amount of an item when the player
  has a larger number of that item.
* Populate the town with town people. Eradicate fortune cookies in favour
  of the talkative town people.

#### Items

* New amulet type: reflection. Reflects breath and gaze attacks.
* Add new potion "recovery" healing stat drains, including dizziness.
* Added a "potion of levitation", which allows to float over water or lava.
* Implemented a "potion of power", which restores MP.
* Always show wielded weapon in the main view.
* Give blessed items a 50% chance to resist erosion/disenchantment.
* Blessed weapons do 50% bonus damage against undead and demons.
* Blessed potions' effects last longer.
* Blessed potions of object and treasure detection detect items carried
  by monsters.
* Improved blessed scrolls of magic mapping and potions of instant healing:
  a blessed scroll of magic mapping now also reveals all traps on the
  level, and a blessed potion of instant healing also heals poison,
  confusion, and blindness.
* For blessed genocide scrolls, allow to choose out of same-glyph monsters.
* Blessed scrolls of enchant armour/weapon now repair damage and may give
  a bonus enchantment.
* Uncursed identify scrolls allow identifying up to three items, averaging
  at two. Blessed scrolls affect all carried items, as before.
* Improve the scroll of "create artifact": now only generates amulets,
  rings, books, potions or scrolls.
* Life protection is only permanent with blessed scrolls.
* Blessed time warp scrolls are more likely to go farther back.
* Change potions of plain water to holy water, which enables the player
  to bless items.
* Refuse to use books, scrolls and potions which are known to be cursed.
* When wearing cursed armour, its curse status is identified immediately.
* If a carried container is destroyed, its contents spill on the floor.
* Added a more detailed item description for some item types.

#### Levels

* Added rivers and lakes. Spells can now be cast across water and lava,
  and flying monsters can cross it. If a monster is killed over water/lava,
  all carried items get destroyed, except for the unique items which get
  teleported elsewhere on the level.
* Overhaul altar prayer. Make altar donations also cure poisoning and other
  afflictions, including stat loss other than strength or dexterity.
* Added some special effects when vaporising fountains or altars.
* Display remembered traps in their colour, now different by type.
* Pits actually trap player and monsters and restrict vision while trapped.
* Cause damage by falling through trap doors.
* Make trap poisoning less likely on the early levels.
* Make dexterity influence the likelihood of evading a trap.
* While burdened, increase the chance of triggering a trap.

### Fixed bugs:

* Store auto pickup settings in the saved game.
* Expire effects correctly when doing a time warp.
* Disallow using stairs while paralysed.
* Fix area effect spells not working under certain circumstances.
* Fix poisoning not scaling correctly with difficulty.
* Fix various information leaks about unknown mimics.
* Fixed remove curse scrolls leaking cursedness information for items
  of unknown curse status.
* Fix walk-through-walls not working when blind.
* Fix genocided monsters sometimes still being generated.
* Fix flickering inventory.
* Don't let books too difficult to understand increase Intelligence.
* Display correct count of items a nymph steals.
* Disable showing an item bonus in the identified items list.
* Changed many messages to present tense.
* Fixed lots of typos.


## Release 0.5.4 (2010-04-24)

### Changes:

* Implemented different speeds for monsters and the player. Reenabled
  the scroll of speed and the spell "haste self".
* Implemented the spell "time stop".
* Modified keys for open/close and magic:
    * 'o'pen (instead of 'O')
    * 'c'lose (instead of 'C')
    * 'm'agic (instead of 'c'ast)
* Add fast movement command that uses the following (direction) input
  for running (g).
* Implement a long-rest command: (w)ait which will ignore adjacent
  floating eyes und umber hulks.
* Added functionality to (r)ead/(q)uaff/(e)quip/(t)ake off/(d)rop an
  item quickly.
* Remember visited landmarks. A list of these can be shown with (D).
* Rearranged hp/mp/xp display to be more consistent with other stats.
* Display carried item weight in inventory header. Removed the command
  previously used to display the pack weight.
* Display the bank account balance in shop windows.
* Added item description popup to inventory.
* Allow equipping items in the trade post.
* The message history is shown reversed and the entries are prefixed
  with their turn number. Truncate the message log to 100 entries.
* Enhanced the dialogue to get a number: set overwrite mode as
  default; accept 'y', 'g', 'd' and 'p' as the full amount and 'n' as 0
  to speed up getting and dropping multiple items.
* Ask for the player's name and sex during game creation if not set in
  .ini file or by command line parameters.
* Prompt if a fireball is going to hit the player.
* When autopicking up stuff, give a message if there are more items
  there.
* In yes/no prompt, always highlight selected choice in red. Generally
  allow the initial letters of the button captions as shortcut.
* Mention command help ('?' command) at game start/reload.
* Use block cursor when asking for a position.
* Display items and stationary objects which are not in sight with
  their colour to make finding them again easier. New display order:
  stationary objects > items. New item display/memorisation order:
  gems > gold > topmost item.
* Made containers ask for the amount when putting things into/taking
  things out.
* Open doors by walking into them, though not on shift-run.
* Modified some monster glyphs.
* Make the potion of cure dianthroritis expensive. This is a simple
  flavour change: If you attempt to sell this unique potion, you should
  get more money for it than for a corroded dagger. Remove the potion
  from the player's inventory when winning the game.
* When magic mapping, only map non-floor tiles.
* Sometimes flip custom maze maps when generating levels. Should keep
  things more interesting even if you keep seeing the same levels again
  and again.
* Notify the player of stationary objects when entering a tile.
* Allow the player to deliberately jump through trap doors with '>'.
* Explicitly name the item a nymph is stealing.
* Make leprechauns steal gold the player is standing on if none
  carried.
* Give a warning when the disenchantress reduces an item to -3.
* Give a message if an unseen monster died and the player got xp for
  it.
* Allow to auto-id all ring types.
* Made the uncursed variants of the scrolls gem perfection, identify,
  remove curse and spell extension less powerful and added a blessed
  variant with the original power. Let the player decide which gem to make
  perfect, wich item to identify or to uncurse when using the uncursed
  variant.
* Improved messages given when interacting with stationary objects.
  Show a message when a monster has been generated.
* Replace splash screen backstory with a new text that makes more
  sense.
* Improved save file compatibility handling.
* Added a change log file to the distribution.
* Various wizard mode enhancements.

### Fixed bugs:

* Fixed level draining attacks which could lead to a crash.
* Fixed a crash when casting sleep at an already sleeping monster.
* Fixed a crash when buying a single item which is too heavy to be
  carried.
* Fixed a crash in building_item_sell() that occured when the player
  bought the entire stock of a stackable item that already existed in
  the player's inventory.
* Fixed a crash when experience level 1 got drained.
* Fix off-by-one-error preventing generation of the scroll of genocide
  and the potion of see invisible.
* Make sure stationary objects are moved out of treasure rooms.
* Fixed item bonuses.
* Fixed many information leaks about invisible monsters.
* Reduced the information leak about unidentified mimics.
* Fixed some monster plural names in the vanquished list and the
  message given by the scroll of genocide monster.
* Don't identify cursed potions or scrolls on using them.
* When blind, don't id curse status of items dropped on altars.
* If an item becomes uncursed, its curse status should be known.
* Sort same-type shop items alphabetically by their _identified_ names.
* When using alter reality in the tenth dungeon level or the third
  volcano level, the unique items _amulet of larn_ and _potion of cure
  dianthroritis_ will be regenerated. Never ever destroy the potion of
  cure dianthroritis by erosion.
* Vampires would never use their bite attack. Now there is a 20%
  chance that they will do so.
* The ziller and vortex can now attack again.
* Store monster AI state in saved games.
* Prevent uninjured monsters being displayed as "slightly injured".
* Honour time usage when doing auto-pickup. Call autopickup when
  entering a new level.
* Disallow opening/closing doors while paralysed or overstrained.
* Fixed the calculation of bank account interest when doing a time
  warp.
* Fixed "charm monster". Now it affects only a single monster which
  has to be targeted by the spell.
* Fixed moving items from a container in the players inventory to the
  players inventory and vice versa.
* Mute pointless messages when going from burdened to overloaded and
  vice versa.
* Fixed _lots_ of message glitches.
* Fixed some memory leaks.


## Release 0.5.3 (2010-02-28)

### Changes:

* Lots of colours!
* GFX for ray and blast type spells.
* The display is updated while sleeping.
* Updated the fortunes.
* When examining a position, the monster on it is described with more
  details.
* Display additional information for unique weapons, like damages, bonus or
  curses.
* Added the ability to display the bank account balance with 'B'.
* Modified item generation: only blessed items have a bonus, only cursed
  items have a malus.

### Fixed bugs:

* Item stacking sometimes did not work. This has been fixed. Properly
  returned split items to the originating inventory when adding to the
  target inventory has failed.
* Some effect descriptions are broader than the available space and were
  wrapped around. This has been fixed. Duplicate effects are no longer
  listed in the effects list. Added some missing effect descriptions.
* Fixed stacking of effects, e.g. it is no longer possible to become
  paralysed when already paralysed.
* Invalid movement counts as a move when confused (i.e. running into a
  wall).
* The inventory is not displayed in obituary when empty. The map is hidden
  in the obituary if the player is in town. Fixed an issue with the
  statistics in the obituary.
* Burdened state gets recalculated when the player's strength value changes
  (reported by Nick Genthner).
* A crash in the spell selection dialog has been fixed.
* Fixed a rare crash bug that occurred when a monster stepped into a poison
  trap twice.
* Fixed two bugs with restoring saved games.
* Some animals dropped money. This has been fixed.
* The chance to gain intelligence by reading books was way too high and has
  been significantly lowered.
* Fixed some message glitches.


## Release 0.5.2 (2010-01-11)

### Changes:

* Improved maze creation: no more unreachable areas when a level contains a
  treasure room.
* Stairways, the volcanic shafts and the bank branch office are placed in
  dead ends in the maze. Modified the colour of volcano and dungeon
  entrance to make them distinguishable from monsters.
* Changed the floor glyph to a dot (.) to make finding unexplored regions
  possible.
* Slightly rearranged town buildings and added an altar.
* Revised and extended in-game help.
* Added a README file with basic instructions and other information.
* Cursedness / blessedness of an item is revealed when dropping it on an
  altar. The item description reflects if an item is known not to be
  cursed.
* Destroy over-/under-enchanted items (> +3 / < -3).
* Not all items are available in the DND store, only essential equipment.
  The items are displayed as identified and identified by purchasing them.
* Implemented aggravate monster.
* Reduced the speed at which level effects affect items.
* Improved the way the player's invisibility is displayed.
* Turned spell of genocide into a scroll of genocide monster.
* When casting a spell of type ray, all monsters standing in the way are
  affected.
* Roll against constitution when getting poisoned to check if the player
  resists. The special monster attacks blindness, confusion paralysis and
  drain life do not automatically succeed for every attack.
* Enhanced the obituary further: display attributes, equipment, inventory
  and effects.
* Removed sequential numbers from inventory dialog. Made it broader by 4
  columns to have enough space for the blessedness information.
* Modified number and string input function to allow overwrite mode.
* Ask for the desired amount when picking up gold manually.
* Changed the key to take items out of containers from 't' to 'g'.
* Changed key used to drink from fountain to 'q'.

### Fixed bugs:

* Fixed flooding behavior of cloud kill, flood and magic fire. Fixed a
  crash when casting these spells near the borders of the map. Fixed
  casting these spells multiple times onto the same map squares.
* Fixed screen drawing when using the Scroll of Pulverisation.
* Fixed messages when gaining an experience level.
* Fixed crash in item_enchant() / item_disenchant().
* All unique weapons are always available in the DND store.
* Fixed a crash when taking stackable items out of containers.
* The volcano entrance now leads to level V1, not V3.
* Examining the player's current position no longer counts as a move.
* New monsters are placed outside of the player's visible area.
* Fixed the code to find an available space in a given area which would
  fail quite frequently before for small areas (e.g. when generating gnome
  kings).
* Fixed some special monster attack related bugs: Spirit Protection and the
  umber hulk's confusion attack work again.
* Fixed number and string input function on Windows.
* Auto-pickup no longer asks how many items to pick up when picking up a
  stack of items.
* The regular prices of items in no longer displayed in the trade post.
  Items sold to the trade post are identified before being added to the DND
  store.
* Corrected item descriptions: a/an is properly used.
* Use the plural when applicable in player_inv_pre_add()
  (e.g. "3221 gold pieces _are_ too heavy for you.").
* Allow using of all number keys when displaying a message.


## Release 0.5.1 (2009-11-15)

### Changes:

* Monsters do either pick up a single item or move. Previously monsters
  could even pick up multiple items and move as well.
* The Leprechaun steals and teleports again.
* Added burnt/corroded/rusty to item description.
* Fixed messages given when changing the level.
* Drinking a potion of forgetfulness could lead to a crash. This has been
  fixed.
* Washing at the fountain had been assigned the 't' key and been described
  as "tidy up at fountain". This has been reassigned to 'W' with the
  description "wash at fountain".
* Added description messages when using stationary objects.
* Thrones could generate multiple gnome kings. This has been fixed.
* Fixed order of messages when killing a monster and thus gaining an
  experience level.
* Monsters can no longer enter a level when the entrance is blocked.
* Fixed a crash that occurred when examining a position with a monster on
  it.
* Fixed a mistakable message when casting the spell vaporize rock.
* Started using a directory for the user's game related files; read
  .ini-file from there; put save file into it. Under Linux this directory
  is called ~/.nlarn, under Windows it is below Application Data (or the
  localized version thereof).
* Read settings from the .ini-file correctly when restoring a saved game.
* Fixed a crash when pressing the windows keys while having a window open.
* Gems sold to the bank do no longer appear in the DND store.
* Items sold to the trade post are refurbished before being added to the
  DND store.
* The bonus of armour and weapons sold in store is now known to the player.
* Fixed a crash when displaying high scores and the current score is not in
  the list.
* Fixed a crash in large inventories when scrolling with page down starting
  with the second entry.
* Added monsters and the player to the map shown at the end of the game.
  Added some statistics to the obituary.
* Player dies if strength or dexterity sink below 1.


## Release 0.5.0 (2009-11-02)

### Changes:

* Save your game and continue playing later.
* The town level is now static and has a lake and lots of trees. Buildings
  can now be recognized as such.
* Shops debit the player's bank account for their services.
* It is now possible to save a memorial file for a deceased character. The
  obituary contains a list of vanquished creatures.
* Configuration file allows to preset autopickup and the like.
* Implemented a string input function.
* The caption in the get_count dialog can now be wrapped.
* Created a rpm spec file.
* Created an installer for Windows.
* More weapons and armour types. Raised weapon and armour prices.
* Monsters that can use weapons will use weapons - against you!
* Implemented taking things out of and putting things into containers.
* Added a chance of failure when casting a spell.
* Ability to display spell description in the spell selection dialog.
* Honour spell knowledge level when calculation spell damage/power.
* Added ability to examine any visible position. Enhanced the descriptions
  of a position.
* Monsters can use stairs or even enter the town to follow the player.
* Monsters can fall through trap doors and appear on the level below.
* Vastly lowered gem values.
* Re-enforce monsters on a map every now and then.

### Bugs and features fixed in this version:
* Fixed stealth.
* Fixed a crash in the inventory dialog.
* A leprechaun who picked up a gem could cause a crash in the drawing code
  (this one took me hours to figure out. You got to love C!)
* A message is logged when no item has been discovered instead of showing
  an empty dialog box.
* Fixed a bug in auto-pickup code which would lead to a game freeze and
  100% CPU usage.
* Fixed duplicate knowledge of spells.
* Move all Spheres of Destruction.
* Fixed the behavior of backspace key in the get_amount dialog.
* Fixed a game freeze when a fireball hit monsters.
* Books are used up upon successful learning.
* Corrected spell MP usage. Aborted spells no longer cost MPs.
* Corrected cloning of items with effects.
* When withdrawing large sums from the bank without being able to carry it
  the money was lost. This has been fixed.
* Fixed a hang at the end of the game.
* Fixed generation of traps: now trapdoors are generated, too.
* Nymphs can no longer steal cursed items that are equipped.


## Release 0.4.1 (2009-09-11)

### Changes:

* Mute duplicate message.
* Vi keys now also work in dialogs.
* Enter buildings with > (e no longer works).
* Sales revenue goes to bank account.
* Reworked adding/deleting items to/from inventory.

Thanks for pointing these out go to Grishnak, sinoth and tametick of #rgrd.


## Release 0.4.0 (2009-09-10)

### Changes:
* Implemented artefacts.
* Cursed and blessed items. Cursed books, potions and scrolls have side
  effects.
* Items match the level the player is on.
* Items monsters have stolen are added to the monster's inventory (and can
  thus be gained back by killing the monster).
* Reworked how damage is dealt and taken.
* Monsters have multiple attack types and change them when the player takes
  no damage from an attack.
* Implemented spirit naga and mimic; improved the disenchantress.
* All windows are displayed when multiple windows are stacked.
* Windows can be moved with CTRL + _cursor_.
* Spells can be selected by typing their short name in the select spell
  dialog.
* Weapons can have effects.
* Raised the number of effects an item can have from one to infinite.
* Implemented Bessman's Flailing Hammer.
* The inventory weight is respected. Picking up items which are too heavy
  is no longer possible.
* Improved interface. Low HP and MP are displayed in different colour; the
  most important negative effects and the level names are now shown.
* Implemented list of discovered items.
* Implemented walk through walls, dizziness and paralysis.
* Implemented potion of amnesia.
* Made sure monsters can not be positioned on player's tile.
* Implemented altar, fountain, mirror and throne.
* Items are affected by level effects, e.g. burn or rust.
* Improved autopickup - choosing item types to pick up is now possible.
* Many, many minor improvements and countless fixes...


## Release 0.3.0 (2009-07-13)

First publicly available version of nlarn.