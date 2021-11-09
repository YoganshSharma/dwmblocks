//Modify this file to change what commands output to your statu~/stuff/reps/voidrice/.local/bin/statusbar/sbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
        //{"", "~/.config/dwmblocks/scripts/news",          120,                    13},
        {"", "~/.config/dwmblocks/scripts/pacupdate",     120,                    9},
        {"", "~/.config/dwmblocks/scripts/memory",        6,                      1},
        {"", "~/.config/dwmblocks/scripts/battery",       30,                     11},
        {"", "~/.config/dwmblocks/scripts/forecast",      100,                    12},
        {"", "~/.config/dwmblocks/scripts/backlight",      0,                      14},
        {"", "~/.config/dwmblocks/scripts/volume",        0,                      10},
        {"", "~/.config/dwmblocks/scripts/internet",      30,                     8},
        {"", "~/.config/dwmblocks/scripts/clock",         30,                     3},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "|";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.config/dwmblocks/config.h !cd ~/.config/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
