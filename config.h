#define RV_VERSION      "1.0.1"

/* CTRL+X: "^X"
   ALT+X: "M-X" */
#define RVK_QUIT        "q"
#define RVK_HELP        "?"
#define RVK_DOWN        "k"
#define RVK_UP          "j"
#define RVK_JUMP_DOWN   "K"
#define RVK_JUMP_UP     "J"
#define RVK_JUMP_TOP    "g"
#define RVK_JUMP_BOTTOM "G"
#define RVK_CD_DOWN     "l"
#define RVK_CD_UP       "h"
#define RVK_HOME        "H"
#define RVK_TARGET      "t"
#define RVK_COPY_PATH   "y"
#define RVK_PASTE_PATH  "p"
#define RVK_REFRESH     "r"
#define RVK_SHELL       "z"
#define RVK_VIEW        " "
#define RVK_EDIT        "e"
#define RVK_OPEN        "o"
#define RVK_SEARCH      "/"
#define RVK_TG_FILES    "f"
#define RVK_TG_DIRS     "d"
#define RVK_TG_HIDDEN   "s"
#define RVK_NEW_FILE    "n"
#define RVK_NEW_DIR     "N"
#define RVK_RENAME      "R"
#define RVK_TG_EXEC     "E"
#define RVK_DELETE      "D"
#define RVK_TG_MARK     "m"
#define RVK_INVMARK     "M"
#define RVK_MARKALL     "a"
#define RVK_MARK_DELETE "X"
#define RVK_MARK_COPY   "C"
#define RVK_MARK_MOVE   "V"
#define RVK_TIME        "T"
#define RVK_TIME2        "x"
/* Colors available: DEFAULT, RED, GREEN, YELLOW, BLUE, CYAN, MAGENTA, WHITE, BLACK. */
#define RVC_CWD         GREEN
#define RVC_STATUS      CYAN
#define RVC_BORDER      BLUE
#define RVC_SCROLLBAR   CYAN
#define RVC_LINK        CYAN
#define RVC_HIDDEN      YELLOW
#define RVC_EXEC        GREEN
#define RVC_REG         DEFAULT
#define RVC_DIR         DEFAULT
#define RVC_CHR         MAGENTA
#define RVC_BLK         MAGENTA
#define RVC_FIFO        BLUE
#define RVC_SOCK        MAGENTA
#define RVC_PROMPT      DEFAULT
#define RVC_TABNUM      DEFAULT
#define RVC_MARKS       YELLOW

/* Special symbols used by the TUI. See <curses.h> for available constants. */
#define RVS_SCROLLBAR   ACS_CKBOARD
#define RVS_MARK        ACS_DIAMOND

/* Prompt strings for line input. */
#define RV_PROMPT(S)    S ": "
#define RVP_SEARCH      RV_PROMPT("search")
#define RVP_NEW_FILE    RV_PROMPT("new file")
#define RVP_NEW_DIR     RV_PROMPT("new dir")
#define RVP_RENAME      RV_PROMPT("rename")

/* Number of entries to jump on RVK_JUMP_DOWN and RVK_JUMP_UP. */
#define RV_JUMP         10

/* Default listing view flags.
   May include SHOW_FILES, SHOW_DIRS and SHOW_HIDDEN. */
#define RV_FLAGS        SHOW_FILES | SHOW_DIRS

/* Optional macro to be executed when a batch operation finishes. */
#define RV_ALERT()      beep()

/* Shell used to launch external  programs.
   Defining   this  macro   will  force   Rover  to   launch  external
   programs with  `sh -c  "$EXTERNAL_PROGRAM [arg]"`. This  gives more
   flexibility,  allowing command-line  arguments  to  be embedded  in
   environment variables  (e.g. PAGER="less  -N"). On the  other hand,
   this requires the presence of a  shell and will spawn an additional
   process each time an external  program is invoked. Leave this macro
   undefined if you prefer external  programs to be launched with just
   `$EXTERNAL_PROGRAM [arg]`. */
#define RV_SHELL        "/bin/sh"
#define RV_VIM        "vim"
