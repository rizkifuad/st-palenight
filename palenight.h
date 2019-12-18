/* Terminal colors (16 first used in escape sequence) */

static const char *colorname[] = {
  "#434759", /* base00 */
  "#f07178", /* base08 */
  "#c3e88d", /* base0B */
  "#ffcb6b", /* base0A */
  "#82aaff", /* base0D */
  "#c792ea", /* base0E */
  "#89ddff", /* base0C */
  "#d0d0d0", /* base05 */

  "#434758", /* base03 */
  "#ff8b92", /* base10 */
  "#ddffa7", /* base01 */
  "#ffe585", /* base02 */
  "#9cc4ff", /* base04 */
  "#e1acff", /* base06 */
  "#a3f7ff", /* base0F */
  "#fefefe", /* base07 */

	[255] = 0,
  // fg
  "#959dcb",
  // bg
  "#292d3e",
  // selection fg
  "#eceef0",
  // selection bg
  "#607c8b",
  // url_color             
  "#82aaff"
};

unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 259;
static unsigned int defaultrcs = 258;
