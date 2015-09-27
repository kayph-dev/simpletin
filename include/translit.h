#define TRANSLIT_MIN 0x00A0
#define TRANSLIT_MAX 0x25EF
static char tlits[]= {
    /* U+00A0 */	' ',       	/* NO-BREAK SPACE */
    /* U+00A1 */	'!',       	/* INVERTED EXCLAMATION MARK */
    /* U+00A2 */	'c',       	/* CENT SIGN */
    /* U+00A3 */	'L',       	/* POUND SIGN */
    /* U+00A4 */	'$',       	/* CURRENCY SIGN */
    /* U+00A5 */	'Y',       	/* YEN SIGN */
    /* U+00A6 */	'|',       	/* BROKEN BAR */
    /* U+00A7 */	'$',       	/* SECTION SIGN */
    /* U+00A8 */	'"',       	/* DIAERESIS */
    /* U+00A9 */	BAD_CHAR,  	/* COPYRIGHT SIGN */
    /* U+00AA */	BAD_CHAR,  	/* FEMININE ORDINAL INDICATOR */
    /* U+00AB */	'<',       	/* LEFT-POINTING DOUBLE ANGLE QUOTATION MARK */
    /* U+00AC */	'!',       	/* NOT SIGN */
    /* U+00AD */	'-',       	/* SOFT HYPHEN */
    /* U+00AE */	BAD_CHAR,  	/* REGISTERED SIGN */
    /* U+00AF */	'-',       	/* MACRON */
    /* U+00B0 */	BAD_CHAR,  	/* DEGREE SIGN */
    /* U+00B1 */	BAD_CHAR,  	/* PLUS-MINUS SIGN */
    /* U+00B2 */	'2',       	/* SUPERSCRIPT TWO */
    /* U+00B3 */	'3',       	/* SUPERSCRIPT THREE */
    /* U+00B4 */	'\'',      	/* ACUTE ACCENT */
    /* U+00B5 */	'u',       	/* MICRO SIGN */
    /* U+00B6 */	'$',       	/* PILCROW SIGN */
    /* U+00B7 */	'.',       	/* MIDDLE DOT */
    /* U+00B8 */	',',       	/* CEDILLA */
    /* U+00B9 */	'1',       	/* SUPERSCRIPT ONE */
    /* U+00BA */	BAD_CHAR,  	/* MASCULINE ORDINAL INDICATOR */
    /* U+00BB */	'>',       	/* RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK */
    /* U+00BC */	BAD_CHAR,  	/* VULGAR FRACTION ONE QUARTER */
    /* U+00BD */	BAD_CHAR,  	/* VULGAR FRACTION ONE HALF */
    /* U+00BE */	BAD_CHAR,  	/* VULGAR FRACTION THREE QUARTERS */
    /* U+00BF */	'?',       	/* INVERTED QUESTION MARK */
    /* U+00C0 */	'A',       	/* LATIN CAPITAL LETTER A WITH GRAVE */
    /* U+00C1 */	'A',       	/* LATIN CAPITAL LETTER A WITH ACUTE */
    /* U+00C2 */	'A',       	/* LATIN CAPITAL LETTER A WITH CIRCUMFLEX */
    /* U+00C3 */	'A',       	/* LATIN CAPITAL LETTER A WITH TILDE */
    /* U+00C4 */	'A',       	/* LATIN CAPITAL LETTER A WITH DIAERESIS */
    /* U+00C5 */	'A',       	/* LATIN CAPITAL LETTER A WITH RING ABOVE */
    /* U+00C6 */	'A',       	/* LATIN CAPITAL LETTER AE */
    /* U+00C7 */	'C',       	/* LATIN CAPITAL LETTER C WITH CEDILLA */
    /* U+00C8 */	'E',       	/* LATIN CAPITAL LETTER E WITH GRAVE */
    /* U+00C9 */	'E',       	/* LATIN CAPITAL LETTER E WITH ACUTE */
    /* U+00CA */	'E',       	/* LATIN CAPITAL LETTER E WITH CIRCUMFLEX */
    /* U+00CB */	'E',       	/* LATIN CAPITAL LETTER E WITH DIAERESIS */
    /* U+00CC */	'I',       	/* LATIN CAPITAL LETTER I WITH GRAVE */
    /* U+00CD */	'I',       	/* LATIN CAPITAL LETTER I WITH ACUTE */
    /* U+00CE */	'I',       	/* LATIN CAPITAL LETTER I WITH CIRCUMFLEX */
    /* U+00CF */	'I',       	/* LATIN CAPITAL LETTER I WITH DIAERESIS */
    /* U+00D0 */	'D',       	/* LATIN CAPITAL LETTER ETH */
    /* U+00D1 */	'N',       	/* LATIN CAPITAL LETTER N WITH TILDE */
    /* U+00D2 */	'O',       	/* LATIN CAPITAL LETTER O WITH GRAVE */
    /* U+00D3 */	'O',       	/* LATIN CAPITAL LETTER O WITH ACUTE */
    /* U+00D4 */	'O',       	/* LATIN CAPITAL LETTER O WITH CIRCUMFLEX */
    /* U+00D5 */	'O',       	/* LATIN CAPITAL LETTER O WITH TILDE */
    /* U+00D6 */	'O',       	/* LATIN CAPITAL LETTER O WITH DIAERESIS */
    /* U+00D7 */	'*',       	/* MULTIPLICATION SIGN */
    /* U+00D8 */	'O',       	/* LATIN CAPITAL LETTER O WITH STROKE */
    /* U+00D9 */	'U',       	/* LATIN CAPITAL LETTER U WITH GRAVE */
    /* U+00DA */	'U',       	/* LATIN CAPITAL LETTER U WITH ACUTE */
    /* U+00DB */	'U',       	/* LATIN CAPITAL LETTER U WITH CIRCUMFLEX */
    /* U+00DC */	'U',       	/* LATIN CAPITAL LETTER U WITH DIAERESIS */
    /* U+00DD */	'Y',       	/* LATIN CAPITAL LETTER Y WITH ACUTE */
    /* U+00DE */	'T',       	/* LATIN CAPITAL LETTER THORN */
    /* U+00DF */	's',       	/* LATIN SMALL LETTER SHARP S */
    /* U+00E0 */	'a',       	/* LATIN SMALL LETTER A WITH GRAVE */
    /* U+00E1 */	'a',       	/* LATIN SMALL LETTER A WITH ACUTE */
    /* U+00E2 */	'a',       	/* LATIN SMALL LETTER A WITH CIRCUMFLEX */
    /* U+00E3 */	'a',       	/* LATIN SMALL LETTER A WITH TILDE */
    /* U+00E4 */	'a',       	/* LATIN SMALL LETTER A WITH DIAERESIS */
    /* U+00E5 */	'a',       	/* LATIN SMALL LETTER A WITH RING ABOVE */
    /* U+00E6 */	'a',       	/* LATIN SMALL LETTER AE */
    /* U+00E7 */	'c',       	/* LATIN SMALL LETTER C WITH CEDILLA */
    /* U+00E8 */	'e',       	/* LATIN SMALL LETTER E WITH GRAVE */
    /* U+00E9 */	'e',       	/* LATIN SMALL LETTER E WITH ACUTE */
    /* U+00EA */	'e',       	/* LATIN SMALL LETTER E WITH CIRCUMFLEX */
    /* U+00EB */	'e',       	/* LATIN SMALL LETTER E WITH DIAERESIS */
    /* U+00EC */	'i',       	/* LATIN SMALL LETTER I WITH GRAVE */
    /* U+00ED */	'i',       	/* LATIN SMALL LETTER I WITH ACUTE */
    /* U+00EE */	'i',       	/* LATIN SMALL LETTER I WITH CIRCUMFLEX */
    /* U+00EF */	'i',       	/* LATIN SMALL LETTER I WITH DIAERESIS */
    /* U+00F0 */	'd',       	/* LATIN SMALL LETTER ETH */
    /* U+00F1 */	'n',       	/* LATIN SMALL LETTER N WITH TILDE */
    /* U+00F2 */	'o',       	/* LATIN SMALL LETTER O WITH GRAVE */
    /* U+00F3 */	'o',       	/* LATIN SMALL LETTER O WITH ACUTE */
    /* U+00F4 */	'o',       	/* LATIN SMALL LETTER O WITH CIRCUMFLEX */
    /* U+00F5 */	'o',       	/* LATIN SMALL LETTER O WITH TILDE */
    /* U+00F6 */	'o',       	/* LATIN SMALL LETTER O WITH DIAERESIS */
    /* U+00F7 */	'/',       	/* DIVISION SIGN */
    /* U+00F8 */	'o',       	/* LATIN SMALL LETTER O WITH STROKE */
    /* U+00F9 */	'u',       	/* LATIN SMALL LETTER U WITH GRAVE */
    /* U+00FA */	'u',       	/* LATIN SMALL LETTER U WITH ACUTE */
    /* U+00FB */	'u',       	/* LATIN SMALL LETTER U WITH CIRCUMFLEX */
    /* U+00FC */	'u',       	/* LATIN SMALL LETTER U WITH DIAERESIS */
    /* U+00FD */	'y',       	/* LATIN SMALL LETTER Y WITH ACUTE */
    /* U+00FE */	't',       	/* LATIN SMALL LETTER THORN */
    /* U+00FF */	'y',       	/* LATIN SMALL LETTER Y WITH DIAERESIS */
    /* U+0100 */	'A',       	/* LATIN CAPITAL LETTER A WITH MACRON */
    /* U+0101 */	'a',       	/* LATIN SMALL LETTER A WITH MACRON */
    /* U+0102 */	'A',       	/* LATIN CAPITAL LETTER A WITH BREVE */
    /* U+0103 */	'a',       	/* LATIN SMALL LETTER A WITH BREVE */
    /* U+0104 */	'A',       	/* LATIN CAPITAL LETTER A WITH OGONEK */
    /* U+0105 */	'a',       	/* LATIN SMALL LETTER A WITH OGONEK */
    /* U+0106 */	'C',       	/* LATIN CAPITAL LETTER C WITH ACUTE */
    /* U+0107 */	'c',       	/* LATIN SMALL LETTER C WITH ACUTE */
    /* U+0108 */	'C',       	/* LATIN CAPITAL LETTER C WITH CIRCUMFLEX */
    /* U+0109 */	'c',       	/* LATIN SMALL LETTER C WITH CIRCUMFLEX */
    /* U+010A */	'C',       	/* LATIN CAPITAL LETTER C WITH DOT ABOVE */
    /* U+010B */	'c',       	/* LATIN SMALL LETTER C WITH DOT ABOVE */
    /* U+010C */	'C',       	/* LATIN CAPITAL LETTER C WITH CARON */
    /* U+010D */	'c',       	/* LATIN SMALL LETTER C WITH CARON */
    /* U+010E */	'D',       	/* LATIN CAPITAL LETTER D WITH CARON */
    /* U+010F */	'd',       	/* LATIN SMALL LETTER D WITH CARON */
    /* U+0110 */	'D',       	/* LATIN CAPITAL LETTER D WITH STROKE */
    /* U+0111 */	'd',       	/* LATIN SMALL LETTER D WITH STROKE */
    /* U+0112 */	'E',       	/* LATIN CAPITAL LETTER E WITH MACRON */
    /* U+0113 */	'e',       	/* LATIN SMALL LETTER E WITH MACRON */
    /* U+0114 */	'E',       	/* LATIN CAPITAL LETTER E WITH BREVE */
    /* U+0115 */	'e',       	/* LATIN SMALL LETTER E WITH BREVE */
    /* U+0116 */	'E',       	/* LATIN CAPITAL LETTER E WITH DOT ABOVE */
    /* U+0117 */	'e',       	/* LATIN SMALL LETTER E WITH DOT ABOVE */
    /* U+0118 */	'E',       	/* LATIN CAPITAL LETTER E WITH OGONEK */
    /* U+0119 */	'e',       	/* LATIN SMALL LETTER E WITH OGONEK */
    /* U+011A */	'E',       	/* LATIN CAPITAL LETTER E WITH CARON */
    /* U+011B */	'e',       	/* LATIN SMALL LETTER E WITH CARON */
    /* U+011C */	'G',       	/* LATIN CAPITAL LETTER G WITH CIRCUMFLEX */
    /* U+011D */	'g',       	/* LATIN SMALL LETTER G WITH CIRCUMFLEX */
    /* U+011E */	'G',       	/* LATIN CAPITAL LETTER G WITH BREVE */
    /* U+011F */	'g',       	/* LATIN SMALL LETTER G WITH BREVE */
    /* U+0120 */	'G',       	/* LATIN CAPITAL LETTER G WITH DOT ABOVE */
    /* U+0121 */	'g',       	/* LATIN SMALL LETTER G WITH DOT ABOVE */
    /* U+0122 */	'G',       	/* LATIN CAPITAL LETTER G WITH CEDILLA */
    /* U+0123 */	'g',       	/* LATIN SMALL LETTER G WITH CEDILLA */
    /* U+0124 */	'H',       	/* LATIN CAPITAL LETTER H WITH CIRCUMFLEX */
    /* U+0125 */	'h',       	/* LATIN SMALL LETTER H WITH CIRCUMFLEX */
    /* U+0126 */	'H',       	/* LATIN CAPITAL LETTER H WITH STROKE */
    /* U+0127 */	'h',       	/* LATIN SMALL LETTER H WITH STROKE */
    /* U+0128 */	'I',       	/* LATIN CAPITAL LETTER I WITH TILDE */
    /* U+0129 */	'i',       	/* LATIN SMALL LETTER I WITH TILDE */
    /* U+012A */	'I',       	/* LATIN CAPITAL LETTER I WITH MACRON */
    /* U+012B */	'i',       	/* LATIN SMALL LETTER I WITH MACRON */
    /* U+012C */	'I',       	/* LATIN CAPITAL LETTER I WITH BREVE */
    /* U+012D */	'i',       	/* LATIN SMALL LETTER I WITH BREVE */
    /* U+012E */	'I',       	/* LATIN CAPITAL LETTER I WITH OGONEK */
    /* U+012F */	'i',       	/* LATIN SMALL LETTER I WITH OGONEK */
    /* U+0130 */	'I',       	/* LATIN CAPITAL LETTER I WITH DOT ABOVE */
    /* U+0131 */	'i',       	/* LATIN SMALL LETTER DOTLESS I */
    /* U+0132 */	BAD_CHAR,  	/* LATIN CAPITAL LIGATURE IJ */
    /* U+0133 */	BAD_CHAR,  	/* LATIN SMALL LIGATURE IJ */
    /* U+0134 */	'J',       	/* LATIN CAPITAL LETTER J WITH CIRCUMFLEX */
    /* U+0135 */	'j',       	/* LATIN SMALL LETTER J WITH CIRCUMFLEX */
    /* U+0136 */	'K',       	/* LATIN CAPITAL LETTER K WITH CEDILLA */
    /* U+0137 */	'k',       	/* LATIN SMALL LETTER K WITH CEDILLA */
    /* U+0138 */	'k',       	/* LATIN SMALL LETTER KRA */
    /* U+0139 */	'K',       	/* LATIN CAPITAL LETTER L WITH ACUTE */
    /* U+013A */	'l',       	/* LATIN SMALL LETTER L WITH ACUTE */
    /* U+013B */	'L',       	/* LATIN CAPITAL LETTER L WITH CEDILLA */
    /* U+013C */	'l',       	/* LATIN SMALL LETTER L WITH CEDILLA */
    /* U+013D */	'L',       	/* LATIN CAPITAL LETTER L WITH CARON */
    /* U+013E */	'l',       	/* LATIN SMALL LETTER L WITH CARON */
    /* U+013F */	'L',       	/* LATIN CAPITAL LETTER L WITH MIDDLE DOT */
    /* U+0140 */	'l',       	/* LATIN SMALL LETTER L WITH MIDDLE DOT */
    /* U+0141 */	'L',       	/* LATIN CAPITAL LETTER L WITH STROKE */
    /* U+0142 */	'l',       	/* LATIN SMALL LETTER L WITH STROKE */
    /* U+0143 */	'N',       	/* LATIN CAPITAL LETTER N WITH ACUTE */
    /* U+0144 */	'n',       	/* LATIN SMALL LETTER N WITH ACUTE */
    /* U+0145 */	'N',       	/* LATIN CAPITAL LETTER N WITH CEDILLA */
    /* U+0146 */	'n',       	/* LATIN SMALL LETTER N WITH CEDILLA */
    /* U+0147 */	'N',       	/* LATIN CAPITAL LETTER N WITH CARON */
    /* U+0148 */	'n',       	/* LATIN SMALL LETTER N WITH CARON */
    /* U+0149 */	'n',       	/* LATIN SMALL LETTER N PRECEDED BY APOSTROPHE */
    /* U+014A */	'N',       	/* LATIN CAPITAL LETTER ENG */
    /* U+014B */	'n',       	/* LATIN SMALL LETTER ENG */
    /* U+014C */	'O',       	/* LATIN CAPITAL LETTER O WITH MACRON */
    /* U+014D */	'o',       	/* LATIN SMALL LETTER O WITH MACRON */
    /* U+014E */	'O',       	/* LATIN CAPITAL LETTER O WITH BREVE */
    /* U+014F */	'o',       	/* LATIN SMALL LETTER O WITH BREVE */
    /* U+0150 */	'O',       	/* LATIN CAPITAL LETTER O WITH DOUBLE ACUTE */
    /* U+0151 */	'o',       	/* LATIN SMALL LETTER O WITH DOUBLE ACUTE */
    /* U+0152 */	'O',       	/* LATIN CAPITAL LIGATURE OE */
    /* U+0153 */	'o',       	/* LATIN SMALL LIGATURE OE */
    /* U+0154 */	'R',       	/* LATIN CAPITAL LETTER R WITH ACUTE */
    /* U+0155 */	'r',       	/* LATIN SMALL LETTER R WITH ACUTE */
    /* U+0156 */	'R',       	/* LATIN CAPITAL LETTER R WITH CEDILLA */
    /* U+0157 */	'r',       	/* LATIN SMALL LETTER R WITH CEDILLA */
    /* U+0158 */	'R',       	/* LATIN CAPITAL LETTER R WITH CARON */
    /* U+0159 */	'r',       	/* LATIN SMALL LETTER R WITH CARON */
    /* U+015A */	'S',       	/* LATIN CAPITAL LETTER S WITH ACUTE */
    /* U+015B */	's',       	/* LATIN SMALL LETTER S WITH ACUTE */
    /* U+015C */	'S',       	/* LATIN CAPITAL LETTER S WITH CIRCUMFLEX */
    /* U+015D */	's',       	/* LATIN SMALL LETTER S WITH CIRCUMFLEX */
    /* U+015E */	'S',       	/* LATIN CAPITAL LETTER S WITH CEDILLA */
    /* U+015F */	's',       	/* LATIN SMALL LETTER S WITH CEDILLA */
    /* U+0160 */	'S',       	/* LATIN CAPITAL LETTER S WITH CARON */
    /* U+0161 */	's',       	/* LATIN SMALL LETTER S WITH CARON */
    /* U+0162 */	'T',       	/* LATIN CAPITAL LETTER T WITH CEDILLA */
    /* U+0163 */	't',       	/* LATIN SMALL LETTER T WITH CEDILLA */
    /* U+0164 */	'T',       	/* LATIN CAPITAL LETTER T WITH CARON */
    /* U+0165 */	't',       	/* LATIN SMALL LETTER T WITH CARON */
    /* U+0166 */	'T',       	/* LATIN CAPITAL LETTER T WITH STROKE */
    /* U+0167 */	't',       	/* LATIN SMALL LETTER T WITH STROKE */
    /* U+0168 */	'U',       	/* LATIN CAPITAL LETTER U WITH TILDE */
    /* U+0169 */	'u',       	/* LATIN SMALL LETTER U WITH TILDE */
    /* U+016A */	'U',       	/* LATIN CAPITAL LETTER U WITH MACRON */
    /* U+016B */	'u',       	/* LATIN SMALL LETTER U WITH MACRON */
    /* U+016C */	'U',       	/* LATIN CAPITAL LETTER U WITH BREVE */
    /* U+016D */	'u',       	/* LATIN SMALL LETTER U WITH BREVE */
    /* U+016E */	'U',       	/* LATIN CAPITAL LETTER U WITH RING ABOVE */
    /* U+016F */	'u',       	/* LATIN SMALL LETTER U WITH RING ABOVE */
    /* U+0170 */	'U',       	/* LATIN CAPITAL LETTER U WITH DOUBLE ACUTE */
    /* U+0171 */	'u',       	/* LATIN SMALL LETTER U WITH DOUBLE ACUTE */
    /* U+0172 */	'U',       	/* LATIN CAPITAL LETTER U WITH OGONEK */
    /* U+0173 */	'u',       	/* LATIN SMALL LETTER U WITH OGONEK */
    /* U+0174 */	'W',       	/* LATIN CAPITAL LETTER W WITH CIRCUMFLEX */
    /* U+0175 */	'w',       	/* LATIN SMALL LETTER W WITH CIRCUMFLEX */
    /* U+0176 */	'Y',       	/* LATIN CAPITAL LETTER Y WITH CIRCUMFLEX */
    /* U+0177 */	'y',       	/* LATIN SMALL LETTER Y WITH CIRCUMFLEX */
    /* U+0178 */	'Y',       	/* LATIN CAPITAL LETTER Y WITH DIAERESIS */
    /* U+0179 */	'Z',       	/* LATIN CAPITAL LETTER Z WITH ACUTE */
    /* U+017A */	'z',       	/* LATIN SMALL LETTER Z WITH ACUTE */
    /* U+017B */	'Z',       	/* LATIN CAPITAL LETTER Z WITH DOT ABOVE */
    /* U+017C */	'z',       	/* LATIN SMALL LETTER Z WITH DOT ABOVE */
    /* U+017D */	'Z',       	/* LATIN CAPITAL LETTER Z WITH CARON */
    /* U+017E */	'z',       	/* LATIN SMALL LETTER Z WITH CARON */
    /* U+017F */	's',       	/* LATIN SMALL LETTER LONG S */
    /* U+0180 */	'b',       	/* LATIN SMALL LETTER B WITH STROKE */
    /* U+0181 */	'B',       	/* LATIN CAPITAL LETTER B WITH HOOK */
    /* U+0182 */	'B',       	/* LATIN CAPITAL LETTER B WITH TOPBAR */
    /* U+0183 */	'b',       	/* LATIN SMALL LETTER B WITH TOPBAR */
    /* U+0184 */	'6',       	/* LATIN CAPITAL LETTER TONE SIX */
    /* U+0185 */	'6',       	/* LATIN SMALL LETTER TONE SIX */
    /* U+0186 */	'O',       	/* LATIN CAPITAL LETTER OPEN O */
    /* U+0187 */	'C',       	/* LATIN CAPITAL LETTER C WITH HOOK */
    /* U+0188 */	'C',       	/* LATIN SMALL LETTER C WITH HOOK */
    /* U+0189 */	'D',       	/* LATIN CAPITAL LETTER AFRICAN D */
    /* U+018A */	'D',       	/* LATIN CAPITAL LETTER D WITH HOOK */
    /* U+018B */	'D',       	/* LATIN CAPITAL LETTER D WITH TOPBAR */
    /* U+018C */	'd',       	/* LATIN SMALL LETTER D WITH TOPBAR */
    /* U+018D */	'd',       	/* LATIN SMALL LETTER TURNED DELTA */
    /* U+018E */	'E',       	/* LATIN CAPITAL LETTER REVERSED E */
    /* U+018F */	'E',       	/* LATIN CAPITAL LETTER SCHWA */
    /* U+0190 */	'E',       	/* LATIN CAPITAL LETTER OPEN E */
    /* U+0191 */	'F',       	/* LATIN CAPITAL LETTER F WITH HOOK */
    /* U+0192 */	'f',       	/* LATIN SMALL LETTER F WITH HOOK */
    /* U+0193 */	'G',       	/* LATIN CAPITAL LETTER G WITH HOOK */
    /* U+0194 */	'G',       	/* LATIN CAPITAL LETTER GAMMA */
    /* U+0195 */	'h',       	/* LATIN SMALL LETTER HV */
    /* U+0196 */	'i',       	/* LATIN CAPITAL LETTER IOTA */
    /* U+0197 */	'I',       	/* LATIN CAPITAL LETTER I WITH STROKE */
    /* U+0198 */	'K',       	/* LATIN CAPITAL LETTER K WITH HOOK */
    /* U+0199 */	'k',       	/* LATIN SMALL LETTER K WITH HOOK */
    /* U+019A */	'l',       	/* LATIN SMALL LETTER L WITH BAR */
    /* U+019B */	'l',       	/* LATIN SMALL LETTER LAMBDA WITH STROKE */
    /* U+019C */	'M',       	/* LATIN CAPITAL LETTER TURNED M */
    /* U+019D */	'N',       	/* LATIN CAPITAL LETTER N WITH LEFT HOOK */
    /* U+019E */	'n',       	/* LATIN SMALL LETTER N WITH LONG RIGHT LEG */
    /* U+019F */	'O',       	/* LATIN CAPITAL LETTER O WITH MIDDLE TILDE */
    /* U+01A0 */	'O',       	/* LATIN CAPITAL LETTER O WITH HORN */
    /* U+01A1 */	'o',       	/* LATIN SMALL LETTER O WITH HORN */
    /* U+01A2 */	'O',       	/* LATIN CAPITAL LETTER OI */
    /* U+01A3 */	'o',       	/* LATIN SMALL LETTER OI */
    /* U+01A4 */	'P',       	/* LATIN CAPITAL LETTER P WITH HOOK */
    /* U+01A5 */	'p',       	/* LATIN SMALL LETTER P WITH HOOK */
    /* U+01A6 */	'k',       	/* LATIN LETTER YR */
    /* U+01A7 */	'S',       	/* LATIN CAPITAL LETTER TONE TWO */
    /* U+01A8 */	's',       	/* LATIN SMALL LETTER TONE TWO */
    /* U+01A9 */	'E',       	/* LATIN CAPITAL LETTER ESH */
    /* U+01AA */	'e',       	/* LATIN LETTER REVERSED ESH LOOP */
    /* U+01AB */	't',       	/* LATIN SMALL LETTER T WITH PALATAL HOOK */
    /* U+01AC */	'T',       	/* LATIN CAPITAL LETTER T WITH HOOK */
    /* U+01AD */	't',       	/* LATIN SMALL LETTER T WITH HOOK */
    /* U+01AE */	'T',       	/* LATIN CAPITAL LETTER T WITH RETROFLEX HOOK */
    /* U+01AF */	'U',       	/* LATIN CAPITAL LETTER U WITH HORN */
    /* U+01B0 */	'u',       	/* LATIN SMALL LETTER U WITH HORN */
    /* U+01B1 */	'U',       	/* LATIN CAPITAL LETTER UPSILON */
    /* U+01B2 */	'V',       	/* LATIN CAPITAL LETTER V WITH HOOK */
    /* U+01B3 */	'Y',       	/* LATIN CAPITAL LETTER Y WITH HOOK */
    /* U+01B4 */	'y',       	/* LATIN SMALL LETTER Y WITH HOOK */
    /* U+01B5 */	'Z',       	/* LATIN CAPITAL LETTER Z WITH STROKE */
    /* U+01B6 */	'z',       	/* LATIN SMALL LETTER Z WITH STROKE */
    /* U+01B7 */	'E',       	/* LATIN CAPITAL LETTER EZH */
    /* U+01B8 */	'e',       	/* LATIN CAPITAL LETTER EZH REVERSED */
    /* U+01B9 */	'e',       	/* LATIN SMALL LETTER EZH REVERSED */
    /* U+01BA */	'e',       	/* LATIN SMALL LETTER EZH WITH TAIL */
    /* U+01BB */	'2',       	/* LATIN LETTER TWO WITH STROKE */
    /* U+01BC */	'5',       	/* LATIN CAPITAL LETTER TONE FIVE */
    /* U+01BD */	'5',       	/* LATIN SMALL LETTER TONE FIVE */
    /* U+01BE */	's',       	/* LATIN LETTER INVERTED GLOTTAL STOP WITH STROKE */
    /* U+01BF */	'p',       	/* LATIN LETTER WYNN */
    /* U+01C0 */	BAD_CHAR,  	/* LATIN LETTER DENTAL CLICK */
    /* U+01C1 */	BAD_CHAR,  	/* LATIN LETTER LATERAL CLICK */
    /* U+01C2 */	BAD_CHAR,  	/* LATIN LETTER ALVEOLAR CLICK */
    /* U+01C3 */	BAD_CHAR,  	/* LATIN LETTER RETROFLEX CLICK */
    /* U+01C4 */	BAD_CHAR,  	/* LATIN CAPITAL LETTER DZ WITH CARON */
    /* U+01C5 */	BAD_CHAR,  	/* LATIN CAPITAL LETTER D WITH SMALL LETTER Z WITH CARON */
    /* U+01C6 */	BAD_CHAR,  	/* LATIN SMALL LETTER DZ WITH CARON */
    /* U+01C7 */	BAD_CHAR,  	/* LATIN CAPITAL LETTER LJ */
    /* U+01C8 */	BAD_CHAR,  	/* LATIN CAPITAL LETTER L WITH SMALL LETTER J */
    /* U+01C9 */	BAD_CHAR,  	/* LATIN SMALL LETTER LJ */
    /* U+01CA */	BAD_CHAR,  	/* LATIN CAPITAL LETTER NJ */
    /* U+01CB */	BAD_CHAR,  	/* LATIN CAPITAL LETTER N WITH SMALL LETTER J */
    /* U+01CC */	BAD_CHAR,  	/* LATIN SMALL LETTER NJ */
    /* U+01CD */	'A',       	/* LATIN CAPITAL LETTER A WITH CARON */
    /* U+01CE */	'a',       	/* LATIN SMALL LETTER A WITH CARON */
    /* U+01CF */	'I',       	/* LATIN CAPITAL LETTER I WITH CARON */
    /* U+01D0 */	'i',       	/* LATIN SMALL LETTER I WITH CARON */
    /* U+01D1 */	'O',       	/* LATIN CAPITAL LETTER O WITH CARON */
    /* U+01D2 */	'o',       	/* LATIN SMALL LETTER O WITH CARON */
    /* U+01D3 */	'U',       	/* LATIN CAPITAL LETTER U WITH CARON */
    /* U+01D4 */	'u',       	/* LATIN SMALL LETTER U WITH CARON */
    /* U+01D5 */	'U',       	/* LATIN CAPITAL LETTER U WITH DIAERESIS AND MACRON */
    /* U+01D6 */	'u',       	/* LATIN SMALL LETTER U WITH DIAERESIS AND MACRON */
    /* U+01D7 */	'U',       	/* LATIN CAPITAL LETTER U WITH DIAERESIS AND ACUTE */
    /* U+01D8 */	'u',       	/* LATIN SMALL LETTER U WITH DIAERESIS AND ACUTE */
    /* U+01D9 */	'U',       	/* LATIN CAPITAL LETTER U WITH DIAERESIS AND CARON */
    /* U+01DA */	'u',       	/* LATIN SMALL LETTER U WITH DIAERESIS AND CARON */
    /* U+01DB */	'U',       	/* LATIN CAPITAL LETTER U WITH DIAERESIS AND GRAVE */
    /* U+01DC */	'u',       	/* LATIN SMALL LETTER U WITH DIAERESIS AND GRAVE */
    /* U+01DD */	'e',       	/* LATIN SMALL LETTER TURNED E */
    /* U+01DE */	'A',       	/* LATIN CAPITAL LETTER A WITH DIAERESIS AND MACRON */
    /* U+01DF */	'a',       	/* LATIN SMALL LETTER A WITH DIAERESIS AND MACRON */
    /* U+01E0 */	'A',       	/* LATIN CAPITAL LETTER A WITH DOT ABOVE AND MACRON */
    /* U+01E1 */	'a',       	/* LATIN SMALL LETTER A WITH DOT ABOVE AND MACRON */
    /* U+01E2 */	'A',       	/* LATIN CAPITAL LETTER AE WITH MACRON */
    /* U+01E3 */	'a',       	/* LATIN SMALL LETTER AE WITH MACRON */
    /* U+01E4 */	'G',       	/* LATIN CAPITAL LETTER G WITH STROKE */
    /* U+01E5 */	'g',       	/* LATIN SMALL LETTER G WITH STROKE */
    /* U+01E6 */	'G',       	/* LATIN CAPITAL LETTER G WITH CARON */
    /* U+01E7 */	'g',       	/* LATIN SMALL LETTER G WITH CARON */
    /* U+01E8 */	'K',       	/* LATIN CAPITAL LETTER K WITH CARON */
    /* U+01E9 */	'k',       	/* LATIN SMALL LETTER K WITH CARON */
    /* U+01EA */	'O',       	/* LATIN CAPITAL LETTER O WITH OGONEK */
    /* U+01EB */	'o',       	/* LATIN SMALL LETTER O WITH OGONEK */
    /* U+01EC */	'O',       	/* LATIN CAPITAL LETTER O WITH OGONEK AND MACRON */
    /* U+01ED */	'o',       	/* LATIN SMALL LETTER O WITH OGONEK AND MACRON */
    /* U+01EE */	'E',       	/* LATIN CAPITAL LETTER EZH WITH CARON */
    /* U+01EF */	'e',       	/* LATIN SMALL LETTER EZH WITH CARON */
    /* U+01F0 */	'j',       	/* LATIN SMALL LETTER J WITH CARON */
    /* U+01F1 */	BAD_CHAR,  	/* LATIN CAPITAL LETTER DZ */
    /* U+01F2 */	BAD_CHAR,  	/* LATIN CAPITAL LETTER D WITH SMALL LETTER Z */
    /* U+01F3 */	BAD_CHAR,  	/* LATIN SMALL LETTER DZ */
    /* U+01F4 */	'G',       	/* LATIN CAPITAL LETTER G WITH ACUTE */
    /* U+01F5 */	'g',       	/* LATIN SMALL LETTER G WITH ACUTE */
    /* U+01F6 */	'H',       	/* LATIN CAPITAL LETTER HWAIR */
    /* U+01F7 */	'P',       	/* LATIN CAPITAL LETTER WYNN */
    /* U+01F8 */	'N',       	/* LATIN CAPITAL LETTER N WITH GRAVE */
    /* U+01F9 */	'n',       	/* LATIN SMALL LETTER N WITH GRAVE */
    /* U+01FA */	'A',       	/* LATIN CAPITAL LETTER A WITH RING ABOVE AND ACUTE */
    /* U+01FB */	'a',       	/* LATIN SMALL LETTER A WITH RING ABOVE AND ACUTE */
    /* U+01FC */	'A',       	/* LATIN CAPITAL LETTER AE WITH ACUTE */
    /* U+01FD */	'a',       	/* LATIN SMALL LETTER AE WITH ACUTE */
    /* U+01FE */	'O',       	/* LATIN CAPITAL LETTER O WITH STROKE AND ACUTE */
    /* U+01FF */	'o',       	/* LATIN SMALL LETTER O WITH STROKE AND ACUTE */
    /* U+0200 */	'A',       	/* LATIN CAPITAL LETTER A WITH DOUBLE GRAVE */
    /* U+0201 */	'a',       	/* LATIN SMALL LETTER A WITH DOUBLE GRAVE */
    /* U+0202 */	'A',       	/* LATIN CAPITAL LETTER A WITH INVERTED BREVE */
    /* U+0203 */	'a',       	/* LATIN SMALL LETTER A WITH INVERTED BREVE */
    /* U+0204 */	'E',       	/* LATIN CAPITAL LETTER E WITH DOUBLE GRAVE */
    /* U+0205 */	'e',       	/* LATIN SMALL LETTER E WITH DOUBLE GRAVE */
    /* U+0206 */	'E',       	/* LATIN CAPITAL LETTER E WITH INVERTED BREVE */
    /* U+0207 */	'e',       	/* LATIN SMALL LETTER E WITH INVERTED BREVE */
    /* U+0208 */	'I',       	/* LATIN CAPITAL LETTER I WITH DOUBLE GRAVE */
    /* U+0209 */	'i',       	/* LATIN SMALL LETTER I WITH DOUBLE GRAVE */
    /* U+020A */	'I',       	/* LATIN CAPITAL LETTER I WITH INVERTED BREVE */
    /* U+020B */	'i',       	/* LATIN SMALL LETTER I WITH INVERTED BREVE */
    /* U+020C */	'O',       	/* LATIN CAPITAL LETTER O WITH DOUBLE GRAVE */
    /* U+020D */	'o',       	/* LATIN SMALL LETTER O WITH DOUBLE GRAVE */
    /* U+020E */	'O',       	/* LATIN CAPITAL LETTER O WITH INVERTED BREVE */
    /* U+020F */	'o',       	/* LATIN SMALL LETTER O WITH INVERTED BREVE */
    /* U+0210 */	'R',       	/* LATIN CAPITAL LETTER R WITH DOUBLE GRAVE */
    /* U+0211 */	'r',       	/* LATIN SMALL LETTER R WITH DOUBLE GRAVE */
    /* U+0212 */	'R',       	/* LATIN CAPITAL LETTER R WITH INVERTED BREVE */
    /* U+0213 */	'r',       	/* LATIN SMALL LETTER R WITH INVERTED BREVE */
    /* U+0214 */	'U',       	/* LATIN CAPITAL LETTER U WITH DOUBLE GRAVE */
    /* U+0215 */	'u',       	/* LATIN SMALL LETTER U WITH DOUBLE GRAVE */
    /* U+0216 */	'U',       	/* LATIN CAPITAL LETTER U WITH INVERTED BREVE */
    /* U+0217 */	'u',       	/* LATIN SMALL LETTER U WITH INVERTED BREVE */
    /* U+0218 */	'S',       	/* LATIN CAPITAL LETTER S WITH COMMA BELOW */
    /* U+0219 */	's',       	/* LATIN SMALL LETTER S WITH COMMA BELOW */
    /* U+021A */	'T',       	/* LATIN CAPITAL LETTER T WITH COMMA BELOW */
    /* U+021B */	't',       	/* LATIN SMALL LETTER T WITH COMMA BELOW */
    /* U+021C */	'3',       	/* LATIN CAPITAL LETTER YOGH */
    /* U+021D */	'3',       	/* LATIN SMALL LETTER YOGH */
    /* U+021E */	'H',       	/* LATIN CAPITAL LETTER H WITH CARON */
    /* U+021F */	'h',       	/* LATIN SMALL LETTER H WITH CARON */
    /* U+0220 */	'N',       	/* LATIN CAPITAL LETTER N WITH LONG RIGHT LEG */
    /* U+0221 */	'd',       	/* LATIN SMALL LETTER D WITH CURL */
    /* U+0222 */	BAD_CHAR,  	/* LATIN CAPITAL LETTER OU */
    /* U+0223 */	BAD_CHAR,  	/* LATIN SMALL LETTER OU */
    /* U+0224 */	'Z',       	/* LATIN CAPITAL LETTER Z WITH HOOK */
    /* U+0225 */	'z',       	/* LATIN SMALL LETTER Z WITH HOOK */
    /* U+0226 */	'A',       	/* LATIN CAPITAL LETTER A WITH DOT ABOVE */
    /* U+0227 */	'a',       	/* LATIN SMALL LETTER A WITH DOT ABOVE */
    /* U+0228 */	'E',       	/* LATIN CAPITAL LETTER E WITH CEDILLA */
    /* U+0229 */	'e',       	/* LATIN SMALL LETTER E WITH CEDILLA */
    /* U+022A */	'O',       	/* LATIN CAPITAL LETTER O WITH DIAERESIS AND MACRON */
    /* U+022B */	'o',       	/* LATIN SMALL LETTER O WITH DIAERESIS AND MACRON */
    /* U+022C */	'O',       	/* LATIN CAPITAL LETTER O WITH TILDE AND MACRON */
    /* U+022D */	'o',       	/* LATIN SMALL LETTER O WITH TILDE AND MACRON */
    /* U+022E */	'O',       	/* LATIN CAPITAL LETTER O WITH DOT ABOVE */
    /* U+022F */	'o',       	/* LATIN SMALL LETTER O WITH DOT ABOVE */
    /* U+0230 */	'O',       	/* LATIN CAPITAL LETTER O WITH DOT ABOVE AND MACRON */
    /* U+0231 */	'o',       	/* LATIN SMALL LETTER O WITH DOT ABOVE AND MACRON */
    /* U+0232 */	'Y',       	/* LATIN CAPITAL LETTER Y WITH MACRON */
    /* U+0233 */	'y',       	/* LATIN SMALL LETTER Y WITH MACRON */
    /* U+0234 */	'l',       	/* LATIN SMALL LETTER L WITH CURL */
    /* U+0235 */	'n',       	/* LATIN SMALL LETTER N WITH CURL */
    /* U+0236 */	't',       	/* LATIN SMALL LETTER T WITH CURL */
    /* U+0237 */	'j',       	/* LATIN SMALL LETTER DOTLESS J */
    /* U+0238 */	BAD_CHAR,  	/* LATIN SMALL LETTER DB DIGRAPH */
    /* U+0239 */	BAD_CHAR,  	/* LATIN SMALL LETTER QP DIGRAPH */
    /* U+023A */	'A',       	/* LATIN CAPITAL LETTER A WITH STROKE */
    /* U+023B */	'C',       	/* LATIN CAPITAL LETTER C WITH STROKE */
    /* U+023C */	'c',       	/* LATIN SMALL LETTER C WITH STROKE */
    /* U+023D */	'L',       	/* LATIN CAPITAL LETTER L WITH BAR */
    /* U+023E */	'T',       	/* LATIN CAPITAL LETTER T WITH DIAGONAL STROKE */
    /* U+023F */	's',       	/* LATIN SMALL LETTER S WITH SWASH TAIL */
    /* U+0240 */	'z',       	/* LATIN SMALL LETTER Z WITH SWASH TAIL */
    /* U+0241 */	BAD_CHAR,  	/* LATIN CAPITAL LETTER GLOTTAL STOP */
    /* U+0242 */	BAD_CHAR,
    /* U+0243 */	BAD_CHAR,
    /* U+0244 */	BAD_CHAR,
    /* U+0245 */	BAD_CHAR,
    /* U+0246 */	BAD_CHAR,
    /* U+0247 */	BAD_CHAR,
    /* U+0248 */	BAD_CHAR,
    /* U+0249 */	BAD_CHAR,
    /* U+024A */	BAD_CHAR,
    /* U+024B */	BAD_CHAR,
    /* U+024C */	BAD_CHAR,
    /* U+024D */	BAD_CHAR,
    /* U+024E */	BAD_CHAR,
    /* U+024F */	BAD_CHAR,
    /* U+0250 */	'a',       	/* LATIN SMALL LETTER TURNED A */
    /* U+0251 */	'a',       	/* LATIN SMALL LETTER ALPHA */
    /* U+0252 */	'a',       	/* LATIN SMALL LETTER TURNED ALPHA */
    /* U+0253 */	'b',       	/* LATIN SMALL LETTER B WITH HOOK */
    /* U+0254 */	'o',       	/* LATIN SMALL LETTER OPEN O */
    /* U+0255 */	'c',       	/* LATIN SMALL LETTER C WITH CURL */
    /* U+0256 */	'd',       	/* LATIN SMALL LETTER D WITH TAIL */
    /* U+0257 */	'd',       	/* LATIN SMALL LETTER D WITH HOOK */
    /* U+0258 */	'e',       	/* LATIN SMALL LETTER REVERSED E */
    /* U+0259 */	'e',       	/* LATIN SMALL LETTER SCHWA */
    /* U+025A */	'e',       	/* LATIN SMALL LETTER SCHWA WITH HOOK */
    /* U+025B */	'e',       	/* LATIN SMALL LETTER OPEN E */
    /* U+025C */	'e',       	/* LATIN SMALL LETTER REVERSED OPEN E */
    /* U+025D */	'e',       	/* LATIN SMALL LETTER REVERSED OPEN E WITH HOOK */
    /* U+025E */	'e',       	/* LATIN SMALL LETTER CLOSED REVERSED OPEN E */
    /* U+025F */	'j',       	/* LATIN SMALL LETTER DOTLESS J WITH STROKE */
    /* U+0260 */	'g',       	/* LATIN SMALL LETTER G WITH HOOK */
    /* U+0261 */	'g',       	/* LATIN SMALL LETTER SCRIPT G */
    /* U+0262 */	'G',       	/* LATIN LETTER SMALL CAPITAL G */
    /* U+0263 */	'g',       	/* LATIN SMALL LETTER GAMMA */
    /* U+0264 */	BAD_CHAR,  	/* LATIN SMALL LETTER RAMS HORN */
    /* U+0265 */	'h',       	/* LATIN SMALL LETTER TURNED H */
    /* U+0266 */	'h',       	/* LATIN SMALL LETTER H WITH HOOK */
    /* U+0267 */	'h',       	/* LATIN SMALL LETTER HENG WITH HOOK */
    /* U+0268 */	'i',       	/* LATIN SMALL LETTER I WITH STROKE */
    /* U+0269 */	'i',       	/* LATIN SMALL LETTER IOTA */
    /* U+026A */	'I',       	/* LATIN LETTER SMALL CAPITAL I */
    /* U+026B */	'l',       	/* LATIN SMALL LETTER L WITH MIDDLE TILDE */
    /* U+026C */	'l',       	/* LATIN SMALL LETTER L WITH BELT */
    /* U+026D */	'l',       	/* LATIN SMALL LETTER L WITH RETROFLEX HOOK */
    /* U+026E */	BAD_CHAR,  	/* LATIN SMALL LETTER LEZH */
    /* U+026F */	'm',       	/* LATIN SMALL LETTER TURNED M */
    /* U+0270 */	'm',       	/* LATIN SMALL LETTER TURNED M WITH LONG LEG */
    /* U+0271 */	'm',       	/* LATIN SMALL LETTER M WITH HOOK */
    /* U+0272 */	'n',       	/* LATIN SMALL LETTER N WITH LEFT HOOK */
    /* U+0273 */	'n',       	/* LATIN SMALL LETTER N WITH RETROFLEX HOOK */
    /* U+0274 */	'N',       	/* LATIN LETTER SMALL CAPITAL N */
    /* U+0275 */	'o',       	/* LATIN SMALL LETTER BARRED O */
    /* U+0276 */	BAD_CHAR,  	/* LATIN LETTER SMALL CAPITAL OE */
    /* U+0277 */	BAD_CHAR,  	/* LATIN SMALL LETTER CLOSED OMEGA */
    /* U+0278 */	BAD_CHAR,  	/* LATIN SMALL LETTER PHI */
    /* U+0279 */	'r',       	/* LATIN SMALL LETTER TURNED R */
    /* U+027A */	'r',       	/* LATIN SMALL LETTER TURNED R WITH LONG LEG */
    /* U+027B */	'r',       	/* LATIN SMALL LETTER TURNED R WITH HOOK */
    /* U+027C */	'r',       	/* LATIN SMALL LETTER R WITH LONG LEG */
    /* U+027D */	'r',       	/* LATIN SMALL LETTER R WITH TAIL */
    /* U+027E */	'r',       	/* LATIN SMALL LETTER R WITH FISHHOOK */
    /* U+027F */	'r',       	/* LATIN SMALL LETTER REVERSED R WITH FISHHOOK */
    /* U+0280 */	'R',       	/* LATIN LETTER SMALL CAPITAL R */
    /* U+0281 */	'R',       	/* LATIN LETTER SMALL CAPITAL INVERTED R */
    /* U+0282 */	's',       	/* LATIN SMALL LETTER S WITH HOOK */
    /* U+0283 */	's',       	/* LATIN SMALL LETTER ESH */
    /* U+0284 */	's',       	/* LATIN SMALL LETTER DOTLESS J WITH STROKE AND HOOK */
    /* U+0285 */	's',       	/* LATIN SMALL LETTER SQUAT REVERSED ESH */
    /* U+0286 */	's',       	/* LATIN SMALL LETTER ESH WITH CURL */
    /* U+0287 */	't',       	/* LATIN SMALL LETTER TURNED T */
    /* U+0288 */	't',       	/* LATIN SMALL LETTER T WITH RETROFLEX HOOK */
    /* U+0289 */	'u',       	/* LATIN SMALL LETTER U BAR */
    /* U+028A */	'u',       	/* LATIN SMALL LETTER UPSILON */
    /* U+028B */	'v',       	/* LATIN SMALL LETTER V WITH HOOK */
    /* U+028C */	'v',       	/* LATIN SMALL LETTER TURNED V */
    /* U+028D */	'w',       	/* LATIN SMALL LETTER TURNED W */
    /* U+028E */	'y',       	/* LATIN SMALL LETTER TURNED Y */
    /* U+028F */	'Y',       	/* LATIN LETTER SMALL CAPITAL Y */
    /* U+0290 */	'z',       	/* LATIN SMALL LETTER Z WITH RETROFLEX HOOK */
    /* U+0291 */	'z',       	/* LATIN SMALL LETTER Z WITH CURL */
    /* U+0292 */	'3',       	/* LATIN SMALL LETTER EZH */
    /* U+0293 */	'3',       	/* LATIN SMALL LETTER EZH WITH CURL */
    /* U+0294 */	'?',       	/* LATIN LETTER GLOTTAL STOP */
    /* U+0295 */	BAD_CHAR,  	/* LATIN LETTER PHARYNGEAL VOICED FRICATIVE */
    /* U+0296 */	BAD_CHAR,  	/* LATIN LETTER INVERTED GLOTTAL STOP */
    /* U+0297 */	'C',       	/* LATIN LETTER STRETCHED C */
    /* U+0298 */	BAD_CHAR,  	/* LATIN LETTER BILABIAL CLICK */
    /* U+0299 */	'B',       	/* LATIN LETTER SMALL CAPITAL B */
    /* U+029A */	'e',       	/* LATIN SMALL LETTER CLOSED OPEN E */
    /* U+029B */	'g',       	/* LATIN LETTER SMALL CAPITAL G WITH HOOK */
    /* U+029C */	'H',       	/* LATIN LETTER SMALL CAPITAL H */
    /* U+029D */	'j',       	/* LATIN SMALL LETTER J WITH CROSSED-TAIL */
    /* U+029E */	'k',       	/* LATIN SMALL LETTER TURNED K */
    /* U+029F */	'L',       	/* LATIN LETTER SMALL CAPITAL L */
    /* U+02A0 */	'q',       	/* LATIN SMALL LETTER Q WITH HOOK */
    /* U+02A1 */	'?',       	/* LATIN LETTER GLOTTAL STOP WITH STROKE */
    /* U+02A2 */	BAD_CHAR,  	/* LATIN LETTER REVERSED GLOTTAL STOP WITH STROKE */
    /* U+02A3 */	BAD_CHAR,  	/* LATIN SMALL LETTER DZ DIGRAPH */
    /* U+02A4 */	BAD_CHAR,  	/* LATIN SMALL LETTER DEZH DIGRAPH */
    /* U+02A5 */	BAD_CHAR,  	/* LATIN SMALL LETTER DZ DIGRAPH WITH CURL */
    /* U+02A6 */	BAD_CHAR,  	/* LATIN SMALL LETTER TS DIGRAPH */
    /* U+02A7 */	BAD_CHAR,  	/* LATIN SMALL LETTER TESH DIGRAPH */
    /* U+02A8 */	BAD_CHAR,  	/* LATIN SMALL LETTER TC DIGRAPH WITH CURL */
    /* U+02A9 */	BAD_CHAR,  	/* LATIN SMALL LETTER FENG DIGRAPH */
    /* U+02AA */	BAD_CHAR,  	/* LATIN SMALL LETTER LS DIGRAPH */
    /* U+02AB */	BAD_CHAR,  	/* LATIN SMALL LETTER LZ DIGRAPH */
    /* U+02AC */	BAD_CHAR,  	/* LATIN LETTER BILABIAL PERCUSSIVE */
    /* U+02AD */	BAD_CHAR,  	/* LATIN LETTER BIDENTAL PERCUSSIVE */
    /* U+02AE */	'h',       	/* LATIN SMALL LETTER TURNED H WITH FISHHOOK */
    /* U+02AF */	'h',       	/* LATIN SMALL LETTER TURNED H WITH FISHHOOK AND TAIL */
    /* U+02B0 */	'h',       	/* MODIFIER LETTER SMALL H */
    /* U+02B1 */	'h',       	/* MODIFIER LETTER SMALL H WITH HOOK */
    /* U+02B2 */	'j',       	/* MODIFIER LETTER SMALL J */
    /* U+02B3 */	'r',       	/* MODIFIER LETTER SMALL R */
    /* U+02B4 */	'r',       	/* MODIFIER LETTER SMALL TURNED R */
    /* U+02B5 */	'r',       	/* MODIFIER LETTER SMALL TURNED R WITH HOOK */
    /* U+02B6 */	'R',       	/* MODIFIER LETTER SMALL CAPITAL INVERTED R */
    /* U+02B7 */	'w',       	/* MODIFIER LETTER SMALL W */
    /* U+02B8 */	'y',       	/* MODIFIER LETTER SMALL Y */
    /* U+02B9 */	'\'',      	/* MODIFIER LETTER PRIME */
    /* U+02BA */	'"',       	/* MODIFIER LETTER DOUBLE PRIME */
    /* U+02BB */	'`',       	/* MODIFIER LETTER TURNED COMMA */
    /* U+02BC */	'\'',      	/* MODIFIER LETTER APOSTROPHE */
    /* U+02BD */	'`',       	/* MODIFIER LETTER REVERSED COMMA */
    /* U+02BE */	'\'',      	/* MODIFIER LETTER RIGHT HALF RING */
    /* U+02BF */	'`',       	/* MODIFIER LETTER LEFT HALF RING */
    /* U+02C0 */	BAD_CHAR,  	/* MODIFIER LETTER GLOTTAL STOP */
    /* U+02C1 */	BAD_CHAR,  	/* MODIFIER LETTER REVERSED GLOTTAL STOP */
    /* U+02C2 */	'<',       	/* MODIFIER LETTER LEFT ARROWHEAD */
    /* U+02C3 */	'>',       	/* MODIFIER LETTER RIGHT ARROWHEAD */
    /* U+02C4 */	'^',       	/* MODIFIER LETTER UP ARROWHEAD */
    /* U+02C5 */	'v',       	/* MODIFIER LETTER DOWN ARROWHEAD */
    /* U+02C6 */	'^',       	/* MODIFIER LETTER CIRCUMFLEX ACCENT */
    /* U+02C7 */	'v',       	/* CARON */
    /* U+02C8 */	BAD_CHAR,  	/* MODIFIER LETTER VERTICAL LINE */
    /* U+02C9 */	BAD_CHAR,  	/* MODIFIER LETTER MACRON */
    /* U+02CA */	'\'',      	/* MODIFIER LETTER ACUTE ACCENT */
    /* U+02CB */	'`',       	/* MODIFIER LETTER GRAVE ACCENT */
    /* U+02CC */	BAD_CHAR,  	/* MODIFIER LETTER LOW VERTICAL LINE */
    /* U+02CD */	BAD_CHAR,  	/* MODIFIER LETTER LOW MACRON */
    /* U+02CE */	BAD_CHAR,  	/* MODIFIER LETTER LOW GRAVE ACCENT */
    /* U+02CF */	',',       	/* MODIFIER LETTER LOW ACUTE ACCENT */
    /* U+02D0 */	BAD_CHAR,  	/* MODIFIER LETTER TRIANGULAR COLON */
    /* U+02D1 */	BAD_CHAR,  	/* MODIFIER LETTER HALF TRIANGULAR COLON */
    /* U+02D2 */	BAD_CHAR,  	/* MODIFIER LETTER CENTRED RIGHT HALF RING */
    /* U+02D3 */	BAD_CHAR,  	/* MODIFIER LETTER CENTRED LEFT HALF RING */
    /* U+02D4 */	BAD_CHAR,  	/* MODIFIER LETTER UP TACK */
    /* U+02D5 */	BAD_CHAR,  	/* MODIFIER LETTER DOWN TACK */
    /* U+02D6 */	'+',       	/* MODIFIER LETTER PLUS SIGN */
    /* U+02D7 */	'-',       	/* MODIFIER LETTER MINUS SIGN */
    /* U+02D8 */	BAD_CHAR,  	/* BREVE */
    /* U+02D9 */	BAD_CHAR,  	/* DOT ABOVE */
    /* U+02DA */	BAD_CHAR,  	/* RING ABOVE */
    /* U+02DB */	BAD_CHAR,  	/* OGONEK */
    /* U+02DC */	'~',       	/* SMALL TILDE */
    /* U+02DD */	'"',       	/* DOUBLE ACUTE ACCENT */
    /* U+02DE */	'`',       	/* MODIFIER LETTER RHOTIC HOOK */
    /* U+02DF */	'\'',      	/* MODIFIER LETTER CROSS ACCENT */
    /* U+02E0 */	BAD_CHAR,  	/* MODIFIER LETTER SMALL GAMMA */
    /* U+02E1 */	BAD_CHAR,  	/* MODIFIER LETTER SMALL L */
    /* U+02E2 */	BAD_CHAR,  	/* MODIFIER LETTER SMALL S */
    /* U+02E3 */	BAD_CHAR,  	/* MODIFIER LETTER SMALL X */
    /* U+02E4 */	BAD_CHAR,  	/* MODIFIER LETTER SMALL REVERSED GLOTTAL STOP */
    /* U+02E5 */	BAD_CHAR,  	/* MODIFIER LETTER EXTRA-HIGH TONE BAR */
    /* U+02E6 */	BAD_CHAR,  	/* MODIFIER LETTER HIGH TONE BAR */
    /* U+02E7 */	BAD_CHAR,  	/* MODIFIER LETTER MID TONE BAR */
    /* U+02E8 */	BAD_CHAR,  	/* MODIFIER LETTER LOW TONE BAR */
    /* U+02E9 */	BAD_CHAR,  	/* MODIFIER LETTER EXTRA-LOW TONE BAR */
    /* U+02EA */	BAD_CHAR,  	/* MODIFIER LETTER YIN DEPARTING TONE MARK */
    /* U+02EB */	BAD_CHAR,  	/* MODIFIER LETTER YANG DEPARTING TONE MARK */
    /* U+02EC */	BAD_CHAR,  	/* MODIFIER LETTER VOICING */
    /* U+02ED */	BAD_CHAR,  	/* MODIFIER LETTER UNASPIRATED */
    /* U+02EE */	'"',       	/* MODIFIER LETTER DOUBLE APOSTROPHE */
    /* U+02EF */	BAD_CHAR,  	/* MODIFIER LETTER LOW DOWN ARROWHEAD */
    /* U+02F0 */	BAD_CHAR,  	/* MODIFIER LETTER LOW UP ARROWHEAD */
    /* U+02F1 */	BAD_CHAR,  	/* MODIFIER LETTER LOW LEFT ARROWHEAD */
    /* U+02F2 */	BAD_CHAR,  	/* MODIFIER LETTER LOW RIGHT ARROWHEAD */
    /* U+02F3 */	BAD_CHAR,  	/* MODIFIER LETTER LOW RING */
    /* U+02F4 */	BAD_CHAR,  	/* MODIFIER LETTER MIDDLE GRAVE ACCENT */
    /* U+02F5 */	BAD_CHAR,  	/* MODIFIER LETTER MIDDLE DOUBLE GRAVE ACCENT */
    /* U+02F6 */	BAD_CHAR,  	/* MODIFIER LETTER MIDDLE DOUBLE ACUTE ACCENT */
    /* U+02F7 */	BAD_CHAR,  	/* MODIFIER LETTER LOW TILDE */
    /* U+02F8 */	BAD_CHAR,  	/* MODIFIER LETTER RAISED COLON */
    /* U+02F9 */	BAD_CHAR,  	/* MODIFIER LETTER BEGIN HIGH TONE */
    /* U+02FA */	BAD_CHAR,  	/* MODIFIER LETTER END HIGH TONE */
    /* U+02FB */	BAD_CHAR,  	/* MODIFIER LETTER BEGIN LOW TONE */
    /* U+02FC */	BAD_CHAR,  	/* MODIFIER LETTER END LOW TONE */
    /* U+02FD */	BAD_CHAR,  	/* MODIFIER LETTER SHELF */
    /* U+02FE */	BAD_CHAR,  	/* MODIFIER LETTER OPEN SHELF */
    /* U+02FF */	BAD_CHAR,  	/* MODIFIER LETTER LOW LEFT ARROW */
    /* U+0300..U+03FF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+0400..U+04FF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+0500..U+05FF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+0600..U+06FF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+0700..U+07FF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+0800..U+08FF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+0900..U+09FF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+0A00..U+0AFF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+0B00..U+0BFF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+0C00..U+0CFF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+0D00..U+0DFF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+0E00..U+0EFF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+0F00..U+0FFF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+1000..U+10FF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+1100..U+11FF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+1200..U+12FF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+1300..U+13FF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+1400..U+14FF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+1500..U+15FF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+1600..U+16FF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+1700..U+17FF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+1800..U+18FF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+1900..U+19FF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+1A00..U+1AFF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+1B00..U+1BFF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+1C00..U+1CFF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+1D00..U+1DFF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+1E00..U+1EFF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+1F00..U+1FFF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+2000 */	BAD_CHAR,  	/* EN QUAD */
    /* U+2001 */	BAD_CHAR,  	/* EM QUAD */
    /* U+2002 */	BAD_CHAR,  	/* EN SPACE */
    /* U+2003 */	BAD_CHAR,  	/* EM SPACE */
    /* U+2004 */	BAD_CHAR,  	/* THREE-PER-EM SPACE */
    /* U+2005 */	BAD_CHAR,  	/* FOUR-PER-EM SPACE */
    /* U+2006 */	BAD_CHAR,  	/* SIX-PER-EM SPACE */
    /* U+2007 */	BAD_CHAR,  	/* FIGURE SPACE */
    /* U+2008 */	BAD_CHAR,  	/* PUNCTUATION SPACE */
    /* U+2009 */	BAD_CHAR,  	/* THIN SPACE */
    /* U+200A */	BAD_CHAR,  	/* HAIR SPACE */
    /* U+200B */	BAD_CHAR,  	/* ZERO WIDTH SPACE */
    /* U+200C */	BAD_CHAR,  	/* ZERO WIDTH NON-JOINER */
    /* U+200D */	BAD_CHAR,  	/* ZERO WIDTH JOINER */
    /* U+200E */	BAD_CHAR,  	/* LEFT-TO-RIGHT MARK */
    /* U+200F */	BAD_CHAR,  	/* RIGHT-TO-LEFT MARK */
    /* U+2010 */	'-',       	/* HYPHEN */
    /* U+2011 */	'-',       	/* NON-BREAKING HYPHEN */
    /* U+2012 */	'-',       	/* FIGURE DASH */
    /* U+2013 */	'-',       	/* EN DASH */
    /* U+2014 */	'-',       	/* EM DASH */
    /* U+2015 */	'-',       	/* HORIZONTAL BAR */
    /* U+2016 */	'|',       	/* DOUBLE VERTICAL LINE */
    /* U+2017 */	'_',       	/* DOUBLE LOW LINE */
    /* U+2018 */	'`',       	/* LEFT SINGLE QUOTATION MARK */
    /* U+2019 */	'\'',      	/* RIGHT SINGLE QUOTATION MARK */
    /* U+201A */	',',       	/* SINGLE LOW-9 QUOTATION MARK */
    /* U+201B */	'`',       	/* SINGLE HIGH-REVERSED-9 QUOTATION MARK */
    /* U+201C */	'"',       	/* LEFT DOUBLE QUOTATION MARK */
    /* U+201D */	'"',       	/* RIGHT DOUBLE QUOTATION MARK */
    /* U+201E */	'"',       	/* DOUBLE LOW-9 QUOTATION MARK */
    /* U+201F */	'"',       	/* DOUBLE HIGH-REVERSED-9 QUOTATION MARK */
    /* U+2020 */	'+',       	/* DAGGER */
    /* U+2021 */	'$',       	/* DOUBLE DAGGER */
    /* U+2022 */	'o',       	/* BULLET */
    /* U+2023 */	'+',       	/* TRIANGULAR BULLET */
    /* U+2024 */	'.',       	/* ONE DOT LEADER */
    /* U+2025 */	':',       	/* TWO DOT LEADER */
    /* U+2026 */	'.',       	/* HORIZONTAL ELLIPSIS */
    /* U+2027 */	'-',       	/* HYPHENATION POINT */
    /* U+2028 */	BAD_CHAR,  	/* LINE SEPARATOR */
    /* U+2029 */	BAD_CHAR,  	/* PARAGRAPH SEPARATOR */
    /* U+202A */	BAD_CHAR,  	/* LEFT-TO-RIGHT EMBEDDING */
    /* U+202B */	BAD_CHAR,  	/* RIGHT-TO-LEFT EMBEDDING */
    /* U+202C */	BAD_CHAR,  	/* POP DIRECTIONAL FORMATTING */
    /* U+202D */	BAD_CHAR,  	/* LEFT-TO-RIGHT OVERRIDE */
    /* U+202E */	BAD_CHAR,  	/* RIGHT-TO-LEFT OVERRIDE */
    /* U+202F */	BAD_CHAR,  	/* NARROW NO-BREAK SPACE */
    /* U+2030 */	BAD_CHAR,  	/* PER MILLE SIGN */
    /* U+2031 */	BAD_CHAR,  	/* PER TEN THOUSAND SIGN */
    /* U+2032 */	'\'',      	/* PRIME */
    /* U+2033 */	'"',       	/* DOUBLE PRIME */
    /* U+2034 */	BAD_CHAR,  	/* TRIPLE PRIME */
    /* U+2035 */	'`',       	/* REVERSED PRIME */
    /* U+2036 */	'"',       	/* REVERSED DOUBLE PRIME */
    /* U+2037 */	BAD_CHAR,  	/* REVERSED TRIPLE PRIME */
    /* U+2038 */	'^',       	/* CARET */
    /* U+2039 */	'<',       	/* SINGLE LEFT-POINTING ANGLE QUOTATION MARK */
    /* U+203A */	'>',       	/* SINGLE RIGHT-POINTING ANGLE QUOTATION MARK */
    /* U+203B */	BAD_CHAR,  	/* REFERENCE MARK */
    /* U+203C */	BAD_CHAR,  	/* DOUBLE EXCLAMATION MARK */
    /* U+203D */	'?',       	/* INTERROBANG */
    /* U+203E */	BAD_CHAR,  	/* OVERLINE */
    /* U+203F */	'_',       	/* UNDERTIE */
    /* U+2040 */	BAD_CHAR,  	/* CHARACTER TIE */
    /* U+2041 */	BAD_CHAR,  	/* CARET INSERTION POINT */
    /* U+2042 */	'*',       	/* ASTERISM */
    /* U+2043 */	'-',       	/* HYPHEN BULLET */
    /* U+2044 */	'/',       	/* FRACTION SLASH */
    /* U+2045 */	'[',       	/* LEFT SQUARE BRACKET WITH QUILL */
    /* U+2046 */	']',       	/* RIGHT SQUARE BRACKET WITH QUILL */
    /* U+2047 */	BAD_CHAR,  	/* DOUBLE QUESTION MARK */
    /* U+2048 */	BAD_CHAR,  	/* QUESTION EXCLAMATION MARK */
    /* U+2049 */	BAD_CHAR,  	/* EXCLAMATION QUESTION MARK */
    /* U+204A */	BAD_CHAR,  	/* TIRONIAN SIGN ET */
    /* U+204B */	BAD_CHAR,  	/* REVERSED PILCROW SIGN */
    /* U+204C */	'<',       	/* BLACK LEFTWARDS BULLET */
    /* U+204D */	'>',       	/* BLACK RIGHTWARDS BULLET */
    /* U+204E */	'*',       	/* LOW ASTERISK */
    /* U+204F */	';',       	/* REVERSED SEMICOLON */
    /* U+2050 */	BAD_CHAR,  	/* CLOSE UP */
    /* U+2051 */	BAD_CHAR,  	/* TWO ASTERISKS ALIGNED VERTICALLY */
    /* U+2052 */	BAD_CHAR,  	/* COMMERCIAL MINUS SIGN */
    /* U+2053 */	BAD_CHAR,  	/* SWUNG DASH */
    /* U+2054 */	BAD_CHAR,  	/* INVERTED UNDERTIE */
    /* U+2055 */	'*',       	/* FLOWER PUNCTUATION MARK */
    /* U+2056 */	BAD_CHAR,  	/* THREE DOT PUNCTUATION */
    /* U+2057 */	BAD_CHAR,  	/* QUADRUPLE PRIME */
    /* U+2058 */	BAD_CHAR,  	/* FOUR DOT PUNCTUATION */
    /* U+2059 */	BAD_CHAR,  	/* FIVE DOT PUNCTUATION */
    /* U+205A */	BAD_CHAR,  	/* TWO DOT PUNCTUATION */
    /* U+205B */	BAD_CHAR,  	/* FOUR DOT MARK */
    /* U+205C */	BAD_CHAR,  	/* DOTTED CROSS */
    /* U+205D */	BAD_CHAR,  	/* TRICOLON */
    /* U+205E */	BAD_CHAR,  	/* VERTICAL FOUR DOTS */
    /* U+205F */	BAD_CHAR,  	/* MEDIUM MATHEMATICAL SPACE */
    /* U+2060 */	BAD_CHAR,  	/* WORD JOINER */
    /* U+2061 */	BAD_CHAR,  	/* FUNCTION APPLICATION */
    /* U+2062 */	BAD_CHAR,  	/* INVISIBLE TIMES */
    /* U+2063 */	BAD_CHAR,  	/* INVISIBLE SEPARATOR */
    /* U+2064 */	BAD_CHAR,
    /* U+2065 */	BAD_CHAR,
    /* U+2066 */	BAD_CHAR,
    /* U+2067 */	BAD_CHAR,
    /* U+2068 */	BAD_CHAR,
    /* U+2069 */	BAD_CHAR,
    /* U+206A */	BAD_CHAR,  	/* INHIBIT SYMMETRIC SWAPPING */
    /* U+206B */	BAD_CHAR,  	/* ACTIVATE SYMMETRIC SWAPPING */
    /* U+206C */	BAD_CHAR,  	/* INHIBIT ARABIC FORM SHAPING */
    /* U+206D */	BAD_CHAR,  	/* ACTIVATE ARABIC FORM SHAPING */
    /* U+206E */	BAD_CHAR,  	/* NATIONAL DIGIT SHAPES */
    /* U+206F */	BAD_CHAR,  	/* NOMINAL DIGIT SHAPES */
    /* U+2070 */	BAD_CHAR,  	/* SUPERSCRIPT ZERO */
    /* U+2071 */	BAD_CHAR,  	/* SUPERSCRIPT LATIN SMALL LETTER I */
    /* U+2072 */	BAD_CHAR,
    /* U+2073 */	BAD_CHAR,
    /* U+2074 */	BAD_CHAR,  	/* SUPERSCRIPT FOUR */
    /* U+2075 */	BAD_CHAR,  	/* SUPERSCRIPT FIVE */
    /* U+2076 */	BAD_CHAR,  	/* SUPERSCRIPT SIX */
    /* U+2077 */	BAD_CHAR,  	/* SUPERSCRIPT SEVEN */
    /* U+2078 */	BAD_CHAR,  	/* SUPERSCRIPT EIGHT */
    /* U+2079 */	BAD_CHAR,  	/* SUPERSCRIPT NINE */
    /* U+207A */	BAD_CHAR,  	/* SUPERSCRIPT PLUS SIGN */
    /* U+207B */	BAD_CHAR,  	/* SUPERSCRIPT MINUS */
    /* U+207C */	BAD_CHAR,  	/* SUPERSCRIPT EQUALS SIGN */
    /* U+207D */	BAD_CHAR,  	/* SUPERSCRIPT LEFT PARENTHESIS */
    /* U+207E */	BAD_CHAR,  	/* SUPERSCRIPT RIGHT PARENTHESIS */
    /* U+207F */	BAD_CHAR,  	/* SUPERSCRIPT LATIN SMALL LETTER N */
    /* U+2080 */	BAD_CHAR,  	/* SUBSCRIPT ZERO */
    /* U+2081 */	BAD_CHAR,  	/* SUBSCRIPT ONE */
    /* U+2082 */	BAD_CHAR,  	/* SUBSCRIPT TWO */
    /* U+2083 */	BAD_CHAR,  	/* SUBSCRIPT THREE */
    /* U+2084 */	BAD_CHAR,  	/* SUBSCRIPT FOUR */
    /* U+2085 */	BAD_CHAR,  	/* SUBSCRIPT FIVE */
    /* U+2086 */	BAD_CHAR,  	/* SUBSCRIPT SIX */
    /* U+2087 */	BAD_CHAR,  	/* SUBSCRIPT SEVEN */
    /* U+2088 */	BAD_CHAR,  	/* SUBSCRIPT EIGHT */
    /* U+2089 */	BAD_CHAR,  	/* SUBSCRIPT NINE */
    /* U+208A */	BAD_CHAR,  	/* SUBSCRIPT PLUS SIGN */
    /* U+208B */	BAD_CHAR,  	/* SUBSCRIPT MINUS */
    /* U+208C */	BAD_CHAR,  	/* SUBSCRIPT EQUALS SIGN */
    /* U+208D */	BAD_CHAR,  	/* SUBSCRIPT LEFT PARENTHESIS */
    /* U+208E */	BAD_CHAR,  	/* SUBSCRIPT RIGHT PARENTHESIS */
    /* U+208F */	BAD_CHAR,
    /* U+2090 */	BAD_CHAR,  	/* LATIN SUBSCRIPT SMALL LETTER A */
    /* U+2091 */	BAD_CHAR,  	/* LATIN SUBSCRIPT SMALL LETTER E */
    /* U+2092 */	BAD_CHAR,  	/* LATIN SUBSCRIPT SMALL LETTER O */
    /* U+2093 */	BAD_CHAR,  	/* LATIN SUBSCRIPT SMALL LETTER X */
    /* U+2094 */	BAD_CHAR,  	/* LATIN SUBSCRIPT SMALL LETTER SCHWA */
    /* U+2095 */	BAD_CHAR,
    /* U+2096 */	BAD_CHAR,
    /* U+2097 */	BAD_CHAR,
    /* U+2098 */	BAD_CHAR,
    /* U+2099 */	BAD_CHAR,
    /* U+209A */	BAD_CHAR,
    /* U+209B */	BAD_CHAR,
    /* U+209C */	BAD_CHAR,
    /* U+209D */	BAD_CHAR,
    /* U+209E */	BAD_CHAR,
    /* U+209F */	BAD_CHAR,
    /* U+20A0 */	BAD_CHAR,  	/* EURO-CURRENCY SIGN */
    /* U+20A1 */	BAD_CHAR,  	/* COLON SIGN */
    /* U+20A2 */	BAD_CHAR,  	/* CRUZEIRO SIGN */
    /* U+20A3 */	'F',       	/* FRENCH FRANC SIGN */
    /* U+20A4 */	'L',       	/* LIRA SIGN */
    /* U+20A5 */	BAD_CHAR,  	/* MILL SIGN */
    /* U+20A6 */	BAD_CHAR,  	/* NAIRA SIGN */
    /* U+20A7 */	BAD_CHAR,  	/* PESETA SIGN */
    /* U+20A8 */	BAD_CHAR,  	/* RUPEE SIGN */
    /* U+20A9 */	'W',       	/* WON SIGN */
    /* U+20AA */	BAD_CHAR,  	/* NEW SHEQEL SIGN */
    /* U+20AB */	BAD_CHAR,  	/* DONG SIGN */
    /* U+20AC */	'e',       	/* EURO SIGN */
    /* U+20AD */	BAD_CHAR,  	/* KIP SIGN */
    /* U+20AE */	BAD_CHAR,  	/* TUGRIK SIGN */
    /* U+20AF */	BAD_CHAR,  	/* DRACHMA SIGN */
    /* U+20B0 */	BAD_CHAR,  	/* GERMAN PENNY SIGN */
    /* U+20B1 */	'p',       	/* PESO SIGN */
    /* U+20B2 */	BAD_CHAR,  	/* GUARANI SIGN */
    /* U+20B3 */	BAD_CHAR,  	/* AUSTRAL SIGN */
    /* U+20B4 */	BAD_CHAR,  	/* HRYVNIA SIGN */
    /* U+20B5 */	BAD_CHAR,  	/* CEDI SIGN */
    /* U+20B6 */	BAD_CHAR,
    /* U+20B7 */	BAD_CHAR,
    /* U+20B8 */	BAD_CHAR,
    /* U+20B9 */	BAD_CHAR,
    /* U+20BA */	BAD_CHAR,
    /* U+20BB */	BAD_CHAR,
    /* U+20BC */	BAD_CHAR,
    /* U+20BD */	BAD_CHAR,
    /* U+20BE */	BAD_CHAR,
    /* U+20BF */	BAD_CHAR,
    /* U+20C0 */	BAD_CHAR,
    /* U+20C1 */	BAD_CHAR,
    /* U+20C2 */	BAD_CHAR,
    /* U+20C3 */	BAD_CHAR,
    /* U+20C4 */	BAD_CHAR,
    /* U+20C5 */	BAD_CHAR,
    /* U+20C6 */	BAD_CHAR,
    /* U+20C7 */	BAD_CHAR,
    /* U+20C8 */	BAD_CHAR,
    /* U+20C9 */	BAD_CHAR,
    /* U+20CA */	BAD_CHAR,
    /* U+20CB */	BAD_CHAR,
    /* U+20CC */	BAD_CHAR,
    /* U+20CD */	BAD_CHAR,
    /* U+20CE */	BAD_CHAR,
    /* U+20CF */	BAD_CHAR,
    /* U+20D0 */	BAD_CHAR,  	/* COMBINING LEFT HARPOON ABOVE */
    /* U+20D1 */	BAD_CHAR,  	/* COMBINING RIGHT HARPOON ABOVE */
    /* U+20D2 */	BAD_CHAR,  	/* COMBINING LONG VERTICAL LINE OVERLAY */
    /* U+20D3 */	BAD_CHAR,  	/* COMBINING SHORT VERTICAL LINE OVERLAY */
    /* U+20D4 */	BAD_CHAR,  	/* COMBINING ANTICLOCKWISE ARROW ABOVE */
    /* U+20D5 */	BAD_CHAR,  	/* COMBINING CLOCKWISE ARROW ABOVE */
    /* U+20D6 */	BAD_CHAR,  	/* COMBINING LEFT ARROW ABOVE */
    /* U+20D7 */	BAD_CHAR,  	/* COMBINING RIGHT ARROW ABOVE */
    /* U+20D8 */	BAD_CHAR,  	/* COMBINING RING OVERLAY */
    /* U+20D9 */	BAD_CHAR,  	/* COMBINING CLOCKWISE RING OVERLAY */
    /* U+20DA */	BAD_CHAR,  	/* COMBINING ANTICLOCKWISE RING OVERLAY */
    /* U+20DB */	BAD_CHAR,  	/* COMBINING THREE DOTS ABOVE */
    /* U+20DC */	BAD_CHAR,  	/* COMBINING FOUR DOTS ABOVE */
    /* U+20DD */	BAD_CHAR,  	/* COMBINING ENCLOSING CIRCLE */
    /* U+20DE */	BAD_CHAR,  	/* COMBINING ENCLOSING SQUARE */
    /* U+20DF */	BAD_CHAR,  	/* COMBINING ENCLOSING DIAMOND */
    /* U+20E0 */	BAD_CHAR,  	/* COMBINING ENCLOSING CIRCLE BACKSLASH */
    /* U+20E1 */	BAD_CHAR,  	/* COMBINING LEFT RIGHT ARROW ABOVE */
    /* U+20E2 */	BAD_CHAR,  	/* COMBINING ENCLOSING SCREEN */
    /* U+20E3 */	BAD_CHAR,  	/* COMBINING ENCLOSING KEYCAP */
    /* U+20E4 */	BAD_CHAR,  	/* COMBINING ENCLOSING UPWARD POINTING TRIANGLE */
    /* U+20E5 */	BAD_CHAR,  	/* COMBINING REVERSE SOLIDUS OVERLAY */
    /* U+20E6 */	BAD_CHAR,  	/* COMBINING DOUBLE VERTICAL STROKE OVERLAY */
    /* U+20E7 */	BAD_CHAR,  	/* COMBINING ANNUITY SYMBOL */
    /* U+20E8 */	BAD_CHAR,  	/* COMBINING TRIPLE UNDERDOT */
    /* U+20E9 */	BAD_CHAR,  	/* COMBINING WIDE BRIDGE ABOVE */
    /* U+20EA */	BAD_CHAR,  	/* COMBINING LEFTWARDS ARROW OVERLAY */
    /* U+20EB */	BAD_CHAR,  	/* COMBINING LONG DOUBLE SOLIDUS OVERLAY */
    /* U+20EC */	BAD_CHAR,
    /* U+20ED */	BAD_CHAR,
    /* U+20EE */	BAD_CHAR,
    /* U+20EF */	BAD_CHAR,
    /* U+20F0 */	BAD_CHAR,
    /* U+20F1 */	BAD_CHAR,
    /* U+20F2 */	BAD_CHAR,
    /* U+20F3 */	BAD_CHAR,
    /* U+20F4 */	BAD_CHAR,
    /* U+20F5 */	BAD_CHAR,
    /* U+20F6 */	BAD_CHAR,
    /* U+20F7 */	BAD_CHAR,
    /* U+20F8 */	BAD_CHAR,
    /* U+20F9 */	BAD_CHAR,
    /* U+20FA */	BAD_CHAR,
    /* U+20FB */	BAD_CHAR,
    /* U+20FC */	BAD_CHAR,
    /* U+20FD */	BAD_CHAR,
    /* U+20FE */	BAD_CHAR,
    /* U+20FF */	BAD_CHAR,
    /* U+2100 */	BAD_CHAR,  	/* ACCOUNT OF */
    /* U+2101 */	BAD_CHAR,  	/* ADDRESSED TO THE SUBJECT */
    /* U+2102 */	BAD_CHAR,  	/* DOUBLE-STRUCK CAPITAL C */
    /* U+2103 */	BAD_CHAR,  	/* DEGREE CELSIUS */
    /* U+2104 */	BAD_CHAR,  	/* CENTRE LINE SYMBOL */
    /* U+2105 */	BAD_CHAR,  	/* CARE OF */
    /* U+2106 */	BAD_CHAR,  	/* CADA UNA */
    /* U+2107 */	BAD_CHAR,  	/* EULER CONSTANT */
    /* U+2108 */	BAD_CHAR,  	/* SCRUPLE */
    /* U+2109 */	BAD_CHAR,  	/* DEGREE FAHRENHEIT */
    /* U+210A */	BAD_CHAR,  	/* SCRIPT SMALL G */
    /* U+210B */	BAD_CHAR,  	/* SCRIPT CAPITAL H */
    /* U+210C */	BAD_CHAR,  	/* BLACK-LETTER CAPITAL H */
    /* U+210D */	BAD_CHAR,  	/* DOUBLE-STRUCK CAPITAL H */
    /* U+210E */	'h',       	/* PLANCK CONSTANT */
    /* U+210F */	BAD_CHAR,  	/* PLANCK CONSTANT OVER TWO PI */
    /* U+2110 */	BAD_CHAR,  	/* SCRIPT CAPITAL I */
    /* U+2111 */	BAD_CHAR,  	/* BLACK-LETTER CAPITAL I */
    /* U+2112 */	BAD_CHAR,  	/* SCRIPT CAPITAL L */
    /* U+2113 */	BAD_CHAR,  	/* SCRIPT SMALL L */
    /* U+2114 */	BAD_CHAR,  	/* L B BAR SYMBOL */
    /* U+2115 */	BAD_CHAR,  	/* DOUBLE-STRUCK CAPITAL N */
    /* U+2116 */	BAD_CHAR,  	/* NUMERO SIGN */
    /* U+2117 */	BAD_CHAR,  	/* SOUND RECORDING COPYRIGHT */
    /* U+2118 */	BAD_CHAR,  	/* SCRIPT CAPITAL P */
    /* U+2119 */	BAD_CHAR,  	/* DOUBLE-STRUCK CAPITAL P */
    /* U+211A */	BAD_CHAR,  	/* DOUBLE-STRUCK CAPITAL Q */
    /* U+211B */	BAD_CHAR,  	/* SCRIPT CAPITAL R */
    /* U+211C */	BAD_CHAR,  	/* BLACK-LETTER CAPITAL R */
    /* U+211D */	BAD_CHAR,  	/* DOUBLE-STRUCK CAPITAL R */
    /* U+211E */	BAD_CHAR,  	/* PRESCRIPTION TAKE */
    /* U+211F */	BAD_CHAR,  	/* RESPONSE */
    /* U+2120 */	BAD_CHAR,  	/* SERVICE MARK */
    /* U+2121 */	BAD_CHAR,  	/* TELEPHONE SIGN */
    /* U+2122 */	BAD_CHAR,  	/* TRADE MARK SIGN */
    /* U+2123 */	BAD_CHAR,  	/* VERSICLE */
    /* U+2124 */	BAD_CHAR,  	/* DOUBLE-STRUCK CAPITAL Z */
    /* U+2125 */	BAD_CHAR,  	/* OUNCE SIGN */
    /* U+2126 */	BAD_CHAR,  	/* OHM SIGN */
    /* U+2127 */	BAD_CHAR,  	/* INVERTED OHM SIGN */
    /* U+2128 */	BAD_CHAR,  	/* BLACK-LETTER CAPITAL Z */
    /* U+2129 */	BAD_CHAR,  	/* TURNED GREEK SMALL LETTER IOTA */
    /* U+212A */	'K',       	/* KELVIN SIGN */
    /* U+212B */	'A',       	/* ANGSTROM SIGN */
    /* U+212C */	BAD_CHAR,  	/* SCRIPT CAPITAL B */
    /* U+212D */	BAD_CHAR,  	/* BLACK-LETTER CAPITAL C */
    /* U+212E */	'e',       	/* ESTIMATED SYMBOL */
    /* U+212F */	BAD_CHAR,  	/* SCRIPT SMALL E */
    /* U+2130 */	BAD_CHAR,  	/* SCRIPT CAPITAL E */
    /* U+2131 */	BAD_CHAR,  	/* SCRIPT CAPITAL F */
    /* U+2132 */	BAD_CHAR,  	/* TURNED CAPITAL F */
    /* U+2133 */	BAD_CHAR,  	/* SCRIPT CAPITAL M */
    /* U+2134 */	BAD_CHAR,  	/* SCRIPT SMALL O */
    /* U+2135 */	BAD_CHAR,  	/* ALEF SYMBOL */
    /* U+2136 */	BAD_CHAR,  	/* BET SYMBOL */
    /* U+2137 */	BAD_CHAR,  	/* GIMEL SYMBOL */
    /* U+2138 */	BAD_CHAR,  	/* DALET SYMBOL */
    /* U+2139 */	BAD_CHAR,  	/* INFORMATION SOURCE */
    /* U+213A */	BAD_CHAR,  	/* ROTATED CAPITAL Q */
    /* U+213B */	BAD_CHAR,  	/* FACSIMILE SIGN */
    /* U+213C */	BAD_CHAR,  	/* DOUBLE-STRUCK SMALL PI */
    /* U+213D */	BAD_CHAR,  	/* DOUBLE-STRUCK SMALL GAMMA */
    /* U+213E */	BAD_CHAR,  	/* DOUBLE-STRUCK CAPITAL GAMMA */
    /* U+213F */	BAD_CHAR,  	/* DOUBLE-STRUCK CAPITAL PI */
    /* U+2140 */	BAD_CHAR,  	/* DOUBLE-STRUCK N-ARY SUMMATION */
    /* U+2141 */	BAD_CHAR,  	/* TURNED SANS-SERIF CAPITAL G */
    /* U+2142 */	BAD_CHAR,  	/* TURNED SANS-SERIF CAPITAL L */
    /* U+2143 */	BAD_CHAR,  	/* REVERSED SANS-SERIF CAPITAL L */
    /* U+2144 */	BAD_CHAR,  	/* TURNED SANS-SERIF CAPITAL Y */
    /* U+2145 */	BAD_CHAR,  	/* DOUBLE-STRUCK ITALIC CAPITAL D */
    /* U+2146 */	BAD_CHAR,  	/* DOUBLE-STRUCK ITALIC SMALL D */
    /* U+2147 */	BAD_CHAR,  	/* DOUBLE-STRUCK ITALIC SMALL E */
    /* U+2148 */	BAD_CHAR,  	/* DOUBLE-STRUCK ITALIC SMALL I */
    /* U+2149 */	BAD_CHAR,  	/* DOUBLE-STRUCK ITALIC SMALL J */
    /* U+214A */	BAD_CHAR,  	/* PROPERTY LINE */
    /* U+214B */	BAD_CHAR,  	/* TURNED AMPERSAND */
    /* U+214C */	BAD_CHAR,  	/* PER SIGN */
    /* U+214D */	BAD_CHAR,
    /* U+214E */	BAD_CHAR,
    /* U+214F */	BAD_CHAR,
    /* U+2150 */	BAD_CHAR,
    /* U+2151 */	BAD_CHAR,
    /* U+2152 */	BAD_CHAR,
    /* U+2153 */	BAD_CHAR,  	/* VULGAR FRACTION ONE THIRD */
    /* U+2154 */	BAD_CHAR,  	/* VULGAR FRACTION TWO THIRDS */
    /* U+2155 */	BAD_CHAR,  	/* VULGAR FRACTION ONE FIFTH */
    /* U+2156 */	BAD_CHAR,  	/* VULGAR FRACTION TWO FIFTHS */
    /* U+2157 */	BAD_CHAR,  	/* VULGAR FRACTION THREE FIFTHS */
    /* U+2158 */	BAD_CHAR,  	/* VULGAR FRACTION FOUR FIFTHS */
    /* U+2159 */	BAD_CHAR,  	/* VULGAR FRACTION ONE SIXTH */
    /* U+215A */	BAD_CHAR,  	/* VULGAR FRACTION FIVE SIXTHS */
    /* U+215B */	BAD_CHAR,  	/* VULGAR FRACTION ONE EIGHTH */
    /* U+215C */	BAD_CHAR,  	/* VULGAR FRACTION THREE EIGHTHS */
    /* U+215D */	BAD_CHAR,  	/* VULGAR FRACTION FIVE EIGHTHS */
    /* U+215E */	BAD_CHAR,  	/* VULGAR FRACTION SEVEN EIGHTHS */
    /* U+215F */	BAD_CHAR,  	/* FRACTION NUMERATOR ONE */
    /* U+2160 */	BAD_CHAR,  	/* ROMAN NUMERAL ONE */
    /* U+2161 */	BAD_CHAR,  	/* ROMAN NUMERAL TWO */
    /* U+2162 */	BAD_CHAR,  	/* ROMAN NUMERAL THREE */
    /* U+2163 */	BAD_CHAR,  	/* ROMAN NUMERAL FOUR */
    /* U+2164 */	BAD_CHAR,  	/* ROMAN NUMERAL FIVE */
    /* U+2165 */	BAD_CHAR,  	/* ROMAN NUMERAL SIX */
    /* U+2166 */	BAD_CHAR,  	/* ROMAN NUMERAL SEVEN */
    /* U+2167 */	BAD_CHAR,  	/* ROMAN NUMERAL EIGHT */
    /* U+2168 */	BAD_CHAR,  	/* ROMAN NUMERAL NINE */
    /* U+2169 */	BAD_CHAR,  	/* ROMAN NUMERAL TEN */
    /* U+216A */	BAD_CHAR,  	/* ROMAN NUMERAL ELEVEN */
    /* U+216B */	BAD_CHAR,  	/* ROMAN NUMERAL TWELVE */
    /* U+216C */	BAD_CHAR,  	/* ROMAN NUMERAL FIFTY */
    /* U+216D */	BAD_CHAR,  	/* ROMAN NUMERAL ONE HUNDRED */
    /* U+216E */	BAD_CHAR,  	/* ROMAN NUMERAL FIVE HUNDRED */
    /* U+216F */	BAD_CHAR,  	/* ROMAN NUMERAL ONE THOUSAND */
    /* U+2170 */	BAD_CHAR,  	/* SMALL ROMAN NUMERAL ONE */
    /* U+2171 */	BAD_CHAR,  	/* SMALL ROMAN NUMERAL TWO */
    /* U+2172 */	BAD_CHAR,  	/* SMALL ROMAN NUMERAL THREE */
    /* U+2173 */	BAD_CHAR,  	/* SMALL ROMAN NUMERAL FOUR */
    /* U+2174 */	BAD_CHAR,  	/* SMALL ROMAN NUMERAL FIVE */
    /* U+2175 */	BAD_CHAR,  	/* SMALL ROMAN NUMERAL SIX */
    /* U+2176 */	BAD_CHAR,  	/* SMALL ROMAN NUMERAL SEVEN */
    /* U+2177 */	BAD_CHAR,  	/* SMALL ROMAN NUMERAL EIGHT */
    /* U+2178 */	BAD_CHAR,  	/* SMALL ROMAN NUMERAL NINE */
    /* U+2179 */	BAD_CHAR,  	/* SMALL ROMAN NUMERAL TEN */
    /* U+217A */	BAD_CHAR,  	/* SMALL ROMAN NUMERAL ELEVEN */
    /* U+217B */	BAD_CHAR,  	/* SMALL ROMAN NUMERAL TWELVE */
    /* U+217C */	BAD_CHAR,  	/* SMALL ROMAN NUMERAL FIFTY */
    /* U+217D */	BAD_CHAR,  	/* SMALL ROMAN NUMERAL ONE HUNDRED */
    /* U+217E */	BAD_CHAR,  	/* SMALL ROMAN NUMERAL FIVE HUNDRED */
    /* U+217F */	BAD_CHAR,  	/* SMALL ROMAN NUMERAL ONE THOUSAND */
    /* U+2180 */	BAD_CHAR,  	/* ROMAN NUMERAL ONE THOUSAND C D */
    /* U+2181 */	BAD_CHAR,  	/* ROMAN NUMERAL FIVE THOUSAND */
    /* U+2182 */	BAD_CHAR,  	/* ROMAN NUMERAL TEN THOUSAND */
    /* U+2183 */	BAD_CHAR,  	/* ROMAN NUMERAL REVERSED ONE HUNDRED */
    /* U+2184 */	BAD_CHAR,
    /* U+2185 */	BAD_CHAR,
    /* U+2186 */	BAD_CHAR,
    /* U+2187 */	BAD_CHAR,
    /* U+2188 */	BAD_CHAR,
    /* U+2189 */	BAD_CHAR,
    /* U+218A */	BAD_CHAR,
    /* U+218B */	BAD_CHAR,
    /* U+218C */	BAD_CHAR,
    /* U+218D */	BAD_CHAR,
    /* U+218E */	BAD_CHAR,
    /* U+218F */	BAD_CHAR,
    /* U+2190 */	'<',       	/* LEFTWARDS ARROW */
    /* U+2191 */	'^',       	/* UPWARDS ARROW */
    /* U+2192 */	'>',       	/* RIGHTWARDS ARROW */
    /* U+2193 */	'v',       	/* DOWNWARDS ARROW */
    /* U+2194 */	BAD_CHAR,  	/* LEFT RIGHT ARROW */
    /* U+2195 */	BAD_CHAR,  	/* UP DOWN ARROW */
    /* U+2196 */	BAD_CHAR,  	/* NORTH WEST ARROW */
    /* U+2197 */	BAD_CHAR,  	/* NORTH EAST ARROW */
    /* U+2198 */	BAD_CHAR,  	/* SOUTH EAST ARROW */
    /* U+2199 */	BAD_CHAR,  	/* SOUTH WEST ARROW */
    /* U+219A */	BAD_CHAR,  	/* LEFTWARDS ARROW WITH STROKE */
    /* U+219B */	BAD_CHAR,  	/* RIGHTWARDS ARROW WITH STROKE */
    /* U+219C */	BAD_CHAR,  	/* LEFTWARDS WAVE ARROW */
    /* U+219D */	BAD_CHAR,  	/* RIGHTWARDS WAVE ARROW */
    /* U+219E */	BAD_CHAR,  	/* LEFTWARDS TWO HEADED ARROW */
    /* U+219F */	BAD_CHAR,  	/* UPWARDS TWO HEADED ARROW */
    /* U+21A0 */	BAD_CHAR,  	/* RIGHTWARDS TWO HEADED ARROW */
    /* U+21A1 */	BAD_CHAR,  	/* DOWNWARDS TWO HEADED ARROW */
    /* U+21A2 */	BAD_CHAR,  	/* LEFTWARDS ARROW WITH TAIL */
    /* U+21A3 */	BAD_CHAR,  	/* RIGHTWARDS ARROW WITH TAIL */
    /* U+21A4 */	BAD_CHAR,  	/* LEFTWARDS ARROW FROM BAR */
    /* U+21A5 */	BAD_CHAR,  	/* UPWARDS ARROW FROM BAR */
    /* U+21A6 */	BAD_CHAR,  	/* RIGHTWARDS ARROW FROM BAR */
    /* U+21A7 */	BAD_CHAR,  	/* DOWNWARDS ARROW FROM BAR */
    /* U+21A8 */	BAD_CHAR,  	/* UP DOWN ARROW WITH BASE */
    /* U+21A9 */	BAD_CHAR,  	/* LEFTWARDS ARROW WITH HOOK */
    /* U+21AA */	BAD_CHAR,  	/* RIGHTWARDS ARROW WITH HOOK */
    /* U+21AB */	BAD_CHAR,  	/* LEFTWARDS ARROW WITH LOOP */
    /* U+21AC */	BAD_CHAR,  	/* RIGHTWARDS ARROW WITH LOOP */
    /* U+21AD */	BAD_CHAR,  	/* LEFT RIGHT WAVE ARROW */
    /* U+21AE */	BAD_CHAR,  	/* LEFT RIGHT ARROW WITH STROKE */
    /* U+21AF */	BAD_CHAR,  	/* DOWNWARDS ZIGZAG ARROW */
    /* U+21B0 */	BAD_CHAR,  	/* UPWARDS ARROW WITH TIP LEFTWARDS */
    /* U+21B1 */	BAD_CHAR,  	/* UPWARDS ARROW WITH TIP RIGHTWARDS */
    /* U+21B2 */	BAD_CHAR,  	/* DOWNWARDS ARROW WITH TIP LEFTWARDS */
    /* U+21B3 */	BAD_CHAR,  	/* DOWNWARDS ARROW WITH TIP RIGHTWARDS */
    /* U+21B4 */	BAD_CHAR,  	/* RIGHTWARDS ARROW WITH CORNER DOWNWARDS */
    /* U+21B5 */	BAD_CHAR,  	/* DOWNWARDS ARROW WITH CORNER LEFTWARDS */
    /* U+21B6 */	BAD_CHAR,  	/* ANTICLOCKWISE TOP SEMICIRCLE ARROW */
    /* U+21B7 */	BAD_CHAR,  	/* CLOCKWISE TOP SEMICIRCLE ARROW */
    /* U+21B8 */	BAD_CHAR,  	/* NORTH WEST ARROW TO LONG BAR */
    /* U+21B9 */	BAD_CHAR,  	/* LEFTWARDS ARROW TO BAR OVER RIGHTWARDS ARROW TO BAR */
    /* U+21BA */	BAD_CHAR,  	/* ANTICLOCKWISE OPEN CIRCLE ARROW */
    /* U+21BB */	BAD_CHAR,  	/* CLOCKWISE OPEN CIRCLE ARROW */
    /* U+21BC */	BAD_CHAR,  	/* LEFTWARDS HARPOON WITH BARB UPWARDS */
    /* U+21BD */	BAD_CHAR,  	/* LEFTWARDS HARPOON WITH BARB DOWNWARDS */
    /* U+21BE */	BAD_CHAR,  	/* UPWARDS HARPOON WITH BARB RIGHTWARDS */
    /* U+21BF */	BAD_CHAR,  	/* UPWARDS HARPOON WITH BARB LEFTWARDS */
    /* U+21C0 */	BAD_CHAR,  	/* RIGHTWARDS HARPOON WITH BARB UPWARDS */
    /* U+21C1 */	BAD_CHAR,  	/* RIGHTWARDS HARPOON WITH BARB DOWNWARDS */
    /* U+21C2 */	BAD_CHAR,  	/* DOWNWARDS HARPOON WITH BARB RIGHTWARDS */
    /* U+21C3 */	BAD_CHAR,  	/* DOWNWARDS HARPOON WITH BARB LEFTWARDS */
    /* U+21C4 */	BAD_CHAR,  	/* RIGHTWARDS ARROW OVER LEFTWARDS ARROW */
    /* U+21C5 */	BAD_CHAR,  	/* UPWARDS ARROW LEFTWARDS OF DOWNWARDS ARROW */
    /* U+21C6 */	BAD_CHAR,  	/* LEFTWARDS ARROW OVER RIGHTWARDS ARROW */
    /* U+21C7 */	BAD_CHAR,  	/* LEFTWARDS PAIRED ARROWS */
    /* U+21C8 */	BAD_CHAR,  	/* UPWARDS PAIRED ARROWS */
    /* U+21C9 */	BAD_CHAR,  	/* RIGHTWARDS PAIRED ARROWS */
    /* U+21CA */	BAD_CHAR,  	/* DOWNWARDS PAIRED ARROWS */
    /* U+21CB */	BAD_CHAR,  	/* LEFTWARDS HARPOON OVER RIGHTWARDS HARPOON */
    /* U+21CC */	BAD_CHAR,  	/* RIGHTWARDS HARPOON OVER LEFTWARDS HARPOON */
    /* U+21CD */	BAD_CHAR,  	/* LEFTWARDS DOUBLE ARROW WITH STROKE */
    /* U+21CE */	BAD_CHAR,  	/* LEFT RIGHT DOUBLE ARROW WITH STROKE */
    /* U+21CF */	BAD_CHAR,  	/* RIGHTWARDS DOUBLE ARROW WITH STROKE */
    /* U+21D0 */	BAD_CHAR,  	/* LEFTWARDS DOUBLE ARROW */
    /* U+21D1 */	BAD_CHAR,  	/* UPWARDS DOUBLE ARROW */
    /* U+21D2 */	BAD_CHAR,  	/* RIGHTWARDS DOUBLE ARROW */
    /* U+21D3 */	BAD_CHAR,  	/* DOWNWARDS DOUBLE ARROW */
    /* U+21D4 */	BAD_CHAR,  	/* LEFT RIGHT DOUBLE ARROW */
    /* U+21D5 */	BAD_CHAR,  	/* UP DOWN DOUBLE ARROW */
    /* U+21D6 */	BAD_CHAR,  	/* NORTH WEST DOUBLE ARROW */
    /* U+21D7 */	BAD_CHAR,  	/* NORTH EAST DOUBLE ARROW */
    /* U+21D8 */	BAD_CHAR,  	/* SOUTH EAST DOUBLE ARROW */
    /* U+21D9 */	BAD_CHAR,  	/* SOUTH WEST DOUBLE ARROW */
    /* U+21DA */	BAD_CHAR,  	/* LEFTWARDS TRIPLE ARROW */
    /* U+21DB */	BAD_CHAR,  	/* RIGHTWARDS TRIPLE ARROW */
    /* U+21DC */	BAD_CHAR,  	/* LEFTWARDS SQUIGGLE ARROW */
    /* U+21DD */	BAD_CHAR,  	/* RIGHTWARDS SQUIGGLE ARROW */
    /* U+21DE */	BAD_CHAR,  	/* UPWARDS ARROW WITH DOUBLE STROKE */
    /* U+21DF */	BAD_CHAR,  	/* DOWNWARDS ARROW WITH DOUBLE STROKE */
    /* U+21E0 */	BAD_CHAR,  	/* LEFTWARDS DASHED ARROW */
    /* U+21E1 */	BAD_CHAR,  	/* UPWARDS DASHED ARROW */
    /* U+21E2 */	BAD_CHAR,  	/* RIGHTWARDS DASHED ARROW */
    /* U+21E3 */	BAD_CHAR,  	/* DOWNWARDS DASHED ARROW */
    /* U+21E4 */	BAD_CHAR,  	/* LEFTWARDS ARROW TO BAR */
    /* U+21E5 */	BAD_CHAR,  	/* RIGHTWARDS ARROW TO BAR */
    /* U+21E6 */	BAD_CHAR,  	/* LEFTWARDS WHITE ARROW */
    /* U+21E7 */	BAD_CHAR,  	/* UPWARDS WHITE ARROW */
    /* U+21E8 */	BAD_CHAR,  	/* RIGHTWARDS WHITE ARROW */
    /* U+21E9 */	BAD_CHAR,  	/* DOWNWARDS WHITE ARROW */
    /* U+21EA */	BAD_CHAR,  	/* UPWARDS WHITE ARROW FROM BAR */
    /* U+21EB */	BAD_CHAR,  	/* UPWARDS WHITE ARROW ON PEDESTAL */
    /* U+21EC */	BAD_CHAR,  	/* UPWARDS WHITE ARROW ON PEDESTAL WITH HORIZONTAL BAR */
    /* U+21ED */	BAD_CHAR,  	/* UPWARDS WHITE ARROW ON PEDESTAL WITH VERTICAL BAR */
    /* U+21EE */	BAD_CHAR,  	/* UPWARDS WHITE DOUBLE ARROW */
    /* U+21EF */	BAD_CHAR,  	/* UPWARDS WHITE DOUBLE ARROW ON PEDESTAL */
    /* U+21F0 */	BAD_CHAR,  	/* RIGHTWARDS WHITE ARROW FROM WALL */
    /* U+21F1 */	BAD_CHAR,  	/* NORTH WEST ARROW TO CORNER */
    /* U+21F2 */	BAD_CHAR,  	/* SOUTH EAST ARROW TO CORNER */
    /* U+21F3 */	BAD_CHAR,  	/* UP DOWN WHITE ARROW */
    /* U+21F4 */	BAD_CHAR,  	/* RIGHT ARROW WITH SMALL CIRCLE */
    /* U+21F5 */	BAD_CHAR,  	/* DOWNWARDS ARROW LEFTWARDS OF UPWARDS ARROW */
    /* U+21F6 */	BAD_CHAR,  	/* THREE RIGHTWARDS ARROWS */
    /* U+21F7 */	BAD_CHAR,  	/* LEFTWARDS ARROW WITH VERTICAL STROKE */
    /* U+21F8 */	BAD_CHAR,  	/* RIGHTWARDS ARROW WITH VERTICAL STROKE */
    /* U+21F9 */	BAD_CHAR,  	/* LEFT RIGHT ARROW WITH VERTICAL STROKE */
    /* U+21FA */	BAD_CHAR,  	/* LEFTWARDS ARROW WITH DOUBLE VERTICAL STROKE */
    /* U+21FB */	BAD_CHAR,  	/* RIGHTWARDS ARROW WITH DOUBLE VERTICAL STROKE */
    /* U+21FC */	BAD_CHAR,  	/* LEFT RIGHT ARROW WITH DOUBLE VERTICAL STROKE */
    /* U+21FD */	BAD_CHAR,  	/* LEFTWARDS OPEN-HEADED ARROW */
    /* U+21FE */	BAD_CHAR,  	/* RIGHTWARDS OPEN-HEADED ARROW */
    /* U+21FF */	BAD_CHAR,  	/* LEFT RIGHT OPEN-HEADED ARROW */
    /* U+2200 */	BAD_CHAR,  	/* FOR ALL */
    /* U+2201 */	BAD_CHAR,  	/* COMPLEMENT */
    /* U+2202 */	BAD_CHAR,  	/* PARTIAL DIFFERENTIAL */
    /* U+2203 */	BAD_CHAR,  	/* THERE EXISTS */
    /* U+2204 */	BAD_CHAR,  	/* THERE DOES NOT EXIST */
    /* U+2205 */	BAD_CHAR,  	/* EMPTY SET */
    /* U+2206 */	BAD_CHAR,  	/* INCREMENT */
    /* U+2207 */	BAD_CHAR,  	/* NABLA */
    /* U+2208 */	BAD_CHAR,  	/* ELEMENT OF */
    /* U+2209 */	BAD_CHAR,  	/* NOT AN ELEMENT OF */
    /* U+220A */	BAD_CHAR,  	/* SMALL ELEMENT OF */
    /* U+220B */	BAD_CHAR,  	/* CONTAINS AS MEMBER */
    /* U+220C */	BAD_CHAR,  	/* DOES NOT CONTAIN AS MEMBER */
    /* U+220D */	BAD_CHAR,  	/* SMALL CONTAINS AS MEMBER */
    /* U+220E */	BAD_CHAR,  	/* END OF PROOF */
    /* U+220F */	BAD_CHAR,  	/* N-ARY PRODUCT */
    /* U+2210 */	BAD_CHAR,  	/* N-ARY COPRODUCT */
    /* U+2211 */	BAD_CHAR,  	/* N-ARY SUMMATION */
    /* U+2212 */	'-',       	/* MINUS SIGN */
    /* U+2213 */	BAD_CHAR,  	/* MINUS-OR-PLUS SIGN */
    /* U+2214 */	BAD_CHAR,  	/* DOT PLUS */
    /* U+2215 */	'/',       	/* DIVISION SLASH */
    /* U+2216 */	'\\',      	/* SET MINUS */
    /* U+2217 */	'*',       	/* ASTERISK OPERATOR */
    /* U+2218 */	BAD_CHAR,  	/* RING OPERATOR */
    /* U+2219 */	BAD_CHAR,  	/* BULLET OPERATOR */
    /* U+221A */	BAD_CHAR,  	/* SQUARE ROOT */
    /* U+221B */	BAD_CHAR,  	/* CUBE ROOT */
    /* U+221C */	BAD_CHAR,  	/* FOURTH ROOT */
    /* U+221D */	BAD_CHAR,  	/* PROPORTIONAL TO */
    /* U+221E */	BAD_CHAR,  	/* INFINITY */
    /* U+221F */	BAD_CHAR,  	/* RIGHT ANGLE */
    /* U+2220 */	BAD_CHAR,  	/* ANGLE */
    /* U+2221 */	BAD_CHAR,  	/* MEASURED ANGLE */
    /* U+2222 */	BAD_CHAR,  	/* SPHERICAL ANGLE */
    /* U+2223 */	'|',       	/* DIVIDES */
    /* U+2224 */	BAD_CHAR,  	/* DOES NOT DIVIDE */
    /* U+2225 */	BAD_CHAR,  	/* PARALLEL TO */
    /* U+2226 */	BAD_CHAR,  	/* NOT PARALLEL TO */
    /* U+2227 */	BAD_CHAR,  	/* LOGICAL AND */
    /* U+2228 */	BAD_CHAR,  	/* LOGICAL OR */
    /* U+2229 */	BAD_CHAR,  	/* INTERSECTION */
    /* U+222A */	BAD_CHAR,  	/* UNION */
    /* U+222B */	BAD_CHAR,  	/* INTEGRAL */
    /* U+222C */	BAD_CHAR,  	/* DOUBLE INTEGRAL */
    /* U+222D */	BAD_CHAR,  	/* TRIPLE INTEGRAL */
    /* U+222E */	BAD_CHAR,  	/* CONTOUR INTEGRAL */
    /* U+222F */	BAD_CHAR,  	/* SURFACE INTEGRAL */
    /* U+2230 */	BAD_CHAR,  	/* VOLUME INTEGRAL */
    /* U+2231 */	BAD_CHAR,  	/* CLOCKWISE INTEGRAL */
    /* U+2232 */	BAD_CHAR,  	/* CLOCKWISE CONTOUR INTEGRAL */
    /* U+2233 */	BAD_CHAR,  	/* ANTICLOCKWISE CONTOUR INTEGRAL */
    /* U+2234 */	BAD_CHAR,  	/* THEREFORE */
    /* U+2235 */	BAD_CHAR,  	/* BECAUSE */
    /* U+2236 */	BAD_CHAR,  	/* RATIO */
    /* U+2237 */	BAD_CHAR,  	/* PROPORTION */
    /* U+2238 */	BAD_CHAR,  	/* DOT MINUS */
    /* U+2239 */	BAD_CHAR,  	/* EXCESS */
    /* U+223A */	BAD_CHAR,  	/* GEOMETRIC PROPORTION */
    /* U+223B */	BAD_CHAR,  	/* HOMOTHETIC */
    /* U+223C */	'~',       	/* TILDE OPERATOR */
    /* U+223D */	'~',       	/* REVERSED TILDE */
    /* U+223E */	BAD_CHAR,  	/* INVERTED LAZY S */
    /* U+223F */	BAD_CHAR,  	/* SINE WAVE */
    /* U+2240 */	BAD_CHAR,  	/* WREATH PRODUCT */
    /* U+2241 */	BAD_CHAR,  	/* NOT TILDE */
    /* U+2242 */	BAD_CHAR,  	/* MINUS TILDE */
    /* U+2243 */	BAD_CHAR,  	/* ASYMPTOTICALLY EQUAL TO */
    /* U+2244 */	BAD_CHAR,  	/* NOT ASYMPTOTICALLY EQUAL TO */
    /* U+2245 */	BAD_CHAR,  	/* APPROXIMATELY EQUAL TO */
    /* U+2246 */	BAD_CHAR,  	/* APPROXIMATELY BUT NOT ACTUALLY EQUAL TO */
    /* U+2247 */	BAD_CHAR,  	/* NEITHER APPROXIMATELY NOR ACTUALLY EQUAL TO */
    /* U+2248 */	'~',       	/* ALMOST EQUAL TO */
    /* U+2249 */	BAD_CHAR,  	/* NOT ALMOST EQUAL TO */
    /* U+224A */	BAD_CHAR,  	/* ALMOST EQUAL OR EQUAL TO */
    /* U+224B */	BAD_CHAR,  	/* TRIPLE TILDE */
    /* U+224C */	BAD_CHAR,  	/* ALL EQUAL TO */
    /* U+224D */	BAD_CHAR,  	/* EQUIVALENT TO */
    /* U+224E */	BAD_CHAR,  	/* GEOMETRICALLY EQUIVALENT TO */
    /* U+224F */	BAD_CHAR,  	/* DIFFERENCE BETWEEN */
    /* U+2250 */	BAD_CHAR,  	/* APPROACHES THE LIMIT */
    /* U+2251 */	BAD_CHAR,  	/* GEOMETRICALLY EQUAL TO */
    /* U+2252 */	BAD_CHAR,  	/* APPROXIMATELY EQUAL TO OR THE IMAGE OF */
    /* U+2253 */	BAD_CHAR,  	/* IMAGE OF OR APPROXIMATELY EQUAL TO */
    /* U+2254 */	BAD_CHAR,  	/* COLON EQUALS */
    /* U+2255 */	BAD_CHAR,  	/* EQUALS COLON */
    /* U+2256 */	BAD_CHAR,  	/* RING IN EQUAL TO */
    /* U+2257 */	BAD_CHAR,  	/* RING EQUAL TO */
    /* U+2258 */	BAD_CHAR,  	/* CORRESPONDS TO */
    /* U+2259 */	BAD_CHAR,  	/* ESTIMATES */
    /* U+225A */	BAD_CHAR,  	/* EQUIANGULAR TO */
    /* U+225B */	BAD_CHAR,  	/* STAR EQUALS */
    /* U+225C */	BAD_CHAR,  	/* DELTA EQUAL TO */
    /* U+225D */	BAD_CHAR,  	/* EQUAL TO BY DEFINITION */
    /* U+225E */	BAD_CHAR,  	/* MEASURED BY */
    /* U+225F */	BAD_CHAR,  	/* QUESTIONED EQUAL TO */
    /* U+2260 */	BAD_CHAR,  	/* NOT EQUAL TO */
    /* U+2261 */	BAD_CHAR,  	/* IDENTICAL TO */
    /* U+2262 */	BAD_CHAR,  	/* NOT IDENTICAL TO */
    /* U+2263 */	BAD_CHAR,  	/* STRICTLY EQUIVALENT TO */
    /* U+2264 */	BAD_CHAR,  	/* LESS-THAN OR EQUAL TO */
    /* U+2265 */	BAD_CHAR,  	/* GREATER-THAN OR EQUAL TO */
    /* U+2266 */	BAD_CHAR,  	/* LESS-THAN OVER EQUAL TO */
    /* U+2267 */	BAD_CHAR,  	/* GREATER-THAN OVER EQUAL TO */
    /* U+2268 */	BAD_CHAR,  	/* LESS-THAN BUT NOT EQUAL TO */
    /* U+2269 */	BAD_CHAR,  	/* GREATER-THAN BUT NOT EQUAL TO */
    /* U+226A */	BAD_CHAR,  	/* MUCH LESS-THAN */
    /* U+226B */	BAD_CHAR,  	/* MUCH GREATER-THAN */
    /* U+226C */	BAD_CHAR,  	/* BETWEEN */
    /* U+226D */	BAD_CHAR,  	/* NOT EQUIVALENT TO */
    /* U+226E */	BAD_CHAR,  	/* NOT LESS-THAN */
    /* U+226F */	BAD_CHAR,  	/* NOT GREATER-THAN */
    /* U+2270 */	BAD_CHAR,  	/* NEITHER LESS-THAN NOR EQUAL TO */
    /* U+2271 */	BAD_CHAR,  	/* NEITHER GREATER-THAN NOR EQUAL TO */
    /* U+2272 */	BAD_CHAR,  	/* LESS-THAN OR EQUIVALENT TO */
    /* U+2273 */	BAD_CHAR,  	/* GREATER-THAN OR EQUIVALENT TO */
    /* U+2274 */	BAD_CHAR,  	/* NEITHER LESS-THAN NOR EQUIVALENT TO */
    /* U+2275 */	BAD_CHAR,  	/* NEITHER GREATER-THAN NOR EQUIVALENT TO */
    /* U+2276 */	BAD_CHAR,  	/* LESS-THAN OR GREATER-THAN */
    /* U+2277 */	BAD_CHAR,  	/* GREATER-THAN OR LESS-THAN */
    /* U+2278 */	BAD_CHAR,  	/* NEITHER LESS-THAN NOR GREATER-THAN */
    /* U+2279 */	BAD_CHAR,  	/* NEITHER GREATER-THAN NOR LESS-THAN */
    /* U+227A */	BAD_CHAR,  	/* PRECEDES */
    /* U+227B */	BAD_CHAR,  	/* SUCCEEDS */
    /* U+227C */	BAD_CHAR,  	/* PRECEDES OR EQUAL TO */
    /* U+227D */	BAD_CHAR,  	/* SUCCEEDS OR EQUAL TO */
    /* U+227E */	BAD_CHAR,  	/* PRECEDES OR EQUIVALENT TO */
    /* U+227F */	BAD_CHAR,  	/* SUCCEEDS OR EQUIVALENT TO */
    /* U+2280 */	BAD_CHAR,  	/* DOES NOT PRECEDE */
    /* U+2281 */	BAD_CHAR,  	/* DOES NOT SUCCEED */
    /* U+2282 */	BAD_CHAR,  	/* SUBSET OF */
    /* U+2283 */	BAD_CHAR,  	/* SUPERSET OF */
    /* U+2284 */	BAD_CHAR,  	/* NOT A SUBSET OF */
    /* U+2285 */	BAD_CHAR,  	/* NOT A SUPERSET OF */
    /* U+2286 */	BAD_CHAR,  	/* SUBSET OF OR EQUAL TO */
    /* U+2287 */	BAD_CHAR,  	/* SUPERSET OF OR EQUAL TO */
    /* U+2288 */	BAD_CHAR,  	/* NEITHER A SUBSET OF NOR EQUAL TO */
    /* U+2289 */	BAD_CHAR,  	/* NEITHER A SUPERSET OF NOR EQUAL TO */
    /* U+228A */	BAD_CHAR,  	/* SUBSET OF WITH NOT EQUAL TO */
    /* U+228B */	BAD_CHAR,  	/* SUPERSET OF WITH NOT EQUAL TO */
    /* U+228C */	BAD_CHAR,  	/* MULTISET */
    /* U+228D */	BAD_CHAR,  	/* MULTISET MULTIPLICATION */
    /* U+228E */	BAD_CHAR,  	/* MULTISET UNION */
    /* U+228F */	BAD_CHAR,  	/* SQUARE IMAGE OF */
    /* U+2290 */	BAD_CHAR,  	/* SQUARE ORIGINAL OF */
    /* U+2291 */	BAD_CHAR,  	/* SQUARE IMAGE OF OR EQUAL TO */
    /* U+2292 */	BAD_CHAR,  	/* SQUARE ORIGINAL OF OR EQUAL TO */
    /* U+2293 */	BAD_CHAR,  	/* SQUARE CAP */
    /* U+2294 */	BAD_CHAR,  	/* SQUARE CUP */
    /* U+2295 */	BAD_CHAR,  	/* CIRCLED PLUS */
    /* U+2296 */	BAD_CHAR,  	/* CIRCLED MINUS */
    /* U+2297 */	BAD_CHAR,  	/* CIRCLED TIMES */
    /* U+2298 */	BAD_CHAR,  	/* CIRCLED DIVISION SLASH */
    /* U+2299 */	BAD_CHAR,  	/* CIRCLED DOT OPERATOR */
    /* U+229A */	BAD_CHAR,  	/* CIRCLED RING OPERATOR */
    /* U+229B */	BAD_CHAR,  	/* CIRCLED ASTERISK OPERATOR */
    /* U+229C */	BAD_CHAR,  	/* CIRCLED EQUALS */
    /* U+229D */	BAD_CHAR,  	/* CIRCLED DASH */
    /* U+229E */	BAD_CHAR,  	/* SQUARED PLUS */
    /* U+229F */	BAD_CHAR,  	/* SQUARED MINUS */
    /* U+22A0 */	BAD_CHAR,  	/* SQUARED TIMES */
    /* U+22A1 */	BAD_CHAR,  	/* SQUARED DOT OPERATOR */
    /* U+22A2 */	BAD_CHAR,  	/* RIGHT TACK */
    /* U+22A3 */	BAD_CHAR,  	/* LEFT TACK */
    /* U+22A4 */	BAD_CHAR,  	/* DOWN TACK */
    /* U+22A5 */	BAD_CHAR,  	/* UP TACK */
    /* U+22A6 */	BAD_CHAR,  	/* ASSERTION */
    /* U+22A7 */	BAD_CHAR,  	/* MODELS */
    /* U+22A8 */	BAD_CHAR,  	/* TRUE */
    /* U+22A9 */	BAD_CHAR,  	/* FORCES */
    /* U+22AA */	BAD_CHAR,  	/* TRIPLE VERTICAL BAR RIGHT TURNSTILE */
    /* U+22AB */	BAD_CHAR,  	/* DOUBLE VERTICAL BAR DOUBLE RIGHT TURNSTILE */
    /* U+22AC */	BAD_CHAR,  	/* DOES NOT PROVE */
    /* U+22AD */	BAD_CHAR,  	/* NOT TRUE */
    /* U+22AE */	BAD_CHAR,  	/* DOES NOT FORCE */
    /* U+22AF */	BAD_CHAR,  	/* NEGATED DOUBLE VERTICAL BAR DOUBLE RIGHT TURNSTILE */
    /* U+22B0 */	BAD_CHAR,  	/* PRECEDES UNDER RELATION */
    /* U+22B1 */	BAD_CHAR,  	/* SUCCEEDS UNDER RELATION */
    /* U+22B2 */	BAD_CHAR,  	/* NORMAL SUBGROUP OF */
    /* U+22B3 */	BAD_CHAR,  	/* CONTAINS AS NORMAL SUBGROUP */
    /* U+22B4 */	BAD_CHAR,  	/* NORMAL SUBGROUP OF OR EQUAL TO */
    /* U+22B5 */	BAD_CHAR,  	/* CONTAINS AS NORMAL SUBGROUP OR EQUAL TO */
    /* U+22B6 */	BAD_CHAR,  	/* ORIGINAL OF */
    /* U+22B7 */	BAD_CHAR,  	/* IMAGE OF */
    /* U+22B8 */	BAD_CHAR,  	/* MULTIMAP */
    /* U+22B9 */	BAD_CHAR,  	/* HERMITIAN CONJUGATE MATRIX */
    /* U+22BA */	BAD_CHAR,  	/* INTERCALATE */
    /* U+22BB */	BAD_CHAR,  	/* XOR */
    /* U+22BC */	BAD_CHAR,  	/* NAND */
    /* U+22BD */	BAD_CHAR,  	/* NOR */
    /* U+22BE */	BAD_CHAR,  	/* RIGHT ANGLE WITH ARC */
    /* U+22BF */	BAD_CHAR,  	/* RIGHT TRIANGLE */
    /* U+22C0 */	BAD_CHAR,  	/* N-ARY LOGICAL AND */
    /* U+22C1 */	BAD_CHAR,  	/* N-ARY LOGICAL OR */
    /* U+22C2 */	BAD_CHAR,  	/* N-ARY INTERSECTION */
    /* U+22C3 */	BAD_CHAR,  	/* N-ARY UNION */
    /* U+22C4 */	BAD_CHAR,  	/* DIAMOND OPERATOR */
    /* U+22C5 */	BAD_CHAR,  	/* DOT OPERATOR */
    /* U+22C6 */	BAD_CHAR,  	/* STAR OPERATOR */
    /* U+22C7 */	BAD_CHAR,  	/* DIVISION TIMES */
    /* U+22C8 */	BAD_CHAR,  	/* BOWTIE */
    /* U+22C9 */	BAD_CHAR,  	/* LEFT NORMAL FACTOR SEMIDIRECT PRODUCT */
    /* U+22CA */	BAD_CHAR,  	/* RIGHT NORMAL FACTOR SEMIDIRECT PRODUCT */
    /* U+22CB */	BAD_CHAR,  	/* LEFT SEMIDIRECT PRODUCT */
    /* U+22CC */	BAD_CHAR,  	/* RIGHT SEMIDIRECT PRODUCT */
    /* U+22CD */	BAD_CHAR,  	/* REVERSED TILDE EQUALS */
    /* U+22CE */	BAD_CHAR,  	/* CURLY LOGICAL OR */
    /* U+22CF */	BAD_CHAR,  	/* CURLY LOGICAL AND */
    /* U+22D0 */	BAD_CHAR,  	/* DOUBLE SUBSET */
    /* U+22D1 */	BAD_CHAR,  	/* DOUBLE SUPERSET */
    /* U+22D2 */	BAD_CHAR,  	/* DOUBLE INTERSECTION */
    /* U+22D3 */	BAD_CHAR,  	/* DOUBLE UNION */
    /* U+22D4 */	BAD_CHAR,  	/* PITCHFORK */
    /* U+22D5 */	BAD_CHAR,  	/* EQUAL AND PARALLEL TO */
    /* U+22D6 */	BAD_CHAR,  	/* LESS-THAN WITH DOT */
    /* U+22D7 */	BAD_CHAR,  	/* GREATER-THAN WITH DOT */
    /* U+22D8 */	BAD_CHAR,  	/* VERY MUCH LESS-THAN */
    /* U+22D9 */	BAD_CHAR,  	/* VERY MUCH GREATER-THAN */
    /* U+22DA */	BAD_CHAR,  	/* LESS-THAN EQUAL TO OR GREATER-THAN */
    /* U+22DB */	BAD_CHAR,  	/* GREATER-THAN EQUAL TO OR LESS-THAN */
    /* U+22DC */	BAD_CHAR,  	/* EQUAL TO OR LESS-THAN */
    /* U+22DD */	BAD_CHAR,  	/* EQUAL TO OR GREATER-THAN */
    /* U+22DE */	BAD_CHAR,  	/* EQUAL TO OR PRECEDES */
    /* U+22DF */	BAD_CHAR,  	/* EQUAL TO OR SUCCEEDS */
    /* U+22E0 */	BAD_CHAR,  	/* DOES NOT PRECEDE OR EQUAL */
    /* U+22E1 */	BAD_CHAR,  	/* DOES NOT SUCCEED OR EQUAL */
    /* U+22E2 */	BAD_CHAR,  	/* NOT SQUARE IMAGE OF OR EQUAL TO */
    /* U+22E3 */	BAD_CHAR,  	/* NOT SQUARE ORIGINAL OF OR EQUAL TO */
    /* U+22E4 */	BAD_CHAR,  	/* SQUARE IMAGE OF OR NOT EQUAL TO */
    /* U+22E5 */	BAD_CHAR,  	/* SQUARE ORIGINAL OF OR NOT EQUAL TO */
    /* U+22E6 */	BAD_CHAR,  	/* LESS-THAN BUT NOT EQUIVALENT TO */
    /* U+22E7 */	BAD_CHAR,  	/* GREATER-THAN BUT NOT EQUIVALENT TO */
    /* U+22E8 */	BAD_CHAR,  	/* PRECEDES BUT NOT EQUIVALENT TO */
    /* U+22E9 */	BAD_CHAR,  	/* SUCCEEDS BUT NOT EQUIVALENT TO */
    /* U+22EA */	BAD_CHAR,  	/* NOT NORMAL SUBGROUP OF */
    /* U+22EB */	BAD_CHAR,  	/* DOES NOT CONTAIN AS NORMAL SUBGROUP */
    /* U+22EC */	BAD_CHAR,  	/* NOT NORMAL SUBGROUP OF OR EQUAL TO */
    /* U+22ED */	BAD_CHAR,  	/* DOES NOT CONTAIN AS NORMAL SUBGROUP OR EQUAL */
    /* U+22EE */	BAD_CHAR,  	/* VERTICAL ELLIPSIS */
    /* U+22EF */	BAD_CHAR,  	/* MIDLINE HORIZONTAL ELLIPSIS */
    /* U+22F0 */	BAD_CHAR,  	/* UP RIGHT DIAGONAL ELLIPSIS */
    /* U+22F1 */	BAD_CHAR,  	/* DOWN RIGHT DIAGONAL ELLIPSIS */
    /* U+22F2 */	BAD_CHAR,  	/* ELEMENT OF WITH LONG HORIZONTAL STROKE */
    /* U+22F3 */	BAD_CHAR,  	/* ELEMENT OF WITH VERTICAL BAR AT END OF HORIZONTAL STROKE */
    /* U+22F4 */	BAD_CHAR,  	/* SMALL ELEMENT OF WITH VERTICAL BAR AT END OF HORIZONTAL STROKE */
    /* U+22F5 */	BAD_CHAR,  	/* ELEMENT OF WITH DOT ABOVE */
    /* U+22F6 */	BAD_CHAR,  	/* ELEMENT OF WITH OVERBAR */
    /* U+22F7 */	BAD_CHAR,  	/* SMALL ELEMENT OF WITH OVERBAR */
    /* U+22F8 */	BAD_CHAR,  	/* ELEMENT OF WITH UNDERBAR */
    /* U+22F9 */	BAD_CHAR,  	/* ELEMENT OF WITH TWO HORIZONTAL STROKES */
    /* U+22FA */	BAD_CHAR,  	/* CONTAINS WITH LONG HORIZONTAL STROKE */
    /* U+22FB */	BAD_CHAR,  	/* CONTAINS WITH VERTICAL BAR AT END OF HORIZONTAL STROKE */
    /* U+22FC */	BAD_CHAR,  	/* SMALL CONTAINS WITH VERTICAL BAR AT END OF HORIZONTAL STROKE */
    /* U+22FD */	BAD_CHAR,  	/* CONTAINS WITH OVERBAR */
    /* U+22FE */	BAD_CHAR,  	/* SMALL CONTAINS WITH OVERBAR */
    /* U+22FF */	BAD_CHAR,  	/* Z NOTATION BAG MEMBERSHIP */
    /* U+2300 */	BAD_CHAR,  	/* DIAMETER SIGN */
    /* U+2301 */	BAD_CHAR,  	/* ELECTRIC ARROW */
    /* U+2302 */	BAD_CHAR,  	/* HOUSE */
    /* U+2303 */	'^',       	/* UP ARROWHEAD */
    /* U+2304 */	'v',       	/* DOWN ARROWHEAD */
    /* U+2305 */	BAD_CHAR,  	/* PROJECTIVE */
    /* U+2306 */	BAD_CHAR,  	/* PERSPECTIVE */
    /* U+2307 */	BAD_CHAR,  	/* WAVY LINE */
    /* U+2308 */	BAD_CHAR,  	/* LEFT CEILING */
    /* U+2309 */	BAD_CHAR,  	/* RIGHT CEILING */
    /* U+230A */	'[',       	/* LEFT FLOOR */
    /* U+230B */	']',       	/* RIGHT FLOOR */
    /* U+230C */	BAD_CHAR,  	/* BOTTOM RIGHT CROP */
    /* U+230D */	BAD_CHAR,  	/* BOTTOM LEFT CROP */
    /* U+230E */	BAD_CHAR,  	/* TOP RIGHT CROP */
    /* U+230F */	BAD_CHAR,  	/* TOP LEFT CROP */
    /* U+2310 */	BAD_CHAR,  	/* REVERSED NOT SIGN */
    /* U+2311 */	BAD_CHAR,  	/* SQUARE LOZENGE */
    /* U+2312 */	BAD_CHAR,  	/* ARC */
    /* U+2313 */	BAD_CHAR,  	/* SEGMENT */
    /* U+2314 */	BAD_CHAR,  	/* SECTOR */
    /* U+2315 */	BAD_CHAR,  	/* TELEPHONE RECORDER */
    /* U+2316 */	BAD_CHAR,  	/* POSITION INDICATOR */
    /* U+2317 */	BAD_CHAR,  	/* VIEWDATA SQUARE */
    /* U+2318 */	BAD_CHAR,  	/* PLACE OF INTEREST SIGN */
    /* U+2319 */	BAD_CHAR,  	/* TURNED NOT SIGN */
    /* U+231A */	BAD_CHAR,  	/* WATCH */
    /* U+231B */	BAD_CHAR,  	/* HOURGLASS */
    /* U+231C */	BAD_CHAR,  	/* TOP LEFT CORNER */
    /* U+231D */	BAD_CHAR,  	/* TOP RIGHT CORNER */
    /* U+231E */	BAD_CHAR,  	/* BOTTOM LEFT CORNER */
    /* U+231F */	BAD_CHAR,  	/* BOTTOM RIGHT CORNER */
    /* U+2320 */	BAD_CHAR,  	/* TOP HALF INTEGRAL */
    /* U+2321 */	BAD_CHAR,  	/* BOTTOM HALF INTEGRAL */
    /* U+2322 */	BAD_CHAR,  	/* FROWN */
    /* U+2323 */	BAD_CHAR,  	/* SMILE */
    /* U+2324 */	BAD_CHAR,  	/* UP ARROWHEAD BETWEEN TWO HORIZONTAL BARS */
    /* U+2325 */	BAD_CHAR,  	/* OPTION KEY */
    /* U+2326 */	BAD_CHAR,  	/* ERASE TO THE RIGHT */
    /* U+2327 */	BAD_CHAR,  	/* X IN A RECTANGLE BOX */
    /* U+2328 */	BAD_CHAR,  	/* KEYBOARD */
    /* U+2329 */	'<',       	/* LEFT-POINTING ANGLE BRACKET */
    /* U+232A */	'>',       	/* RIGHT-POINTING ANGLE BRACKET */
    /* U+232B */	BAD_CHAR,  	/* ERASE TO THE LEFT */
    /* U+232C */	BAD_CHAR,  	/* BENZENE RING */
    /* U+232D */	BAD_CHAR,  	/* CYLINDRICITY */
    /* U+232E */	BAD_CHAR,  	/* ALL AROUND-PROFILE */
    /* U+232F */	BAD_CHAR,  	/* SYMMETRY */
    /* U+2330 */	BAD_CHAR,  	/* TOTAL RUNOUT */
    /* U+2331 */	BAD_CHAR,  	/* DIMENSION ORIGIN */
    /* U+2332 */	BAD_CHAR,  	/* CONICAL TAPER */
    /* U+2333 */	BAD_CHAR,  	/* SLOPE */
    /* U+2334 */	BAD_CHAR,  	/* COUNTERBORE */
    /* U+2335 */	BAD_CHAR,  	/* COUNTERSINK */
    /* U+2336 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL I-BEAM */
    /* U+2337 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL SQUISH QUAD */
    /* U+2338 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL QUAD EQUAL */
    /* U+2339 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL QUAD DIVIDE */
    /* U+233A */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL QUAD DIAMOND */
    /* U+233B */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL QUAD JOT */
    /* U+233C */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL QUAD CIRCLE */
    /* U+233D */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL CIRCLE STILE */
    /* U+233E */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL CIRCLE JOT */
    /* U+233F */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL SLASH BAR */
    /* U+2340 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL BACKSLASH BAR */
    /* U+2341 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL QUAD SLASH */
    /* U+2342 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL QUAD BACKSLASH */
    /* U+2343 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL QUAD LESS-THAN */
    /* U+2344 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL QUAD GREATER-THAN */
    /* U+2345 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL LEFTWARDS VANE */
    /* U+2346 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL RIGHTWARDS VANE */
    /* U+2347 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL QUAD LEFTWARDS ARROW */
    /* U+2348 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL QUAD RIGHTWARDS ARROW */
    /* U+2349 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL CIRCLE BACKSLASH */
    /* U+234A */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL DOWN TACK UNDERBAR */
    /* U+234B */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL DELTA STILE */
    /* U+234C */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL QUAD DOWN CARET */
    /* U+234D */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL QUAD DELTA */
    /* U+234E */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL DOWN TACK JOT */
    /* U+234F */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL UPWARDS VANE */
    /* U+2350 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL QUAD UPWARDS ARROW */
    /* U+2351 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL UP TACK OVERBAR */
    /* U+2352 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL DEL STILE */
    /* U+2353 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL QUAD UP CARET */
    /* U+2354 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL QUAD DEL */
    /* U+2355 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL UP TACK JOT */
    /* U+2356 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL DOWNWARDS VANE */
    /* U+2357 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL QUAD DOWNWARDS ARROW */
    /* U+2358 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL QUOTE UNDERBAR */
    /* U+2359 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL DELTA UNDERBAR */
    /* U+235A */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL DIAMOND UNDERBAR */
    /* U+235B */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL JOT UNDERBAR */
    /* U+235C */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL CIRCLE UNDERBAR */
    /* U+235D */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL UP SHOE JOT */
    /* U+235E */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL QUOTE QUAD */
    /* U+235F */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL CIRCLE STAR */
    /* U+2360 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL QUAD COLON */
    /* U+2361 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL UP TACK DIAERESIS */
    /* U+2362 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL DEL DIAERESIS */
    /* U+2363 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL STAR DIAERESIS */
    /* U+2364 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL JOT DIAERESIS */
    /* U+2365 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL CIRCLE DIAERESIS */
    /* U+2366 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL DOWN SHOE STILE */
    /* U+2367 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL LEFT SHOE STILE */
    /* U+2368 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL TILDE DIAERESIS */
    /* U+2369 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL GREATER-THAN DIAERESIS */
    /* U+236A */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL COMMA BAR */
    /* U+236B */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL DEL TILDE */
    /* U+236C */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL ZILDE */
    /* U+236D */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL STILE TILDE */
    /* U+236E */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL SEMICOLON UNDERBAR */
    /* U+236F */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL QUAD NOT EQUAL */
    /* U+2370 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL QUAD QUESTION */
    /* U+2371 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL DOWN CARET TILDE */
    /* U+2372 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL UP CARET TILDE */
    /* U+2373 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL IOTA */
    /* U+2374 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL RHO */
    /* U+2375 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL OMEGA */
    /* U+2376 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL ALPHA UNDERBAR */
    /* U+2377 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL EPSILON UNDERBAR */
    /* U+2378 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL IOTA UNDERBAR */
    /* U+2379 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL OMEGA UNDERBAR */
    /* U+237A */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL ALPHA */
    /* U+237B */	BAD_CHAR,  	/* NOT CHECK MARK */
    /* U+237C */	BAD_CHAR,  	/* RIGHT ANGLE WITH DOWNWARDS ZIGZAG ARROW */
    /* U+237D */	BAD_CHAR,  	/* SHOULDERED OPEN BOX */
    /* U+237E */	BAD_CHAR,  	/* BELL SYMBOL */
    /* U+237F */	BAD_CHAR,  	/* VERTICAL LINE WITH MIDDLE DOT */
    /* U+2380 */	BAD_CHAR,  	/* INSERTION SYMBOL */
    /* U+2381 */	BAD_CHAR,  	/* CONTINUOUS UNDERLINE SYMBOL */
    /* U+2382 */	BAD_CHAR,  	/* DISCONTINUOUS UNDERLINE SYMBOL */
    /* U+2383 */	BAD_CHAR,  	/* EMPHASIS SYMBOL */
    /* U+2384 */	BAD_CHAR,  	/* COMPOSITION SYMBOL */
    /* U+2385 */	BAD_CHAR,  	/* WHITE SQUARE WITH CENTRE VERTICAL LINE */
    /* U+2386 */	BAD_CHAR,  	/* ENTER SYMBOL */
    /* U+2387 */	BAD_CHAR,  	/* ALTERNATIVE KEY SYMBOL */
    /* U+2388 */	BAD_CHAR,  	/* HELM SYMBOL */
    /* U+2389 */	BAD_CHAR,  	/* CIRCLED HORIZONTAL BAR WITH NOTCH */
    /* U+238A */	BAD_CHAR,  	/* CIRCLED TRIANGLE DOWN */
    /* U+238B */	BAD_CHAR,  	/* BROKEN CIRCLE WITH NORTHWEST ARROW */
    /* U+238C */	BAD_CHAR,  	/* UNDO SYMBOL */
    /* U+238D */	BAD_CHAR,  	/* MONOSTABLE SYMBOL */
    /* U+238E */	BAD_CHAR,  	/* HYSTERESIS SYMBOL */
    /* U+238F */	BAD_CHAR,  	/* OPEN-CIRCUIT-OUTPUT H-TYPE SYMBOL */
    /* U+2390 */	BAD_CHAR,  	/* OPEN-CIRCUIT-OUTPUT L-TYPE SYMBOL */
    /* U+2391 */	BAD_CHAR,  	/* PASSIVE-PULL-DOWN-OUTPUT SYMBOL */
    /* U+2392 */	BAD_CHAR,  	/* PASSIVE-PULL-UP-OUTPUT SYMBOL */
    /* U+2393 */	BAD_CHAR,  	/* DIRECT CURRENT SYMBOL FORM TWO */
    /* U+2394 */	BAD_CHAR,  	/* SOFTWARE-FUNCTION SYMBOL */
    /* U+2395 */	BAD_CHAR,  	/* APL FUNCTIONAL SYMBOL QUAD */
    /* U+2396 */	BAD_CHAR,  	/* DECIMAL SEPARATOR KEY SYMBOL */
    /* U+2397 */	BAD_CHAR,  	/* PREVIOUS PAGE */
    /* U+2398 */	BAD_CHAR,  	/* NEXT PAGE */
    /* U+2399 */	BAD_CHAR,  	/* PRINT SCREEN SYMBOL */
    /* U+239A */	BAD_CHAR,  	/* CLEAR SCREEN SYMBOL */
    /* U+239B */	BAD_CHAR,  	/* LEFT PARENTHESIS UPPER HOOK */
    /* U+239C */	BAD_CHAR,  	/* LEFT PARENTHESIS EXTENSION */
    /* U+239D */	BAD_CHAR,  	/* LEFT PARENTHESIS LOWER HOOK */
    /* U+239E */	BAD_CHAR,  	/* RIGHT PARENTHESIS UPPER HOOK */
    /* U+239F */	BAD_CHAR,  	/* RIGHT PARENTHESIS EXTENSION */
    /* U+23A0 */	BAD_CHAR,  	/* RIGHT PARENTHESIS LOWER HOOK */
    /* U+23A1 */	BAD_CHAR,  	/* LEFT SQUARE BRACKET UPPER CORNER */
    /* U+23A2 */	BAD_CHAR,  	/* LEFT SQUARE BRACKET EXTENSION */
    /* U+23A3 */	BAD_CHAR,  	/* LEFT SQUARE BRACKET LOWER CORNER */
    /* U+23A4 */	BAD_CHAR,  	/* RIGHT SQUARE BRACKET UPPER CORNER */
    /* U+23A5 */	BAD_CHAR,  	/* RIGHT SQUARE BRACKET EXTENSION */
    /* U+23A6 */	BAD_CHAR,  	/* RIGHT SQUARE BRACKET LOWER CORNER */
    /* U+23A7 */	BAD_CHAR,  	/* LEFT CURLY BRACKET UPPER HOOK */
    /* U+23A8 */	BAD_CHAR,  	/* LEFT CURLY BRACKET MIDDLE PIECE */
    /* U+23A9 */	BAD_CHAR,  	/* LEFT CURLY BRACKET LOWER HOOK */
    /* U+23AA */	BAD_CHAR,  	/* CURLY BRACKET EXTENSION */
    /* U+23AB */	BAD_CHAR,  	/* RIGHT CURLY BRACKET UPPER HOOK */
    /* U+23AC */	BAD_CHAR,  	/* RIGHT CURLY BRACKET MIDDLE PIECE */
    /* U+23AD */	BAD_CHAR,  	/* RIGHT CURLY BRACKET LOWER HOOK */
    /* U+23AE */	BAD_CHAR,  	/* INTEGRAL EXTENSION */
    /* U+23AF */	BAD_CHAR,  	/* HORIZONTAL LINE EXTENSION */
    /* U+23B0 */	BAD_CHAR,  	/* UPPER LEFT OR LOWER RIGHT CURLY BRACKET SECTION */
    /* U+23B1 */	BAD_CHAR,  	/* UPPER RIGHT OR LOWER LEFT CURLY BRACKET SECTION */
    /* U+23B2 */	BAD_CHAR,  	/* SUMMATION TOP */
    /* U+23B3 */	BAD_CHAR,  	/* SUMMATION BOTTOM */
    /* U+23B4 */	BAD_CHAR,  	/* TOP SQUARE BRACKET */
    /* U+23B5 */	BAD_CHAR,  	/* BOTTOM SQUARE BRACKET */
    /* U+23B6 */	BAD_CHAR,  	/* BOTTOM SQUARE BRACKET OVER TOP SQUARE BRACKET */
    /* U+23B7 */	BAD_CHAR,  	/* RADICAL SYMBOL BOTTOM */
    /* U+23B8 */	BAD_CHAR,  	/* LEFT VERTICAL BOX LINE */
    /* U+23B9 */	BAD_CHAR,  	/* RIGHT VERTICAL BOX LINE */
    /* U+23BA */	BAD_CHAR,  	/* HORIZONTAL SCAN LINE-1 */
    /* U+23BB */	BAD_CHAR,  	/* HORIZONTAL SCAN LINE-3 */
    /* U+23BC */	BAD_CHAR,  	/* HORIZONTAL SCAN LINE-7 */
    /* U+23BD */	BAD_CHAR,  	/* HORIZONTAL SCAN LINE-9 */
    /* U+23BE */	BAD_CHAR,  	/* DENTISTRY SYMBOL LIGHT VERTICAL AND TOP RIGHT */
    /* U+23BF */	BAD_CHAR,  	/* DENTISTRY SYMBOL LIGHT VERTICAL AND BOTTOM RIGHT */
    /* U+23C0 */	BAD_CHAR,  	/* DENTISTRY SYMBOL LIGHT VERTICAL WITH CIRCLE */
    /* U+23C1 */	BAD_CHAR,  	/* DENTISTRY SYMBOL LIGHT DOWN AND HORIZONTAL WITH CIRCLE */
    /* U+23C2 */	BAD_CHAR,  	/* DENTISTRY SYMBOL LIGHT UP AND HORIZONTAL WITH CIRCLE */
    /* U+23C3 */	BAD_CHAR,  	/* DENTISTRY SYMBOL LIGHT VERTICAL WITH TRIANGLE */
    /* U+23C4 */	BAD_CHAR,  	/* DENTISTRY SYMBOL LIGHT DOWN AND HORIZONTAL WITH TRIANGLE */
    /* U+23C5 */	BAD_CHAR,  	/* DENTISTRY SYMBOL LIGHT UP AND HORIZONTAL WITH TRIANGLE */
    /* U+23C6 */	BAD_CHAR,  	/* DENTISTRY SYMBOL LIGHT VERTICAL AND WAVE */
    /* U+23C7 */	BAD_CHAR,  	/* DENTISTRY SYMBOL LIGHT DOWN AND HORIZONTAL WITH WAVE */
    /* U+23C8 */	BAD_CHAR,  	/* DENTISTRY SYMBOL LIGHT UP AND HORIZONTAL WITH WAVE */
    /* U+23C9 */	BAD_CHAR,  	/* DENTISTRY SYMBOL LIGHT DOWN AND HORIZONTAL */
    /* U+23CA */	BAD_CHAR,  	/* DENTISTRY SYMBOL LIGHT UP AND HORIZONTAL */
    /* U+23CB */	BAD_CHAR,  	/* DENTISTRY SYMBOL LIGHT VERTICAL AND TOP LEFT */
    /* U+23CC */	BAD_CHAR,  	/* DENTISTRY SYMBOL LIGHT VERTICAL AND BOTTOM LEFT */
    /* U+23CD */	BAD_CHAR,  	/* SQUARE FOOT */
    /* U+23CE */	BAD_CHAR,  	/* RETURN SYMBOL */
    /* U+23CF */	BAD_CHAR,  	/* EJECT SYMBOL */
    /* U+23D0 */	BAD_CHAR,  	/* VERTICAL LINE EXTENSION */
    /* U+23D1 */	BAD_CHAR,  	/* METRICAL BREVE */
    /* U+23D2 */	BAD_CHAR,  	/* METRICAL LONG OVER SHORT */
    /* U+23D3 */	BAD_CHAR,  	/* METRICAL SHORT OVER LONG */
    /* U+23D4 */	BAD_CHAR,  	/* METRICAL LONG OVER TWO SHORTS */
    /* U+23D5 */	BAD_CHAR,  	/* METRICAL TWO SHORTS OVER LONG */
    /* U+23D6 */	BAD_CHAR,  	/* METRICAL TWO SHORTS JOINED */
    /* U+23D7 */	BAD_CHAR,  	/* METRICAL TRISEME */
    /* U+23D8 */	BAD_CHAR,  	/* METRICAL TETRASEME */
    /* U+23D9 */	BAD_CHAR,  	/* METRICAL PENTASEME */
    /* U+23DA */	BAD_CHAR,  	/* EARTH GROUND */
    /* U+23DB */	BAD_CHAR,  	/* FUSE */
    /* U+23DC */	BAD_CHAR,
    /* U+23DD */	BAD_CHAR,
    /* U+23DE */	BAD_CHAR,
    /* U+23DF */	BAD_CHAR,
    /* U+23E0 */	BAD_CHAR,
    /* U+23E1 */	BAD_CHAR,
    /* U+23E2 */	BAD_CHAR,
    /* U+23E3 */	BAD_CHAR,
    /* U+23E4 */	BAD_CHAR,
    /* U+23E5 */	BAD_CHAR,
    /* U+23E6 */	BAD_CHAR,
    /* U+23E7 */	BAD_CHAR,
    /* U+23E8 */	BAD_CHAR,
    /* U+23E9 */	BAD_CHAR,
    /* U+23EA */	BAD_CHAR,
    /* U+23EB */	BAD_CHAR,
    /* U+23EC */	BAD_CHAR,
    /* U+23ED */	BAD_CHAR,
    /* U+23EE */	BAD_CHAR,
    /* U+23EF */	BAD_CHAR,
    /* U+23F0 */	BAD_CHAR,
    /* U+23F1 */	BAD_CHAR,
    /* U+23F2 */	BAD_CHAR,
    /* U+23F3 */	BAD_CHAR,
    /* U+23F4 */	BAD_CHAR,
    /* U+23F5 */	BAD_CHAR,
    /* U+23F6 */	BAD_CHAR,
    /* U+23F7 */	BAD_CHAR,
    /* U+23F8 */	BAD_CHAR,
    /* U+23F9 */	BAD_CHAR,
    /* U+23FA */	BAD_CHAR,
    /* U+23FB */	BAD_CHAR,
    /* U+23FC */	BAD_CHAR,
    /* U+23FD */	BAD_CHAR,
    /* U+23FE */	BAD_CHAR,
    /* U+23FF */	BAD_CHAR,
    /* U+2400..U+24FF */
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,BAD_CHAR,
    /* U+2500 */	'-',       	/* BOX DRAWINGS LIGHT HORIZONTAL */
    /* U+2501 */	'-',       	/* BOX DRAWINGS HEAVY HORIZONTAL */
    /* U+2502 */	'|',       	/* BOX DRAWINGS LIGHT VERTICAL */
    /* U+2503 */	'|',       	/* BOX DRAWINGS HEAVY VERTICAL */
    /* U+2504 */	'-',       	/* BOX DRAWINGS LIGHT TRIPLE DASH HORIZONTAL */
    /* U+2505 */	'-',       	/* BOX DRAWINGS HEAVY TRIPLE DASH HORIZONTAL */
    /* U+2506 */	'|',       	/* BOX DRAWINGS LIGHT TRIPLE DASH VERTICAL */
    /* U+2507 */	'|',       	/* BOX DRAWINGS HEAVY TRIPLE DASH VERTICAL */
    /* U+2508 */	'-',       	/* BOX DRAWINGS LIGHT QUADRUPLE DASH HORIZONTAL */
    /* U+2509 */	'-',       	/* BOX DRAWINGS HEAVY QUADRUPLE DASH HORIZONTAL */
    /* U+250A */	'|',       	/* BOX DRAWINGS LIGHT QUADRUPLE DASH VERTICAL */
    /* U+250B */	'|',       	/* BOX DRAWINGS HEAVY QUADRUPLE DASH VERTICAL */
    /* U+250C */	'+',       	/* BOX DRAWINGS LIGHT DOWN AND RIGHT */
    /* U+250D */	'+',       	/* BOX DRAWINGS DOWN LIGHT AND RIGHT HEAVY */
    /* U+250E */	'+',       	/* BOX DRAWINGS DOWN HEAVY AND RIGHT LIGHT */
    /* U+250F */	'+',       	/* BOX DRAWINGS HEAVY DOWN AND RIGHT */
    /* U+2510 */	'+',       	/* BOX DRAWINGS LIGHT DOWN AND LEFT */
    /* U+2511 */	'+',       	/* BOX DRAWINGS DOWN LIGHT AND LEFT HEAVY */
    /* U+2512 */	'+',       	/* BOX DRAWINGS DOWN HEAVY AND LEFT LIGHT */
    /* U+2513 */	'+',       	/* BOX DRAWINGS HEAVY DOWN AND LEFT */
    /* U+2514 */	'+',       	/* BOX DRAWINGS LIGHT UP AND RIGHT */
    /* U+2515 */	'+',       	/* BOX DRAWINGS UP LIGHT AND RIGHT HEAVY */
    /* U+2516 */	'+',       	/* BOX DRAWINGS UP HEAVY AND RIGHT LIGHT */
    /* U+2517 */	'+',       	/* BOX DRAWINGS HEAVY UP AND RIGHT */
    /* U+2518 */	'+',       	/* BOX DRAWINGS LIGHT UP AND LEFT */
    /* U+2519 */	'+',       	/* BOX DRAWINGS UP LIGHT AND LEFT HEAVY */
    /* U+251A */	'+',       	/* BOX DRAWINGS UP HEAVY AND LEFT LIGHT */
    /* U+251B */	'+',       	/* BOX DRAWINGS HEAVY UP AND LEFT */
    /* U+251C */	'+',       	/* BOX DRAWINGS LIGHT VERTICAL AND RIGHT */
    /* U+251D */	'+',       	/* BOX DRAWINGS VERTICAL LIGHT AND RIGHT HEAVY */
    /* U+251E */	'+',       	/* BOX DRAWINGS UP HEAVY AND RIGHT DOWN LIGHT */
    /* U+251F */	'+',       	/* BOX DRAWINGS DOWN HEAVY AND RIGHT UP LIGHT */
    /* U+2520 */	'+',       	/* BOX DRAWINGS VERTICAL HEAVY AND RIGHT LIGHT */
    /* U+2521 */	'+',       	/* BOX DRAWINGS DOWN LIGHT AND RIGHT UP HEAVY */
    /* U+2522 */	'+',       	/* BOX DRAWINGS UP LIGHT AND RIGHT DOWN HEAVY */
    /* U+2523 */	'+',       	/* BOX DRAWINGS HEAVY VERTICAL AND RIGHT */
    /* U+2524 */	'+',       	/* BOX DRAWINGS LIGHT VERTICAL AND LEFT */
    /* U+2525 */	'+',       	/* BOX DRAWINGS VERTICAL LIGHT AND LEFT HEAVY */
    /* U+2526 */	'+',       	/* BOX DRAWINGS UP HEAVY AND LEFT DOWN LIGHT */
    /* U+2527 */	'+',       	/* BOX DRAWINGS DOWN HEAVY AND LEFT UP LIGHT */
    /* U+2528 */	'+',       	/* BOX DRAWINGS VERTICAL HEAVY AND LEFT LIGHT */
    /* U+2529 */	'+',       	/* BOX DRAWINGS DOWN LIGHT AND LEFT UP HEAVY */
    /* U+252A */	'+',       	/* BOX DRAWINGS UP LIGHT AND LEFT DOWN HEAVY */
    /* U+252B */	'+',       	/* BOX DRAWINGS HEAVY VERTICAL AND LEFT */
    /* U+252C */	'+',       	/* BOX DRAWINGS LIGHT DOWN AND HORIZONTAL */
    /* U+252D */	'+',       	/* BOX DRAWINGS LEFT HEAVY AND RIGHT DOWN LIGHT */
    /* U+252E */	'+',       	/* BOX DRAWINGS RIGHT HEAVY AND LEFT DOWN LIGHT */
    /* U+252F */	'+',       	/* BOX DRAWINGS DOWN LIGHT AND HORIZONTAL HEAVY */
    /* U+2530 */	'+',       	/* BOX DRAWINGS DOWN HEAVY AND HORIZONTAL LIGHT */
    /* U+2531 */	'+',       	/* BOX DRAWINGS RIGHT LIGHT AND LEFT DOWN HEAVY */
    /* U+2532 */	'+',       	/* BOX DRAWINGS LEFT LIGHT AND RIGHT DOWN HEAVY */
    /* U+2533 */	'+',       	/* BOX DRAWINGS HEAVY DOWN AND HORIZONTAL */
    /* U+2534 */	'+',       	/* BOX DRAWINGS LIGHT UP AND HORIZONTAL */
    /* U+2535 */	'+',       	/* BOX DRAWINGS LEFT HEAVY AND RIGHT UP LIGHT */
    /* U+2536 */	'+',       	/* BOX DRAWINGS RIGHT HEAVY AND LEFT UP LIGHT */
    /* U+2537 */	'+',       	/* BOX DRAWINGS UP LIGHT AND HORIZONTAL HEAVY */
    /* U+2538 */	'+',       	/* BOX DRAWINGS UP HEAVY AND HORIZONTAL LIGHT */
    /* U+2539 */	'+',       	/* BOX DRAWINGS RIGHT LIGHT AND LEFT UP HEAVY */
    /* U+253A */	'+',       	/* BOX DRAWINGS LEFT LIGHT AND RIGHT UP HEAVY */
    /* U+253B */	'+',       	/* BOX DRAWINGS HEAVY UP AND HORIZONTAL */
    /* U+253C */	'+',       	/* BOX DRAWINGS LIGHT VERTICAL AND HORIZONTAL */
    /* U+253D */	'+',       	/* BOX DRAWINGS LEFT HEAVY AND RIGHT VERTICAL LIGHT */
    /* U+253E */	'+',       	/* BOX DRAWINGS RIGHT HEAVY AND LEFT VERTICAL LIGHT */
    /* U+253F */	'+',       	/* BOX DRAWINGS VERTICAL LIGHT AND HORIZONTAL HEAVY */
    /* U+2540 */	'+',       	/* BOX DRAWINGS UP HEAVY AND DOWN HORIZONTAL LIGHT */
    /* U+2541 */	'+',       	/* BOX DRAWINGS DOWN HEAVY AND UP HORIZONTAL LIGHT */
    /* U+2542 */	'+',       	/* BOX DRAWINGS VERTICAL HEAVY AND HORIZONTAL LIGHT */
    /* U+2543 */	'+',       	/* BOX DRAWINGS LEFT UP HEAVY AND RIGHT DOWN LIGHT */
    /* U+2544 */	'+',       	/* BOX DRAWINGS RIGHT UP HEAVY AND LEFT DOWN LIGHT */
    /* U+2545 */	'+',       	/* BOX DRAWINGS LEFT DOWN HEAVY AND RIGHT UP LIGHT */
    /* U+2546 */	'+',       	/* BOX DRAWINGS RIGHT DOWN HEAVY AND LEFT UP LIGHT */
    /* U+2547 */	'+',       	/* BOX DRAWINGS DOWN LIGHT AND UP HORIZONTAL HEAVY */
    /* U+2548 */	'+',       	/* BOX DRAWINGS UP LIGHT AND DOWN HORIZONTAL HEAVY */
    /* U+2549 */	'+',       	/* BOX DRAWINGS RIGHT LIGHT AND LEFT VERTICAL HEAVY */
    /* U+254A */	'+',       	/* BOX DRAWINGS LEFT LIGHT AND RIGHT VERTICAL HEAVY */
    /* U+254B */	'+',       	/* BOX DRAWINGS HEAVY VERTICAL AND HORIZONTAL */
    /* U+254C */	'-',       	/* BOX DRAWINGS LIGHT DOUBLE DASH HORIZONTAL */
    /* U+254D */	'-',       	/* BOX DRAWINGS HEAVY DOUBLE DASH HORIZONTAL */
    /* U+254E */	'|',       	/* BOX DRAWINGS LIGHT DOUBLE DASH VERTICAL */
    /* U+254F */	'|',       	/* BOX DRAWINGS HEAVY DOUBLE DASH VERTICAL */
    /* U+2550 */	'=',       	/* BOX DRAWINGS DOUBLE HORIZONTAL */
    /* U+2551 */	'|',       	/* BOX DRAWINGS DOUBLE VERTICAL */
    /* U+2552 */	'+',       	/* BOX DRAWINGS DOWN SINGLE AND RIGHT DOUBLE */
    /* U+2553 */	'+',       	/* BOX DRAWINGS DOWN DOUBLE AND RIGHT SINGLE */
    /* U+2554 */	'+',       	/* BOX DRAWINGS DOUBLE DOWN AND RIGHT */
    /* U+2555 */	'+',       	/* BOX DRAWINGS DOWN SINGLE AND LEFT DOUBLE */
    /* U+2556 */	'+',       	/* BOX DRAWINGS DOWN DOUBLE AND LEFT SINGLE */
    /* U+2557 */	'+',       	/* BOX DRAWINGS DOUBLE DOWN AND LEFT */
    /* U+2558 */	'+',       	/* BOX DRAWINGS UP SINGLE AND RIGHT DOUBLE */
    /* U+2559 */	'+',       	/* BOX DRAWINGS UP DOUBLE AND RIGHT SINGLE */
    /* U+255A */	'+',       	/* BOX DRAWINGS DOUBLE UP AND RIGHT */
    /* U+255B */	'+',       	/* BOX DRAWINGS UP SINGLE AND LEFT DOUBLE */
    /* U+255C */	'+',       	/* BOX DRAWINGS UP DOUBLE AND LEFT SINGLE */
    /* U+255D */	'+',       	/* BOX DRAWINGS DOUBLE UP AND LEFT */
    /* U+255E */	'+',       	/* BOX DRAWINGS VERTICAL SINGLE AND RIGHT DOUBLE */
    /* U+255F */	'+',       	/* BOX DRAWINGS VERTICAL DOUBLE AND RIGHT SINGLE */
    /* U+2560 */	'+',       	/* BOX DRAWINGS DOUBLE VERTICAL AND RIGHT */
    /* U+2561 */	'+',       	/* BOX DRAWINGS VERTICAL SINGLE AND LEFT DOUBLE */
    /* U+2562 */	'+',       	/* BOX DRAWINGS VERTICAL DOUBLE AND LEFT SINGLE */
    /* U+2563 */	'+',       	/* BOX DRAWINGS DOUBLE VERTICAL AND LEFT */
    /* U+2564 */	'+',       	/* BOX DRAWINGS DOWN SINGLE AND HORIZONTAL DOUBLE */
    /* U+2565 */	'+',       	/* BOX DRAWINGS DOWN DOUBLE AND HORIZONTAL SINGLE */
    /* U+2566 */	'+',       	/* BOX DRAWINGS DOUBLE DOWN AND HORIZONTAL */
    /* U+2567 */	'+',       	/* BOX DRAWINGS UP SINGLE AND HORIZONTAL DOUBLE */
    /* U+2568 */	'+',       	/* BOX DRAWINGS UP DOUBLE AND HORIZONTAL SINGLE */
    /* U+2569 */	'+',       	/* BOX DRAWINGS DOUBLE UP AND HORIZONTAL */
    /* U+256A */	'+',       	/* BOX DRAWINGS VERTICAL SINGLE AND HORIZONTAL DOUBLE */
    /* U+256B */	'+',       	/* BOX DRAWINGS VERTICAL DOUBLE AND HORIZONTAL SINGLE */
    /* U+256C */	'+',       	/* BOX DRAWINGS DOUBLE VERTICAL AND HORIZONTAL */
    /* U+256D */	'.',       	/* BOX DRAWINGS LIGHT ARC DOWN AND RIGHT */
    /* U+256E */	'.',       	/* BOX DRAWINGS LIGHT ARC DOWN AND LEFT */
    /* U+256F */	'\'',      	/* BOX DRAWINGS LIGHT ARC UP AND LEFT */
    /* U+2570 */	'`',       	/* BOX DRAWINGS LIGHT ARC UP AND RIGHT */
    /* U+2571 */	'/',       	/* BOX DRAWINGS LIGHT DIAGONAL UPPER RIGHT TO LOWER LEFT */
    /* U+2572 */	'\\',      	/* BOX DRAWINGS LIGHT DIAGONAL UPPER LEFT TO LOWER RIGHT */
    /* U+2573 */	'X',       	/* BOX DRAWINGS LIGHT DIAGONAL CROSS */
    /* U+2574 */	'-',       	/* BOX DRAWINGS LIGHT LEFT */
    /* U+2575 */	'\'',      	/* BOX DRAWINGS LIGHT UP */
    /* U+2576 */	'-',       	/* BOX DRAWINGS LIGHT RIGHT */
    /* U+2577 */	'.',       	/* BOX DRAWINGS LIGHT DOWN */
    /* U+2578 */	'-',       	/* BOX DRAWINGS HEAVY LEFT */
    /* U+2579 */	'\'',      	/* BOX DRAWINGS HEAVY UP */
    /* U+257A */	'-',       	/* BOX DRAWINGS HEAVY RIGHT */
    /* U+257B */	'.',       	/* BOX DRAWINGS HEAVY DOWN */
    /* U+257C */	'-',       	/* BOX DRAWINGS LIGHT LEFT AND HEAVY RIGHT */
    /* U+257D */	'|',       	/* BOX DRAWINGS LIGHT UP AND HEAVY DOWN */
    /* U+257E */	'-',       	/* BOX DRAWINGS HEAVY LEFT AND LIGHT RIGHT */
    /* U+257F */	'|',       	/* BOX DRAWINGS HEAVY UP AND LIGHT DOWN */
    /* U+2580 */	BAD_CHAR,  	/* UPPER HALF BLOCK */
    /* U+2581 */	BAD_CHAR,  	/* LOWER ONE EIGHTH BLOCK */
    /* U+2582 */	BAD_CHAR,  	/* LOWER ONE QUARTER BLOCK */
    /* U+2583 */	BAD_CHAR,  	/* LOWER THREE EIGHTHS BLOCK */
    /* U+2584 */	BAD_CHAR,  	/* LOWER HALF BLOCK */
    /* U+2585 */	BAD_CHAR,  	/* LOWER FIVE EIGHTHS BLOCK */
    /* U+2586 */	BAD_CHAR,  	/* LOWER THREE QUARTERS BLOCK */
    /* U+2587 */	BAD_CHAR,  	/* LOWER SEVEN EIGHTHS BLOCK */
    /* U+2588 */	'#',       	/* FULL BLOCK */
    /* U+2589 */	BAD_CHAR,  	/* LEFT SEVEN EIGHTHS BLOCK */
    /* U+258A */	BAD_CHAR,  	/* LEFT THREE QUARTERS BLOCK */
    /* U+258B */	BAD_CHAR,  	/* LEFT FIVE EIGHTHS BLOCK */
    /* U+258C */	BAD_CHAR,  	/* LEFT HALF BLOCK */
    /* U+258D */	BAD_CHAR,  	/* LEFT THREE EIGHTHS BLOCK */
    /* U+258E */	BAD_CHAR,  	/* LEFT ONE QUARTER BLOCK */
    /* U+258F */	BAD_CHAR,  	/* LEFT ONE EIGHTH BLOCK */
    /* U+2590 */	BAD_CHAR,  	/* RIGHT HALF BLOCK */
    /* U+2591 */	'.',       	/* LIGHT SHADE */
    /* U+2592 */	'X',       	/* MEDIUM SHADE */
    /* U+2593 */	'#',       	/* DARK SHADE */
    /* U+2594 */	BAD_CHAR,  	/* UPPER ONE EIGHTH BLOCK */
    /* U+2595 */	BAD_CHAR,  	/* RIGHT ONE EIGHTH BLOCK */
    /* U+2596 */	BAD_CHAR,  	/* QUADRANT LOWER LEFT */
    /* U+2597 */	BAD_CHAR,  	/* QUADRANT LOWER RIGHT */
    /* U+2598 */	BAD_CHAR,  	/* QUADRANT UPPER LEFT */
    /* U+2599 */	BAD_CHAR,  	/* QUADRANT UPPER LEFT AND LOWER LEFT AND LOWER RIGHT */
    /* U+259A */	BAD_CHAR,  	/* QUADRANT UPPER LEFT AND LOWER RIGHT */
    /* U+259B */	BAD_CHAR,  	/* QUADRANT UPPER LEFT AND UPPER RIGHT AND LOWER LEFT */
    /* U+259C */	BAD_CHAR,  	/* QUADRANT UPPER LEFT AND UPPER RIGHT AND LOWER RIGHT */
    /* U+259D */	BAD_CHAR,  	/* QUADRANT UPPER RIGHT */
    /* U+259E */	BAD_CHAR,  	/* QUADRANT UPPER RIGHT AND LOWER LEFT */
    /* U+259F */	BAD_CHAR,  	/* QUADRANT UPPER RIGHT AND LOWER LEFT AND LOWER RIGHT */
    /* U+25A0 */	BAD_CHAR,  	/* BLACK SQUARE */
    /* U+25A1 */	BAD_CHAR,  	/* WHITE SQUARE */
    /* U+25A2 */	BAD_CHAR,  	/* WHITE SQUARE WITH ROUNDED CORNERS */
    /* U+25A3 */	BAD_CHAR,  	/* WHITE SQUARE CONTAINING BLACK SMALL SQUARE */
    /* U+25A4 */	BAD_CHAR,  	/* SQUARE WITH HORIZONTAL FILL */
    /* U+25A5 */	BAD_CHAR,  	/* SQUARE WITH VERTICAL FILL */
    /* U+25A6 */	BAD_CHAR,  	/* SQUARE WITH ORTHOGONAL CROSSHATCH FILL */
    /* U+25A7 */	BAD_CHAR,  	/* SQUARE WITH UPPER LEFT TO LOWER RIGHT FILL */
    /* U+25A8 */	BAD_CHAR,  	/* SQUARE WITH UPPER RIGHT TO LOWER LEFT FILL */
    /* U+25A9 */	BAD_CHAR,  	/* SQUARE WITH DIAGONAL CROSSHATCH FILL */
    /* U+25AA */	'*',       	/* BLACK SMALL SQUARE */
    /* U+25AB */	'*',       	/* WHITE SMALL SQUARE */
    /* U+25AC */	BAD_CHAR,  	/* BLACK RECTANGLE */
    /* U+25AD */	BAD_CHAR,  	/* WHITE RECTANGLE */
    /* U+25AE */	BAD_CHAR,  	/* BLACK VERTICAL RECTANGLE */
    /* U+25AF */	BAD_CHAR,  	/* WHITE VERTICAL RECTANGLE */
    /* U+25B0 */	BAD_CHAR,  	/* BLACK PARALLELOGRAM */
    /* U+25B1 */	BAD_CHAR,  	/* WHITE PARALLELOGRAM */
    /* U+25B2 */	'^',       	/* BLACK UP-POINTING TRIANGLE */
    /* U+25B3 */	'^',       	/* WHITE UP-POINTING TRIANGLE */
    /* U+25B4 */	'^',       	/* BLACK UP-POINTING SMALL TRIANGLE */
    /* U+25B5 */	'^',       	/* WHITE UP-POINTING SMALL TRIANGLE */
    /* U+25B6 */	'>',       	/* BLACK RIGHT-POINTING TRIANGLE */
    /* U+25B7 */	'>',       	/* WHITE RIGHT-POINTING TRIANGLE */
    /* U+25B8 */	'>',       	/* BLACK RIGHT-POINTING SMALL TRIANGLE */
    /* U+25B9 */	'>',       	/* WHITE RIGHT-POINTING SMALL TRIANGLE */
    /* U+25BA */	'>',       	/* BLACK RIGHT-POINTING POINTER */
    /* U+25BB */	'>',       	/* WHITE RIGHT-POINTING POINTER */
    /* U+25BC */	'V',       	/* BLACK DOWN-POINTING TRIANGLE */
    /* U+25BD */	'V',       	/* WHITE DOWN-POINTING TRIANGLE */
    /* U+25BE */	'v',       	/* BLACK DOWN-POINTING SMALL TRIANGLE */
    /* U+25BF */	'v',       	/* WHITE DOWN-POINTING SMALL TRIANGLE */
    /* U+25C0 */	'<',       	/* BLACK LEFT-POINTING TRIANGLE */
    /* U+25C1 */	'<',       	/* WHITE LEFT-POINTING TRIANGLE */
    /* U+25C2 */	'<',       	/* BLACK LEFT-POINTING SMALL TRIANGLE */
    /* U+25C3 */	'<',       	/* WHITE LEFT-POINTING SMALL TRIANGLE */
    /* U+25C4 */	'<',       	/* BLACK LEFT-POINTING POINTER */
    /* U+25C5 */	'<',       	/* WHITE LEFT-POINTING POINTER */
    /* U+25C6 */	BAD_CHAR,  	/* BLACK DIAMOND */
    /* U+25C7 */	BAD_CHAR,  	/* WHITE DIAMOND */
    /* U+25C8 */	BAD_CHAR,  	/* WHITE DIAMOND CONTAINING BLACK SMALL DIAMOND */
    /* U+25C9 */	BAD_CHAR,  	/* FISHEYE */
    /* U+25CA */	BAD_CHAR,  	/* LOZENGE */
    /* U+25CB */	'o',       	/* WHITE CIRCLE */
    /* U+25CC */	BAD_CHAR,  	/* DOTTED CIRCLE */
    /* U+25CD */	BAD_CHAR,  	/* CIRCLE WITH VERTICAL FILL */
    /* U+25CE */	BAD_CHAR,  	/* BULLSEYE */
    /* U+25CF */	BAD_CHAR,  	/* BLACK CIRCLE */
    /* U+25D0 */	BAD_CHAR,  	/* CIRCLE WITH LEFT HALF BLACK */
    /* U+25D1 */	BAD_CHAR,  	/* CIRCLE WITH RIGHT HALF BLACK */
    /* U+25D2 */	BAD_CHAR,  	/* CIRCLE WITH LOWER HALF BLACK */
    /* U+25D3 */	BAD_CHAR,  	/* CIRCLE WITH UPPER HALF BLACK */
    /* U+25D4 */	BAD_CHAR,  	/* CIRCLE WITH UPPER RIGHT QUADRANT BLACK */
    /* U+25D5 */	BAD_CHAR,  	/* CIRCLE WITH ALL BUT UPPER LEFT QUADRANT BLACK */
    /* U+25D6 */	BAD_CHAR,  	/* LEFT HALF BLACK CIRCLE */
    /* U+25D7 */	BAD_CHAR,  	/* RIGHT HALF BLACK CIRCLE */
    /* U+25D8 */	BAD_CHAR,  	/* INVERSE BULLET */
    /* U+25D9 */	BAD_CHAR,  	/* INVERSE WHITE CIRCLE */
    /* U+25DA */	BAD_CHAR,  	/* UPPER HALF INVERSE WHITE CIRCLE */
    /* U+25DB */	BAD_CHAR,  	/* LOWER HALF INVERSE WHITE CIRCLE */
    /* U+25DC */	BAD_CHAR,  	/* UPPER LEFT QUADRANT CIRCULAR ARC */
    /* U+25DD */	BAD_CHAR,  	/* UPPER RIGHT QUADRANT CIRCULAR ARC */
    /* U+25DE */	BAD_CHAR,  	/* LOWER RIGHT QUADRANT CIRCULAR ARC */
    /* U+25DF */	BAD_CHAR,  	/* LOWER LEFT QUADRANT CIRCULAR ARC */
    /* U+25E0 */	BAD_CHAR,  	/* UPPER HALF CIRCLE */
    /* U+25E1 */	BAD_CHAR,  	/* LOWER HALF CIRCLE */
    /* U+25E2 */	BAD_CHAR,  	/* BLACK LOWER RIGHT TRIANGLE */
    /* U+25E3 */	BAD_CHAR,  	/* BLACK LOWER LEFT TRIANGLE */
    /* U+25E4 */	BAD_CHAR,  	/* BLACK UPPER LEFT TRIANGLE */
    /* U+25E5 */	BAD_CHAR,  	/* BLACK UPPER RIGHT TRIANGLE */
    /* U+25E6 */	BAD_CHAR,  	/* WHITE BULLET */
    /* U+25E7 */	BAD_CHAR,  	/* SQUARE WITH LEFT HALF BLACK */
    /* U+25E8 */	BAD_CHAR,  	/* SQUARE WITH RIGHT HALF BLACK */
    /* U+25E9 */	BAD_CHAR,  	/* SQUARE WITH UPPER LEFT DIAGONAL HALF BLACK */
    /* U+25EA */	BAD_CHAR,  	/* SQUARE WITH LOWER RIGHT DIAGONAL HALF BLACK */
    /* U+25EB */	BAD_CHAR,  	/* WHITE SQUARE WITH VERTICAL BISECTING LINE */
    /* U+25EC */	BAD_CHAR,  	/* WHITE UP-POINTING TRIANGLE WITH DOT */
    /* U+25ED */	BAD_CHAR,  	/* UP-POINTING TRIANGLE WITH LEFT HALF BLACK */
    /* U+25EE */	BAD_CHAR,  	/* UP-POINTING TRIANGLE WITH RIGHT HALF BLACK */
    /* U+25EF */	'O',       	/* LARGE CIRCLE */
};
