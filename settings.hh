#ifndef SETTINGS_N7KJ765I
#define SETTINGS_N7KJ765I

#define RPBAR_WIN_NAME              "rpbar"
// used to communicate with rpbarsend
#define RPBAR_SOCKET_PATH           "/tmp/rpbarsocket"
// hopefully none of your programs have this as their title
#define RPBAR_SEP                   "$)@="

// to be used for whether rpbar is on top or bottom
#define RPBAR_TOP                   0

// the RATPOISON screen(aka monitor) to display the bar on
#define RPBAR_SCREEN                1

// padding around text (top and bottom)
#define RPBAR_PADDING               4

// for communication with ratpoison. Bigger shouldn't hurt.
#define RPBAR_BUFSIZE               2048
#define RPBAR_TIMEOUT_S             5
// affects padding in left and right
#define RPBAR_BUTTON_MARGIN         10

// Look at wmii or vim colorschemes for inspiration
#define RPBAR_BORDERCOLOR           "#d7d7d7"
#define RPBAR_BGCOLOR               "#353535"
#define RPBAR_FGCOLOR               "#d7d7d7"
#define RPBAR_MAINBGCOLOR           "#d4ccb9"
#define RPBAR_MAINFGCOLOR           "#45363b"
#define RPBAR_STATUSBGCOLOR         "#d7d7d7"
#define RPBAR_STATUSFGCOLOR         "#353535"

#define RPBAR_FONT_STR "Libertinus Mono:size=14"

#endif /* end of include guard: SETTINGS_N7KJ765I */
