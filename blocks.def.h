//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {" 🐧 ",  "/home/jake/.local/bin/dwmblocks/kernel",   360,          2},
  {" 🔺 ",   "/home/jake/.local/bin/dwmblocks/upt",      60,            2},
  {" 📦 ",   "/home/jake/.local/bin/dwmblocks/pacupdate",  360,          9},
  {" 💻 ",   "/home/jake/.local/bin/dwmblocks/memory",  6,               1},
  {" 🔊 ",   "/home/jake/.local/bin/dwmblocks/volume",  0,               10},
  {" 🕑 ",   "/home/jake/.local/bin/dwmblocks/clock",  60,               0},
};
//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 5;
