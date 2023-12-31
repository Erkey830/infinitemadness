static const u8 sCharacteristic00[] = _("Le encanta comer.");
static const u8 sCharacteristic01[] = _("Orgulloso de su poder.");
static const u8 sCharacteristic02[] = _("Cuerpo robusto.");
static const u8 sCharacteristic03[] = _("Le encanta correr.");
static const u8 sCharacteristic04[] = _("Es muy curioso.");
static const u8 sCharacteristic05[] = _("Tiene voluntad fuerte.");
static const u8 sCharacteristic06[] = _("Toma muchas siestas.");	//Is "Often dozes off" in Gens 4 and 5
static const u8 sCharacteristic07[] = _("Le gusta revolcarse.");
static const u8 sCharacteristic08[] = _("Capaz de recibir golpes.");
static const u8 sCharacteristic09[] = _("Alerta a los sonidos.");
static const u8 sCharacteristic10[] = _("Travieso.");
static const u8 sCharacteristic11[] = _("Algo vanidoso.");
static const u8 sCharacteristic12[] = _("Cabecea mucho.");			//Is "Often scatters things" in Gens 4 and 5
static const u8 sCharacteristic13[] = _("Un poco irascible.");
static const u8 sCharacteristic14[] = _("Muy persistente.");
static const u8 sCharacteristic15[] = _("Impetuous and silly.");
static const u8 sCharacteristic16[] = _("Completamente astuto.");
static const u8 sCharacteristic17[] = _("Muy desafiante.");
static const u8 sCharacteristic18[] = _("Esparce cosas a menudo.");
static const u8 sCharacteristic19[] = _("Le gusta pelear.");
static const u8 sCharacteristic20[] = _("Buena resistencia.");
static const u8 sCharacteristic21[] = _("Un poco payaso.");
static const u8 sCharacteristic22[] = _("Bastante distraído");
static const u8 sCharacteristic23[] = _("Odia perder.");
static const u8 sCharacteristic24[] = _("Le encanta relajarse.");
static const u8 sCharacteristic25[] = _("Muy irascible.");
static const u8 sCharacteristic26[] = _("Buena perseverancia.");
static const u8 sCharacteristic27[] = _("Huidizo.");
static const u8 sCharacteristic28[] = _("Muy quisquilloso.");
static const u8 sCharacteristic29[] = _("Algo testarudo.");

static const u8 sFlavorSpicy[] = _("Le gusta comida{COLOR 5}{SHADOW 6}picante{COLOR 7}{SHADOW 8}.");
static const u8 sFlavorDry[] = _("Le gusta comida {COLOR 5}{SHADOW 6}seca{COLOR 7}{SHADOW 8}.");
static const u8 sFlavorSweet[] = _("Le gusta comida {COLOR 5}{SHADOW 6}dulce{COLOR 7}{SHADOW 8}.");
static const u8 sFlavorBitter[] = _("Le gusta comida {COLOR 5}{SHADOW 6}amargo{COLOR 7}{SHADOW 8}.");
static const u8 sFlavorSour[] = _("Le gusta comida {COLOR 5}{SHADOW 6}agrio{COLOR 7}{SHADOW 8}.");
static const u8 sFlavorNeutral[] = _("Come de todo alegremente.");

const u8 *const gCharacteristicPointers[30] = 
{
    sCharacteristic00,
	sCharacteristic01,
    sCharacteristic02,
	sCharacteristic03,
    sCharacteristic04,
	sCharacteristic05,
    sCharacteristic06,
	sCharacteristic07,
    sCharacteristic08,
	sCharacteristic09,
    sCharacteristic10,
	sCharacteristic11,
    sCharacteristic12,
	sCharacteristic13,
    sCharacteristic14,
	sCharacteristic15,
    sCharacteristic16,
	sCharacteristic17,
    sCharacteristic18,
	sCharacteristic19,
    sCharacteristic20,
	sCharacteristic21,
    sCharacteristic22,
	sCharacteristic23,
    sCharacteristic24,
	sCharacteristic25,
    sCharacteristic26,
	sCharacteristic27,
    sCharacteristic28,
	sCharacteristic29,
};

const u8 *const gNatureFlavorPointers[25] =
{
	[NATURE_HARDY]   = sFlavorNeutral,
	[NATURE_LONELY]  = sFlavorSpicy,
	[NATURE_BRAVE]   = sFlavorSpicy,
	[NATURE_ADAMANT] = sFlavorSpicy,
	[NATURE_NAUGHTY] = sFlavorSpicy,
	[NATURE_BOLD]    = sFlavorSour,
	[NATURE_DOCILE]  = sFlavorNeutral,
	[NATURE_RELAXED] = sFlavorSour,
	[NATURE_IMPISH]  = sFlavorSour,
	[NATURE_LAX]     = sFlavorSour,
	[NATURE_TIMID]   = sFlavorSweet,
	[NATURE_HASTY]   = sFlavorSweet,
	[NATURE_SERIOUS] = sFlavorNeutral,
	[NATURE_JOLLY]   = sFlavorSweet,
	[NATURE_NAIVE]   = sFlavorSweet,
	[NATURE_MODEST]  = sFlavorDry,
	[NATURE_MILD]    = sFlavorDry,
	[NATURE_QUIET]   = sFlavorDry,
	[NATURE_BASHFUL] = sFlavorNeutral,
	[NATURE_RASH]    = sFlavorDry,
	[NATURE_CALM]    = sFlavorBitter,
	[NATURE_GENTLE]  = sFlavorBitter,
	[NATURE_SASSY]   = sFlavorBitter,
	[NATURE_CAREFUL] = sFlavorBitter,
	[NATURE_QUIRKY]  = sFlavorNeutral,
};
