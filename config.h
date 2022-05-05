/*
dynamic menu build
github.com/ayyekou
information in README
*/

/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                       /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                 /* minimum width when centered */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Source Code Pro:size=20",
	"JoyPixels:pixelsize=20:antialias=true:autohint=true"
};


static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	                          /*   fg         bg    */
	[SchemeNorm] =            { "#c3c3be", "#181920" },
	[SchemeSel] =             { "#a36ac7", "#121212" },
	[SchemeSelHighlight] =    { "#B6E354", "#121212" },
	[SchemeNormHighlight] =   { "#a36ac7", "#181920" },
	[SchemeOut] =             { "#181920", "#fba922" },
	[SchemeBord] =            { "#ff79c6"            },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 20;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 10;
static unsigned int min_lineheight = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;

