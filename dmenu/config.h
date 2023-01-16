/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 250;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Iosevka:size=15"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#c0caf5", "#1a1b26" },
	[SchemeSel] = { "#c0caf5", "#33467c" },
	[SchemeSelHighlight] = { "#e0af68", "#33467c" },
	[SchemeNormHighlight] = { "#e0af68", "#1a1b26" },
	[SchemeOut] = { "#000000", "#00ffff" },
	[SchemeHp]  = { "#bbbbbb", "#333333" }
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 7;
