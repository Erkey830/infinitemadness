
#if B_BINDING_TURNS >= GEN_5
#define BINDING_TURNS "4 or 5"
#else
#define BINDING_TURNS "2 to 5"
#endif

static const u8 sNullDescription[] = _(
    "");

static const u8 sPoundDescription[] = _(
    "Golpea con las patas\n"
    "o la cola.");

static const u8 sKarateChopDescription[] = _(
    "Da un golpe cortante.\n"
    "Suele ser crítico.");

static const u8 sDoubleSlapDescription[] = _(
    "Abofetea de 2 a 5\n"
    "veces seguidas.");

static const u8 sCometPunchDescription[] = _(
    "Pega de 2 a 5\n"
    "veces seguidas.");

static const u8 sMegaPunchDescription[] = _(
    "Un puñetazo de gran\n"
    "potencia.");

static const u8 sPayDayDescription[] = _(
    "Arroja monedas\n"
    "que luego recupera.");

static const u8 sFirePunchDescription[] = _(
    "Puñetazo ardiente.\n"
    "Puede quemar.");

static const u8 sIcePunchDescription[] = _(
    "Puñetazo helado.\n"
#if B_USE_FROSTBITE == TRUE
    "Puede congelar.");
#else
    "freeze the foe.");
#endif

static const u8 sThunderPunchDescription[] = _(
    "Puñetazo eléctrico.\n"
    "Puede paralizar.");

static const u8 sScratchDescription[] = _(
    "Araña con afiladas\n"
    "garras.");

static const u8 sViseGripDescription[] = _(
    "Atrapa con potentes\n"
    "pinzas.");

static const u8 sGuillotineDescription[] = _(
    "Pinzas que pueden\n"
    "derribar de un golpe.");

static const u8 sRazorWindDescription[] = _(
    "1.{SUPER_ER} turno: prepara.\n"
    "2.º: ataca.");

static const u8 sSwordsDanceDescription[] = _(
    "Baile que mejora\n"
    "el Ataque.");

static const u8 sCutDescription[] = _(
    "Corta con garras,\n"
    "guadañas, etc.");

static const u8 sGustDescription[] = _(
    "Crea un tornado\n"
    "con las alas.");

static const u8 sWingAttackDescription[] = _(
    "Golpea al objetivo\n"
    "con las alas.");

static const u8 sWhirlwindDescription[] = _(
    "Se lleva al rival\n"
    "y termina el combate.");

static const u8 sFlyDescription[] = _(
    "1.{SUPER_ER} turno: vuela.\n"
    "2.º: ataca.");

static const u8 sBindDescription[] = _(
    "Ata y oprime\n"
    "de 2 a 5 turnos.");

static const u8 sSlamDescription[] = _(
    "Golpea con las\n"
    "extremidades.");

static const u8 sVineWhipDescription[] = _(
    "Azota al enemigo\n"
    "con ramas finas.");

static const u8 sStompDescription[] = _(
    "Tremendo pisotón\n"
    "que puede causar retroceso.");

static const u8 sDoubleKickDescription[] = _(
    "Una patada doble.\n"
    "Golpea 2 veces.");

static const u8 sMegaKickDescription[] = _(
    "Patada de extrema\n"
    "fuerza.");

static const u8 sJumpKickDescription[] = _(
    "Si falla, dañará\n"
    "a quien lo usa.");

static const u8 sRollingKickDescription[] = _(
    "Una patada rápida\n"
    "y circular.");

static const u8 sSandAttackDescription[] = _(
    "Arroja arena a la cara\n"
    "y baja la Precisión.");

static const u8 sHeadbuttDescription[] = _(
    "Cabezazo que puede\n"
    "hacer retroceder al rival.");

static const u8 sHornAttackDescription[] = _(
    "Ataca al enemigo\n"
    "con afilados cuernos.");

static const u8 sFuryAttackDescription[] = _(
    "Cornea al enemigo\n"
    "de 2 a 5 veces.");

static const u8 sHornDrillDescription[] = _(
    "Ataque taladro.\n"
    "Fulmina en 1 golpe.");

static const u8 sTackleDescription[] = _(
    "Embiste con todo\n"
    "el cuerpo.");

static const u8 sBodySlamDescription[] = _(
    "Ataque corporal\n"
    "que puede paralizar.");

static const u8 sWrapDescription[] = _(
    "Oprime de 2 a 5\n"
    "turnos con ramas, etc.");

static const u8 sTakeDownDescription[] = _(
    "Carga desmedida que\n"
    "también hiere al agresor.");

static const u8 sThrashDescription[] = _(
    "Dura de 2 a 3 turnos\n"
    "y acaba confundiéndote.");

static const u8 sDoubleEdgeDescription[] = _(
    "Ataque arriesgado que\n"
    "también hiere al agresor.");

static const u8 sTailWhipDescription[] = _(
    "Agita la cola para bajar\n"
    "la Defensa del otro.");

static const u8 sPoisonStingDescription[] = _(
    "Puede envenenar al\n"
    "enemigo con púas, etc.");

static const u8 sTwineedleDescription[] = _(
    "Clava aguijones al\n"
    "rival 2 veces.");

static const u8 sPinMissileDescription[] = _(
    "Lanza finas púas que\n"
    "hieren de 2 a 5 veces.");

static const u8 sLeerDescription[] = _(
    "Asusta al enemigo\n"
    "para bajar su Defensa.");

static const u8 sBiteDescription[] = _(
    "Un voraz bocado\n"
    "que puede causar retroceso.");

static const u8 sGrowlDescription[] = _(
    "Dulce gruñido que reduce\n"
    "el Ataque del otro.");

static const u8 sRoarDescription[] = _(
    "Ahuyenta al rival\n"
    "y finaliza el combate.");

static const u8 sSingDescription[] = _(
    "Cancioncilla que puede\n"
    "dormir al enemigo.");

static const u8 sSupersonicDescription[] = _(
    "Raras ondas sónicas\n"
    "que pueden confundir.");

static const u8 sSonicBoomDescription[] = _(
    "Lanza ondas de choque\n"
    "que restan 20 PS.");

static const u8 sDisableDescription[] = _(
    "Desactiva un ataque\n"
    "del contrincante.");

static const u8 sAcidDescription[] = _(
    "Rocía corrosivo ácido.\n"
#if B_UPDATED_MOVE_DATA >= GEN_4
    "Puede bajar la Defensa.");
#else
    "May lower Defense.");
#endif

static const u8 sEmberDescription[] = _(
    "Ligero ataque que puede\n"
    "causar quemaduras.");

static const u8 sFlamethrowerDescription[] = _(
    "Fuerte ataque que puede\n"
    "causar quemaduras.");

static const u8 sMistDescription[] = _(
    "Te rodea de fina niebla\n"
    "y protege tus habilidades.");

static const u8 sWaterGunDescription[] = _(
    "Rocía agua para atacar.");

static const u8 sHydroPumpDescription[] = _(
    "Lanza agua a chorros\n"
    "para atacar.");

static const u8 sSurfDescription[] = _(
    "Crea una ola enorme y\n"
    "se la lanza al enemigo.");

static const u8 sIceBeamDescription[] = _(
    "Rayo de hielo que\n"
#if B_USE_FROSTBITE == TRUE
    "puede llegar a congelar.");
#else
    "beam that may freeze it.");
#endif

static const u8 sBlizzardDescription[] = _(
    "Tormenta de hielo que\n"
#if B_USE_FROSTBITE == TRUE
    "puede llegar a congelar.");
#else
    "storm that may freeze it.");
#endif

static const u8 sPsybeamDescription[] = _(
    "Extraño rayo que puede\n"
    "causar confusión.");

static const u8 sBubbleBeamDescription[] = _(
    "Diluvio de burbujas que\n"
    "puede bajar la Velocidad.");

static const u8 sAuroraBeamDescription[] = _(
    "Rayo multicolor que\n"
    "puede reducir el Ataque.");

static const u8 sHyperBeamDescription[] = _(
    "Es eficaz, pero deja inmóvil\n"
    "al atacante 1 turno.");

static const u8 sPeckDescription[] = _(
    "Ataca con un punzante\n"
    "pico.");

static const u8 sDrillPeckDescription[] = _(
    "Picotazo giratorio y\n"
    "perforador muy potente.");

static const u8 sSubmissionDescription[] = _(
    "Golpe desmedido que\n"
    "también hiere al agresor.");

static const u8 sLowKickDescription[] = _(
    "Cuanto más pesa el\n"
    "enemigo, más daño causa.");

static const u8 sCounterDescription[] = _(
    "Devuelve un golpe físico\n"
    "por duplicado.");

static const u8 sSeismicTossDescription[] = _(
    "Resta los mismos PS que\n"
    "nivel tenga el agresor.");

static const u8 sStrengthDescription[] = _(
    "Potente ataque físico.");

static const u8 sAbsorbDescription[] = _(
    "Absorbe la mitad del daño\n"
    "producido.");

static const u8 sMegaDrainDescription[] = _(
    "Absorbe la mitad del daño\n"
    "producido.");

static const u8 sLeechSeedDescription[] = _(
    "Planta tres semillas que\n"
    "quitan PS en cada turno.");

static const u8 sGrowthDescription[] = _(
    "Crece a marchas forzadas\n"
    "y aumenta el At. Esp.");

static const u8 sRazorLeafDescription[] = _(
    "Corta con hojas.\n"
    "Suele ser crítico.");

static const u8 sSolarBeamDescription[] = _(
    "1.{SUPER_ER} turno: absorbe luz.\n"
    "2.º: ataca.");

static const u8 sPoisonPowderDescription[] = _(
    "Polvo tóxico que puede\n"
    "envenenar al enemigo.");

static const u8 sStunSporeDescription[] = _(
    "Esparce polvo que puede\n"
    "paralizar al enemigo.");

static const u8 sSleepPowderDescription[] = _(
    "Esparce polvo que puede\n"
    "dormir al enemigo.");

static const u8 sPetalDanceDescription[] = _(
    "Dura de 2 a 3 turnos\n"
    "y acaba confundiéndote.");

static const u8 sStringShotDescription[] = _(
    "Baja la Velocidad\n"
    "del enemigo.");

static const u8 sDragonRageDescription[] = _(
    "Cadena de ondas de\n"
    "choque que quitan 40 PS.");

static const u8 sFireSpinDescription[] = _(
    "Un aro de fuego que\n"
    "atrapa de 2 a 5 veces.");

static const u8 sThunderShockDescription[] = _(
    "Ataque eléctrico que\n"
    "puede paralizar al enemigo.");

static const u8 sThunderboltDescription[] = _(
    "Duro ataque eléctrico que\n"
    "puede paralizar al enemigo.");

static const u8 sThunderWaveDescription[] = _(
    "Una descarga que puede\n"
    "paralizar al enemigo.");

static const u8 sThunderDescription[] = _(
    "Un estruendo que puede\n"
    "paralizar al enemigo.");

static const u8 sRockThrowDescription[] = _(
    "Tira pequeñas rocas\n"
    "al enemigo.");

static const u8 sEarthquakeDescription[] = _(
    "Fuerte, pero inútil\n"
    "contra voladores.");

static const u8 sFissureDescription[] = _(
    "Ataque de tierra.\n"
    "Fulmina en 1 golpe.");

static const u8 sDigDescription[] = _(
    "1.{SUPER_ER} turno: cava.\n"
    "2.º: ataca.");

static const u8 sToxicDescription[] = _(
    "Envenena al rival\n"
    "de forma progresiva.");

static const u8 sConfusionDescription[] = _(
    "Ataque psíquico que\n"
    "puede causar confusión.");

static const u8 sPsychicDescription[] = _(
    "Fuerte ataque psíquico que\n"
    "puede bajar la Def. Esp.");

static const u8 sHypnosisDescription[] = _(
    "Ataque hipnótico que\n"
    "puede dormir al enemigo.");

static const u8 sMeditateDescription[] = _(
    "Reposa y medita para\n"
    "aumentar el Ataque.");

static const u8 sAgilityDescription[] = _(
    "Relaja el cuerpo\n"
    "para ganar Velocidad.");

static const u8 sQuickAttackDescription[] = _(
    "Ataque rápido que permite\n"
    "golpear en 1.{SUPER_ER} lugar.");

static const u8 sRageDescription[] = _(
    "Mejora tu Ataque cada\n"
    "vez que te golpean.");

static const u8 sTeleportDescription[] = _(
    "Movimiento psíquico que\n"
    "permite huir al instante.");

static const u8 sNightShadeDescription[] = _(
    "Se restarán tantos PS\n"
    "como nivel tenga el agresor.");

static const u8 sMimicDescription[] = _(
    "Copia un ataque usado\n"
    "por el enemigo.");

static const u8 sScreechDescription[] = _(
    "Ruido agudo que baja mucho\n"
    "la Defensa del rival.");

static const u8 sDoubleTeamDescription[] = _(
    "Crea espejismos para \n"
    "mejorar la Evasión.");

static const u8 sRecoverDescription[] = _(
    "Restaura hasta la mitad\n"
    "de los PS máximos.");

static const u8 sHardenDescription[] = _(
    "Tensa la musculatura para\n"
    "aumentar la Defensa.");

static const u8 sMinimizeDescription[] = _(
    "El agresor mengua para\n"
    "aumentar la Evasión.");

static const u8 sSmokescreenDescription[] = _(
    "Baja la Precisión del\n"
    "enemigo con humo, etc.");

static const u8 sConfuseRayDescription[] = _(
    "Rayo siniestro que\n"
    "confunde al enemigo.");

static const u8 sWithdrawDescription[] = _(
    "El agresor se protege en su\n"
    "coraza y sube la Defensa.");

static const u8 sDefenseCurlDescription[] = _(
    "Oculta su punto débil al\n"
    "rizarse. Sube la Defensa.");

static const u8 sBarrierDescription[] = _(
    "Crea una barrera para subir\n"
    "mucho la Defensa.");

static const u8 sLightScreenDescription[] = _(
    "Reduce el daño que causa\n"
    "el At. Esp. del rival.");

static const u8 sHazeDescription[] = _(
    "Nube negra que elimina\n"
    "los cambios de caracterís.");

static const u8 sReflectDescription[] = _(
    "Pared de luz que debilita\n"
    "los ataques físicos.");

static const u8 sFocusEnergyDescription[] = _(
    "Concentra energía para\n"
    "asegurar un golpe crítico.");

static const u8 sBideDescription[] = _(
    "Espera 2 turnos para\n"
    "atacar con doble potencia.");

static const u8 sMetronomeDescription[] = _(
    "Usa al azar un\n"
    "ataque Pokémon.");

static const u8 sMirrorMoveDescription[] = _(
    "Contraataca con\n"
    "el mismo movimiento.");

static const u8 sSelfDestructDescription[] = _(
    "Potente, pero hace\n"
    "que te debilites.");

static const u8 sEggBombDescription[] = _(
    "Arroja un huevo\n"
    "al enemigo.");

static const u8 sLickDescription[] = _(
    "Usa la lengua para atacar.\n"
    "Puede causar parálisis.");

static const u8 sSmogDescription[] = _(
    "Gases de escape que pueden\n"
    "llegar a envenenar.");

static const u8 sSludgeDescription[] = _(
    "Arroja residuos al rival.\n"
    "Puede llegar a envenenar.");

static const u8 sBoneClubDescription[] = _(
    "Aporrea con un hueso.\n"
    "Puede causar retroceso.");

static const u8 sFireBlastDescription[] = _(
    "Llama que lo chamusca todo\n"
    "y suele causar quemadura.");

static const u8 sWaterfallDescription[] = _(
    "Embiste con impulso para\n"
    "remontar una cascada.");

static const u8 sClampDescription[] = _(
    "Atrapa y atenaza con\n"
    "fuerza de 2 a 5 turnos.");

static const u8 sSwiftDescription[] = _(
    "Lanza rayos en forma de\n"
    "estrella que no fallan.");

static const u8 sSkullBashDescription[] = _(
    "1.{SUPER_ER} turno: se prepara.\n"
    "2.º: da el cabezazo.");

static const u8 sSpikeCannonDescription[] = _(
    "Lanza finas púas que\n"
    "hieren de 2 a 5 veces.");

static const u8 sConstrictDescription[] = _(
    "Constriñe para herir y\n"
    "puede bajar la Velocidad.");

static const u8 sAmnesiaDescription[] = _(
    "Olvida algo y aumenta mucho\n"
    "la Defensa Esp.");

static const u8 sKinesisDescription[] = _(
    "Distrae al rival y baja\n"
    "su nivel de Precisión.");

static const u8 sSoftBoiledDescription[] = _(
    "Restaura hasta la mitad\n"
    "de tus PS máximos.");

static const u8 sHighJumpKickDescription[] = _(
    "Si fallas esta patada,\n"
    "puedes autolesionarte.");

static const u8 sGlareDescription[] = _(
    "Intimida y asusta al rival\n"
    "hasta dejarlo paralizado.");

static const u8 sDreamEaterDescription[] = _(
    "Roba la mitad del daño\n"
    "causado a un rival dormido.");

static const u8 sPoisonGasDescription[] = _(
    "Envuelve al enemigo en gas\n"
    "tóxico y venenoso.");

static const u8 sBarrageDescription[] = _(
    "Arroja esferas al rival\n"
    "de 2 a 5 veces.");

static const u8 sLeechLifeDescription[] = _(
    "Absorbe la mitad del\n"
    "daño producido.");

static const u8 sLovelyKissDescription[] = _(
    "Pide un beso con una cara\n"
    "que asusta y adormece.");

static const u8 sSkyAttackDescription[] = _(
    "1.º: busca punto flaco.\n"
    "2.º: va a por él.");

static const u8 sTransformDescription[] = _(
    "Modifica las células\n"
    "del rival y lo clona.");

static const u8 sBubbleDescription[] = _(
    "Usa burbujas para intentar\n"
    "bajar la Velocidad.");

static const u8 sDizzyPunchDescription[] = _(
    "Puño repetitivo que puede\n"
    "causar confusión.");

static const u8 sSporeDescription[] = _(
    "Esparce esporas\n"
    "que inducen al sueño.");

static const u8 sFlashDescription[] = _(
    "Ciega con un fogonazo de\n"
    "luz y baja la Precisión.");

static const u8 sPsywaveDescription[] = _(
    "Ataque con onda psíquica\n"
    "de intensidad variable.");

static const u8 sSplashDescription[] = _(
    "No tiene ningún efecto.\n"
    "Sólo salpica.");

static const u8 sAcidArmorDescription[] = _(
    "Te hace líquido y aumenta\n"
    "bastante tu Defensa.");

static const u8 sCrabhammerDescription[] = _(
    "Pinza con fuerza y suele\n"
    "dar un golpe crítico.");

static const u8 sExplosionDescription[] = _(
    "Causa mucho daño, pero\n"
    "te debilita.");

static const u8 sFurySwipesDescription[] = _(
    "Araña rápidamente\n"
    "de 2 a 5 veces.");

static const u8 sBonemerangDescription[] = _(
    "Lanza un hueso a modo de\n"
    "bumerán, que da 2 veces.");

static const u8 sRestDescription[] = _(
    "Te duerme durante 2 turnos\n"
    "para curarte totalmente.");

static const u8 sRockSlideDescription[] = _(
    "Lanza grandes pedruscos.\n"
    "Puede causar retroceso.");

static const u8 sHyperFangDescription[] = _(
    "Ataque con finos colmillos.\n"
    "Puede causar retroceso.");

static const u8 sSharpenDescription[] = _(
    "Mejora el Ataque\n"
    "de quien lo usa.");

static const u8 sConversionDescription[] = _(
    "Cambia tu tipo por el tipo\n"
    "de un ataque conocido.");

static const u8 sTriAttackDescription[] = _(
    "Dispara 3 tipos\n"
    "de rayos a la vez.");

static const u8 sSuperFangDescription[] = _(
    "Finos colmillos que bajan\n"
    "a la mitad los PS del rival.");

static const u8 sSlashDescription[] = _(
    "Acuchilla con pinzas, etc.\n"
    "Suele dar un golpe crítico.");

static const u8 sSubstituteDescription[] = _(
    "Crea un señuelo con\n"
    "1/4 de tus PS máximos.");

static const u8 sStruggleDescription[] = _(
    "Sólo se usa al acabarse\n"
    "los PP. Te hiere un poco.");

static const u8 sSketchDescription[] = _(
    "Copia siempre el último\n"
    "ataque del rival.");

static const u8 sTripleKickDescription[] = _(
    "Patea 3 veces seguidas\n"
    "y cada vez más fuerte.");

static const u8 sThiefDescription[] = _(
    "Puede quitarle al rival\n"
    "el objeto que lleve.");

static const u8 sSpiderWebDescription[] = _(
    "Enreda al rival para evitar\n"
    "que huya o pida el relevo.");

static const u8 sMindReaderDescription[] = _(
    "Adivina el ataque del otro\n"
    "y actúa en consecuencia.");

static const u8 sNightmareDescription[] = _(
    "El rival dormido pierde\n"
    "1/4 de PS por turno.");

static const u8 sFlameWheelDescription[] = _(
    "Ataque de fuego que puede\n"
    "causar quemaduras.");

static const u8 sSnoreDescription[] = _(
    "Fuerte ronquido que puede\n"
    "usarse estando dormido.");

static const u8 sCurseDescription[] = _(
    "En el tipo Fantasma\n"
    "tiene un efecto distinto.");

static const u8 sFlailDescription[] = _(
    "Causa un daño mayor\n"
    "si tienes pocos PS.");

static const u8 sConversion2Description[] = _(
    "Tu tipo se hace resistente\n"
    "al último tipo de ataque.");

static const u8 sAeroblastDescription[] = _(
    "Lanza un chorro de aire que\n"
    "suele dar un golpe crítico.");

static const u8 sCottonSporeDescription[] = _(
    "Le pega esporas al rival\n"
    "para reducir su Velocidad.");

static const u8 sReversalDescription[] = _(
    "Si tienes pocos PS, el daño\n"
    "que causa es mucho mayor.");

static const u8 sSpiteDescription[] = _(
    "Baja con rencor PP del\n"
    "último ataque recibido.");

static const u8 sPowderSnowDescription[] = _(
    "Lanza una nevada que puede\n"
    "llegar a congelar.");

static const u8 sProtectDescription[] = _(
    "Frena ataques, pero puede\n"
    "fallar si se usa sin cesar.");

static const u8 sMachPunchDescription[] = _(
    "Puñetazo que se da rápido\n"
    "para golpear primero.");

static const u8 sScaryFaceDescription[] = _(
    "Asusta al enemigo para\n"
    "bajarle Velocidad.");

static const u8 sFeintAttackDescription[] = _(
    "Acerca al enemigo para que\n"
    "el golpe no falle.");

static const u8 sSweetKissDescription[] = _(
    "Pide un beso con dulzura\n"
    "y suele causar confusión.");

static const u8 sBellyDrumDescription[] = _(
    "Reduce tus PS para\n"
    "mejorar el Ataque.");

static const u8 sSludgeBombDescription[] = _(
    "Explosión de lodo que puede\n"
    "llegar a envenenar.");

static const u8 sMudSlapDescription[] = _(
    "Echa lodo en la cara\n"
    "para bajar la Precisión.");

static const u8 sOctazookaDescription[] = _(
    "Dispara tinta para atacar\n"
    "y bajar la Precisión.");

static const u8 sSpikesDescription[] = _(
    "Riega púas que hieren\n"
    "si el rival pide el relevo.");

static const u8 sZapCannonDescription[] = _(
    "No es certero, pero causa\n"
    "parálisis si atina.");

static const u8 sForesightDescription[] = _(
    "Anula los intentos del rival\n"
    "de aumentar la Evasión.");

static const u8 sDestinyBondDescription[] = _(
    "Si te debilitas, el enemigo\n"
    "se debilita contigo.");

static const u8 sPerishSongDescription[] = _(
    "A los 3 turnos del canto,\n"
    "caen rival y atacante.");

static const u8 sIcyWindDescription[] = _(
    "Ataque helado que\n"
    "baja la Velocidad.");

static const u8 sDetectDescription[] = _(
    "Frena ataques, pero puede\n"
    "fallar si se usa sin parar.");

static const u8 sBoneRushDescription[] = _(
    "Hueso en ristre, aporrea\n"
    "al enemigo de 2 a 5 veces.");

static const u8 sLockOnDescription[] = _(
    "Fija el blanco para que el\n"
    "siguiente ataque no falle.");

static const u8 sOutrageDescription[] = _(
    "Embestida que dura 2 ó 3\n"
    "turnos y te confunde.");

static const u8 sSandstormDescription[] = _(
    "Tormenta de arena\n"
    "que dura varios turnos.");

static const u8 sGigaDrainDescription[] = _(
    "Absorbe la mitad\n"
    "del daño producido.");

static const u8 sEndureDescription[] = _(
    "Resiste el ataque de 1\n"
    "turno y deja al menos 1 PS.");

static const u8 sCharmDescription[] = _(
    "Engatusa al rival y reduce\n"
    "bastante su Ataque.");

static const u8 sRolloutDescription[] = _(
    "Ataque de 5 turnos,\n"
    "con fuerza cada vez mayor.");

static const u8 sFalseSwipeDescription[] = _(
    "Deja al enemigo\n"
    "con al menos 1 PS.");

static const u8 sSwaggerDescription[] = _(
    "Provoca confusión, pero\n"
    "también sube el Ataque.");

static const u8 sMilkDrinkDescription[] = _(
    "Restaura hasta la mitad\n"
    "de tus PS máximos.");

static const u8 sSparkDescription[] = _(
    "Ataque eléctrico que puede\n"
    "llegar a paralizar.");

static const u8 sFuryCutterDescription[] = _(
    "Crece en intensidad\n"
    "si se usa repetidas veces.");

static const u8 sSteelWingDescription[] = _(
    "Alas rígidas que\n"
    "golpean al rival.");

static const u8 sMeanLookDescription[] = _(
    "Mal de ojo que impide al\n"
    "rival huir o pedir el relevo.");

static const u8 sAttractDescription[] = _(
    "Reduce la posibilidad\n"
    "de que el enemigo ataque.");

static const u8 sSleepTalkDescription[] = _(
    "Mientras duerme, usa\n"
    "un ataque elegido al azar.");

static const u8 sHealBellDescription[] = _(
    "Repicar que cura los\n"
    "problemas de estado.");

static const u8 sReturnDescription[] = _(
    "Ataque que aumenta sus\n"
    "efectos con la amistad.");

static const u8 sPresentDescription[] = _(
    "Regalo con forma de bomba.\n"
    "Puede que restaure los PS.");

static const u8 sFrustrationDescription[] = _(
    "Es más fuerte si no se\n"
    "aprecia al Entrenador.");

static const u8 sSafeguardDescription[] = _(
    "Fuerza mística que evita\n"
    "problemas de estado.");

static const u8 sPainSplitDescription[] = _(
    "Une tus PS a los del rival\n"
    "y los reparte por igual.");

static const u8 sSacredFireDescription[] = _(
    "Fuego místico que\n"
    "puede causar quemaduras.");

static const u8 sMagnitudeDescription[] = _(
    "Sacudida sísmica\n"
    "de intensidad variable.");

static const u8 sDynamicPunchDescription[] = _(
    "No es certero, pero\n"
    "causa confusión si atina.");

static const u8 sMegahornDescription[] = _(
    "Violenta embestida con\n"
    "retorcidos cuernos.");

static const u8 sDragonBreathDescription[] = _(
    "Fuerte ráfaga de aliento\n"
    "que golpea al enemigo.");

static const u8 sBatonPassDescription[] = _(
    "Cambia de compañero y\n"
    "mantiene los estados.");

static const u8 sEncoreDescription[] = _(
    "El rival repite el último\n"
    "ataque de 2 a 6 veces.");

static const u8 sPursuitDescription[] = _(
    "Hace mucho daño al rival\n"
    "que pide el relevo.");

static const u8 sRapidSpinDescription[] = _(
    "Ataque corporal giratorio\n"
    "de gran velocidad.");

static const u8 sSweetScentDescription[] = _(
    "Engatusa al rival para\n"
    "reducir su Evasión.");

static const u8 sIronTailDescription[] = _(
    "Ataca con una cola férrea\n"
    "y puede bajar la Defensa.");

static const u8 sMetalClawDescription[] = _(
    "Ataque con garra que puede\n"
    "aumentar tu Ataque.");

static const u8 sVitalThrowDescription[] = _(
    "Lleva su tiempo, pero no\n"
    "falla.");

static const u8 sMorningSunDescription[] = _(
    "Restaura PS. La cantidad\n"
    "varía según el clima.");

static const u8 sSynthesisDescription[] = _(
    "Restaura PS. La cantidad\n"
    "varía según el clima.");

static const u8 sMoonlightDescription[] = _(
    "Restaura PS. La cantidad\n"
    "varía según el clima.");

static const u8 sHiddenPowerDescription[] = _(
    "Su eficacia varía\n"
    "según el agresor.");

static const u8 sCrossChopDescription[] = _(
    "Corte doble que suele\n"
    "propinar un golpe crítico.");

static const u8 sTwisterDescription[] = _(
    "Crea un violento tornado\n"
    "para hacer trizas al rival.");

static const u8 sRainDanceDescription[] = _(
    "Refuerza los ataques de\n"
    "tipo Agua durante 5 turnos.");

static const u8 sSunnyDayDescription[] = _(
    "Sube los ataques de tipo\n"
    "Fuego durante 5 turnos.");

static const u8 sCrunchDescription[] = _(
    "Tritura con finos colmillos\n"
    "y puede bajar la Def. Esp.");

static const u8 sMirrorCoatDescription[] = _(
    "Responde a un Ataque\n"
    "Especial con doble fuerza.");

static const u8 sPsychUpDescription[] = _(
    "Copia los efectos del rival\n"
    "y te los adjudica.");

static const u8 sExtremeSpeedDescription[] = _(
    "Ataque extremadamente\n"
    "rápido y demoledor.");

static const u8 sAncientPowerDescription[] = _(
    "Puede subir todas\n"
    "las características.");

static const u8 sShadowBallDescription[] = _(
    "Lanza una bola negra que\n"
    "puede bajar la Def. Esp.");

static const u8 sFutureSightDescription[] = _(
    "Aumenta la energía interior\n"
    "para golpear a los 2 turnos.");

static const u8 sRockSmashDescription[] = _(
    "Ataque de fuerza brutal\n"
    "que puede bajar la Defensa.");

static const u8 sWhirlpoolDescription[] = _(
    "Atrapa y daña al rival de 2 a\n"
    "5 turnos con un torbellino.");

static const u8 sBeatUpDescription[] = _(
    "Ataque de todo el\n"
    "equipo Pokémon.");

static const u8 sFakeOutDescription[] = _(
    "Ataca primero en un turno\n"
    "y puede causar retroceso.");

static const u8 sUproarDescription[] = _(
    "Alborota de 2 a 5 turnos.\n"
    "Mantiene despierto.");

static const u8 sStockpileDescription[] = _(
    "Recarga energía hasta\n"
    "3 veces.");

static const u8 sSpitUpDescription[] = _(
    "Libera energía acumulada.\n"
    "Cuanta más, mejor.");

static const u8 sSwallowDescription[] = _(
    "Absorbe energía acumulada\n"
    "y restaura PS.");

static const u8 sHeatWaveDescription[] = _(
    "Exhala un vaho ígneo que\n"
    "puede quemar al rival.");

static const u8 sHailDescription[] = _(
    "Tormenta de granizo que\n"
    "golpea en cada turno.");

static const u8 sTormentDescription[] = _(
    "Agobia e impide el uso\n"
    "reiterado de un ataque.");

static const u8 sFlatterDescription[] = _(
    "Confunde al rival, pero\n"
    "sube su At. Esp.");

static const u8 sWillOWispDescription[] = _(
    "Fuego muy intenso que\n"
    "produce quemaduras.");

static const u8 sMementoDescription[] = _(
    "Baja las habilidades\n"
    "del rival y te fulmina.");

static const u8 sFacadeDescription[] = _(
    "Potencia el Ataque al estar\n"
    "quemado, paraliz. o enven.");

static const u8 sFocusPunchDescription[] = _(
    "Es tardío, pero si el rival\n"
    "te golpea no te moverás.");

static const u8 sSmellingSaltsDescription[] = _(
    "Afecta a rivales paraliza-\n"
    "dos, pero también los cura.");

static const u8 sFollowMeDescription[] = _(
    "Llama la atención para\n"
    "concentrar los ataques.");

static const u8 sNaturePowerDescription[] = _(
    "El tipo de ataque\n"
    "varía según el sitio.");

static const u8 sChargeDescription[] = _(
    "Recarga energía y sube el\n"
    "ataque eléctrico posterior.");

static const u8 sTauntDescription[] = _(
    "Hace que el rival solo\n"
    "use ataques.");

static const u8 sHelpingHandDescription[] = _(
    "Refuerza los movimientos\n"
    "del receptor.");

static const u8 sTrickDescription[] = _(
    "Engaña al rival y provoca\n"
    "un cambio de objeto.");

static const u8 sRolePlayDescription[] = _(
    "Imita al rival y copia\n"
    "su Habilidad Especial.");

static const u8 sWishDescription[] = _(
    "Lleva tiempo, pero cumple\n"
    "el deseo de restaurar PS.");

static const u8 sAssistDescription[] = _(
    "Ataque elegido al azar\n"
    "de un miembro del equipo.");

static const u8 sIngrainDescription[] = _(
    "Echa raíces para recuperar\n"
    "PS, pero impide el relevo.");

static const u8 sSuperpowerDescription[] = _(
    "Aumenta mucho la fuerza,\n"
    "pero las habilidades bajan.");

static const u8 sMagicCoatDescription[] = _(
    "El agresor recibe el reflejo\n"
    "de los efectos especiales.");

static const u8 sRecycleDescription[] = _(
    "Recicla un objeto usado\n"
    "para utilizarlo de nuevo.");

static const u8 sRevengeDescription[] = _(
    "Ataque que gana fuerza\n"
    "si el enemigo te hiere.");

static const u8 sBrickBreakDescription[] = _(
    "Destruye barreras como\n"
    "Reflejo y causa daño.");

static const u8 sYawnDescription[] = _(
    "Provoca el bostezo\n"
    "y después el sueño.");

static const u8 sKnockOffDescription[] = _(
    "Deja al rival desprovisto\n"
    "del objeto que lleva.");

static const u8 sEndeavorDescription[] = _(
    "Gana fuerza si el atacante\n"
    "tiene menos PS que el rival.");

static const u8 sEruptionDescription[] = _(
    "Cuanto mayor sea el número\n"
    "de tus PS, más daño harás.");

static const u8 sSkillSwapDescription[] = _(
    "Intercambia la habilidad\n"
    "especial con otro Pokémon.");

static const u8 sImprisonDescription[] = _(
    "Impide al rival usar ataques\n"
    "que tú conoces.");

static const u8 sRefreshDescription[] = _(
    "Cura envenenamientos,\n"
    "parálisis y quemaduras.");

static const u8 sGrudgeDescription[] = _(
    "Si te debilitas, borra los PP\n"
    "del último ataque del rival.");

static const u8 sSnatchDescription[] = _(
    "Roba el efecto del ataque\n"
    "que el objetivo use después.");

static const u8 sSecretPowerDescription[] = _(
    "Los efectos de este ataque\n"
    "varían según la zona.");

static const u8 sDiveDescription[] = _(
    "1.{SUPER_ER} turno: bucea.\n"
    "2.º: golpea.");

static const u8 sArmThrustDescription[] = _(
    "Se dan puñetazos directos\n"
    "de 2 a 5 veces.");

static const u8 sCamouflageDescription[] = _(
    "Modifica el tipo del Pokémon\n"
    "según la zona donde esté.");

static const u8 sTailGlowDescription[] = _(
    "Ráfaga de luz que sube\n"
    "muchísimo el At. Esp.");

static const u8 sLusterPurgeDescription[] = _(
    "Fogonazo de luz que puede\n"
    "bajar la Def. Esp.");

static const u8 sMistBallDescription[] = _(
    "Banco de niebla que\n"
    "puede bajar el At. Esp.");

static const u8 sFeatherDanceDescription[] = _(
    "Envuelve al rival con plumón\n"
    "para reducir su Ataque.");

static const u8 sTeeterDanceDescription[] = _(
    "Confunde a todos los\n"
    "Pokémon que hay en escena.");

static const u8 sBlazeKickDescription[] = _(
    "Suele ser un golpe crítico\n"
    "y causar quemaduras.");

static const u8 sMudSportDescription[] = _(
    "Te cubre de lodo y mejora\n"
    "tu resistencia eléctrica.");

static const u8 sIceBallDescription[] = _(
    "Dura 5 turnos y gana fuerza\n"
    "en cada uno.");

static const u8 sNeedleArmDescription[] = _(
    "Pega con brazos de pinchos\n"
    "y puede causar retroceso.");

static const u8 sSlackOffDescription[] = _(
    "Te relaja y restaura la\n"
    "mitad de los PS máximos.");

static const u8 sHyperVoiceDescription[] = _(
    "Ondas sonoras de alta\n"
    "frecuencia que hieren.");

static const u8 sPoisonFangDescription[] = _(
    "Incisivos colmillos que\n"
    "pueden envenenar al rival.");

static const u8 sCrushClawDescription[] = _(
    "Hace trizas al enemigo y\n"
    "puede bajar la Defensa.");

static const u8 sBlastBurnDescription[] = _(
    "Es muy eficaz, pero\n"
    "te inmoviliza 1 turno.");

static const u8 sHydroCannonDescription[] = _(
    "Es muy eficaz, pero\n"
    "te inmoviliza 1 turno.");

static const u8 sMeteorMashDescription[] = _(
    "Impacta como un meteorito\n"
    "y suele subir el Ataque.");

static const u8 sAstonishDescription[] = _(
    "Impresiona tanto que puede\n"
    "hacer retroceder al rival.");

static const u8 sWeatherBallDescription[] = _(
    "El tipo y fuerza del ataque\n"
    "varían según el clima.");

static const u8 sAromatherapyDescription[] = _(
    "Cura todos los problemas de\n"
    "estado con un suave aroma.");

static const u8 sFakeTearsDescription[] = _(
    "Lágrimas de cocodrilo que\n"
    "bajan mucho la Def. Esp.");

static const u8 sAirCutterDescription[] = _(
    "Viento cortante que azota.\n"
    "Suele ser un golpe crítico.");

static const u8 sOverheatDescription[] = _(
    "Ataque en toda regla que\n"
    "baja mucho tu At. Esp.");

static const u8 sOdorSleuthDescription[] = _(
    "Anula los intentos del rival\n"
    "por aumentar la Evasión.");

static const u8 sRockTombDescription[] = _(
    "Tira rocas al rival, lo para\n"
    "y le baja la Velocidad.");

static const u8 sSilverWindDescription[] = _(
    "Partículas de plata que\n"
    "quizá suban las habilidades.");

static const u8 sMetalSoundDescription[] = _(
    "Tremendo chirrido que baja\n"
    "mucho la Def. Esp.");

static const u8 sGrassWhistleDescription[] = _(
    "Agradable melodía que\n"
    "adormece al rival.");

static const u8 sTickleDescription[] = _(
    "Hace reír para bajar el\n"
    "Ataque y la Defensa.");

static const u8 sCosmicPowerDescription[] = _(
    "Sube la Defensa y la Def.\n"
    "Esp. con energía mística.");

static const u8 sWaterSpoutDescription[] = _(
    "Si tienes muchos PS, el daño\n"
    "que causa es mucho mayor.");

static const u8 sSignalBeamDescription[] = _(
    "Extraño ataque con rayo.\n"
    "Puede causar confusión.");

static const u8 sShadowPunchDescription[] = _(
    "Puñetazo ineludible\n"
    "procedente de las sombras.");

static const u8 sExtrasensoryDescription[] = _(
    "Energía muy extraña\n"
    "que puede causar retroceso.");

static const u8 sSkyUppercutDescription[] = _(
    "Gancho ascendente\n"
    "de gran ímpetu.");

static const u8 sSandTombDescription[] = _(
    "Enreda en un remolino\n"
    "de arena de 2 a 5 turnos.");

static const u8 sSheerColdDescription[] = _(
    "Ataque polar que debilita\n"
    "al rival si le alcanza.");

static const u8 sMuddyWaterDescription[] = _(
    "Ataque con agua lodosa que\n"
    "puede bajar la Precisión.");

static const u8 sBulletSeedDescription[] = _(
    "Dispara de 2 a 5 ráfagas\n"
    "consecutivas de semillas.");

static const u8 sAerialAceDescription[] = _(
    "Ataque tremendamente\n"
    "rápido e ineludible.");

static const u8 sIcicleSpearDescription[] = _(
    "Ataca lanzando de 2 a 5\n"
    "ráfagas de carámbanos.");

static const u8 sIronDefenseDescription[] = _(
    "Te fortalece y sube\n"
    "mucho la Defensa.");

static const u8 sBlockDescription[] = _(
    "Le corta el paso al rival\n"
    "para que no pueda escapar.");

static const u8 sHowlDescription[] = _(
    "Aullido que sube el ánimo\n"
    "y aumenta el Ataque.");

static const u8 sDragonClawDescription[] = _(
    "Araña al rival con garras\n"
    "afiladas.");

static const u8 sFrenzyPlantDescription[] = _(
    "Es eficaz, pero deja\n"
    "inmóvil al agresor 1 turno.");

static const u8 sBulkUpDescription[] = _(
    "Robustece el cuerpo para\n"
    "subir Ataque y Defensa.");

static const u8 sBounceDescription[] = _(
    "1.{SUPER_ER} turno: bota.\n"
    "2.º: golpea. Puede paralizar.");

static const u8 sMudShotDescription[] = _(
    "Dispara lodo al rival y\n"
    "reduce su Velocidad.");

static const u8 sPoisonTailDescription[] = _(
    "Puede envenenar y dar un\n"
    "golpe crítico.");

static const u8 sCovetDescription[] = _(
    "Pide con ternura al rival\n"
    "el objeto que lleve.");

static const u8 sVoltTackleDescription[] = _(
    "Placaje de alto riesgo que\n"
    "hiere un poco al atacante.");

static const u8 sMagicalLeafDescription[] = _(
    "Ataca con una extraña hoja\n"
    "que no se puede esquivar.");

static const u8 sWaterSportDescription[] = _(
    "Te moja para que resistas\n"
    "más los ataques de fuego.");

static const u8 sCalmMindDescription[] = _(
    "Sube el At. Esp. y la Def.\n"
    "Esp. con concentración.");

static const u8 sLeafBladeDescription[] = _(
    "Acuchilla con una hoja fina.\n"
    "Suele dar un golpe crítico.");

static const u8 sDragonDanceDescription[] = _(
    "Danza mística que sube\n"
    "el Ataque y la Velocidad.");

static const u8 sRockBlastDescription[] = _(
    "Lanza pedruscos al rival de\n"
    "2 a 5 veces consecutivas.");

static const u8 sShockWaveDescription[] = _(
    "Ataque eléctrico muy rápido\n"
    "e ineludible.");

static const u8 sWaterPulseDescription[] = _(
    "Ondas ultrasónicas que\n"
    "pueden confundir al rival.");

static const u8 sDoomDesireDescription[] = _(
    "Concentra intensa luz solar\n"
    "y ataca 2 turnos después.");

static const u8 sPsychoBoostDescription[] = _(
    "Es tremendamente potente,\n"
    "pero baja mucho el At. Esp.");

static const u8 sRoostDescription[] = _(
    "Recupera hasta la mitad de\n"
    "los PS del usuario.");

static const u8 sGravityDescription[] = _(
    "Intensifica la gravedad,\n"
    "negando vuelo y levitación.");

static const u8 sMiracleEyeDescription[] = _(
    "Hace a los Siniestros y\n"
    "evasivos fáciles de ver.");

static const u8 sWakeUpSlapDescription[] = _(
    "Poderoso contra dormidos,\n"
    "pero también los despierta.");

static const u8 sHammerArmDescription[] = _(
    "Un gran puñetazo que baja\n"
    "la Velocidad del usuario.");

static const u8 sGyroBallDescription[] = _(
    "Un giro rápido que hace más\n"
    "daño a rivales más rápidos.");

static const u8 sHealingWishDescription[] = _(
    "El usuario se debilita y\n"
    "sana al siguiente que sale.");

static const u8 sBrineDescription[] = _(
    "Hace doble de daño al que\n"
    "tiene la mitad de los PS.");

static const u8 sNaturalGiftDescription[] = _(
    "Su poder varía en función\n"
    "de la Baya equipada.");

static const u8 sFeintDescription[] = _(
    "Golpea a usuarios de\n"
    "movimientos protectores.");

static const u8 sPluckDescription[] = _(
    "Se come la Baya del rival,\n"
    "adquiriendo sus efectos.");

static const u8 sTailwindDescription[] = _(
    "Levanta un aire turbulento\n"
    "que sube la Velocidad.");

static const u8 sAcupressureDescription[] = _(
    "Sube mucho una de las\n"
    "estadísticas al azar.");

static const u8 sMetalBurstDescription[] = _(
    "Reprime cualquier golpe\n"
    "con un gran poder.");

static const u8 sUTurnDescription[] = _(
    "Hace daño y luego se cambia\n"
    "con otro Pokémon.");

static const u8 sCloseCombatDescription[] = _(
    "Un fuerte ataque que\n"
    "baja las defensas.");

static const u8 sPaybackDescription[] = _(
    "Gana potencia si el usuario\n"
    "ataca el último este turno.");

static const u8 sAssuranceDescription[] = _(
    "Gana potencia si el enemigo\n"
    "ha sido herido este turno.");

static const u8 sEmbargoDescription[] = _(
    "Impide que el enemigo use\n"
    "objetos.");

static const u8 sFlingDescription[] = _(
    "Su poder varía en función\n"
    "del objeto equipado.");

static const u8 sPsychoShiftDescription[] = _(
    "Transfiere el estado\n"
    "alterado al enemigo.");

static const u8 sTrumpCardDescription[] = _(
    "Cuantos menos PP tenga, más\n"
    "daño hace.");

static const u8 sHealBlockDescription[] = _(
    "Impide que el enemigo\n"
    "recupere PS.");

static const u8 sWringOutDescription[] = _(
    "Hace más daño a más altos\n"
    "sean los PS del enemigo.");

static const u8 sPowerTrickDescription[] = _(
    "Intercambia el Ataque y la\n"
    "Defensa del usuario.");

static const u8 sGastroAcidDescription[] = _(
    "Anula la habilidad del\n"
    "enemigo con jugo gástrico.");

static const u8 sLuckyChantDescription[] = _(
    "Impide recibir golpes\n"
    "críticos por 5 turnos.");

static const u8 sMeFirstDescription[] = _(
    "Ejecuta el movimiento del\n"
    "enemigo con más poder.");

static const u8 sCopycatDescription[] = _(
    "Copia el último movimiento\n"
    "usado por el enemigo.");

static const u8 sPowerSwapDescription[] = _(
    "Modifica cambios de At. y\n"
    "y At. Esp. con el enemigo.");

static const u8 sGuardSwapDescription[] = _(
    "Modifica cambios de Def. y\n"
    "y Def. Esp. con el enemigo.");

static const u8 sPunishmentDescription[] = _(
    "Hace más daño si el enemigo\n"
    "tiene estadísticas subidas.");

static const u8 sLastResortDescription[] = _(
    "Solo puede usarse si se ha\n"
    "usado los demás movimientos.");

static const u8 sWorrySeedDescription[] = _(
    "Cambia la habilidad del\n"
    "objetivo a Insomnio.");

static const u8 sSuckerPunchDescription[] = _(
    "Golpea primero si el\n"
    "enemigo prepara un ataque.");

static const u8 sToxicSpikesDescription[] = _(
    "Esparce púas que envenenan\n"
    "a los Pokémon que entran.");

static const u8 sHeartSwapDescription[] = _(
    "Intercambia los cambios de\n"
    "estadísticas con el enemigo.");

static const u8 sAquaRingDescription[] = _(
    "Creo un velo acuoso que\n"
    "restaura PS.");

static const u8 sMagnetRiseDescription[] = _(
    "El usuario levita gracias\n"
    "al electromagnetismo.");

static const u8 sFlareBlitzDescription[] = _(
    "Embestida que puede quemar\n"
    "al enemigo. Tamabién hiere.");

static const u8 sForcePalmDescription[] = _(
    "Palmada rápida que puede\n"
    "paralizar al enemigo.");

static const u8 sAuraSphereDescription[] = _(
    "Esfera imbuida en aura\n"
    "totalmente ineludible.");

static const u8 sRockPolishDescription[] = _(
    "Pule el cuerpo para subir\n"
    "mucho la Velocidad.");

static const u8 sPoisonJabDescription[] = _(
    "Ataque punzante que puede\n"
    "envenenar al enemigo.");

static const u8 sDarkPulseDescription[] = _(
    "Ataca con un aura oscura.\n"
    "Puede causar retroceso.");

static const u8 sNightSlashDescription[] = _(
    "Tiene alta propabilidad\n"
    "de golpe crítico.");

static const u8 sAquaTailDescription[] = _(
    "Balancea la cola como una\n"
    "ola para atacar.");

static const u8 sSeedBombDescription[] = _(
    "Bombardea al enemigo\n"
    "con una gran semilla.");

static const u8 sAirSlashDescription[] = _(
    "Ataca con un hoja voladora.\n"
    "Puede hacer retroceder.");

static const u8 sXScissorDescription[] = _(
    "Corta al enemigo con\n"
    "cuchillas, guadañas, etc.");

static const u8 sBugBuzzDescription[] = _(
    "Una gran onda sonora que\n"
    "puede bajar la Def. Esp.");

static const u8 sDragonPulseDescription[] = _(
    "Genera una onda de choque\n"
    "para dañar al enemigo.");

static const u8 sDragonRushDescription[] = _(
    "Una gran carga violenta.\n"
    "Puede hacer retroceder.");

static const u8 sPowerGemDescription[] = _(
    "Ataca con rayos de luz que\n"
    "brillan como diamantes.");

static const u8 sVacuumWaveDescription[] = _(
    "Gira sus puños para lanzar\n"
    "ondas que golpean primero.");

static const u8 sFocusBlastDescription[] = _(
    "Ataque a plena potencia.\n"
    "Puede bajar la Def. Esp.");

static const u8 sEnergyBallDescription[] = _(
    "Ataca con poder natural.\n"
    "Puede bajar la Def. Esp.");

static const u8 sBraveBirdDescription[] = _(
    "Carga de baja altitud que\n"
    "hiere también al usuario.");

static const u8 sEarthPowerDescription[] = _(
    "Provoca una gran erupción.\n"
    "Puede bajar la Def. Esp.");

static const u8 sSwitcherooDescription[] = _(
    "Intercambia objetos con\n"
    "el enemigo rápidamente.");

static const u8 sNastyPlotDescription[] = _(
    "Piensa cosas maléficas y\n"
    "sube mucho el At. Esp.");

static const u8 sBulletPunchDescription[] = _(
    "Golpea con un puño muy\n"
    "veloz. Siempre va primero.");

static const u8 sIceShardDescription[] = _(
    "Lanza un trozo de hielo\n"
    "que siempre va primero.");

static const u8 sShadowClawDescription[] = _(
    "Golpea con una garra umbría.\n"
    "Probabilidad de crítico.");

static const u8 sThunderFangDescription[] = _(
    "Puede hacer retroceder o\n"
    "paralizar al enemigo.");

static const u8 sIceFangDescription[] = _(
    "Puede hacer retroceder o\n"
    "congelar al enemigo.");

static const u8 sFireFangDescription[] = _(
    "Puede hacer retroceder o\n"
    "quemar al enemigo.");

static const u8 sShadowSneakDescription[] = _(
    "Golpea primero usando la\n"
    "sombra del usuario.");

static const u8 sMudBombDescription[] = _(
    "Lanza un trozo de barro\n"
    "que baja la precisión.");

static const u8 sPsychoCutDescription[] = _(
    "Usa cuchillas psíquicas.\n"
    "Probabilidad de crítico.");

static const u8 sZenHeadbuttDescription[] = _(
    "Gran cabezazo que puede\n"
    "hacer retroceder.");

static const u8 sMirrorShotDescription[] = _(
    "Emite una luz cegadora que\n"
    "baja la precisión.");

static const u8 sFlashCannonDescription[] = _(
    "Lanza un golpe luminoso que\n"
    "puede bajar la Def. Esp.");

static const u8 sRockClimbDescription[] = _(
    "Carga contra el enemigo y\n"
    "puede llegar a confundirlo.");

static const u8 sDefogDescription[] = _(
    "Elimina obstáculos y baja\n"
    "la evasión del enemigo.");

static const u8 sTrickRoomDescription[] = _(
    "Los Pokémon lentos se\n"
    "mueven primero 5 turnos.");

static const u8 sDracoMeteorDescription[] = _(
    "Lanza meteoritos al enemigo.\n"
    "Baja mucho el At. Esp.");

static const u8 sDischargeDescription[] = _(
    "Electrifica a todos.\n"
    "Puede paralizarlos.");

static const u8 sPowerWhipDescription[] = _(
    "Azota al enemigo con\n"
    "lianas o tentáculos.");

static const u8 sCrossPoisonDescription[] = _(
    "Corte que puede envenenar\n"
    "y hacer un golpe crítico.");

static const u8 sGunkShotDescription[] = _(
    "Lanza basura al enemigo.\n"
    "También puede envenenar.");

static const u8 sIronHeadDescription[] = _(
    "Gran cabezazo al enemigo.\n"
    "Puede hacer retroceder.");

static const u8 sMagnetBombDescription[] = _(
    "Lanza un imán que golpea\n"
    "al enemigo sin fallar.");

static const u8 sStoneEdgeDescription[] = _(
    "Apuñala con muchas piedras.\n"
    "Probabilidad de crítico.");

static const u8 sCaptivateDescription[] = _(
    "Baja mucho el At. Esp del\n"
    "género opuesto.");

static const u8 sStealthRockDescription[] = _(
    "Esparce rocas que hieren\n"
    "cuando el enemigo cambia.");

static const u8 sGrassKnotDescription[] = _(
    "Un lazo que hace más daño\n"
    "a enemigos más pesados.");

static const u8 sChatterDescription[] = _(
    "Ataca con una onda sonora\n"
    "que puede causar confusión.");

static const u8 sJudgmentDescription[] = _(
    "Su tipo varía en función de\n"
    "la Tabla equipada.");

static const u8 sChargeBeamDescription[] = _(
    "Un rayo eléctrico que puede\n"
    "subir el At. Esp.");

static const u8 sWoodHammerDescription[] = _(
    "Gran impacto con el cuerpo\n"
    "que hiere al usuario.");

static const u8 sAquaJetDescription[] = _(
    "Golpea primero lanzándose\n"
    "contra el enemigo.");

static const u8 sAttackOrderDescription[] = _(
    "Los subordinados atacan.\n"
    "Probabilidad de crítico.");

static const u8 sDefendOrderDescription[] = _(
    "Sube Defensa y Def. Esp.\n"
    "con un escudo viviente.");

static const u8 sHealOrderDescription[] = _(
    "Los subordinados aparecen\n"
    "curan la mitad de los PS.");

static const u8 sHeadSmashDescription[] = _(
    "Cabezazo arriesgado que\n"
    "hiere seriamente al usuario.");

static const u8 sDoubleHitDescription[] = _(
    "Golpea al enemigo con la\n"
    "cola dos veces.");

static const u8 sRoarOfTimeDescription[] = _(
    "Poderoso, pero deja inmóvil\n"
    "al atacante 1 turno.");

static const u8 sSpacialRendDescription[] = _(
    "Distorsiona el espacio.\n"
    "Probabilidad de crítico.");

static const u8 sMagmaStormDescription[] = _(
    "Atrapa en un vórtice de\n"
    "llamas de 2 a 5 turnos.");

static const u8 sDarkVoidDescription[] = _(
    "Sume al enemigo en un sueño\n"
    "totalmente oscuro.");

static const u8 sSeedFlareDescription[] = _(
    "Genera una onda de choque\n"
    "que baja mucho la Def. Esp.");

static const u8 sOminousWindDescription[] = _(
    "Ataque repulsivo que puede\n"
    "subir las estadísticas.");

static const u8 sShadowForceDescription[] = _(
    "Desaparece en el primer\n"
    "turno y golpea al siguiente.");

static const u8 sHoneClawsDescription[] = _(
    "Afila las garras para subir\n"
    "el Ataque y la Precisión.");

static const u8 sWideGuardDescription[] = _(
    "Evita ataques multiobjetivo\n"
    "durante un turno.");

static const u8 sGuardSplitDescription[] = _(
    "Divide a partes iguales las\n"
    "defensas con el enemigo.");

static const u8 sPowerSplitDescription[] = _(
    "Divide a partes iguales el\n"
    "poder con el enemigo.");

static const u8 sWonderRoomDescription[] = _(
    "Intercambia la Defensa y la\n"
    "Def. Esp. durante 5 turnos.");

static const u8 sPsyshockDescription[] = _(
    "Ataca con una onda psíquica\n"
    "que causa daño físico.");

static const u8 sTailSlapDescription[] = _(
    "Golpea al enemigo con la\n"
    "cola de 2 a 5 veces.");

static const u8 sVenoshockDescription[] = _(
    "Hace el doble de daño si\n"
    "el enemigo está envenenado.");

static const u8 sAutotomizeDescription[] = _(
    "Se quita peso para subir\n"
    "mucho la Velocidad.");

static const u8 sRagePowderDescription[] = _(
    "Esparce polvo para que\n"
    "ataquen solo al usuario.");

static const u8 sTelekinesisDescription[] = _(
    "El enemigo flota 3 turnos\n"
    "y es más fácil de golpear.");

static const u8 sMagicRoomDescription[] = _(
    "Los objetos equipados no\n"
    "funcionan durante 5 turnos.");

static const u8 sSmackDownDescription[] = _(
    "Lanza una roca y tumba al\n"
    "enemigo en el suelo.");

static const u8 sStormThrowDescription[] = _(
    "Este ataque siempre hace un\n"
    "golpe crítico.");

static const u8 sFlameBurstDescription[] = _(
    "Llama abrasadora que golpea\n"
    "a todos los enemigos.");

static const u8 sSludgeWaveDescription[] = _(
    "Inunda al enemigo con una\n"
    "ola que puede envenenar.");

static const u8 sQuiverDanceDescription[] = _(
    "Baila para subir At. Esp.,\n"
    "Def Esp. y Velocidad.");

static const u8 sHeavySlamDescription[] = _(
    "Hace más daño si el usuario\n"
    "pesa más que el enemigo.");

static const u8 sSynchronoiseDescription[] = _(
    "Extraña onda que solo golpea\n"
    "a Pokémon del mismo tipo.");

static const u8 sElectroBallDescription[] = _(
    "Daña con un orbe a enemigos\n"
    "que son más lentos.");

static const u8 sSoakDescription[] = _(
    "Moja al enemigo y lo\n"
    "convierte en tipo Agua.");

static const u8 sFlameChargeDescription[] = _(
     "Ataca envuelto en llamas.\n"
    "Sube la Velocidad.");

static const u8 sCoilDescription[] = _(
    "Se enrrolla para subir\n"
    "Ataque, Defensa y Precisión.");

static const u8 sLowSweepDescription[] = _(
    "Golpea las piernas para\n"
    "bajar la Velocidad.");

static const u8 sAcidSprayDescription[] = _(
    "Esparce un ácido derretido.\n"
    "Baja mucho la Def. Esp.");

static const u8 sFoulPlayDescription[] = _(
    "Causa más daño cuanto más\n"
    "Ataque tenga el enemigo.");

static const u8 sSimpleBeamDescription[] = _(
    "Un rayo que convierte al\n"
    "enemigo en Simple.");

static const u8 sEntrainmentDescription[] = _(
    "El enemigo imita al usario,\n"
    "obteniendo su habilidad.");

static const u8 sAfterYouDescription[] = _(
    "Ayuda al enemigo, haciendo\n"
    "que se mueva primero.");

static const u8 sRoundDescription[] = _(
    "Una canción que causa daño.\n"
    "Los demás pueden unirse.");

static const u8 sEchoedVoiceDescription[] = _(
    "A cada turno que se use,\n"
    "hará más daño.");

static const u8 sChipAwayDescription[] = _(
    "Golpea sin tener en cuenta\n"
    "cambios de estadísticas.");

static const u8 sClearSmogDescription[] = _(
    "Haz de luz que elimina los\n"
    "cambios de estadísticas.");

static const u8 sStoredPowerDescription[] = _(
    "Más daño si el usuario\n"
    "se ha subido estadísticas.");

static const u8 sQuickGuardDescription[] = _(
    "Evita ataques de prioridad\n"
    "durante 1 turno.");

static const u8 sAllySwitchDescription[] = _(
    "El usuario cambia de lugar\n"
    "con su compañero.");

static const u8 sScaldDescription[] = _(
    "Lanza agua hirviendo al\n"
    "enemigo. Puede quemar.");

static const u8 sShellSmashDescription[] = _(
    "Sube estadísticas ofensivas,\n"
    "pero baja las defensivas.");

static const u8 sHealPulseDescription[] = _(
    "Restaura la mitad de los PS\n"
    "máximos del objetivo.");

static const u8 sHexDescription[] = _(
    "Doble de daño si el enemigo\n"
    "tiene un problema de estado.");

static const u8 sSkyDropDescription[] = _(
    "Se lleva al enemigo en el\n"
    "aire hasta el próximo turno.");

static const u8 sShiftGearDescription[] = _(
    "Gira sus mecanismos para\n"
    "subir Ataque y Velocidad.");

static const u8 sCircleThrowDescription[] = _(
    "Lanza al enemigo y termina\n"
    "el combate.");

static const u8 sIncinerateDescription[] = _(
    "Quema Bayas y Gemas,\n"
    "impidiendo su uso.");

static const u8 sQuashDescription[] = _(
    "Presiona al enemigo y hace\n"
    "que se mueva el último.");

static const u8 sAcrobaticsDescription[] = _(
    "Doble de daño si el usuario\n"
    "no lleva ningún objeto.");

static const u8 sReflectTypeDescription[] = _(
    "El usuario refleja el tipo\n"
    "del enemigo y lo copia.");

static const u8 sRetaliateDescription[] = _(
    "Hace más daño si hay un\n"
    "aliado caído en combate.");

static const u8 sFinalGambitDescription[] = _(
    "Se sacrifica para hacer el\n"
    "mismo daño que PS restantes.");

static const u8 sBestowDescription[] = _(
    "El usuario le da su objeto\n"
    "equipado al enemigo.");

static const u8 sInfernoDescription[] = _(
    "Poderoso y seguro para\n"
    "quemar, pero impreciso.");

static const u8 sWaterPledgeDescription[] = _(
    "Ataca con una columna de\n"
    "agua. Puede formar arcoíris.");

static const u8 sFirePledgeDescription[] = _(
    "Ataca con una columna de\n"
    "fuego. Puede quemar hierba.");

static const u8 sGrassPledgeDescription[] = _(
    "Ataca con una columna de\n"
    "hierba. Puede crear pantano.");

static const u8 sStruggleBugDescription[] = _(
    "Ataca resistiendo al enemigo\n"
    "y baja el At. Esp.");

static const u8 sBulldozeDescription[] = _(
    "Pisotea el suelo con fuerza.\n"
    "Baja la Velocidad.");

static const u8 sWorkUpDescription[] = _(
    "El usuario se despierta.\n"
    "Sube el Ataque y el At. Esp.");

static const u8 sElectrowebDescription[] = _(
    "Atrapa al enemigo en una red\n"
    "eléctrica y baja Velocidad.");

static const u8 sWildChargeDescription[] = _(
    "Embestida eléctrica que\n"
    "también hiere al agresor.");

static const u8 sDrillRunDescription[] = _(
    "Gira como un gran taladro.\n"
    "Probabilidad de crítico.");

static const u8 sDualChopDescription[] = _(
    "Ataca brutalmente y golpea\n"
    "dos veces.");

static const u8 sHeartStampDescription[] = _(
    "Golpe por sorpresa que\n"
    "puede hacer retroceder.");

static const u8 sRazorShellDescription[] = _(
    "Lanza conchas afiladas al\n"
    "enemigo y puede bajar Def.");

static const u8 sLeafTornadoDescription[] = _(
    "Envuelve en hojas al enemigo\n"
    "y le baja la precisión.");

static const u8 sSteamrollerDescription[] = _(
    "Embiste al enemigo con todo.\n"
    "Puede hacer retroceder.");

static const u8 sCottonGuardDescription[] = _(
    "Envuelve el cuerpo en\n"
    "algodón y sube mucho Def.");

static const u8 sNightDazeDescription[] = _(
    "Lanza una onda oscura.\n"
    "Puede bajar la precisión.");

static const u8 sHurricaneDescription[] = _(
    "Atrapa en un viento feroz\n"
    "que puede confundir.");

static const u8 sHeadChargeDescription[] = _(
    "Carga con toda la cabeza.\n"
    "También hiere al usuario.");

static const u8 sGearGrindDescription[] = _(
    "Lanza dos engranajes que\n"
    "golpean 2 veces.");

static const u8 sTechnoBlastDescription[] = _(
    "Su tipo varía en función\n"
    "de la ROM equipada.");

static const u8 sRelicSongDescription[] = _(
    "Ataca con una canción\n"
    "antigua que puede dormir.");

static const u8 sSecretSwordDescription[] = _(
    "Corta con un cuerno que daña\n"
    "físicamente al enemigo.");

static const u8 sGlaciateDescription[] = _(
    "Sopla aire frío a los\n"
    "enemigos y puede bajar Vel.");

static const u8 sBoltStrikeDescription[] = _(
    "Golpea con una gran cantidad\n"
    "de rayos. Puede paralizar.");

static const u8 sBlueFlareDescription[] = _(
    "Envuelve al enemigo en una\n"
    "llama azul. Puede quemar.");

static const u8 sFieryDanceDescription[] = _(
    "Baila envuelto en llamas.\n"
    "Puede subir el At. Esp.");

static const u8 sFreezeShockDescription[] = _(
    "Poderoso ataque de 2 turnos\n"
    "que puede paralizar.");

static const u8 sIceBurnDescription[] = _(
    "Poderoso ataque de 2 turnos\n"
    "que puede quemar.");

static const u8 sSnarlDescription[] = _(
    "Grita al enemigo y baja\n"
    "su At. Esp.");

static const u8 sIcicleCrashDescription[] = _(
    "Lanza carámbanos al enemigo\n"
    "y puede hacerlo retroceder.");

static const u8 sVCreateDescription[] = _(
    "Poderoso, pero baja Defensa\n"
    "Def. Esp. y Velocidad.");

static const u8 sFusionFlareDescription[] = _(
    "Invoca una bola de fuego.\n"
    "Combina bien con un rayo.");

static const u8 sFusionBoltDescription[] = _(
    "Invoca un rayo. Combina\n"
    "bien con una bola de fuego.");

static const u8 sFlyingPressDescription[] = _(
    "Ataque con daño de tipo\n"
    "Lucha y tipo Volador.");

static const u8 sMatBlockDescription[] = _(
    "Evita movimientos ofensivos\n"
    "durante 1 turno.");

static const u8 sBelchDescription[] = _(
    "Suelta un gran eructo.\n"
    "Debe comerse una Baya.");

static const u8 sRototillerDescription[] = _(
    "Sube Ataque y At. Esp. de\n"
    "Pokémon de tipo Planta.");

static const u8 sStickyWebDescription[] = _(
    "Ondea una red que ralentiza\n"
    "a los enemigos que entran.");

static const u8 sFellStingerDescription[] = _(
    "Si debilita al enemigo,\n"
    "el Ataque sube.");

static const u8 sTrickOrTreatDescription[] = _(
    "Chantajea al Pokémon y lo\n"
    "convierte en tipo Fantasma.");

static const u8 sNobleRoarDescription[] = _(
    "Intimida al enemigo, y le\n"
    "baja Ataque y At. Esp.");

static const u8 sIonDelugeDescription[] = _(
    "Electrifica los movimientos\n"
    "de tipo Normal con iones.");

static const u8 sParabolicChargeDescription[] = _(
    "Daña a Pokémon adyascentes\n"
    "y se cura la mitad de ello.");

static const u8 sForestsCurseDescription[] = _(
    "Maldice al enemigo y lo\n"
    "convierte en tipo Planta.");

static const u8 sPetalBlizzardDescription[] = _(
    "Creo una tormenta violenta\n"
    "de pétalos para atacar.");

static const u8 sFreezeDryDescription[] = _(
    "Muy eficaz contra el tipo\n"
    "Agua. Puede congelar.");

static const u8 sDisarmingVoiceDescription[] = _(
    "Llanto encantador que no\n"
    "puede ser evitado.");

static const u8 sPartingShotDescription[] = _(
    "Baja Ataque y At. Esp. del\n"
    "enemigo y luego, se cambia.");

static const u8 sTopsyTurvyDescription[] = _(
    "Intercambia los cambios de\n"
    "estadísticas del objetivo.");

static const u8 sDrainingKissDescription[] = _(
    "Ataque que absorbe la mitad\n"
    "del daño que inflige.");

static const u8 sCraftyShieldDescription[] = _(
    "Evita movimientos de estado\n"
    "durante 1 turno.");

static const u8 sFlowerShieldDescription[] = _(
    "Sube la Defensa de los\n"
    "Pokémon de tipo Planta.");

static const u8 sGrassyTerrainDescription[] = _(
    "Crea un campo de hierba por\n"
    "5 turnos. Restaura PS.");

static const u8 sMistyTerrainDescription[] = _(
    "Cubre campo con niebla por\n"
    "5 turnos. Evita estados.");

static const u8 sElectrifyDescription[] = _(
    "Convierte el próximo mov.\n"
    "del enemigo en tipo Eléc.");

static const u8 sPlayRoughDescription[] = _(
    "Hace una jugarreta y puede\n"
    "bajar el Ataque.");

static const u8 sFairyWindDescription[] = _(
    "Levanta polvo de hadas y\n"
    "golpea al enemigo.");

static const u8 sMoonblastDescription[] = _(
    "Ataca con poder lunar.\n"
    "Puede bajar el At. Esp.");

static const u8 sBoomburstDescription[] = _(
    "Ataca a todos con una\n"
    "onda sonora destructiva.");

static const u8 sFairyLockDescription[] = _(
    "Encierra a todos en el campo\n"
    "hasta el próximo turno.");

static const u8 sKingsShieldDescription[] = _(
    "Evita el daño y baja el\n"
    "Ataque del agresor.");

static const u8 sPlayNiceDescription[] = _(
    "Engaña al enemigo, bajando\n"
    "su Ataque sin fallar.");

static const u8 sConfideDescription[] = _(
    "Comparte un secreto y baja\n"
    "el At. Esp. del enemigo.");

static const u8 sDiamondStormDescription[] = _(
    "Desata una tormenta de\n"
    "diamantes. Puede subir Def.");

static const u8 sSteamEruptionDescription[] = _(
    "Cubre al enemigo con vapor\n"
    "ardiente que puede quemar.");

static const u8 sHyperspaceHoleDescription[] = _(
    "Ataca con un agujero negro\n"
    "que es ineludible.");

static const u8 sWaterShurikenDescription[] = _(
    "Lanza de 2 a 5 estrellas que\n"
    "siempre golpean primero.");

static const u8 sMysticalFireDescription[] = _(
    "Aliento de fuego que puede\n"
    "bajar el At. Esp.");

static const u8 sSpikyShieldDescription[] = _(
    "Evita el ataque y hiere al\n"
    "agresor si es físico.");

static const u8 sAromaticMistDescription[] = _(
    "Sube la Def. Esp. del\n"
    "Pokémon aliado.");

static const u8 sEerieImpulseDescription[] = _(
    "Expone al enemigo a ondas\n"
    "y baja mucho su At. Esp.");

static const u8 sVenomDrenchDescription[] = _(
    "Baja Ataque, At. Esp. y\n"
    "Velocidad de un envenenado.");

static const u8 sPowderDescription[] = _(
    "Daña con prioridad si va\n"
    "a usar un mov. tipo Fuego.");

static const u8 sGeomancyDescription[] = _(
    "Sube At. Esp., Def. Esp. y\n"
    "Velocidad en el 2º turno.");

static const u8 sMagneticFluxDescription[] = _(
    "Sube las Defensas a los que\n"
    "tengan Más y Menos.");

static const u8 sHappyHourDescription[] = _(
    "Dobla la cantidad de\n"
    "dinero recibido.");

static const u8 sElectricTerrainDescription[] = _(
    "Electrifica el campo por\n"
    "5 turnos. Evita dormirse.");

static const u8 sDazzlingGleamDescription[] = _(
    "Daña a los enemigos con\n"
    "una haz de luz brillante.");

static const u8 sCelebrateDescription[] = _(
    "Te felicita en tu\n"
    "cumpleaños.");

static const u8 sHoldHandsDescription[] = _(
    "Junta las manos con los\n"
    "aliados felizmente.");

static const u8 sBabyDollEyesDescription[] = _(
    "Baja el Ataque del enemigo\n"
    "antes de que se mueva.");

static const u8 sNuzzleDescription[] = _(
    "Frota las mejillas contra\n"
    "enemigo, paralizándolo.");

static const u8 sInfestationDescription[] = _(
    "Acosa al enemigo y lo ataca\n"
    "de 2 a 5 turnos.");

static const u8 sPowerUpPunchDescription[] = _(
    "Fuerte puñetazo que sube\n"
    "el Ataque del usuario.");

static const u8 sThousandArrowsDescription[] = _(
    "Puede golpear en el aire\n"
    "y lanzar contra el suelo.");

static const u8 sThousandWavesDescription[] = _(
    "No deja escapar a los que\n"
    "han sido heridos.");

static const u8 sLandsWrathDescription[] = _(
    "Libera la energía terrestre\n"
    "para atacar a los enemigos.");

static const u8 sLightOfRuinDescription[] = _(
    "Potente rayo de luz que\n"
    "también hiere al agresor.");

static const u8 sOriginPulseDescription[] = _(
    "Gran rayo de luz azul que\n"
    "golpea a ambos enemigos.");

static const u8 sPrecipiceBladesDescription[] = _(
    "Hojas de piedra que golpean\n"
    "a ambos enemigos.");

static const u8 sLavaPlumeDescription[] = _(
    "Llamas ardientes que abrasan\n"
    "todo alrededor del usuario.");

static const u8 sLeafStormDescription[] = _(
    "Tormenta de hojas. Baja\n"
    "mucho el At. Esp.");

static const u8 sShoreUpDescription[] = _(
    "Restaura PS del usuario,\n"
    "más si hay Tor. Arena.");

static const u8 sFirstImpressionDescription[] = _(
    "Golpea primero y fuerte.\n"
    "Solo funciona en turno 1.");

static const u8 sBanefulBunkerDescription[] = _(
    "Protege al usuario y\n"
    "envenena al contacto.");

static const u8 sSpiritShackleDescription[] = _(
    "No deja escapar enemigos\n"
    "que te hayan golpeado.");

static const u8 sDarkestLariatDescription[] = _(
    "Golpea con los brazos.\n"
    "Ignora cambios de estadíst.");

static const u8 sSparklingAriaDescription[] = _(
    "Canta con burbujas. Cura\n"
    "quemaduras al contacto.");

static const u8 sIceHammerDescription[] = _(
    "Golpea con un puñetazo.\n"
    "Baja Velocidad del usuario.");

static const u8 sFloralHealingDescription[] = _(
    "Restaura PS del objetivo.\n"
    "Más efectivo sobre hierba.");

static const u8 sHighHorsepowerDescription[] = _(
    "Embiste al enemigo con\n"
    "todo el cuerpo.");

static const u8 sStrengthSapDescription[] = _(
    "Restaura PS en función del\n"
    "Ataque enemigo y lo baja.");

static const u8 sSolarBladeDescription[] = _(
    "Carga 1{SUPER_ER} turno y\n"
    "corta en el 2º con una hoja.");

static const u8 sLeafageDescription[] = _(
    "Ataca con una ráfaga de\n"
    "hojas pequeñas.");

static const u8 sSpotlightDescription[] = _(
    "Hace atacar al enemigo\n"
    "el Pokémon bajo el foco.");

static const u8 sToxicThreadDescription[] = _(
    "Ataca con un hilo que\n"
    "envenena y baja Velocidad.");

static const u8 sLaserFocusDescription[] = _(
    "Garantiza que el próximo\n"
    "golpe sea crítico.");

static const u8 sGearUpDescription[] = _(
    "Sube el poder a los que\n"
    "tengan Más y Menos.");

static const u8 sThroatChopDescription[] = _(
    "Golpea la garganta para\n"
    "anular los mov. de sonido.");

static const u8 sPollenPuffDescription[] = _(
    "Causa daño a enemigos.\n"
    "Restaura PS de aliados.");

static const u8 sAnchorShotDescription[] = _(
    "Estrangula al enemigo con\n"
    "cadenas. No deja retroceder.");

static const u8 sPsychicTerrainDescription[] = _(
    "Invoca un campo extraño por\n"
    "5 turnos. Evita prioridad.");

static const u8 sLungeDescription[] = _(
    "Se lanza contra el enemigo\n"
    "y baja su Ataque.");

static const u8 sFireLashDescription[] = _(
    "Envuelve al enemigo en\n"
    "llamas y baja su Defensa.");

static const u8 sPowerTripDescription[] = _(
    "A más subida de estadíst.,\n"
    "del enemigo, más poder.");

static const u8 sBurnUpDescription[] = _(
    "Quema por completo al\n"
    "usaurio. Pierde tipo Fuego.");

static const u8 sSpeedSwapDescription[] = _(
    "Intercambia la Velocidad\n"
    "con la del objetivo.");

static const u8 sSmartStrikeDescription[] = _(
    "Golpea con un cuerno\n"
    "preciso que nunca falla.");

static const u8 sPurifyDescription[] = _(
    "Cura el estado del enemigo\n"
    "y restaura PS del usuario.");

static const u8 sRevelationDanceDescription[] = _(
    "Baile místico que usa el\n"
    "1.{SUPER_ER} tipo del usuario.");

static const u8 sCoreEnforcerDescription[] = _(
    "Rayo fulminante que anula\n"
    "la habilidad del enemigo.");

static const u8 sTropKickDescription[] = _(
    "Patada tropical intensa.\n"
    "Baja el Ataque.");

static const u8 sInstructDescription[] = _(
    "Ordena usar el último\n"
    "mov. del objetivo de nuevo.");

static const u8 sBeakBlastDescription[] = _(
    "Calienta el pico y ataca.\n"
    "Quema al contacto.");

static const u8 sClangingScalesDescription[] = _(
    "Fuerte ruido escamoso que\n"
    "baja la Defensa.");

static const u8 sDragonHammerDescription[] = _(
    "Mueve todo el cuerpo para\n"
    "golpear como un martillo.");

static const u8 sBrutalSwingDescription[] = _(
    "Movimiento violento que\n"
    "golpea todo el alrededor.");

static const u8 sAuroraVeilDescription[] = _(
    "Debilita los ataques. Solo\n"
    "funciona bajo el granizo.");

static const u8 sShellTrapDescription[] = _(
    "Pone una trampa de conchas\n"
    "que daña al contacto.");

static const u8 sFleurCannonDescription[] = _(
    "Fuerte rayo que baja\n"
    "muchísimo el At. Esp.");

static const u8 sPsychicFangsDescription[] = _(
    "Muerde con colmillos\n"
    "psíquicos. Destruye barreas.");

static const u8 sStompingTantrumDescription[] = _(
    "Pisa alrededor con furia.\n"
    "Más poderoso si falló antes.");

static const u8 sShadowBoneDescription[] = _(
    "Golpea con un hueso maldito.\n"
    "Puede bajar la Defensa.");

static const u8 sAccelerockDescription[] = _(
    "Golpea con una roca veloz\n"
    "que siempre da primero.");

static const u8 sLiquidationDescription[] = _(
    "Golpea al enemigo con agua.\n"
    "Puede bajar la Defensa.");

static const u8 sPrismaticLaserDescription[] = _(
    "Poderoso rayo de luz que\n"
    "te inmoviliza 1 turno.");

static const u8 sSpectralThiefDescription[] = _(
    "Roba el cambio de estadíst.\n"
    "y luego ataca.");

static const u8 sSunsteelStrikeDescription[] = _(
    "Golpe solar que ignora\n"
    "las habilidades.");

static const u8 sMoongeistBeamDescription[] = _(
    "Golpe lunar que ignora\n"
    "las habilidades.");

static const u8 sTearfulLookDescription[] = _(
    "El usuario da pena. Baja\n"
    "At. y At. Esp. del enemigo.");

static const u8 sZingZapDescription[] = _(
    "Impacto eléctrico que puede\n"
    "hacer retroceder.");

static const u8 sNaturesMadnessDescription[] = _(
    "Reduce a la mitad los PS\n"
    "del enemigo.");

static const u8 sMultiAttackDescription[] = _(
    "Ataque que varía en función\n"
    "del Disco equipado.");

static const u8 sMindBlownDescription[] = _(
    "El usuario explota su cabeza\n"
    "para dañar todo alrededor.");

static const u8 sPlasmaFistsDescription[] = _(
    "Golpea con puños eléctricos.\n"
    "Tipo Normal pasa a Eléc.");

static const u8 sPhotonGeyserDescription[] = _(
    "Categoría en función de si\n"
    "At. o At. Esp. es más alto.");

static const u8 sZippyZapDescription[] = _(
    "Ráfaga eléctrica prioritaria\n"
    "que siempre es crítica.");

static const u8 sSplishySplashDescription[] = _(
    "Gran onda eléctrica que\n"
    "puede paralizar al enemigo.");

static const u8 sFloatyFallDescription[] = _(
    "Flota y cae en picado.\n"
    "Puede hacer retroceder");

static const u8 sPikaPapowDescription[] = _(
    "El amor de Pikachu sube su\n"
    "poder. Nunca falla.");

static const u8 sBouncyBubbleDescription[] = _(
    "Un ataque que absorbe\n"
#if B_UPDATED_MOVE_DATA >= GEN_8
    "todo el daño infligido.");
#else
    "la mitad del daño infligido.");
#endif

static const u8 sBuzzyBuzzDescription[] = _(
    "Suelta un chispa eléctrica\n"
    "que siempre paraliza.");

static const u8 sSizzlySlideDescription[] = _(
    "El usuario se envuelve en.\n"
    "llamas y quema al enemigo.");

static const u8 sGlitzyGlowDescription[] = _(
    "Fuerza telequinética que\n"
    "baja el At. Esp.");

static const u8 sBaddyBadDescription[] = _(
    "Ataque maléfico que\n"
    "baja el Ataque.");

static const u8 sSappySeedDescription[] = _(
    "Esparce semillas que drenan\n"
    "PS cada turno.");

static const u8 sFreezyFrostDescription[] = _(
    "Cristal brumoso. Elimina los\n"
    "cambios de estadísticas.");

static const u8 sSparklySwirlDescription[] = _(
    "Torbellino aromático. Cura\n"
    "los estados del equipo.");

static const u8 sVeeveeVolleyDescription[] = _(
    "El amor de Eevee sube su\n"
    "poder. Nunca falla.");

static const u8 sDoubleIronBashDescription[] = _(
    "Gira y golpea con brazos.\n"
    "Puede hacer retroceder.");

// GEN 8
static const u8 sDynamaxCannonDescription[] = _(
    "Dispara un gran rayo. Daña\n"
    "el doble a enemigos Dinamax.");
    
static const u8 sSnipeShotDescription[] = _(
    "Ignora los efectos que\n"
    "atraen movimientos.");
    
static const u8 sJawLockDescription[] = _(
    "Evita escapar al enemigo\n"
    "y al usuario.");
    
static const u8 sStuffCheeksDescription[] = _(
    "El usuario se come la Baya\n"
    "y sube mucho la defensa.");
    
static const u8 sNoRetreatDescription[] = _(
    "Sube todas las estadísticas\n"
    "pero no deja escapar.");
    
static const u8 sTarShotDescription[] = _(
    "Baja Velocidad del enemigo\n"
    "y lo hace débil al Fuego.");
    
static const u8 sMagicPowderDescription[] = _(
    "Polvo mágico que cambia el\n"
    "objetivo a tipo Psíquico.");
    
static const u8 sDragonDartsDescription[] = _(
    "Ataca dos veces. 2 enemigos\n"
    "son golpeados por separado.");
    
static const u8 sTeatimeDescription[] = _(
    "Todos los Pokémon se comen\n"
    "sus Bayas en la hora del té.");
    
static const u8 sOctolockDescription[] = _(
    "Atrapa al enemigo. Baja Def.\n"
    "y Def Esp. cada turno.");
    
static const u8 sBoltBeakDescription[] = _(
    "Dobla su poder si el usuario\n"
    "se mueve primero.");
    
static const u8 sFishiousRendDescription[] = _(
    "Dobla su poder si el usuario\n"
    "se mueve primero.");
    
static const u8 sCourtChangeDescription[] = _(
    "Intercambia los efectos\n"
    "en cada lado del campo.");
    
static const u8 sClangorousSoulDescription[] = _(
    "Usa algunos PS para subir\n"
    "todas las estadísticas.");
    
static const u8 sBodyPressDescription[] = _(
    "Hace más daño en función\n"
    "de la Defensa del enemigo.");
    
static const u8 sDecorateDescription[] = _(
    "Sube muchísimo el Ataque y\n"
    "el At. Esp. del objetivo.");
    
static const u8 sDrumBeatingDescription[] = _(
    "Toca la batería y ataca.\n"
    "Baja Velocidad del enemigo.");
    
static const u8 sSnapTrapDescription[] = _(
    "Atrapa al objetivo en una\n"
    "trampa durante 4 o 5 turnos.");
    
static const u8 sPyroBallDescription[] = _(
    "Lanza un balón ardiente al\n"
    "objetivo. Puede quemar.");
    
static const u8 sBehemothBladeDescription[] = _(
    "Un gran espadazo. Daña\n"
    "el doble a enemigos Dinamax.");
    
static const u8 sBehemothBashDescription[] = _(
    "Golpe de escudo. Daña\n"
    "el doble a enemigos Dinamax.");
    
static const u8 sAuraWheelDescription[] = _(
    "Sube la Velocidad si golpea.\n"
    "Su tipo varía según la forma.");
    
static const u8 sBreakingSwipeDescription[] = _(
    "Agita la cola para atacar.\n"
    "Baja Ataque de los heridos.");
    
static const u8 sBranchPokeDescription[] = _(
    "Golpea con una rama\n"
    "puntiaguda.");
    
static const u8 sOverdriveDescription[] = _(
    "Toca la guitarra causando\n"
    "fuertes vibraciones.");
    
static const u8 sAppleAcidDescription[] = _(
    "Ácido de manzana que baja\n"
    "la Def. Esp. del enemigo.");
    
static const u8 sGravAppleDescription[] = _(
    "Deja caer una manzana que\n"
    "la Defensa del enemigo.");
    
static const u8 sSpiritBreakDescription[] = _(
    "Fuerza rompeespíritus. Baja\n"
    "el At. Esp del enemigo.");
    
static const u8 sStrangeSteamDescription[] = _(
    "Emite un vapor extraño\n"
    "que confunde al enemigo.");
    
static const u8 sLifeDewDescription[] = _(
    "Esparce agua para restaurar\n"
    "PS propios y de aliados.");
    
static const u8 sObstructDescription[] = _(
    "Protege y baja muchísimo la\n"
    "Defensa al contacto.");
    
static const u8 sFalseSurrenderDescription[] = _(
    "Se inclina y apuñala al\n"
    "enemigo. Nunca falla.");
    
static const u8 sMeteorAssaultDescription[] = _(
    "Ataca con un puerro grueso.\n"
    "Te inmoviliza 1 turno.");
    
static const u8 sEternabeamDescription[] = _(
    "Ataque muy poderoso.\n"
    "Te inmoviliza 1 turno.");
    
static const u8 sSteelBeamDescription[] = _(
    "Lanza un rayo ardiente que\n"
    "también hiere al agresor.");

static const u8 sExpandingForceDescription[] = _(
    "En Campo Psíquico golpea\n"
    "más fuerte y a todos.");

static const u8 sSteelRollerDescription[] = _(
    "Destruye el campo. Falla si\n"
    "no hay un campo activo.");

static const u8 sScaleShotDescription[] = _(
    "Dispara de 2 a 5 escamas.\n"
    "Sube Velocidad, baja Def.");

static const u8 sMeteorBeamDescription[] = _(
    "Ataque de 2 turnos que sube\n"
    "el At. Esp. antes de atacar.");

static const u8 sShellSideArmDescription[] = _(
    "Usa el poder ofensivo más\n"
    "grande. Puede envenenar.");

static const u8 sMistyExplosionDescription[] = _(
    "Golpea a todo y se debilita.\n"
    "Más fuerte en Campo Niebla.");

static const u8 sGrassyGlideDescription[] = _(
    "Se desliza y golpea. Va\n"
    "primero en Campo de Hierba.");

static const u8 sRisingVoltageDescription[] = _(
    "En Campo Eléctrico su\n"
    "potencia se duplica.");

static const u8 sTerrainPulseDescription[] = _(
    "Su poder y tipo varía en\n"
    "función del campo activo.");

static const u8 sSkitterSmackDescription[] = _(
    "Se desliza por detrás.\n"
    "Baja At. Esp. del enemigo.");

static const u8 sBurningJealousyDescription[] = _(
    "Quema a los enemigos con\n"
    "estadísticas potenciadas.");

static const u8 sLashOutDescription[] = _(
    "Su poder se duplica si ha\n"
    "bajado estad. este turno.");

static const u8 sPoltergeistDescription[] = _(
    "Controla el objeto del\n"
    "enemigo y lo ataca con él.");

static const u8 sCorrosiveGasDescription[] = _(
    "Gas corrosivo que derrite\n"
    "todos los objetos equipados.");

static const u8 sCoachingDescription[] = _(
    "Aconseja a los aliados para\n"
    "subir su Ataque y Defensa.");

static const u8 sFlipTurnDescription[] = _(
    "Ataca y corre para cambiarse\n"
    "con otro Pokémon del equipo.");

static const u8 sTripleAxelDescription[] = _(
    "3 patadas que se vuelven\n"
    "más poderosas en cada golpe.");

static const u8 sDualWingbeatDescription[] = _(
    "Golpea con las alas dos\n"
    "veces seguidas.");

static const u8 sScorchingSandsDescription[] = _(
    "Lanza arena ardiente al\n"
    "objetivo. Puede quemar.");

static const u8 sJungleHealingDescription[] = _(
    "Restaura PS y estados de sí\n"
    "mismo y de los aliados.");

static const u8 sWickedBlowDescription[] = _(
    "Golpe oscuro que siempre\n"
    "causa un golpe crítico.");

static const u8 sSurgingStrikesDescription[] = _(
    "3 azotes torrenciales que\n"
    "siempre son golpes críticos.");

static const u8 sThunderCageDescription[] = _(
    "Encierra al enemigo en una\n"
    "jaula eléc. de 2 a 5 turnos.");

static const u8 sDragonEnergyDescription[] = _(
    "Causa más daño si el\n"
    "usuario tiene más PS.");

static const u8 sFreezingGlareDescription[] = _(
    "Dispara un rayo por los ojos\n"
#if B_USE_FROSTBITE == TRUE
    "y puede congelar al enemigo.");
#else
    "the eyes. May freeze the foe.");
#endif

static const u8 sFieryWrathDescription[] = _(
    "Ataque lleno de furia que\n"
    "puede hacer retroceder.");

static const u8 sThunderousKickDescription[] = _(
    "Patada imbuida en rayos.\n"
    "Baja Defensa del enemigo.");

static const u8 sGlacialLanceDescription[] = _(
    "Ensarta con una lanza llena\n"
    "de carámbanos al enemigo.");

static const u8 sAstralBarrageDescription[] = _(
    "Envía espíritus para\n"
    "golpear al enemigo.");

static const u8 sEerieSpellDescription[] = _(
    "Poderoso ataque psíquico.\n"
    "Quita 3 PP al último mov.");

static const u8 sDireClawDescription[] = _(
    "Alta probabilidad crítica.\n"
    "Paraliza, envenena o duerme.");

static const u8 sPsyshieldBashDescription[] = _(
    "Hits a foe with psychic\n"
    "energy. May raise Defense.");

static const u8 sPowerShiftDescription[] = _(
    "The user swaps its Attack\n"
    "and Defense stats.");

static const u8 sStoneAxeDescription[] = _(
    "High critical hit ratio. Sets\n"
    "Splinters that hurt the foe.");

static const u8 sSpringtideStormDescription[] = _(
    "Wraps a foe in fierce winds.\n"
    "Varies with the user's form.");

static const u8 sMysticalPowerDescription[] = _(
    "A mysterious power strikes,\n"
    "raising the user's Sp. Atk.");

static const u8 sRagingFuryDescription[] = _(
    "A rampage of 2 to 3 turns\n"
    "that confuses the user.");

static const u8 sWaveCrashDescription[] = _(
    "A slam shrouded in water.\n"
    "It also hurts the user.");

static const u8 sChloroblastDescription[] = _(
    "A user-hurting blast of\n"
    "amassed chlorophyll.");

static const u8 sMountainGaleDescription[] = _(
    "Giant chunks of ice damage\n"
    "the foe. It may flinch.");

static const u8 sVictoryDanceDescription[] = _(
    "Dances to raise Attack,\n"
    "Defense and Speed.");

static const u8 sHeadlongRushDescription[] = _(
    "Hits with a full-body tackle.\n"
    "Lowers the users's defenses.");

static const u8 sBarbBarrageDescription[] = _(
    "Can poison on impact. Powers\n"
    "up against poisoned foes.");

static const u8 sEsperWingDescription[] = _(
    "High critical hit ratio.\n"
    "Ups the user's Speed.");

static const u8 sBitterMaliceDescription[] = _(
    "A spine-chilling resentment.\n"
    "May lower the foe's Attack.");

static const u8 sShelterDescription[] = _(
    "The user hardens their skin,\n"
    "sharply raising its Defense.");

static const u8 sTripleArrowsDescription[] = _(
    "High critical hit ratio.\n"
    "May lower Defense or flinch.");

static const u8 sInfernalParadeDescription[] = _(
    "Hurts a foe harder if it has\n"
    "an ailment. May leave a burn.");

static const u8 sCeaselessEdgeDescription[] = _(
    "High critical hit ratio. Sets\n"
    "Splinters that hurt the foe.");

static const u8 sBleakwindStormDescription[] = _(
    "Hits with brutal, cold winds.\n"
    "May lower the foe's Speed.");

static const u8 sWildboltStormDescription[] = _(
    "Hits with a brutal tempest.\n"
    "May inflict paralysis.");

static const u8 sSandsearStormDescription[] = _(
    "Hits with brutally hot sand.\n"
    "May inflict a burn.");

static const u8 sLunarBlessingDescription[] = _(
    "The user heals and cures\n"
    "itself and its ally.");

static const u8 sTakeHeartDescription[] = _(
    "The user lifts its spirits to\n"
    "heal and strengthen itself.");

static const u8 sTeraBlastDescription[] = _(
    "If the user's Terastallized,\n"
    "it hits with its Tera-type.");

static const u8 sSilkTrapDescription[] =_(
    "Protects itself, lowering\n"
    "Speed on contact.");

static const u8 sAxeKickDescription[] = _(
    "May miss and hurt the kicker.\n"
    "May cause confusion.");

static const u8 sLastRespectsDescription[] = _(
    "This move deals more damage\n"
    "for each defeated ally.");

static const u8 sLuminaCrashDescription[] = _(
    "A mind-affecting light\n"
    "harshly lowers Sp. Def.");

static const u8 sOrderUpDescription[] = _(
    "Boosts a user's stats\n"
    "depending on Tatsugiri.");

static const u8 sJetPunchDescription[] = _(
    "A punch is thrown at blinding\n"
    "speed to strike first.");

static const u8 sSpicyExtractDescription[] = _(
    "Sharply ups target's Attack,\n"
    "harshly lowers its Defense.");

static const u8 sSpinOutDescription[] = _(
    "Furiously strains its legs.\n"
    "Harshly lowers user's Speed.");

static const u8 sPopulationBombDescription[] = _(
    "The user's fellows hit one\n"
    "to ten times in a row.");

static const u8 sIceSpinnerDescription[] = _(
    "Ice-covered feet hit a foe\n"
    "and destroy the terrain.");

static const u8 sGlaiveRushDescription[] = _(
    "Foe attacks next turn can't\n"
    "miss and do double damage.");

static const u8 sRevivalBlessingDescription[] = _(
    "Revives a fainted party {PKMN}\n"
    "and restores half of its HP.");

static const u8 sSaltCureDescription[] = _(
    "Hurts foe every turn. Double\n"
    "damage to Steel and Water.");

static const u8 sTripleDiveDescription[] = _(
    "Hits target with splashes\n"
    "of water 3 times in a row.");

static const u8 sMortalSpinDescription[] = _(
    "Erases trap moves and Leech\n"
    "Seed. Poisons adjecent foes.");

static const u8 sDoodleDescription[] = _(
    "Changes user's and ally's\n"
    "Ability into the target's.");

static const u8 sFilletAwayDescription[] = _(
    "Sharply boosts offenses and\n"
    "Speed by using its own HP.");

static const u8 sKowtowCleaveDescription[] = _(
    "User slashes the foe after\n"
    "kowtowing. It never misses.");

static const u8 sFlowerTrickDescription[] = _(
    "Rigged bouquet. Always gets\n"
    "a critical hit, never missing.");

static const u8 sTorchSongDescription[] = _(
    "Flames scorch the target.\n"
    "Boosts the user's Sp. Atk.");

static const u8 sAquaStepDescription[] = _(
    "Hits with light, fluid dance\n"
    "steps. Ups the user's Speed.");

static const u8 sRagingBullDescription[] = _(
    "Tackle that breaks barriers.\n"
    "User's form determines type.");

static const u8 sMakeItRainDescription[] = _(
    "Lowers the user's Sp. Atk.\n"
    "Money is recovered after.");

static const u8 sRuinationDescription[] = _(
    "Summons a ruinous disaster\n"
    "and cuts half the foe's HP.");

static const u8 sCollisionCourseDescription[] = _(
    "Prehistoric explosion that's\n"
    "stronger if supereffective.");

static const u8 sElectroDriftDescription[] = _(
    "Futuristic electricity. It's\n"
    "stronger if supereffective.");

static const u8 sShedTailDescription[] = _(
    "Creates a Substitute for\n"
    "itself before switching out.");

static const u8 sChillyReceptionDescription[] =_(
    "Bad joke summons snowstorm.\n"
    "The user also switches out.");

static const u8 sTidyUpDescription[] = _(
    "User tidies up hazards and\n"
    "raises its Attack and Speed.");

static const u8 sSnowscapeDescription[] = _(
    "Summons a snowstorm that\n"
    "lasts for five turns.");

static const u8 sPounceDescription[] = _(
    "The user pounces on the foe,\n"
    "lowering its Speed.");

static const u8 sTrailblazeDescription[] = _(
    "The user attacks suddenly,\n"
    "raising its Speed.");

static const u8 sChillingWaterDescription[] = _(
    "A shower with ice-cold water\n"
    "lowers the target's Attack.");

static const u8 sHyperDrillDescription[] = _(
    "A spinning pointed part\n"
    "bypasses a foe's Protect.");

static const u8 sTwinBeamDescription[] = _(
    "Mystical eye-beams that hit\n"
    "the target twice in a row.");

static const u8 sRageFistDescription[] = _(
    "The more the user has been\n"
    "hit, the stronger the move.");

static const u8 sArmorCannonDescription[] = _(
    "A strong attack but lowers\n"
    "the defensive stats.");

static const u8 sBitterBladeDescription[] = _(
    "An attack that absorbs\n"
    "half the damage inflicted.");

static const u8 sDoubleShockDescription[] = _(
    "Discharges all electricity,\n"
    "losing the Electric type.");

static const u8 sGigatonHammerDescription[] = _(
    "Swings a huge hammer. Can't\n"
    "be used twice in a row.");

static const u8 sComeuppanceDescription[] = _(
    "Retaliates strongly against\n"
    "who last hurt the user.");

static const u8 sAquaCutterDescription[] = _(
    "Pressurized water cut with a\n"
    "high critical-hit ratio.");

static const u8 sBlazingTorqueDescription[] = _(
    "---");

static const u8 sWickedTorqueDescription[] = _(
    "---");

static const u8 sNoxiousTorqueDescription[] = _(
    "---");

static const u8 sCombatTorqueDescription[] = _(
    "---");

static const u8 sMagicalTorqueDescription[] = _(
    "---");

static const u8 sPsybladeDescription[] = _(
    "This move's power increases\n"
    "when on Electric Terrain.");

static const u8 sHydroSteamDescription[] = _(
    "This move's power increases\n"
    "under harsh sunlight.");

static const u8 sBloodMoonDescription[] = _(
    "Unleashes the blood moon.\n"
    "Can't be used twice in a row.");

static const u8 sMatchaGotchaDescription[] = _(
    "Absorbs half the damage\n"
    "inflicted. May cause a burn.");

static const u8 sSyrupBombDescription[] = _(
    "Lowers the foe's speed\n"
    "each turn for 3 turns.");

static const u8 sIvyCudgelDescription[] = _(
    "Type changes with held mask.\n"
    "High critical-hit ratio.");

static const u8 sElectroShotDescription[] = _(
    "Absorbs electricity in one turn,\n"
    "then attacks next turn.");

static const u8 sTeraStarstormDescription[] = _(
    "Damages all opponents if user is\n"
    "Stellar form Terapagos.");

static const u8 sFickleBeamDescription[] = _(
    "Shoots a beam of light. Sometimes\n"
    "twice as strong.");

static const u8 sBurningBulwarkDescription[] = _(
    "Evades attack, and burns\n"
    "the foe if struck.");

static const u8 sTachyonCutterDescription[] = _(
    "Launches particle blades at\n"
    "the target. Strikes twice.");

static const u8 sDragonCheerDescription[] = _(
    "Increases allies' critical hit\n"
    "ration, especially if Dragons.");

static const u8 sAlluringVoiceDescription[] = _(
    "Confuses the target if their\n"
    "stats were boosted this turn.");

static const u8 sTemperFlareDescription[] = _(
    "A desperation attack. Power\n"
    "doubles if last move failed.");

static const u8 sSupercellSlamDescription[] = _(
    "An electrified slam. If it\n"
    "misses, the user is hurt.");

static const u8 sPsychicNoiseDescription[] = _(
    "Unpleasant sound waves that\n"
    "damage and prevent healing.");

static const u8 sUpperHandDescription[] = _(
    "Makes the target flinch if\n"
    "readying a priority move.");

static const u8 sMalignantChainDescription[] = _(
    "A corrosive chain attack\n"
    "that may badly poison.");

const u8 gNotDoneYetDescription[] = _(
    "This move can't be used. Its\n"
    "effect is in development.");

#undef BINDING_TURNS

// MOVE_NONE is ignored in this table. Make sure to always subtract 1 before getting the right pointer.

// MOVE_NONE is ignored in this table. Make sure to always subtract 1 before getting the right pointer.
const u8 *const gMoveDescriptionPointers[MOVES_COUNT - 1] =
{
    [MOVE_POUND - 1] = sPoundDescription,
    [MOVE_KARATE_CHOP - 1] = sKarateChopDescription,
    [MOVE_DOUBLE_SLAP - 1] = sDoubleSlapDescription,
    [MOVE_COMET_PUNCH - 1] = sCometPunchDescription,
    [MOVE_MEGA_PUNCH - 1] = sMegaPunchDescription,
    [MOVE_PAY_DAY - 1] = sPayDayDescription,
    [MOVE_FIRE_PUNCH - 1] = sFirePunchDescription,
    [MOVE_ICE_PUNCH - 1] = sIcePunchDescription,
    [MOVE_THUNDER_PUNCH - 1] = sThunderPunchDescription,
    [MOVE_SCRATCH - 1] = sScratchDescription,
    [MOVE_VISE_GRIP - 1] = sViseGripDescription,
    [MOVE_GUILLOTINE - 1] = sGuillotineDescription,
    [MOVE_RAZOR_WIND - 1] = sRazorWindDescription,
    [MOVE_SWORDS_DANCE - 1] = sSwordsDanceDescription,
    [MOVE_CUT - 1] = sCutDescription,
    [MOVE_GUST - 1] = sGustDescription,
    [MOVE_WING_ATTACK - 1] = sWingAttackDescription,
    [MOVE_WHIRLWIND - 1] = sWhirlwindDescription,
    [MOVE_FLY - 1] = sFlyDescription,
    [MOVE_BIND - 1] = sBindDescription,
    [MOVE_SLAM - 1] = sSlamDescription,
    [MOVE_VINE_WHIP - 1] = sVineWhipDescription,
    [MOVE_STOMP - 1] = sStompDescription,
    [MOVE_DOUBLE_KICK - 1] = sDoubleKickDescription,
    [MOVE_MEGA_KICK - 1] = sMegaKickDescription,
    [MOVE_JUMP_KICK - 1] = sJumpKickDescription,
    [MOVE_ROLLING_KICK - 1] = sRollingKickDescription,
    [MOVE_SAND_ATTACK - 1] = sSandAttackDescription,
    [MOVE_HEADBUTT - 1] = sHeadbuttDescription,
    [MOVE_HORN_ATTACK - 1] = sHornAttackDescription,
    [MOVE_FURY_ATTACK - 1] = sFuryAttackDescription,
    [MOVE_HORN_DRILL - 1] = sHornDrillDescription,
    [MOVE_TACKLE - 1] = sTackleDescription,
    [MOVE_BODY_SLAM - 1] = sBodySlamDescription,
    [MOVE_WRAP - 1] = sWrapDescription,
    [MOVE_TAKE_DOWN - 1] = sTakeDownDescription,
    [MOVE_THRASH - 1] = sThrashDescription,
    [MOVE_DOUBLE_EDGE - 1] = sDoubleEdgeDescription,
    [MOVE_TAIL_WHIP - 1] = sTailWhipDescription,
    [MOVE_POISON_STING - 1] = sPoisonStingDescription,
    [MOVE_TWINEEDLE - 1] = sTwineedleDescription,
    [MOVE_PIN_MISSILE - 1] = sPinMissileDescription,
    [MOVE_LEER - 1] = sLeerDescription,
    [MOVE_BITE - 1] = sBiteDescription,
    [MOVE_GROWL - 1] = sGrowlDescription,
    [MOVE_ROAR - 1] = sRoarDescription,
    [MOVE_SING - 1] = sSingDescription,
    [MOVE_SUPERSONIC - 1] = sSupersonicDescription,
    [MOVE_SONIC_BOOM - 1] = sSonicBoomDescription,
    [MOVE_DISABLE - 1] = sDisableDescription,
    [MOVE_ACID - 1] = sAcidDescription,
    [MOVE_EMBER - 1] = sEmberDescription,
    [MOVE_FLAMETHROWER - 1] = sFlamethrowerDescription,
    [MOVE_MIST - 1] = sMistDescription,
    [MOVE_WATER_GUN - 1] = sWaterGunDescription,
    [MOVE_HYDRO_PUMP - 1] = sHydroPumpDescription,
    [MOVE_SURF - 1] = sSurfDescription,
    [MOVE_ICE_BEAM - 1] = sIceBeamDescription,
    [MOVE_BLIZZARD - 1] = sBlizzardDescription,
    [MOVE_PSYBEAM - 1] = sPsybeamDescription,
    [MOVE_BUBBLE_BEAM - 1] = sBubbleBeamDescription,
    [MOVE_AURORA_BEAM - 1] = sAuroraBeamDescription,
    [MOVE_HYPER_BEAM - 1] = sHyperBeamDescription,
    [MOVE_PECK - 1] = sPeckDescription,
    [MOVE_DRILL_PECK - 1] = sDrillPeckDescription,
    [MOVE_SUBMISSION - 1] = sSubmissionDescription,
    [MOVE_LOW_KICK - 1] = sLowKickDescription,
    [MOVE_COUNTER - 1] = sCounterDescription,
    [MOVE_SEISMIC_TOSS - 1] = sSeismicTossDescription,
    [MOVE_STRENGTH - 1] = sStrengthDescription,
    [MOVE_ABSORB - 1] = sAbsorbDescription,
    [MOVE_MEGA_DRAIN - 1] = sMegaDrainDescription,
    [MOVE_LEECH_SEED - 1] = sLeechSeedDescription,
    [MOVE_GROWTH - 1] = sGrowthDescription,
    [MOVE_RAZOR_LEAF - 1] = sRazorLeafDescription,
    [MOVE_SOLAR_BEAM - 1] = sSolarBeamDescription,
    [MOVE_POISON_POWDER - 1] = sPoisonPowderDescription,
    [MOVE_STUN_SPORE - 1] = sStunSporeDescription,
    [MOVE_SLEEP_POWDER - 1] = sSleepPowderDescription,
    [MOVE_PETAL_DANCE - 1] = sPetalDanceDescription,
    [MOVE_STRING_SHOT - 1] = sStringShotDescription,
    [MOVE_DRAGON_RAGE - 1] = sDragonRageDescription,
    [MOVE_FIRE_SPIN - 1] = sFireSpinDescription,
    [MOVE_THUNDER_SHOCK - 1] = sThunderShockDescription,
    [MOVE_THUNDERBOLT - 1] = sThunderboltDescription,
    [MOVE_THUNDER_WAVE - 1] = sThunderWaveDescription,
    [MOVE_THUNDER - 1] = sThunderDescription,
    [MOVE_ROCK_THROW - 1] = sRockThrowDescription,
    [MOVE_EARTHQUAKE - 1] = sEarthquakeDescription,
    [MOVE_FISSURE - 1] = sFissureDescription,
    [MOVE_DIG - 1] = sDigDescription,
    [MOVE_TOXIC - 1] = sToxicDescription,
    [MOVE_CONFUSION - 1] = sConfusionDescription,
    [MOVE_PSYCHIC - 1] = sPsychicDescription,
    [MOVE_HYPNOSIS - 1] = sHypnosisDescription,
    [MOVE_MEDITATE - 1] = sMeditateDescription,
    [MOVE_AGILITY - 1] = sAgilityDescription,
    [MOVE_QUICK_ATTACK - 1] = sQuickAttackDescription,
    [MOVE_RAGE - 1] = sRageDescription,
    [MOVE_TELEPORT - 1] = sTeleportDescription,
    [MOVE_NIGHT_SHADE - 1] = sNightShadeDescription,
    [MOVE_MIMIC - 1] = sMimicDescription,
    [MOVE_SCREECH - 1] = sScreechDescription,
    [MOVE_DOUBLE_TEAM - 1] = sDoubleTeamDescription,
    [MOVE_RECOVER - 1] = sRecoverDescription,
    [MOVE_HARDEN - 1] = sHardenDescription,
    [MOVE_MINIMIZE - 1] = sMinimizeDescription,
    [MOVE_SMOKESCREEN - 1] = sSmokescreenDescription,
    [MOVE_CONFUSE_RAY - 1] = sConfuseRayDescription,
    [MOVE_WITHDRAW - 1] = sWithdrawDescription,
    [MOVE_DEFENSE_CURL - 1] = sDefenseCurlDescription,
    [MOVE_BARRIER - 1] = sBarrierDescription,
    [MOVE_LIGHT_SCREEN - 1] = sLightScreenDescription,
    [MOVE_HAZE - 1] = sHazeDescription,
    [MOVE_REFLECT - 1] = sReflectDescription,
    [MOVE_FOCUS_ENERGY - 1] = sFocusEnergyDescription,
    [MOVE_BIDE - 1] = sBideDescription,
    [MOVE_METRONOME - 1] = sMetronomeDescription,
    [MOVE_MIRROR_MOVE - 1] = sMirrorMoveDescription,
    [MOVE_SELF_DESTRUCT - 1] = sSelfDestructDescription,
    [MOVE_EGG_BOMB - 1] = sEggBombDescription,
    [MOVE_LICK - 1] = sLickDescription,
    [MOVE_SMOG - 1] = sSmogDescription,
    [MOVE_SLUDGE - 1] = sSludgeDescription,
    [MOVE_BONE_CLUB - 1] = sBoneClubDescription,
    [MOVE_FIRE_BLAST - 1] = sFireBlastDescription,
    [MOVE_WATERFALL - 1] = sWaterfallDescription,
    [MOVE_CLAMP - 1] = sClampDescription,
    [MOVE_SWIFT - 1] = sSwiftDescription,
    [MOVE_SKULL_BASH - 1] = sSkullBashDescription,
    [MOVE_SPIKE_CANNON - 1] = sSpikeCannonDescription,
    [MOVE_CONSTRICT - 1] = sConstrictDescription,
    [MOVE_AMNESIA - 1] = sAmnesiaDescription,
    [MOVE_KINESIS - 1] = sKinesisDescription,
    [MOVE_SOFT_BOILED - 1] = sSoftBoiledDescription,
    [MOVE_HIGH_JUMP_KICK - 1] = sHighJumpKickDescription,
    [MOVE_GLARE - 1] = sGlareDescription,
    [MOVE_DREAM_EATER - 1] = sDreamEaterDescription,
    [MOVE_POISON_GAS - 1] = sPoisonGasDescription,
    [MOVE_BARRAGE - 1] = sBarrageDescription,
    [MOVE_LEECH_LIFE - 1] = sLeechLifeDescription,
    [MOVE_LOVELY_KISS - 1] = sLovelyKissDescription,
    [MOVE_SKY_ATTACK - 1] = sSkyAttackDescription,
    [MOVE_TRANSFORM - 1] = sTransformDescription,
    [MOVE_BUBBLE - 1] = sBubbleDescription,
    [MOVE_DIZZY_PUNCH - 1] = sDizzyPunchDescription,
    [MOVE_SPORE - 1] = sSporeDescription,
    [MOVE_FLASH - 1] = sFlashDescription,
    [MOVE_PSYWAVE - 1] = sPsywaveDescription,
    [MOVE_SPLASH - 1] = sSplashDescription,
    [MOVE_ACID_ARMOR - 1] = sAcidArmorDescription,
    [MOVE_CRABHAMMER - 1] = sCrabhammerDescription,
    [MOVE_EXPLOSION - 1] = sExplosionDescription,
    [MOVE_FURY_SWIPES - 1] = sFurySwipesDescription,
    [MOVE_BONEMERANG - 1] = sBonemerangDescription,
    [MOVE_REST - 1] = sRestDescription,
    [MOVE_ROCK_SLIDE - 1] = sRockSlideDescription,
    [MOVE_HYPER_FANG - 1] = sHyperFangDescription,
    [MOVE_SHARPEN - 1] = sSharpenDescription,
    [MOVE_CONVERSION - 1] = sConversionDescription,
    [MOVE_TRI_ATTACK - 1] = sTriAttackDescription,
    [MOVE_SUPER_FANG - 1] = sSuperFangDescription,
    [MOVE_SLASH - 1] = sSlashDescription,
    [MOVE_SUBSTITUTE - 1] = sSubstituteDescription,
    [MOVE_STRUGGLE - 1] = sStruggleDescription,
    [MOVE_SKETCH - 1] = sSketchDescription,
    [MOVE_TRIPLE_KICK - 1] = sTripleKickDescription,
    [MOVE_THIEF - 1] = sThiefDescription,
    [MOVE_SPIDER_WEB - 1] = sSpiderWebDescription,
    [MOVE_MIND_READER - 1] = sMindReaderDescription,
    [MOVE_NIGHTMARE - 1] = sNightmareDescription,
    [MOVE_FLAME_WHEEL - 1] = sFlameWheelDescription,
    [MOVE_SNORE - 1] = sSnoreDescription,
    [MOVE_CURSE - 1] = sCurseDescription,
    [MOVE_FLAIL - 1] = sFlailDescription,
    [MOVE_CONVERSION_2 - 1] = sConversion2Description,
    [MOVE_AEROBLAST - 1] = sAeroblastDescription,
    [MOVE_COTTON_SPORE - 1] = sCottonSporeDescription,
    [MOVE_REVERSAL - 1] = sReversalDescription,
    [MOVE_SPITE - 1] = sSpiteDescription,
    [MOVE_POWDER_SNOW - 1] = sPowderSnowDescription,
    [MOVE_PROTECT - 1] = sProtectDescription,
    [MOVE_MACH_PUNCH - 1] = sMachPunchDescription,
    [MOVE_SCARY_FACE - 1] = sScaryFaceDescription,
    [MOVE_FEINT_ATTACK - 1] = sFeintAttackDescription,
    [MOVE_SWEET_KISS - 1] = sSweetKissDescription,
    [MOVE_BELLY_DRUM - 1] = sBellyDrumDescription,
    [MOVE_SLUDGE_BOMB - 1] = sSludgeBombDescription,
    [MOVE_MUD_SLAP - 1] = sMudSlapDescription,
    [MOVE_OCTAZOOKA - 1] = sOctazookaDescription,
    [MOVE_SPIKES - 1] = sSpikesDescription,
    [MOVE_ZAP_CANNON - 1] = sZapCannonDescription,
    [MOVE_FORESIGHT - 1] = sForesightDescription,
    [MOVE_DESTINY_BOND - 1] = sDestinyBondDescription,
    [MOVE_PERISH_SONG - 1] = sPerishSongDescription,
    [MOVE_ICY_WIND - 1] = sIcyWindDescription,
    [MOVE_DETECT - 1] = sDetectDescription,
    [MOVE_BONE_RUSH - 1] = sBoneRushDescription,
    [MOVE_LOCK_ON - 1] = sLockOnDescription,
    [MOVE_OUTRAGE - 1] = sOutrageDescription,
    [MOVE_SANDSTORM - 1] = sSandstormDescription,
    [MOVE_GIGA_DRAIN - 1] = sGigaDrainDescription,
    [MOVE_ENDURE - 1] = sEndureDescription,
    [MOVE_CHARM - 1] = sCharmDescription,
    [MOVE_ROLLOUT - 1] = sRolloutDescription,
    [MOVE_FALSE_SWIPE - 1] = sFalseSwipeDescription,
    [MOVE_SWAGGER - 1] = sSwaggerDescription,
    [MOVE_MILK_DRINK - 1] = sMilkDrinkDescription,
    [MOVE_SPARK - 1] = sSparkDescription,
    [MOVE_FURY_CUTTER - 1] = sFuryCutterDescription,
    [MOVE_STEEL_WING - 1] = sSteelWingDescription,
    [MOVE_MEAN_LOOK - 1] = sMeanLookDescription,
    [MOVE_ATTRACT - 1] = sAttractDescription,
    [MOVE_SLEEP_TALK - 1] = sSleepTalkDescription,
    [MOVE_HEAL_BELL - 1] = sHealBellDescription,
    [MOVE_RETURN - 1] = sReturnDescription,
    [MOVE_PRESENT - 1] = sPresentDescription,
    [MOVE_FRUSTRATION - 1] = sFrustrationDescription,
    [MOVE_SAFEGUARD - 1] = sSafeguardDescription,
    [MOVE_PAIN_SPLIT - 1] = sPainSplitDescription,
    [MOVE_SACRED_FIRE - 1] = sSacredFireDescription,
    [MOVE_MAGNITUDE - 1] = sMagnitudeDescription,
    [MOVE_DYNAMIC_PUNCH - 1] = sDynamicPunchDescription,
    [MOVE_MEGAHORN - 1] = sMegahornDescription,
    [MOVE_DRAGON_BREATH - 1] = sDragonBreathDescription,
    [MOVE_BATON_PASS - 1] = sBatonPassDescription,
    [MOVE_ENCORE - 1] = sEncoreDescription,
    [MOVE_PURSUIT - 1] = sPursuitDescription,
    [MOVE_RAPID_SPIN - 1] = sRapidSpinDescription,
    [MOVE_SWEET_SCENT - 1] = sSweetScentDescription,
    [MOVE_IRON_TAIL - 1] = sIronTailDescription,
    [MOVE_METAL_CLAW - 1] = sMetalClawDescription,
    [MOVE_VITAL_THROW - 1] = sVitalThrowDescription,
    [MOVE_MORNING_SUN - 1] = sMorningSunDescription,
    [MOVE_SYNTHESIS - 1] = sSynthesisDescription,
    [MOVE_MOONLIGHT - 1] = sMoonlightDescription,
    [MOVE_HIDDEN_POWER - 1] = sHiddenPowerDescription,
    [MOVE_CROSS_CHOP - 1] = sCrossChopDescription,
    [MOVE_TWISTER - 1] = sTwisterDescription,
    [MOVE_RAIN_DANCE - 1] = sRainDanceDescription,
    [MOVE_SUNNY_DAY - 1] = sSunnyDayDescription,
    [MOVE_CRUNCH - 1] = sCrunchDescription,
    [MOVE_MIRROR_COAT - 1] = sMirrorCoatDescription,
    [MOVE_PSYCH_UP - 1] = sPsychUpDescription,
    [MOVE_EXTREME_SPEED - 1] = sExtremeSpeedDescription,
    [MOVE_ANCIENT_POWER - 1] = sAncientPowerDescription,
    [MOVE_SHADOW_BALL - 1] = sShadowBallDescription,
    [MOVE_FUTURE_SIGHT - 1] = sFutureSightDescription,
    [MOVE_ROCK_SMASH - 1] = sRockSmashDescription,
    [MOVE_WHIRLPOOL - 1] = sWhirlpoolDescription,
    [MOVE_BEAT_UP - 1] = sBeatUpDescription,
    [MOVE_FAKE_OUT - 1] = sFakeOutDescription,
    [MOVE_UPROAR - 1] = sUproarDescription,
    [MOVE_STOCKPILE - 1] = sStockpileDescription,
    [MOVE_SPIT_UP - 1] = sSpitUpDescription,
    [MOVE_SWALLOW - 1] = sSwallowDescription,
    [MOVE_HEAT_WAVE - 1] = sHeatWaveDescription,
    [MOVE_HAIL - 1] = sHailDescription,
    [MOVE_TORMENT - 1] = sTormentDescription,
    [MOVE_FLATTER - 1] = sFlatterDescription,
    [MOVE_WILL_O_WISP - 1] = sWillOWispDescription,
    [MOVE_MEMENTO - 1] = sMementoDescription,
    [MOVE_FACADE - 1] = sFacadeDescription,
    [MOVE_FOCUS_PUNCH - 1] = sFocusPunchDescription,
    [MOVE_SMELLING_SALTS - 1] = sSmellingSaltsDescription,
    [MOVE_FOLLOW_ME - 1] = sFollowMeDescription,
    [MOVE_NATURE_POWER - 1] = sNaturePowerDescription,
    [MOVE_CHARGE - 1] = sChargeDescription,
    [MOVE_TAUNT - 1] = sTauntDescription,
    [MOVE_HELPING_HAND - 1] = sHelpingHandDescription,
    [MOVE_TRICK - 1] = sTrickDescription,
    [MOVE_ROLE_PLAY - 1] = sRolePlayDescription,
    [MOVE_WISH - 1] = sWishDescription,
    [MOVE_ASSIST - 1] = sAssistDescription,
    [MOVE_INGRAIN - 1] = sIngrainDescription,
    [MOVE_SUPERPOWER - 1] = sSuperpowerDescription,
    [MOVE_MAGIC_COAT - 1] = sMagicCoatDescription,
    [MOVE_RECYCLE - 1] = sRecycleDescription,
    [MOVE_REVENGE - 1] = sRevengeDescription,
    [MOVE_BRICK_BREAK - 1] = sBrickBreakDescription,
    [MOVE_YAWN - 1] = sYawnDescription,
    [MOVE_KNOCK_OFF - 1] = sKnockOffDescription,
    [MOVE_ENDEAVOR - 1] = sEndeavorDescription,
    [MOVE_ERUPTION - 1] = sEruptionDescription,
    [MOVE_SKILL_SWAP - 1] = sSkillSwapDescription,
    [MOVE_IMPRISON - 1] = sImprisonDescription,
    [MOVE_REFRESH - 1] = sRefreshDescription,
    [MOVE_GRUDGE - 1] = sGrudgeDescription,
    [MOVE_SNATCH - 1] = sSnatchDescription,
    [MOVE_SECRET_POWER - 1] = sSecretPowerDescription,
    [MOVE_DIVE - 1] = sDiveDescription,
    [MOVE_ARM_THRUST - 1] = sArmThrustDescription,
    [MOVE_CAMOUFLAGE - 1] = sCamouflageDescription,
    [MOVE_TAIL_GLOW - 1] = sTailGlowDescription,
    [MOVE_LUSTER_PURGE - 1] = sLusterPurgeDescription,
    [MOVE_MIST_BALL - 1] = sMistBallDescription,
    [MOVE_FEATHER_DANCE - 1] = sFeatherDanceDescription,
    [MOVE_TEETER_DANCE - 1] = sTeeterDanceDescription,
    [MOVE_BLAZE_KICK - 1] = sBlazeKickDescription,
    [MOVE_MUD_SPORT - 1] = sMudSportDescription,
    [MOVE_ICE_BALL - 1] = sIceBallDescription,
    [MOVE_NEEDLE_ARM - 1] = sNeedleArmDescription,
    [MOVE_SLACK_OFF - 1] = sSlackOffDescription,
    [MOVE_HYPER_VOICE - 1] = sHyperVoiceDescription,
    [MOVE_POISON_FANG - 1] = sPoisonFangDescription,
    [MOVE_CRUSH_CLAW - 1] = sCrushClawDescription,
    [MOVE_BLAST_BURN - 1] = sBlastBurnDescription,
    [MOVE_HYDRO_CANNON - 1] = sHydroCannonDescription,
    [MOVE_METEOR_MASH - 1] = sMeteorMashDescription,
    [MOVE_ASTONISH - 1] = sAstonishDescription,
    [MOVE_WEATHER_BALL - 1] = sWeatherBallDescription,
    [MOVE_AROMATHERAPY - 1] = sAromatherapyDescription,
    [MOVE_FAKE_TEARS - 1] = sFakeTearsDescription,
    [MOVE_AIR_CUTTER - 1] = sAirCutterDescription,
    [MOVE_OVERHEAT - 1] = sOverheatDescription,
    [MOVE_ODOR_SLEUTH - 1] = sOdorSleuthDescription,
    [MOVE_ROCK_TOMB - 1] = sRockTombDescription,
    [MOVE_SILVER_WIND - 1] = sSilverWindDescription,
    [MOVE_METAL_SOUND - 1] = sMetalSoundDescription,
    [MOVE_GRASS_WHISTLE - 1] = sGrassWhistleDescription,
    [MOVE_TICKLE - 1] = sTickleDescription,
    [MOVE_COSMIC_POWER - 1] = sCosmicPowerDescription,
    [MOVE_WATER_SPOUT - 1] = sWaterSpoutDescription,
    [MOVE_SIGNAL_BEAM - 1] = sSignalBeamDescription,
    [MOVE_SHADOW_PUNCH - 1] = sShadowPunchDescription,
    [MOVE_EXTRASENSORY - 1] = sExtrasensoryDescription,
    [MOVE_SKY_UPPERCUT - 1] = sSkyUppercutDescription,
    [MOVE_SAND_TOMB - 1] = sSandTombDescription,
    [MOVE_SHEER_COLD - 1] = sSheerColdDescription,
    [MOVE_MUDDY_WATER - 1] = sMuddyWaterDescription,
    [MOVE_BULLET_SEED - 1] = sBulletSeedDescription,
    [MOVE_AERIAL_ACE - 1] = sAerialAceDescription,
    [MOVE_ICICLE_SPEAR - 1] = sIcicleSpearDescription,
    [MOVE_IRON_DEFENSE - 1] = sIronDefenseDescription,
    [MOVE_BLOCK - 1] = sBlockDescription,
    [MOVE_HOWL - 1] = sHowlDescription,
    [MOVE_DRAGON_CLAW - 1] = sDragonClawDescription,
    [MOVE_FRENZY_PLANT - 1] = sFrenzyPlantDescription,
    [MOVE_BULK_UP - 1] = sBulkUpDescription,
    [MOVE_BOUNCE - 1] = sBounceDescription,
    [MOVE_MUD_SHOT - 1] = sMudShotDescription,
    [MOVE_POISON_TAIL - 1] = sPoisonTailDescription,
    [MOVE_COVET - 1] = sCovetDescription,
    [MOVE_VOLT_TACKLE - 1] = sVoltTackleDescription,
    [MOVE_MAGICAL_LEAF - 1] = sMagicalLeafDescription,
    [MOVE_WATER_SPORT - 1] = sWaterSportDescription,
    [MOVE_CALM_MIND - 1] = sCalmMindDescription,
    [MOVE_LEAF_BLADE - 1] = sLeafBladeDescription,
    [MOVE_DRAGON_DANCE - 1] = sDragonDanceDescription,
    [MOVE_ROCK_BLAST - 1] = sRockBlastDescription,
    [MOVE_SHOCK_WAVE - 1] = sShockWaveDescription,
    [MOVE_WATER_PULSE - 1] = sWaterPulseDescription,
    [MOVE_DOOM_DESIRE - 1] = sDoomDesireDescription,
    [MOVE_PSYCHO_BOOST - 1] = sPsychoBoostDescription,
    [MOVE_ROOST - 1] = sRoostDescription,
    [MOVE_GRAVITY - 1] = sGravityDescription,
    [MOVE_MIRACLE_EYE - 1] = sMiracleEyeDescription,
    [MOVE_WAKE_UP_SLAP - 1] = sWakeUpSlapDescription,
    [MOVE_HAMMER_ARM - 1] = sHammerArmDescription,
    [MOVE_GYRO_BALL - 1] = sGyroBallDescription,
    [MOVE_HEALING_WISH - 1] = sHealingWishDescription,
    [MOVE_BRINE - 1] = sBrineDescription,
    [MOVE_NATURAL_GIFT - 1] = sNaturalGiftDescription,
    [MOVE_FEINT - 1] = sFeintDescription,
    [MOVE_PLUCK - 1] = sPluckDescription,
    [MOVE_TAILWIND - 1] = sTailwindDescription,
    [MOVE_ACUPRESSURE - 1] = sAcupressureDescription,
    [MOVE_METAL_BURST - 1] = sMetalBurstDescription,
    [MOVE_U_TURN - 1] = sUTurnDescription,
    [MOVE_CLOSE_COMBAT - 1] = sCloseCombatDescription,
    [MOVE_PAYBACK - 1] = sPaybackDescription,
    [MOVE_ASSURANCE - 1] = sAssuranceDescription,
    [MOVE_EMBARGO - 1] = sEmbargoDescription,
    [MOVE_FLING - 1] = sFlingDescription,
    [MOVE_PSYCHO_SHIFT - 1] = sPsychoShiftDescription,
    [MOVE_TRUMP_CARD - 1] = sTrumpCardDescription,
    [MOVE_HEAL_BLOCK - 1] = sHealBlockDescription,
    [MOVE_WRING_OUT - 1] = sWringOutDescription,
    [MOVE_POWER_TRICK - 1] = sPowerTrickDescription,
    [MOVE_GASTRO_ACID - 1] = sGastroAcidDescription,
    [MOVE_LUCKY_CHANT - 1] = sLuckyChantDescription,
    [MOVE_ME_FIRST - 1] = sMeFirstDescription,
    [MOVE_COPYCAT - 1] = sCopycatDescription,
    [MOVE_POWER_SWAP - 1] = sPowerSwapDescription,
    [MOVE_GUARD_SWAP - 1] = sGuardSwapDescription,
    [MOVE_PUNISHMENT - 1] = sPunishmentDescription,
    [MOVE_LAST_RESORT - 1] = sLastResortDescription,
    [MOVE_WORRY_SEED - 1] = sWorrySeedDescription,
    [MOVE_SUCKER_PUNCH - 1] = sSuckerPunchDescription,
    [MOVE_TOXIC_SPIKES - 1] = sToxicSpikesDescription,
    [MOVE_HEART_SWAP - 1] = sHeartSwapDescription,
    [MOVE_AQUA_RING - 1] = sAquaRingDescription,
    [MOVE_MAGNET_RISE - 1] = sMagnetRiseDescription,
    [MOVE_FLARE_BLITZ - 1] = sFlareBlitzDescription,
    [MOVE_FORCE_PALM - 1] = sForcePalmDescription,
    [MOVE_AURA_SPHERE - 1] = sAuraSphereDescription,
    [MOVE_ROCK_POLISH - 1] = sRockPolishDescription,
    [MOVE_POISON_JAB - 1] = sPoisonJabDescription,
    [MOVE_DARK_PULSE - 1] = sDarkPulseDescription,
    [MOVE_NIGHT_SLASH - 1] = sNightSlashDescription,
    [MOVE_AQUA_TAIL - 1] = sAquaTailDescription,
    [MOVE_SEED_BOMB - 1] = sSeedBombDescription,
    [MOVE_AIR_SLASH - 1] = sAirSlashDescription,
    [MOVE_X_SCISSOR - 1] = sXScissorDescription,
    [MOVE_BUG_BUZZ - 1] = sBugBuzzDescription,
    [MOVE_DRAGON_PULSE - 1] = sDragonPulseDescription,
    [MOVE_DRAGON_RUSH - 1] = sDragonRushDescription,
    [MOVE_POWER_GEM - 1] = sPowerGemDescription,
    [MOVE_DRAIN_PUNCH - 1] = sMegaDrainDescription,
    [MOVE_VACUUM_WAVE - 1] = sVacuumWaveDescription,
    [MOVE_FOCUS_BLAST - 1] = sFocusBlastDescription,
    [MOVE_ENERGY_BALL - 1] = sEnergyBallDescription,
    [MOVE_BRAVE_BIRD - 1] = sBraveBirdDescription,
    [MOVE_EARTH_POWER - 1] = sEarthPowerDescription,
    [MOVE_SWITCHEROO - 1] = sSwitcherooDescription,
    [MOVE_GIGA_IMPACT - 1] = sHyperBeamDescription,
    [MOVE_NASTY_PLOT - 1] = sNastyPlotDescription,
    [MOVE_BULLET_PUNCH - 1] = sBulletPunchDescription,
    [MOVE_AVALANCHE - 1] = sRevengeDescription,
    [MOVE_ICE_SHARD - 1] = sIceShardDescription,
    [MOVE_SHADOW_CLAW - 1] = sShadowClawDescription,
    [MOVE_THUNDER_FANG - 1] = sThunderFangDescription,
    [MOVE_ICE_FANG - 1] = sIceFangDescription,
    [MOVE_FIRE_FANG - 1] = sFireFangDescription,
    [MOVE_SHADOW_SNEAK - 1] = sShadowSneakDescription,
    [MOVE_MUD_BOMB - 1] = sMudBombDescription,
    [MOVE_PSYCHO_CUT - 1] = sPsychoCutDescription,
    [MOVE_ZEN_HEADBUTT - 1] = sZenHeadbuttDescription,
    [MOVE_MIRROR_SHOT - 1] = sMirrorShotDescription,
    [MOVE_FLASH_CANNON - 1] = sFlashCannonDescription,
    [MOVE_ROCK_CLIMB - 1] = sRockClimbDescription,
    [MOVE_DEFOG - 1] = sDefogDescription,
    [MOVE_TRICK_ROOM - 1] = sTrickRoomDescription,
    [MOVE_DRACO_METEOR - 1] = sDracoMeteorDescription,
    [MOVE_DISCHARGE - 1] = sDischargeDescription,
    [MOVE_LAVA_PLUME - 1] = sLavaPlumeDescription,
    [MOVE_LEAF_STORM - 1] = sLeafStormDescription,
    [MOVE_POWER_WHIP - 1] = sPowerWhipDescription,
    [MOVE_ROCK_WRECKER - 1] = sHyperBeamDescription,
    [MOVE_CROSS_POISON - 1] = sCrossPoisonDescription,
    [MOVE_GUNK_SHOT - 1] = sGunkShotDescription,
    [MOVE_IRON_HEAD - 1] = sIronHeadDescription,
    [MOVE_MAGNET_BOMB - 1] = sMagnetBombDescription,
    [MOVE_STONE_EDGE - 1] = sStoneEdgeDescription,
    [MOVE_CAPTIVATE - 1] = sCaptivateDescription,
    [MOVE_STEALTH_ROCK - 1] = sStealthRockDescription,
    [MOVE_GRASS_KNOT - 1] = sGrassKnotDescription,
    [MOVE_CHATTER - 1] = sChatterDescription,
    [MOVE_JUDGMENT - 1] = sJudgmentDescription,
    [MOVE_BUG_BITE - 1] = sPluckDescription,
    [MOVE_CHARGE_BEAM - 1] = sChargeBeamDescription,
    [MOVE_WOOD_HAMMER - 1] = sWoodHammerDescription,
    [MOVE_AQUA_JET - 1] = sAquaJetDescription,
    [MOVE_ATTACK_ORDER - 1] = sAttackOrderDescription,
    [MOVE_DEFEND_ORDER - 1] = sDefendOrderDescription,
    [MOVE_HEAL_ORDER - 1] = sHealOrderDescription,
    [MOVE_HEAD_SMASH - 1] = sHeadSmashDescription,
    [MOVE_DOUBLE_HIT - 1] = sDoubleHitDescription,
    [MOVE_ROAR_OF_TIME - 1] = sRoarOfTimeDescription,
    [MOVE_SPACIAL_REND - 1] = sSpacialRendDescription,
    [MOVE_LUNAR_DANCE - 1] = sHealingWishDescription,
    [MOVE_CRUSH_GRIP - 1] = sWringOutDescription,
    [MOVE_MAGMA_STORM - 1] = sMagmaStormDescription,
    [MOVE_DARK_VOID - 1] = sDarkVoidDescription,
    [MOVE_SEED_FLARE - 1] = sSeedFlareDescription,
    [MOVE_OMINOUS_WIND - 1] = sOminousWindDescription,
    [MOVE_SHADOW_FORCE - 1] = sShadowForceDescription,
    [MOVE_HONE_CLAWS - 1] = sHoneClawsDescription,
    [MOVE_WIDE_GUARD - 1] = sWideGuardDescription,
    [MOVE_GUARD_SPLIT - 1] = sGuardSplitDescription,
    [MOVE_POWER_SPLIT - 1] = sPowerSplitDescription,
    [MOVE_WONDER_ROOM - 1] = sWonderRoomDescription,
    [MOVE_PSYSHOCK - 1] = sPsyshockDescription,
    [MOVE_VENOSHOCK - 1] = sVenoshockDescription,
    [MOVE_AUTOTOMIZE - 1] = sAutotomizeDescription,
    [MOVE_RAGE_POWDER - 1] = sRagePowderDescription,
    [MOVE_TELEKINESIS - 1] = sTelekinesisDescription,
    [MOVE_MAGIC_ROOM - 1] = sMagicRoomDescription,
    [MOVE_SMACK_DOWN - 1] = sSmackDownDescription,
    [MOVE_STORM_THROW - 1] = sStormThrowDescription,
    [MOVE_FLAME_BURST - 1] = sFlameBurstDescription,
    [MOVE_SLUDGE_WAVE - 1] = sSludgeWaveDescription,
    [MOVE_QUIVER_DANCE - 1] = sQuiverDanceDescription,
    [MOVE_HEAVY_SLAM - 1] = sHeavySlamDescription,
    [MOVE_SYNCHRONOISE - 1] = sSynchronoiseDescription,
    [MOVE_ELECTRO_BALL - 1] = sElectroBallDescription,
    [MOVE_SOAK - 1] = sSoakDescription,
    [MOVE_FLAME_CHARGE - 1] = sFlameChargeDescription,
    [MOVE_COIL - 1] = sCoilDescription,
    [MOVE_LOW_SWEEP - 1] = sLowSweepDescription,
    [MOVE_ACID_SPRAY - 1] = sAcidSprayDescription,
    [MOVE_FOUL_PLAY - 1] = sFoulPlayDescription,
    [MOVE_SIMPLE_BEAM - 1] = sSimpleBeamDescription,
    [MOVE_ENTRAINMENT - 1] = sEntrainmentDescription,
    [MOVE_AFTER_YOU - 1] = sAfterYouDescription,
    [MOVE_ROUND - 1] = sRoundDescription,
    [MOVE_ECHOED_VOICE - 1] = sEchoedVoiceDescription,
    [MOVE_CHIP_AWAY - 1] = sChipAwayDescription,
    [MOVE_CLEAR_SMOG - 1] = sClearSmogDescription,
    [MOVE_STORED_POWER - 1] = sStoredPowerDescription,
    [MOVE_QUICK_GUARD - 1] = sQuickGuardDescription,
    [MOVE_ALLY_SWITCH - 1] = sAllySwitchDescription,
    [MOVE_SCALD - 1] = sScaldDescription,
    [MOVE_SHELL_SMASH - 1] = sShellSmashDescription,
    [MOVE_HEAL_PULSE - 1] = sHealPulseDescription,
    [MOVE_HEX - 1] = sHexDescription,
    [MOVE_SKY_DROP - 1] = sSkyDropDescription,
    [MOVE_SHIFT_GEAR - 1] = sShiftGearDescription,
    [MOVE_CIRCLE_THROW - 1] = sCircleThrowDescription,
    [MOVE_INCINERATE - 1] = sIncinerateDescription,
    [MOVE_QUASH - 1] = sQuashDescription,
    [MOVE_ACROBATICS - 1] = sAcrobaticsDescription,
    [MOVE_REFLECT_TYPE - 1] = sReflectTypeDescription,
    [MOVE_RETALIATE - 1] = sRetaliateDescription,
    [MOVE_FINAL_GAMBIT - 1] = sFinalGambitDescription,
    [MOVE_BESTOW - 1] = sBestowDescription,
    [MOVE_INFERNO - 1] = sInfernoDescription,
    [MOVE_WATER_PLEDGE - 1] = sWaterPledgeDescription,
    [MOVE_FIRE_PLEDGE - 1] = sFirePledgeDescription,
    [MOVE_GRASS_PLEDGE - 1] = sGrassPledgeDescription,
    [MOVE_VOLT_SWITCH - 1] = sUTurnDescription,
    [MOVE_STRUGGLE_BUG - 1] = sStruggleBugDescription,
    [MOVE_BULLDOZE - 1] = sBulldozeDescription,
    [MOVE_FROST_BREATH - 1] = sStormThrowDescription,
    [MOVE_DRAGON_TAIL - 1] = sCircleThrowDescription,
    [MOVE_WORK_UP - 1] = sWorkUpDescription,
    [MOVE_ELECTROWEB - 1] = sElectrowebDescription,
    [MOVE_WILD_CHARGE - 1] = sWildChargeDescription,
    [MOVE_DRILL_RUN - 1] = sDrillRunDescription,
    [MOVE_DUAL_CHOP - 1] = sDualChopDescription,
    [MOVE_HEART_STAMP - 1] = sHeartStampDescription,
    [MOVE_HORN_LEECH - 1] = sMegaDrainDescription,
    [MOVE_SACRED_SWORD - 1] = sChipAwayDescription,
    [MOVE_RAZOR_SHELL - 1] = sRazorShellDescription,
    [MOVE_HEAT_CRASH - 1] = sHeavySlamDescription,
    [MOVE_LEAF_TORNADO - 1] = sLeafTornadoDescription,
    [MOVE_STEAMROLLER - 1] = sSteamrollerDescription,
    [MOVE_COTTON_GUARD - 1] = sCottonGuardDescription,
    [MOVE_NIGHT_DAZE - 1] = sNightDazeDescription,
    [MOVE_PSYSTRIKE - 1] = sPsyshockDescription,
    [MOVE_TAIL_SLAP - 1] = sTailSlapDescription,
    [MOVE_HURRICANE - 1] = sHurricaneDescription,
    [MOVE_HEAD_CHARGE - 1] = sHeadChargeDescription,
    [MOVE_GEAR_GRIND - 1] = sGearGrindDescription,
    [MOVE_SEARING_SHOT - 1] = sLavaPlumeDescription,
    [MOVE_TECHNO_BLAST - 1] = sTechnoBlastDescription,
    [MOVE_RELIC_SONG - 1] = sRelicSongDescription,
    [MOVE_SECRET_SWORD - 1] = sSecretSwordDescription,
    [MOVE_GLACIATE - 1] = sGlaciateDescription,
    [MOVE_BOLT_STRIKE - 1] = sBoltStrikeDescription,
    [MOVE_BLUE_FLARE - 1] = sBlueFlareDescription,
    [MOVE_FIERY_DANCE - 1] = sFieryDanceDescription,
    [MOVE_FREEZE_SHOCK - 1] = sFreezeShockDescription,
    [MOVE_ICE_BURN - 1] = sIceBurnDescription,
    [MOVE_SNARL - 1] = sSnarlDescription,
    [MOVE_ICICLE_CRASH - 1] = sIcicleCrashDescription,
    [MOVE_V_CREATE - 1] = sVCreateDescription,
    [MOVE_FUSION_FLARE - 1] = sFusionFlareDescription,
    [MOVE_FUSION_BOLT - 1] = sFusionBoltDescription,
    [MOVE_FLYING_PRESS - 1] = sFlyingPressDescription,
    [MOVE_MAT_BLOCK - 1] = sMatBlockDescription,
    [MOVE_BELCH - 1] = sBelchDescription,
    [MOVE_ROTOTILLER - 1] = sRototillerDescription,
    [MOVE_STICKY_WEB - 1] = sStickyWebDescription,
    [MOVE_FELL_STINGER - 1] = sFellStingerDescription,
    [MOVE_PHANTOM_FORCE - 1] = sShadowForceDescription,
    [MOVE_TRICK_OR_TREAT - 1] = sTrickOrTreatDescription,
    [MOVE_NOBLE_ROAR - 1] = sNobleRoarDescription,
    [MOVE_ION_DELUGE - 1] = sIonDelugeDescription,
    [MOVE_PARABOLIC_CHARGE - 1] = sParabolicChargeDescription,
    [MOVE_FORESTS_CURSE - 1] = sForestsCurseDescription,
    [MOVE_PETAL_BLIZZARD - 1] = sPetalBlizzardDescription,
    [MOVE_FREEZE_DRY - 1] = sFreezeDryDescription,
    [MOVE_DISARMING_VOICE - 1] = sDisarmingVoiceDescription,
    [MOVE_PARTING_SHOT - 1] = sPartingShotDescription,
    [MOVE_TOPSY_TURVY - 1] = sTopsyTurvyDescription,
    [MOVE_DRAINING_KISS - 1] = sDrainingKissDescription,
    [MOVE_CRAFTY_SHIELD - 1] = sCraftyShieldDescription,
    [MOVE_FLOWER_SHIELD - 1] = sFlowerShieldDescription,
    [MOVE_GRASSY_TERRAIN - 1] = sGrassyTerrainDescription,
    [MOVE_MISTY_TERRAIN - 1] = sMistyTerrainDescription,
    [MOVE_ELECTRIFY - 1] = sElectrifyDescription,
    [MOVE_PLAY_ROUGH - 1] = sPlayRoughDescription,
    [MOVE_FAIRY_WIND - 1] = sFairyWindDescription,
    [MOVE_MOONBLAST - 1] = sMoonblastDescription,
    [MOVE_BOOMBURST - 1] = sBoomburstDescription,
    [MOVE_FAIRY_LOCK - 1] = sFairyLockDescription,
    [MOVE_KINGS_SHIELD - 1] = sKingsShieldDescription,
    [MOVE_PLAY_NICE - 1] = sPlayNiceDescription,
    [MOVE_CONFIDE - 1] = sConfideDescription,
    [MOVE_DIAMOND_STORM - 1] = sDiamondStormDescription,
    [MOVE_STEAM_ERUPTION - 1] = sSteamEruptionDescription,
    [MOVE_HYPERSPACE_HOLE - 1] = sHyperspaceHoleDescription,
    [MOVE_WATER_SHURIKEN - 1] = sWaterShurikenDescription,
    [MOVE_MYSTICAL_FIRE - 1] = sMysticalFireDescription,
    [MOVE_SPIKY_SHIELD - 1] = sSpikyShieldDescription,
    [MOVE_AROMATIC_MIST - 1] = sAromaticMistDescription,
    [MOVE_EERIE_IMPULSE - 1] = sEerieImpulseDescription,
    [MOVE_VENOM_DRENCH - 1] = sVenomDrenchDescription,
    [MOVE_POWDER - 1] = sPowderDescription,
    [MOVE_GEOMANCY - 1] = sGeomancyDescription,
    [MOVE_MAGNETIC_FLUX - 1] = sMagneticFluxDescription,
    [MOVE_HAPPY_HOUR - 1] = sHappyHourDescription,
    [MOVE_ELECTRIC_TERRAIN - 1] = sElectricTerrainDescription,
    [MOVE_DAZZLING_GLEAM - 1] = sDazzlingGleamDescription,
    [MOVE_CELEBRATE - 1] = sCelebrateDescription,
    [MOVE_HOLD_HANDS - 1] = sHoldHandsDescription,
    [MOVE_BABY_DOLL_EYES - 1] = sBabyDollEyesDescription,
    [MOVE_NUZZLE - 1] = sNuzzleDescription,
    [MOVE_HOLD_BACK - 1] = sFalseSwipeDescription,
    [MOVE_INFESTATION - 1] = sInfestationDescription,
    [MOVE_POWER_UP_PUNCH - 1] = sPowerUpPunchDescription,
    [MOVE_OBLIVION_WING - 1] = sDrainingKissDescription,
    [MOVE_THOUSAND_ARROWS - 1] = sThousandArrowsDescription,
    [MOVE_THOUSAND_WAVES - 1] = sThousandWavesDescription,
    [MOVE_LANDS_WRATH - 1] = sLandsWrathDescription,
    [MOVE_LIGHT_OF_RUIN - 1] = sLightOfRuinDescription,
    [MOVE_ORIGIN_PULSE - 1] = sOriginPulseDescription,
    [MOVE_PRECIPICE_BLADES - 1] = sPrecipiceBladesDescription,
    [MOVE_DRAGON_ASCENT - 1] = sCloseCombatDescription,
    [MOVE_HYPERSPACE_FURY - 1] = sHyperspaceHoleDescription,
    [MOVE_SHORE_UP - 1] = sShoreUpDescription,
    [MOVE_FIRST_IMPRESSION - 1] = sFirstImpressionDescription,
    [MOVE_BANEFUL_BUNKER - 1] = sBanefulBunkerDescription,
    [MOVE_SPIRIT_SHACKLE - 1] = sSpiritShackleDescription,
    [MOVE_DARKEST_LARIAT - 1] = sDarkestLariatDescription,
    [MOVE_SPARKLING_ARIA - 1] = sSparklingAriaDescription,
    [MOVE_ICE_HAMMER - 1] = sIceHammerDescription,
    [MOVE_FLORAL_HEALING - 1] = sFloralHealingDescription,
    [MOVE_HIGH_HORSEPOWER - 1] = sHighHorsepowerDescription,
    [MOVE_STRENGTH_SAP - 1] = sStrengthSapDescription,
    [MOVE_SOLAR_BLADE - 1] = sSolarBladeDescription,
    [MOVE_LEAFAGE - 1] = sLeafageDescription,
    [MOVE_SPOTLIGHT - 1] = sSpotlightDescription,
    [MOVE_TOXIC_THREAD - 1] = sToxicThreadDescription,
    [MOVE_LASER_FOCUS - 1] = sLaserFocusDescription,
    [MOVE_GEAR_UP - 1] = sGearUpDescription,
    [MOVE_THROAT_CHOP - 1] = sThroatChopDescription,
    [MOVE_POLLEN_PUFF - 1] = sPollenPuffDescription,
    [MOVE_ANCHOR_SHOT - 1] = sAnchorShotDescription,
    [MOVE_PSYCHIC_TERRAIN - 1] = sPsychicTerrainDescription,
    [MOVE_LUNGE - 1] = sLungeDescription,
    [MOVE_FIRE_LASH - 1] = sFireLashDescription,
    [MOVE_POWER_TRIP - 1] = sPowerTripDescription,
    [MOVE_BURN_UP - 1] = sBurnUpDescription,
    [MOVE_SPEED_SWAP - 1] = sSpeedSwapDescription,
    [MOVE_SMART_STRIKE - 1] = sSmartStrikeDescription,
    [MOVE_PURIFY - 1] = sPurifyDescription,
    [MOVE_REVELATION_DANCE - 1] = sRevelationDanceDescription,
    [MOVE_CORE_ENFORCER - 1] = sCoreEnforcerDescription,
    [MOVE_TROP_KICK - 1] = sTropKickDescription,
    [MOVE_INSTRUCT - 1] = sInstructDescription,
    [MOVE_BEAK_BLAST - 1] = sBeakBlastDescription,
    [MOVE_CLANGING_SCALES - 1] = sClangingScalesDescription,
    [MOVE_DRAGON_HAMMER - 1] = sDragonHammerDescription,
    [MOVE_BRUTAL_SWING - 1] = sBrutalSwingDescription,
    [MOVE_AURORA_VEIL - 1] = sAuroraVeilDescription,
    [MOVE_SHELL_TRAP - 1] = sShellTrapDescription,
    [MOVE_FLEUR_CANNON - 1] = sFleurCannonDescription,
    [MOVE_PSYCHIC_FANGS - 1] = sPsychicFangsDescription,
    [MOVE_STOMPING_TANTRUM - 1] = sStompingTantrumDescription,
    [MOVE_SHADOW_BONE - 1] = sShadowBoneDescription,
    [MOVE_ACCELEROCK - 1] = sAccelerockDescription,
    [MOVE_LIQUIDATION - 1] = sLiquidationDescription,
    [MOVE_PRISMATIC_LASER - 1] = sPrismaticLaserDescription,
    [MOVE_SPECTRAL_THIEF - 1] = sSpectralThiefDescription,
    [MOVE_SUNSTEEL_STRIKE - 1] = sSunsteelStrikeDescription,
    [MOVE_MOONGEIST_BEAM - 1] = sMoongeistBeamDescription,
    [MOVE_TEARFUL_LOOK - 1] = sTearfulLookDescription,
    [MOVE_ZING_ZAP - 1] = sZingZapDescription,
    [MOVE_NATURES_MADNESS - 1] = sNaturesMadnessDescription,
    [MOVE_MULTI_ATTACK - 1] = sMultiAttackDescription,
    [MOVE_MIND_BLOWN - 1] = sMindBlownDescription,
    [MOVE_PLASMA_FISTS - 1] = sPlasmaFistsDescription,
    [MOVE_PHOTON_GEYSER - 1] = sPhotonGeyserDescription,
    [MOVE_ZIPPY_ZAP - 1] = sZippyZapDescription,
    [MOVE_SPLISHY_SPLASH - 1] = sSplishySplashDescription,
    [MOVE_FLOATY_FALL - 1] = sFloatyFallDescription,
    [MOVE_PIKA_PAPOW - 1] = sPikaPapowDescription,
    [MOVE_BOUNCY_BUBBLE - 1] = sBouncyBubbleDescription,
    [MOVE_BUZZY_BUZZ - 1] = sBuzzyBuzzDescription,
    [MOVE_SIZZLY_SLIDE - 1] = sSizzlySlideDescription,
    [MOVE_GLITZY_GLOW - 1] = sGlitzyGlowDescription,
    [MOVE_BADDY_BAD - 1] = sBaddyBadDescription,
    [MOVE_SAPPY_SEED - 1] = sSappySeedDescription,
    [MOVE_FREEZY_FROST - 1] = sFreezyFrostDescription,
    [MOVE_SPARKLY_SWIRL - 1] = sSparklySwirlDescription,
    [MOVE_VEEVEE_VOLLEY - 1] = sVeeveeVolleyDescription,
    [MOVE_DOUBLE_IRON_BASH - 1] = sDoubleIronBashDescription,

    //GEN 8
    [MOVE_DYNAMAX_CANNON - 1] = sDynamaxCannonDescription,
    [MOVE_SNIPE_SHOT - 1] = sSnipeShotDescription,
    [MOVE_JAW_LOCK - 1] = sJawLockDescription,
    [MOVE_STUFF_CHEEKS - 1] = sStuffCheeksDescription,
    [MOVE_NO_RETREAT - 1] = sNoRetreatDescription,
    [MOVE_TAR_SHOT - 1] = sTarShotDescription,
    [MOVE_MAGIC_POWDER - 1] = sMagicPowderDescription,
    [MOVE_DRAGON_DARTS - 1] = sDragonDartsDescription,
    [MOVE_TEATIME - 1] = sTeatimeDescription,
    [MOVE_OCTOLOCK - 1] = sOctolockDescription,
    [MOVE_BOLT_BEAK - 1] = sBoltBeakDescription,
    [MOVE_FISHIOUS_REND - 1] = sFishiousRendDescription,
    [MOVE_COURT_CHANGE - 1] = sCourtChangeDescription,
    [MOVE_CLANGOROUS_SOUL - 1] = sClangorousSoulDescription,
    [MOVE_BODY_PRESS - 1] = sBodyPressDescription,
    [MOVE_DECORATE - 1] = sDecorateDescription,
    [MOVE_DRUM_BEATING - 1] = sDrumBeatingDescription,
    [MOVE_SNAP_TRAP - 1] = sSnapTrapDescription,
    [MOVE_PYRO_BALL - 1] = sPyroBallDescription,
    [MOVE_BEHEMOTH_BLADE - 1] = sBehemothBladeDescription,
    [MOVE_BEHEMOTH_BASH - 1] = sBehemothBashDescription,
    [MOVE_AURA_WHEEL - 1] = sAuraWheelDescription,
    [MOVE_BREAKING_SWIPE - 1] = sBreakingSwipeDescription,
    [MOVE_BRANCH_POKE - 1] = sBranchPokeDescription,
    [MOVE_OVERDRIVE - 1] = sOverdriveDescription,
    [MOVE_APPLE_ACID - 1] = sAppleAcidDescription,
    [MOVE_GRAV_APPLE - 1] = sGravAppleDescription,
    [MOVE_SPIRIT_BREAK - 1] = sSpiritBreakDescription,
    [MOVE_STRANGE_STEAM - 1] = sStrangeSteamDescription,
    [MOVE_LIFE_DEW - 1] = sLifeDewDescription,
    [MOVE_OBSTRUCT - 1] = sObstructDescription,
    [MOVE_FALSE_SURRENDER - 1] = sFalseSurrenderDescription,
    [MOVE_METEOR_ASSAULT - 1] = sMeteorAssaultDescription,
    [MOVE_ETERNABEAM - 1] = sEternabeamDescription,
    [MOVE_STEEL_BEAM - 1] = sSteelBeamDescription,
    [MOVE_EXPANDING_FORCE - 1] = sExpandingForceDescription,
    [MOVE_STEEL_ROLLER - 1] = sSteelRollerDescription,
    [MOVE_SCALE_SHOT - 1] = sScaleShotDescription,
    [MOVE_METEOR_BEAM - 1] = sMeteorBeamDescription,
    [MOVE_SHELL_SIDE_ARM - 1] = sShellSideArmDescription,
    [MOVE_MISTY_EXPLOSION - 1] = sMistyExplosionDescription,
    [MOVE_GRASSY_GLIDE - 1] = sGrassyGlideDescription,
    [MOVE_RISING_VOLTAGE - 1] = sRisingVoltageDescription,
    [MOVE_TERRAIN_PULSE - 1] = sTerrainPulseDescription,
    [MOVE_SKITTER_SMACK - 1] = sSkitterSmackDescription,
    [MOVE_BURNING_JEALOUSY - 1] = sBurningJealousyDescription,
    [MOVE_LASH_OUT - 1] = sLashOutDescription,
    [MOVE_POLTERGEIST - 1] = sPoltergeistDescription,
    [MOVE_CORROSIVE_GAS - 1] = sCorrosiveGasDescription,
    [MOVE_COACHING - 1] = sCoachingDescription,
    [MOVE_FLIP_TURN - 1] = sFlipTurnDescription,
    [MOVE_TRIPLE_AXEL - 1] = sTripleAxelDescription,
    [MOVE_DUAL_WINGBEAT - 1] = sDualWingbeatDescription,
    [MOVE_SCORCHING_SANDS - 1] = sScorchingSandsDescription,
    [MOVE_JUNGLE_HEALING - 1] = sJungleHealingDescription,
    [MOVE_WICKED_BLOW - 1] = sWickedBlowDescription,
    [MOVE_SURGING_STRIKES - 1] = sSurgingStrikesDescription,
    [MOVE_THUNDER_CAGE - 1] = sThunderCageDescription,
    [MOVE_DRAGON_ENERGY - 1] = sDragonEnergyDescription,
    [MOVE_FREEZING_GLARE - 1] = sFreezingGlareDescription,
    [MOVE_FIERY_WRATH - 1] = sFieryWrathDescription,
    [MOVE_THUNDEROUS_KICK - 1] = sThunderousKickDescription,
    [MOVE_GLACIAL_LANCE - 1] = sGlacialLanceDescription,
    [MOVE_ASTRAL_BARRAGE - 1] = sAstralBarrageDescription,
    [MOVE_EERIE_SPELL - 1] = sEerieSpellDescription,
    [MOVE_DIRE_CLAW - 1] = sDireClawDescription,
    [MOVE_PSYSHIELD_BASH - 1] = sPsyshieldBashDescription,
    [MOVE_POWER_SHIFT - 1] = sPowerShiftDescription,
    [MOVE_STONE_AXE - 1] = sStoneAxeDescription,
    [MOVE_SPRINGTIDE_STORM - 1] = sSpringtideStormDescription,
    [MOVE_MYSTICAL_POWER - 1] = sMysticalPowerDescription,
    [MOVE_RAGING_FURY - 1] = sRagingFuryDescription,
    [MOVE_WAVE_CRASH - 1] = sWaveCrashDescription,
    [MOVE_CHLOROBLAST - 1] = sChloroblastDescription,
    [MOVE_MOUNTAIN_GALE - 1] = sMountainGaleDescription,
    [MOVE_VICTORY_DANCE - 1] = sVictoryDanceDescription,
    [MOVE_HEADLONG_RUSH - 1] = sHeadlongRushDescription,
    [MOVE_BARB_BARRAGE - 1] = sBarbBarrageDescription,
    [MOVE_ESPER_WING - 1] = sEsperWingDescription,
    [MOVE_BITTER_MALICE - 1] = sBitterMaliceDescription,
    [MOVE_SHELTER - 1] = sShelterDescription,
    [MOVE_TRIPLE_ARROWS - 1] = sTripleArrowsDescription,
    [MOVE_INFERNAL_PARADE - 1] = sInfernalParadeDescription,
    [MOVE_CEASELESS_EDGE - 1] = sCeaselessEdgeDescription,
    [MOVE_BLEAKWIND_STORM - 1] = sBleakwindStormDescription,
    [MOVE_WILDBOLT_STORM - 1] = sWildboltStormDescription,
    [MOVE_SANDSEAR_STORM - 1] = sSandsearStormDescription,
    [MOVE_LUNAR_BLESSING - 1] = sLunarBlessingDescription,
    [MOVE_TAKE_HEART - 1] = sTakeHeartDescription,
    [MOVE_TERA_BLAST - 1] = sTeraBlastDescription,
    [MOVE_SILK_TRAP - 1] = sSilkTrapDescription,
    [MOVE_AXE_KICK - 1] = sAxeKickDescription,
    [MOVE_LAST_RESPECTS - 1] = sLastRespectsDescription,
    [MOVE_LUMINA_CRASH - 1] = sLuminaCrashDescription,
    [MOVE_ORDER_UP - 1] = sOrderUpDescription,
    [MOVE_JET_PUNCH - 1] = sJetPunchDescription,
    [MOVE_SPICY_EXTRACT - 1] = sSpicyExtractDescription,
    [MOVE_SPIN_OUT - 1] = sSpinOutDescription,
    [MOVE_POPULATION_BOMB - 1] = sPopulationBombDescription,
    [MOVE_ICE_SPINNER - 1] = sIceSpinnerDescription,
    [MOVE_GLAIVE_RUSH - 1] = sGlaiveRushDescription,
    [MOVE_REVIVAL_BLESSING - 1] = sRevivalBlessingDescription,
    [MOVE_SALT_CURE - 1] = sSaltCureDescription,
    [MOVE_TRIPLE_DIVE - 1] = sTripleDiveDescription,
    [MOVE_MORTAL_SPIN - 1] = sMortalSpinDescription,
    [MOVE_DOODLE - 1] = sDoodleDescription,
    [MOVE_FILLET_AWAY - 1] = sFilletAwayDescription,
    [MOVE_KOWTOW_CLEAVE - 1] = sKowtowCleaveDescription,
    [MOVE_FLOWER_TRICK - 1] = sFlowerTrickDescription,
    [MOVE_TORCH_SONG - 1] = sTorchSongDescription,
    [MOVE_AQUA_STEP - 1] = sAquaStepDescription,
    [MOVE_RAGING_BULL - 1] = sRagingBullDescription,
    [MOVE_MAKE_IT_RAIN - 1] = sMakeItRainDescription,
    [MOVE_RUINATION - 1] = sRuinationDescription,
    [MOVE_COLLISION_COURSE - 1] = sCollisionCourseDescription,
    [MOVE_ELECTRO_DRIFT - 1] = sElectroDriftDescription,
    [MOVE_SHED_TAIL - 1] = sShedTailDescription,
    [MOVE_CHILLY_RECEPTION - 1] = sChillyReceptionDescription,
    [MOVE_TIDY_UP - 1] = sTidyUpDescription,
    [MOVE_SNOWSCAPE - 1] = sSnowscapeDescription,
    [MOVE_POUNCE - 1] = sPounceDescription,
    [MOVE_TRAILBLAZE - 1] = sTrailblazeDescription,
    [MOVE_CHILLING_WATER - 1] = sChillingWaterDescription,
    [MOVE_HYPER_DRILL - 1] = sHyperDrillDescription,
    [MOVE_TWIN_BEAM - 1] = sTwinBeamDescription,
    [MOVE_RAGE_FIST - 1] = sRageFistDescription,
    [MOVE_ARMOR_CANNON - 1] = sArmorCannonDescription,
    [MOVE_BITTER_BLADE - 1] = sBitterBladeDescription,
    [MOVE_DOUBLE_SHOCK - 1] = sDoubleShockDescription,
    [MOVE_GIGATON_HAMMER - 1] = sGigatonHammerDescription,
    [MOVE_COMEUPPANCE - 1] = sComeuppanceDescription,
    [MOVE_AQUA_CUTTER - 1] = sAquaCutterDescription,
    [MOVE_BLAZING_TORQUE - 1] = sBlazingTorqueDescription,
    [MOVE_WICKED_TORQUE - 1] = sWickedTorqueDescription,
    [MOVE_NOXIOUS_TORQUE - 1] = sNoxiousTorqueDescription,
    [MOVE_COMBAT_TORQUE - 1] = sCombatTorqueDescription,
    [MOVE_MAGICAL_TORQUE - 1] = sMagicalTorqueDescription,
    [MOVE_PSYBLADE - 1] = sPsybladeDescription,
    [MOVE_HYDRO_STEAM - 1] = sHydroSteamDescription,
    [MOVE_BLOOD_MOON - 1] = sBloodMoonDescription,
    [MOVE_MATCHA_GOTCHA - 1] = sMatchaGotchaDescription,
    [MOVE_SYRUP_BOMB - 1] = sSyrupBombDescription,
    [MOVE_IVY_CUDGEL - 1] = sIvyCudgelDescription,
    [MOVE_ELECTRO_SHOT - 1] = sElectroShotDescription,
    [MOVE_TERA_STARSTORM - 1] = sTeraStarstormDescription,
    [MOVE_FICKLE_BEAM - 1] = sFickleBeamDescription,
    [MOVE_BURNING_BULWARK - 1] = sBurningBulwarkDescription,
    [MOVE_THUNDERCLAP - 1] = sSuckerPunchDescription,
    [MOVE_MIGHTY_CLEAVE - 1] = sFeintDescription,
    [MOVE_TACHYON_CUTTER - 1] = sTachyonCutterDescription,
    [MOVE_HARD_PRESS - 1] = sWringOutDescription,
    [MOVE_DRAGON_CHEER - 1] = sDragonCheerDescription,
    [MOVE_ALLURING_VOICE - 1] = sAlluringVoiceDescription,
    [MOVE_TEMPER_FLARE - 1] = sTemperFlareDescription,
    [MOVE_SUPERCELL_SLAM - 1] = sSupercellSlamDescription,
    [MOVE_PSYCHIC_NOISE - 1] = sPsychicNoiseDescription,
    [MOVE_UPPER_HAND - 1] = sUpperHandDescription,
    [MOVE_MALIGNANT_CHAIN - 1] = sMalignantChainDescription,
};

static const u8 sMoveFourLineDescription_Pound[] = _("Golpea con las patas \no la cola.");
static const u8 sMoveFourLineDescription_KarateChop[] = _("Da un golpe cortante.\nSuele ser crítico.");
static const u8 sMoveFourLineDescription_DoubleSlap[] = _("Abofetea de 2 a 5 \nveces seguidas.");
static const u8 sMoveFourLineDescription_CometPunch[] = _("Pega de 2 a 5 veces \nseguidas.");
static const u8 sMoveFourLineDescription_MegaPunch[] = _("Un puñetazo de gran \npotencia.");
static const u8 sMoveFourLineDescription_PayDay[] = _("Arroja monedas que \nluego recupera.");
static const u8 sMoveFourLineDescription_FirePunch[] = _("Puñetazo ardiente. \nPuede quemar.");
static const u8 sMoveFourLineDescription_IcePunch[] = _("Puñetazo helado. \nPuede congelar.");
static const u8 sMoveFourLineDescription_ThunderPunch[] = _("Puñetazo eléctrico. \nPuede paralizar.");
static const u8 sMoveFourLineDescription_Scratch[] = _("Araña con afiladas \ngarras.");
static const u8 sMoveFourLineDescription_ViceGrip[] = _("Atrapa con potentes \npinzas.");
static const u8 sMoveFourLineDescription_Guillotine[] = _("Pinzas que pueden \nderribar de un golpe.");
static const u8 sMoveFourLineDescription_RazorWind[] = _("1.{SUPER_ER} turno: \nprepara. 2.º: ataca.");

#if CONFIG_DECAPITALIZE_MOVE_DESCRIPTION_STRINGS

static const u8 sMoveFourLineDescription_SwordsDance[] = _("A frenetic dance of\nfighting. It sharply\nraises the Attack\nstat.");
static const u8 sMoveFourLineDescription_Cut[] = _("A basic attack.\nIt can be used to\ncut down thin trees\nand grass.");
static const u8 sMoveFourLineDescription_Gust[] = _("Strikes the foe\nwith a gust of wind\nwhipped up by\nwings.");
static const u8 sMoveFourLineDescription_WingAttack[] = _("The foe is struck\nwith large, imposing\nwings spread wide.");
static const u8 sMoveFourLineDescription_Whirlwind[] = _("The foe is made to\nswitch out with an\nally. In the wild,\nthe battle ends.");
static const u8 sMoveFourLineDescription_Fly[] = _("A 2-turn move that\nhits on the 2nd\nturn. Use it to fly\nto any known town.");
#if defined(BATTLE_ENGINE) && B_BINDING_TURNS >= GEN_5
static const u8 sMoveFourLineDescription_Bind[] = _("A long body or\ntentacles are used\nto bind the foe for\nfour or five turns.");
#else
static const u8 sMoveFourLineDescription_Bind[] = _("A long body or\ntentacles are used\nto bind the foe for\ntwo to five turns.");
#endif
static const u8 sMoveFourLineDescription_Slam[] = _("The foe is struck\nwith a long tail,\nvines, etc.");
static const u8 sMoveFourLineDescription_VineWhip[] = _("The foe is struck\nwith slender, whip-\nlike vines.");
static const u8 sMoveFourLineDescription_Stomp[] = _("The foe is stomped\nwith a big foot.\nIt may make the\nfoe flinch.");
static const u8 sMoveFourLineDescription_DoubleKick[] = _("Two legs are used\nto quickly kick the\nfoe twice in one\nturn.");
static const u8 sMoveFourLineDescription_MegaKick[] = _("The foe is attacked\nby a kick fired\nwith muscle-packed\npower.");
static const u8 sMoveFourLineDescription_JumpKick[] = _("The user jumps up\nhigh, then kicks.\nIf it misses, the\nuser hurts itself.");
static const u8 sMoveFourLineDescription_RollingKick[] = _("A quick kick from a\nrolling spin.\nIt may make the\nfoe flinch.");
static const u8 sMoveFourLineDescription_SandAttack[] = _("A lot of sand is\nhurled in the foe's\nface, reducing its\naccuracy.");
static const u8 sMoveFourLineDescription_Headbutt[] = _("The user sticks its\nhead out and rams.\nIt may make the\nfoe flinch.");
static const u8 sMoveFourLineDescription_HornAttack[] = _("The foe is jabbed\nwith a sharply\npointed horn to\ninflict damage.");
static const u8 sMoveFourLineDescription_FuryAttack[] = _("The foe is jabbed\nrepeatedly with a\nhorn or beak two to\nfive times.");
static const u8 sMoveFourLineDescription_HornDrill[] = _("The horn is rotated\nlike a drill to ram.\nThe foe will faint\nif it hits.");
static const u8 sMoveFourLineDescription_Tackle[] = _("A physical attack\nin which the user\ncharges, full body,\ninto the foe.");
static const u8 sMoveFourLineDescription_BodySlam[] = _("The user drops its\nfull body on the\nfoe. It may leave\nthe foe paralyzed.");
#if defined(BATTLE_ENGINE) && B_BINDING_TURNS >= GEN_5
static const u8 sMoveFourLineDescription_Wrap[] = _("A long body or\nvines are used to\nwrap the foe for\nfour or five turns.");
#else
static const u8 sMoveFourLineDescription_Wrap[] = _("A long body or\nvines are used to\nwrap the foe for\ntwo to five turns.");
#endif
static const u8 sMoveFourLineDescription_TakeDown[] = _("A reckless, full-\nbody charge attack\nthat also hurts the\nuser a little.");
static const u8 sMoveFourLineDescription_Thrash[] = _("The user rampages\nabout for two to\nthree turns, then\nbecomes confused.");
static const u8 sMoveFourLineDescription_DoubleEdge[] = _("A reckless, life-\nrisking tackle that\nalso hurts the user\na little.");
static const u8 sMoveFourLineDescription_TailWhip[] = _("The user wags its\ntail cutely, making\nthe foe lower its\nDefense stat.");
static const u8 sMoveFourLineDescription_PoisonSting[] = _("The foe is stabbed\nwith a toxic barb,\netc. It may poison\nthe foe.");
static const u8 sMoveFourLineDescription_Twineedle[] = _("The foe is stabbed\ntwice with foreleg\nstingers. It may\npoison the foe.");
static const u8 sMoveFourLineDescription_PinMissile[] = _("Sharp pins are shot\nat the foe and hit\ntwo to five times\nat once.");
static const u8 sMoveFourLineDescription_Leer[] = _("The foe is given an\nintimidating look\nthat lowers its\nDefense stat.");
static const u8 sMoveFourLineDescription_Bite[] = _("The user bites with\nvicious fangs.\nIt may make the\nfoe flinch.");
static const u8 sMoveFourLineDescription_Growl[] = _("The user growls in\na cute way, making\nthe foe lower its\nAttack stat.");
static const u8 sMoveFourLineDescription_Roar[] = _("The foe is made to\nswitch out with an\nally. In the wild,\nthe battle ends.");
static const u8 sMoveFourLineDescription_Sing[] = _("A soothing song\nin a calming voice\nlulls the foe into\na deep slumber.");
static const u8 sMoveFourLineDescription_Supersonic[] = _("The user generates\nodd sound waves.\nIt may confuse the\nfoe.");
static const u8 sMoveFourLineDescription_SonicBoom[] = _("The foe is hit with\na shock wave that\nalways inflicts 20-\nHP damage.");
static const u8 sMoveFourLineDescription_Disable[] = _("For a few turns,\nit prevents the foe\nfrom using the move\nit last used.");
static const u8 sMoveFourLineDescription_Acid[] = _("The foe is sprayed\nwith a harsh, hide-\nmelting acid that\nmay lower Defense.");
static const u8 sMoveFourLineDescription_Ember[] = _("The foe is attacked\nwith small flames.\nThe foe may suffer\na burn.");
static const u8 sMoveFourLineDescription_Flamethrower[] = _("The foe is scorched\nwith intense flames.\nThe foe may suffer\na burn.");
static const u8 sMoveFourLineDescription_Mist[] = _("The ally party is\nprotected by a\nmist that prevents\nstat reductions.");
static const u8 sMoveFourLineDescription_WaterGun[] = _("The foe is struck\nwith a lot of water\nexpelled forcibly\nfrom the mouth.");
static const u8 sMoveFourLineDescription_HydroPump[] = _("A high volume of\nwater is blasted at\nthe foe under great\npressure.");
static const u8 sMoveFourLineDescription_Surf[] = _("A big wave crashes\ndown on the foe.\nCan also be used\nfor crossing water.");
static const u8 sMoveFourLineDescription_IceBeam[] = _("The foe is struck\nwith an icy beam.\nIt may freeze the\nfoe solid.");
static const u8 sMoveFourLineDescription_Blizzard[] = _("The foe is blasted\nwith a blizzard.\nIt may freeze the\nfoe solid.");
static const u8 sMoveFourLineDescription_Psybeam[] = _("A peculiar ray is\nshot at the foe.\nIt may leave the\nfoe confused.");
static const u8 sMoveFourLineDescription_BubbleBeam[] = _("A spray of bubbles\nstrikes the foe.\nIt may lower the\nfoe's Speed stat.");
static const u8 sMoveFourLineDescription_AuroraBeam[] = _("A rainbow-colored\nattack beam.\nIt may lower the\nfoe's Attack stat.");
static const u8 sMoveFourLineDescription_HyperBeam[] = _("A severely damaging\nattack that makes\nthe user rest on\nthe next turn.");
static const u8 sMoveFourLineDescription_Peck[] = _("The foe is jabbed\nwith a sharply\npointed beak or\nhorn.");
static const u8 sMoveFourLineDescription_DrillPeck[] = _("A corkscrewing\nattack with the\nsharp beak acting\nas a drill.");
static const u8 sMoveFourLineDescription_Submission[] = _("A reckless, full-\nbody throw attack\nthat also hurts the\nuser a little.");
static const u8 sMoveFourLineDescription_LowKick[] = _("A low, tripping kick\nthat inflicts more\ndamage on heavier\nfoes.");
static const u8 sMoveFourLineDescription_Counter[] = _("A retaliation move\nthat counters any\nphysical hit with\ndouble the damage.");
static const u8 sMoveFourLineDescription_SeismicToss[] = _("A gravity-fed throw\nthat causes damage\nmatching the user's\nlevel.");
static const u8 sMoveFourLineDescription_Strength[] = _("The foe is slugged\nat maximum power.\nCan also be used\nto move boulders.");
static const u8 sMoveFourLineDescription_Absorb[] = _("An attack that\nabsorbs half the\ndamage it inflicted\nto restore HP.");
static const u8 sMoveFourLineDescription_MegaDrain[] = _("A tough attack that\ndrains half the\ndamage it inflicted\nto restore HP.");
static const u8 sMoveFourLineDescription_LeechSeed[] = _("A seed is planted\non the foe to steal\nsome HP for the \nuser on every turn.");
static const u8 sMoveFourLineDescription_Growth[] = _("The user's body is\nforced to grow,\nraising the Sp.\nAtk stat.");
static const u8 sMoveFourLineDescription_RazorLeaf[] = _("The foe is hit with\na cutting leaf.\nIt has a high\ncritical-hit ratio.");
static const u8 sMoveFourLineDescription_SolarBeam[] = _("A 2-turn move that\nblasts the foe with\nabsorbed energy in\nthe 2nd turn.");
static const u8 sMoveFourLineDescription_PoisonPowder[] = _("A cloud of toxic\ndust is scattered.\nIt may poison the\nfoe.");
static const u8 sMoveFourLineDescription_StunSpore[] = _("Paralyzing dust is\nscattered wildly.\nIt may paralyze\nthe foe.");
static const u8 sMoveFourLineDescription_SleepPowder[] = _("A sleep-inducing\ndust is scattered\nin high volume\naround a foe.");
static const u8 sMoveFourLineDescription_PetalDance[] = _("The user attacks\nwith petals for two\nto three turns,\nthen gets confused.");
static const u8 sMoveFourLineDescription_StringShot[] = _("The foe is bound\nwith strings shot\nfrom the mouth to\nreduce its Speed.");
static const u8 sMoveFourLineDescription_DragonRage[] = _("The foe is hit with\na shock wave that\nalways inflicts 40-\nHP damage.");
#if defined(BATTLE_ENGINE) && B_BINDING_TURNS >= GEN_5
static const u8 sMoveFourLineDescription_FireSpin[] = _("The foe is trapped\nin an intense spiral\nof fire that rages\nfour or five turns.");
#else
static const u8 sMoveFourLineDescription_FireSpin[] = _("The foe is trapped\nin an intense spiral\nof fire that rages\ntwo to five turns.");
#endif
static const u8 sMoveFourLineDescription_ThunderShock[] = _("An electric shock\nattack that may\nalso leave the foe\nparalyzed.");
static const u8 sMoveFourLineDescription_Thunderbolt[] = _("A strong electrical\nattack that may\nalso leave the foe\nparalyzed.");
static const u8 sMoveFourLineDescription_ThunderWave[] = _("A weak electric\nshock that is sure\nto cause paralysis\nif it hits.");
static const u8 sMoveFourLineDescription_Thunder[] = _("A brutal lightning\nattack that may\nalso leave the foe\nparalyzed.");
static const u8 sMoveFourLineDescription_RockThrow[] = _("The foe is attacked\nwith a shower of\nsmall, easily\nthrown rocks.");
static const u8 sMoveFourLineDescription_Earthquake[] = _("An earthquake that\nstrikes all Pokémon\nin battle excluding\nthe user.");
static const u8 sMoveFourLineDescription_Fissure[] = _("The foe is dropped\ninto a fissure.\nThe foe faints if it\nhits.");
static const u8 sMoveFourLineDescription_Dig[] = _("An attack that hits\non the 2nd turn.\nCan also be used\nto exit dungeons.");
static const u8 sMoveFourLineDescription_Toxic[] = _("A move that badly\npoisons the foe.\nIts poison damage\nworsens every turn.");
static const u8 sMoveFourLineDescription_Confusion[] = _("A weak telekinetic\nattack that may\nalso leave the foe\nconfused.");
static const u8 sMoveFourLineDescription_Psychic[] = _("A strong telekinetic\nattack. It may also\nlower the foe's\nSp. Def stat.");
static const u8 sMoveFourLineDescription_Hypnosis[] = _("Hypnotic suggestion\nis used to make the\nfoe fall into a\ndeep sleep.");
static const u8 sMoveFourLineDescription_Meditate[] = _("The user meditates\nto awaken its power\nand raise its\nAttack stat.");
static const u8 sMoveFourLineDescription_Agility[] = _("The user relaxes\nand lightens its\nbody to sharply\nboost its Speed.");
static const u8 sMoveFourLineDescription_QuickAttack[] = _("An almost invisibly\nfast attack that\nis certain to strike\nfirst.");
static const u8 sMoveFourLineDescription_Rage[] = _("An attack that\nbecomes stronger\neach time the user\nis hit in battle.");
static const u8 sMoveFourLineDescription_Teleport[] = _("Use it to flee from\nany wild Pokémon.\nAlso warps to the\nlast Poké Center.");
static const u8 sMoveFourLineDescription_NightShade[] = _("An attack with a\nmirage that inflicts\ndamage matching\nthe user's level.");
static const u8 sMoveFourLineDescription_Mimic[] = _("The user copies the\nmove last used by\nthe foe for the\nrest of the battle.");
static const u8 sMoveFourLineDescription_Screech[] = _("An ear-splitting\nscreech is emitted\nto sharply reduce\nthe foe's Defense.");
static const u8 sMoveFourLineDescription_DoubleTeam[] = _("The user creates\nillusory copies of\nitself to raise its\nevasiveness.");
static const u8 sMoveFourLineDescription_Recover[] = _("A self-healing move\nthat restores HP by\nup to half of the\nuser's maximum HP.");
static const u8 sMoveFourLineDescription_Harden[] = _("The user stiffens\nall the muscles in\nits body to raise\nits Defense stat.");
static const u8 sMoveFourLineDescription_Minimize[] = _("The user compresses\nall the cells in its\nbody to raise its\nevasiveness.");
static const u8 sMoveFourLineDescription_Smokescreen[] = _("An obscuring cloud\nof smoke or ink\nreduces the foe's\naccuracy.");
static const u8 sMoveFourLineDescription_ConfuseRay[] = _("The foe is exposed\nto a sinister ray\nthat triggers\nconfusion.");
static const u8 sMoveFourLineDescription_Withdraw[] = _("The user withdraws\nits body in its hard\nshell, raising its\nDefense stat.");
static const u8 sMoveFourLineDescription_DefenseCurl[] = _("The user curls up\nto conceal weak\nspots and raise its\nDefense stat.");
static const u8 sMoveFourLineDescription_Barrier[] = _("The user creates a\nsturdy wall that\nsharply raises its\nDefense stat.");
static const u8 sMoveFourLineDescription_LightScreen[] = _("A wall of light\ncuts damage from\nSp. Atk attacks\nfor five turns.");
static const u8 sMoveFourLineDescription_Haze[] = _("Eliminates all stat\nchanges among all\nPokémon engaged in\nbattle.");
static const u8 sMoveFourLineDescription_Reflect[] = _("A wall of light\ncuts damage from\nphysical attacks\nfor five turns.");
static const u8 sMoveFourLineDescription_FocusEnergy[] = _("The user takes a\ndeep breath and\nfocuses to raise its\ncritical-hit ratio.");
static const u8 sMoveFourLineDescription_Bide[] = _("The user endures\nattacks for two\nturns, then strikes\nback double.");
static const u8 sMoveFourLineDescription_Metronome[] = _("Waggles a finger\nand stimulates the\nbrain into using any\nmove at random.");
static const u8 sMoveFourLineDescription_MirrorMove[] = _("The user counters\nthe move last used\nby the foe with the\nsame move.");
static const u8 sMoveFourLineDescription_SelfDestruct[] = _("The user blows up\nto inflict severe\ndamage, even\nmaking itself faint.");
static const u8 sMoveFourLineDescription_EggBomb[] = _("A large egg is\nhurled with great\nforce at the foe to\ninflict damage.");
static const u8 sMoveFourLineDescription_Lick[] = _("The foe is licked\nand hit with a long\ntongue. It may\nalso paralyze.");
static const u8 sMoveFourLineDescription_Smog[] = _("The foe is attacked\nwith exhaust gases.\nIt may also poison\nthe foe.");
static const u8 sMoveFourLineDescription_Sludge[] = _("Toxic sludge is\nhurled at the foe.\nIt may poison the\ntarget.");
static const u8 sMoveFourLineDescription_BoneClub[] = _("The foe is clubbed\nwith a bone held in\nhand. It may make\nthe foe flinch.");
static const u8 sMoveFourLineDescription_FireBlast[] = _("The foe is hit with\nan intense flame.\nIt may leave the\ntarget with a burn.");
static const u8 sMoveFourLineDescription_Waterfall[] = _("A powerful charge\nattack. It can also\nbe used to climb\na waterfall.");
#if defined(BATTLE_ENGINE) && B_BINDING_TURNS >= GEN_5
static const u8 sMoveFourLineDescription_Clamp[] = _("The foe is clamped\nand squeezed by\nthe user's shell for\nfour or five turns.");
#else
static const u8 sMoveFourLineDescription_Clamp[] = _("The foe is clamped\nand squeezed by\nthe user's shell for\ntwo to five turns.");
#endif
static const u8 sMoveFourLineDescription_Swift[] = _("Star-shaped rays\nthat never miss are\nfired at all foes in\nbattle.");
static const u8 sMoveFourLineDescription_SkullBash[] = _("The user raises its\nDefense in the 1st\nturn, then attacks\nin the 2nd turn.");
static const u8 sMoveFourLineDescription_SpikeCannon[] = _("Sharp spikes are\nfired at the foe to\nstrike two to five\ntimes.");
static const u8 sMoveFourLineDescription_Constrict[] = _("The foe is attacked\nwith long tentacles\nor vines. It may\nlower Speed.");
static const u8 sMoveFourLineDescription_Amnesia[] = _("Forgets about\nsomething and\nsharply raises\nSp. Def.");
static const u8 sMoveFourLineDescription_Kinesis[] = _("The user distracts\nthe foe by bending\na spoon. It may\nlower accuracy.");
static const u8 sMoveFourLineDescription_SoftBoiled[] = _("Heals the user by\nup to half its full\nHP. It can be used\nto heal an ally.");
static const u8 sMoveFourLineDescription_HiJumpKick[] = _("A strong jumping\nknee kick. If it\nmisses, the user is\nhurt.");
static const u8 sMoveFourLineDescription_Glare[] = _("The user intimidates\nthe foe with the\ndesign on its belly\nto cause paralysis.");
static const u8 sMoveFourLineDescription_DreamEater[] = _("Absorbs half the\ndamage it inflicted\non a sleeping foe\nto restore HP.");
static const u8 sMoveFourLineDescription_PoisonGas[] = _("The foe is sprayed\nwith a cloud of\ntoxic gas that may\npoison the foe.");
static const u8 sMoveFourLineDescription_Barrage[] = _("Round objects are\nhurled at the foe\nto strike two to\nfive times.");
static const u8 sMoveFourLineDescription_LeechLife[] = _("An attack that\nabsorbs half the\ndamage it inflicted\nto restore HP.");
static const u8 sMoveFourLineDescription_LovelyKiss[] = _("The user forces a\nkiss on the foe\nwith a scary face\nthat induces sleep.");
static const u8 sMoveFourLineDescription_SkyAttack[] = _("A 2nd-turn attack\nmove with a high\ncritical-hit ratio.\nThe foe may flinch.");
static const u8 sMoveFourLineDescription_Transform[] = _("The user transforms\ninto a copy of the\nfoe with even the\nsame move set.");
static const u8 sMoveFourLineDescription_Bubble[] = _("A spray of bubbles\nhits the foe.\nIt may lower the\nfoe's Speed stat.");
static const u8 sMoveFourLineDescription_DizzyPunch[] = _("The foe is hit with\na rhythmic punch\nthat may leave it\nconfused.");
static const u8 sMoveFourLineDescription_Spore[] = _("The user scatters\nbursts of fine\nspores that induce\nsleep.");
static const u8 sMoveFourLineDescription_Flash[] = _("A blast of light\nthat cuts the foe's\naccuracy. It also\nilluminates caves.");
static const u8 sMoveFourLineDescription_Psywave[] = _("The foe is attacked\nwith an odd, hot\nenergy wave that\nvaries in intensity.");
static const u8 sMoveFourLineDescription_Splash[] = _("The user just flops\nand splashes around\nwithout having any\neffect.");
static const u8 sMoveFourLineDescription_AcidArmor[] = _("The user alters its\ncells to liquefy\nitself and sharply\nraise Defense.");
static const u8 sMoveFourLineDescription_Crabhammer[] = _("A large pincer is\nused to hammer the\nfoe. It has a high\ncritical-hit ratio.");
static const u8 sMoveFourLineDescription_Explosion[] = _("The user explodes\nto inflict terrible\ndamage even while\nfainting itself.");
static const u8 sMoveFourLineDescription_FurySwipes[] = _("The foe is raked\nwith sharp claws or\nscythes two to five\ntimes.");
static const u8 sMoveFourLineDescription_Bonemerang[] = _("The user throws a\nbone that hits the\nfoe once, then once\nagain on return.");
static const u8 sMoveFourLineDescription_Rest[] = _("The user sleeps for\ntwo turns to fully\nrestore HP and heal\nany status problem.");
static const u8 sMoveFourLineDescription_RockSlide[] = _("Large boulders are\nhurled at the foe.\nIt may make the\nfoe flinch.");
static const u8 sMoveFourLineDescription_HyperFang[] = _("The foe is attacked\nwith sharp fangs.\nIt may make the\nfoe flinch.");
static const u8 sMoveFourLineDescription_Sharpen[] = _("The user reduces\nits polygon count\nto sharpen edges\nand raise Attack.");
static const u8 sMoveFourLineDescription_Conversion[] = _("The user changes\nits type to match\nthe type of one of\nits moves.");
static const u8 sMoveFourLineDescription_TriAttack[] = _("A simultaneous\n3-beam attack that\nmay paralyze, burn,\nor freeze the foe.");
static const u8 sMoveFourLineDescription_SuperFang[] = _("The user attacks\nwith sharp fangs\nand halves the\nfoe's HP.");
static const u8 sMoveFourLineDescription_Slash[] = _("The foe is slashed\nwith claws, etc.\nIt has a high\ncritical-hit ratio.");
static const u8 sMoveFourLineDescription_Substitute[] = _("The user creates a\ndecoy using one-\nquarter of its full\nHP.");
static const u8 sMoveFourLineDescription_Struggle[] = _("An attack that is\nused only if there\nis no PP. It also\nhurts the user.");
static const u8 sMoveFourLineDescription_Sketch[] = _("This move copies\nthe move last used\nby the foe, then\ndisappears.");
//static const u8 sMoveFourLineDescription_TripleKick[] = _("A 3-kick attack\nthat becomes more\npowerful with each\nsuccessive hit.");
static const u8 sMoveFourLineDescription_Thief[] = _("An attack that may\ntake the foe's held\nitem if the user\nisn't holding one.");
static const u8 sMoveFourLineDescription_SpiderWeb[] = _("Ensnares the foe \nwith sticky string\nso it doesn't flee\nor switch out.");
static const u8 sMoveFourLineDescription_MindReader[] = _("The user predicts\nthe foe's action to\nensure its next\nattack hits.");
static const u8 sMoveFourLineDescription_Nightmare[] = _("A sleeping foe is\nshown a nightmare\nthat inflicts some\ndamage every turn.");
static const u8 sMoveFourLineDescription_FlameWheel[] = _("The user makes a\nfiery charge at the\nfoe. It may cause\na burn.");
static const u8 sMoveFourLineDescription_Snore[] = _("An attack that can\nbe used only while\nasleep. It may\ncause flinching.");
static const u8 sMoveFourLineDescription_Curse[] = _("A move that works\ndifferently for the\nGhost-type and all\nthe other types.");
static const u8 sMoveFourLineDescription_Flail[] = _("A desperate attack\nthat becomes more\npowerful the less\nHP the user has.");
static const u8 sMoveFourLineDescription_Conversion2[] = _("The user changes\ntype to make itself\nresistant to the\nlast attack it took.");
static const u8 sMoveFourLineDescription_Aeroblast[] = _("A vortex of air is\nshot at the foe.\nIt has a high\ncritical-hit ratio.");
static const u8 sMoveFourLineDescription_CottonSpore[] = _("Cotton-like spores\ncling to the foe,\nsharply reducing\nits Speed stat.");
static const u8 sMoveFourLineDescription_Reversal[] = _("An all-out attack\nthat becomes more\npowerful the less\nHP the user has.");
static const u8 sMoveFourLineDescription_Spite[] = _("A move that cuts\n2 to 5 PP from the\nmove last used by\nthe foe.");
static const u8 sMoveFourLineDescription_PowderSnow[] = _("Blasts the foe with\na snowy gust.\nIt may cause\nfreezing.");
static const u8 sMoveFourLineDescription_Protect[] = _("Enables the user to\nevade all attacks.\nIt may fail if used\nin succession.");
static const u8 sMoveFourLineDescription_MachPunch[] = _("A punch thrown at\nblinding speed.\nIt is certain to\nstrike first.");
static const u8 sMoveFourLineDescription_ScaryFace[] = _("Frightens the foe\nwith a scary face\nto sharply reduce\nits Speed.");
static const u8 sMoveFourLineDescription_FaintAttack[] = _("The user draws up\nclose to the foe\ndisarmingly, then\nhits without fail.");
static const u8 sMoveFourLineDescription_SweetKiss[] = _("The user kisses\nthe foe with sweet\ncuteness that\ncauses confusion.");
static const u8 sMoveFourLineDescription_BellyDrum[] = _("The user maximizes\nits Attack stat at\nthe cost of half\nits full HP.");
static const u8 sMoveFourLineDescription_SludgeBomb[] = _("Filthy sludge is\nhurled at the foe.\nIt may poison the\ntarget.");
static const u8 sMoveFourLineDescription_MudSlap[] = _("Mud is hurled in\nthe foe's face to\ninflict damage and\nlower its accuracy.");
static const u8 sMoveFourLineDescription_Octazooka[] = _("Ink is blasted in\nthe foe's face or\neyes to damage and\nlower accuracy.");
static const u8 sMoveFourLineDescription_Spikes[] = _("A trap of spikes is\nlaid around the\nfoe's party to hurt\nfoes switching in.");
static const u8 sMoveFourLineDescription_ZapCannon[] = _("An electric blast is\nfired like a cannon\nto inflict damage\nand paralyze.");
static const u8 sMoveFourLineDescription_Foresight[] = _("Completely negates\nthe foe's efforts to\nheighten its ability\nto evade.");
static const u8 sMoveFourLineDescription_DestinyBond[] = _("If the user faints,\nthe foe delivering\nthe final hit also\nfaints.");
static const u8 sMoveFourLineDescription_PerishSong[] = _("Any battler that\nhears this faints\nin three turns\nunless it switches.");
static const u8 sMoveFourLineDescription_IcyWind[] = _("A chilling wind is\nused to attack.\nIt also lowers the\nSpeed stat.");
static const u8 sMoveFourLineDescription_Detect[] = _("Enables the user to\nevade all attacks.\nIt may fail if used\nin succession.");
static const u8 sMoveFourLineDescription_BoneRush[] = _("The user strikes\nthe foe with a bone\nin hand two to five\ntimes.");
static const u8 sMoveFourLineDescription_LockOn[] = _("The user locks on\nto the foe, making\nthe next move sure\nto hit.");
static const u8 sMoveFourLineDescription_Outrage[] = _("The user thrashes\nabout for two to\nthree turns, then\nbecomes confused.");
static const u8 sMoveFourLineDescription_Sandstorm[] = _("A 5-turn sandstorm\nthat damages all\ntypes except Rock,\nGround, and Steel.");
static const u8 sMoveFourLineDescription_GigaDrain[] = _("A harsh attack that\nabsorbs half the\ndamage it inflicted\nto restore HP.");
static const u8 sMoveFourLineDescription_Endure[] = _("The user endures\nany hit with 1 HP\nleft. It may fail if\nused in succession.");
static const u8 sMoveFourLineDescription_Charm[] = _("The foe is charmed\nby the user's cute\nappeals, sharply\ncutting its Attack.");
static const u8 sMoveFourLineDescription_Rollout[] = _("A 5-turn rolling\nattack that becomes\nstronger each time\nit hits.");
static const u8 sMoveFourLineDescription_FalseSwipe[] = _("A restrained attack\nthat always leaves\nthe foe with at\nleast 1 HP.");
static const u8 sMoveFourLineDescription_Swagger[] = _("A move that makes\nthe foe confused,\nbut also sharply\nraises its Attack.");
static const u8 sMoveFourLineDescription_MilkDrink[] = _("Heals the user by\nup to half its full\nHP. It can be used\nto heal an ally.");
static const u8 sMoveFourLineDescription_Spark[] = _("An electrically\ncharged tackle that\nmay also paralyze\nthe foe.");
static const u8 sMoveFourLineDescription_FuryCutter[] = _("An attack that\ngrows stronger on\neach successive\nhit.");
static const u8 sMoveFourLineDescription_SteelWing[] = _("The foe is hit with\nwings of steel.\nIt may also raise\nthe user's Defense.");
static const u8 sMoveFourLineDescription_MeanLook[] = _("The foe is fixed\nwith a mean look\nthat prevents it\nfrom escaping.");
static const u8 sMoveFourLineDescription_Attract[] = _("If it is the other\ngender, the foe is\nmade infatuated and\nunlikely to attack.");
static const u8 sMoveFourLineDescription_SleepTalk[] = _("While asleep, the\nuser randomly uses\none of the moves it\nknows.");
static const u8 sMoveFourLineDescription_HealBell[] = _("A soothing bell\nchimes to heal the\nstatus problems of\nall allies.");
static const u8 sMoveFourLineDescription_Return[] = _("This attack move\ngrows more powerful\nthe more the user\nlikes its Trainer.");
static const u8 sMoveFourLineDescription_Present[] = _("The foe is given a\nbooby-trapped gift.\nIt restores HP\nsometimes, however.");
static const u8 sMoveFourLineDescription_Frustration[] = _("This attack move\ngrows more powerful\nthe less the user\nlikes its Trainer.");
static const u8 sMoveFourLineDescription_Safeguard[] = _("It protects the\nuser's party from\nall status problems\nfor five turns.");
static const u8 sMoveFourLineDescription_PainSplit[] = _("The user adds its\nHP to the foe's HP,\nthen equally shares\nthe total HP.");
static const u8 sMoveFourLineDescription_SacredFire[] = _("A mystical and\npowerful fire\nattack that may\ninflict a burn.");
static const u8 sMoveFourLineDescription_Magnitude[] = _("A ground-shaking\nattack against all\nstanding Pokémon.\nIts power varies.");
static const u8 sMoveFourLineDescription_DynamicPunch[] = _("The foe is punched\nwith the user's full\npower. It confuses\nthe foe if it hits.");
static const u8 sMoveFourLineDescription_Megahorn[] = _("A brutal ramming\nattack delivered\nwith a tough and\nimpressive horn.");
static const u8 sMoveFourLineDescription_DragonBreath[] = _("The foe is hit with\nan incredible blast\nof breath that may\nalso paralyze.");
static const u8 sMoveFourLineDescription_BatonPass[] = _("The user switches\nout, passing along\nany stat changes\nto the new battler.");
static const u8 sMoveFourLineDescription_Encore[] = _("Makes the foe use\nthe move it last\nused repeatedly for\ntwo to six turns.");
static const u8 sMoveFourLineDescription_Pursuit[] = _("An attack move that\nworks especially\nwell on a foe that\nis switching out.");
static const u8 sMoveFourLineDescription_RapidSpin[] = _("An attack that\nfrees the user from\nBind, Wrap, Leech\nSeed, and Spikes.");
static const u8 sMoveFourLineDescription_SweetScent[] = _("Allures the foe to\nreduce evasiveness.\nIt also attracts\nwild Pokémon.");
static const u8 sMoveFourLineDescription_IronTail[] = _("An attack with a\nsteel-hard tail.\nIt may lower the\nfoe's Defense stat.");
static const u8 sMoveFourLineDescription_MetalClaw[] = _("The foe is attacked\nwith steel claws.\nIt may also raise\nthe user's Attack.");
static const u8 sMoveFourLineDescription_VitalThrow[] = _("Makes the user\nattack after the\nfoe. In return,\nit will not miss.");
static const u8 sMoveFourLineDescription_MorningSun[] = _("Restores the user's\nHP. The amount of\nHP regained varies\nwith the weather.");
static const u8 sMoveFourLineDescription_Synthesis[] = _("Restores the user's\nHP. The amount of\nHP regained varies\nwith the weather.");
static const u8 sMoveFourLineDescription_Moonlight[] = _("Restores the user's\nHP. The amount of\nHP regained varies\nwith the weather.");
static const u8 sMoveFourLineDescription_HiddenPower[] = _("An attack that\nvaries in type and\nintensity depending\non the user.");
static const u8 sMoveFourLineDescription_CrossChop[] = _("The foe is hit with\ndouble chops.\nIt has a high\ncritical-hit ratio.");
static const u8 sMoveFourLineDescription_Twister[] = _("A vicious twister\nattacks the foe.\nIt may make the\nfoe flinch.");
static const u8 sMoveFourLineDescription_RainDance[] = _("A heavy rain falls\nfor five turns,\npowering up Water-\ntype moves.");
static const u8 sMoveFourLineDescription_SunnyDay[] = _("The sun blazes for\nfive turns, powering\nup Fire-type\nmoves.");
static const u8 sMoveFourLineDescription_Crunch[] = _("The foe is crunched\nwith sharp fangs.\nIt may lower the\nfoe's Sp. Def.");
static const u8 sMoveFourLineDescription_MirrorCoat[] = _("A retaliation move\nthat pays back the\nfoe's special attack\ndouble.");
static const u8 sMoveFourLineDescription_PsychUp[] = _("The user hypnotizes\nitself into copying\nany stat change\nmade by the foe.");
static const u8 sMoveFourLineDescription_ExtremeSpeed[] = _("A blindingly speedy\ncharge attack that\nalways goes before\nany other.");
static const u8 sMoveFourLineDescription_AncientPower[] = _("An ancient power is\nused to attack. It\nmay also raise all\nthe user's stats.");
static const u8 sMoveFourLineDescription_ShadowBall[] = _("A shadowy blob is\nhurled at the foe.\nMay also lower the\nfoe's Sp. Def.");
static const u8 sMoveFourLineDescription_FutureSight[] = _("Two turns after\nthis move is used,\nthe foe is attacked\npsychically.");
static const u8 sMoveFourLineDescription_RockSmash[] = _("An attack that may\nalso cut Defense.\nIt can also smash\ncracked boulders.");
#if defined(BATTLE_ENGINE) && B_BINDING_TURNS >= GEN_5
static const u8 sMoveFourLineDescription_Whirlpool[] = _("The foe is trapped\nin a fast, vicious\nwhirlpool for four\nor five turns.");
#else
static const u8 sMoveFourLineDescription_Whirlpool[] = _("The foe is trapped\nin a fast, vicious\nwhirlpool for two\nto five turns.");
#endif
static const u8 sMoveFourLineDescription_BeatUp[] = _("All party Pokémon\njoin in the attack.\nThe more allies,\nthe more damage.");
static const u8 sMoveFourLineDescription_FakeOut[] = _("An attack that hits\nfirst and causes\nflinching. Usable\nonly on 1st turn.");
static const u8 sMoveFourLineDescription_Uproar[] = _("The user attacks in\nan uproar that\nprevents sleep for\ntwo to five turns.");
static const u8 sMoveFourLineDescription_Stockpile[] = _("The user charges\nup power for use\nlater. It can be\nused three times.");
static const u8 sMoveFourLineDescription_SpitUp[] = _("The power built\nusing Stockpile is\nreleased at once\nfor attack.");
static const u8 sMoveFourLineDescription_Swallow[] = _("The energy it built\nusing Stockpile is\nabsorbed to restore\nHP.");
static const u8 sMoveFourLineDescription_HeatWave[] = _("The user exhales a\nheated breath to\nattack. It may also\ninflict a burn.");
static const u8 sMoveFourLineDescription_Hail[] = _("A hailstorm lasting\nfive turns damages\nall Pokémon except\nthe Ice-type.");
static const u8 sMoveFourLineDescription_Flatter[] = _("Flattery is used to\nconfuse the foe,\nbut its Sp. Atk\nalso rises.");
static const u8 sMoveFourLineDescription_Torment[] = _("It enrages the foe,\nmaking it incapable\nof using the same\nmove successively.");
static const u8 sMoveFourLineDescription_WillOWisp[] = _("A sinister, bluish\nwhite flame is shot\nat the foe to\ninflict a burn.");
static const u8 sMoveFourLineDescription_Memento[] = _("The user faints,\nbut sharply lowers\nthe foe's Attack\nand Sp. Atk.");
static const u8 sMoveFourLineDescription_Facade[] = _("An attack that is\nboosted if user is\nburned, poisoned,\nor paralyzed.");
static const u8 sMoveFourLineDescription_FocusPunch[] = _("An attack that is\nexecuted last.\nThe user flinches\nif hit beforehand.");
static const u8 sMoveFourLineDescription_SmellingSalt[] = _("Doubly effective on\na paralyzed foe,\nbut it also cures\nthe foe's paralysis.");
static const u8 sMoveFourLineDescription_FollowMe[] = _("The user draws\nattention to itself,\nmaking foes attack\nonly the user.");
static const u8 sMoveFourLineDescription_NaturePower[] = _("An attack that\nchanges type\ndepending on the\nuser's location.");
static const u8 sMoveFourLineDescription_Charge[] = _("The user charges\npower to boost the\nElectric move it\nuses next.");
static const u8 sMoveFourLineDescription_Taunt[] = _("The foe is taunted\ninto a rage that\nallows it to use\nonly attack moves.");
static const u8 sMoveFourLineDescription_HelpingHand[] = _("A move that boosts\nthe power of the\nally's attack in a\nbattle.");
static const u8 sMoveFourLineDescription_Trick[] = _("A move that tricks\nthe foe into\ntrading held items\nwith the user.");
static const u8 sMoveFourLineDescription_RolePlay[] = _("The user mimics the\nfoe completely and\ncopies the foe's\nability.");
static const u8 sMoveFourLineDescription_Wish[] = _("A self-healing move\nthat restores half\nthe full HP on the\nnext turn.");
static const u8 sMoveFourLineDescription_Assist[] = _("The user randomly\npicks and uses a\nmove of an allied\nPokémon.");
static const u8 sMoveFourLineDescription_Ingrain[] = _("The user lays roots\nthat restore HP on\nevery turn.\nIt can't switch out.");
static const u8 sMoveFourLineDescription_Superpower[] = _("A powerful attack,\nbut it also lowers\nthe user's Attack\nand Defense stats.");
static const u8 sMoveFourLineDescription_MagicCoat[] = _("Reflects back the\nfoe's Leech Seed\nand any status-\ndamaging move.");
static const u8 sMoveFourLineDescription_Recycle[] = _("A move that\nrecycles a used\nitem for use once\nmore.");
static const u8 sMoveFourLineDescription_Revenge[] = _("An attack move that\ngains in intensity if\nthe target has hurt\nthe user.");
static const u8 sMoveFourLineDescription_BrickBreak[] = _("An attack that also\nbreaks any barrier\nlike Light Screen\nand Reflect.");
static const u8 sMoveFourLineDescription_Yawn[] = _("A huge yawn lulls\nthe foe into falling\nasleep on the next\nturn.");
static const u8 sMoveFourLineDescription_KnockOff[] = _("Knocks down the\nfoe's held item to\nprevent its use\nduring the battle.");
static const u8 sMoveFourLineDescription_Endeavor[] = _("Gains power the\nfewer HP the user\nhas compared with\nthe foe.");
static const u8 sMoveFourLineDescription_Eruption[] = _("The higher the\nuser's HP, the more\npowerful this\nattack becomes.");
static const u8 sMoveFourLineDescription_SkillSwap[] = _("The user employs\nits psychic power\nto swap abilities\nwith the foe.");
static const u8 sMoveFourLineDescription_Imprison[] = _("Prevents foes from\nusing any move\nthat is also known\nby the user.");
static const u8 sMoveFourLineDescription_Refresh[] = _("A self-healing move\nthat cures the user\nof a poisoning,\nburn, or paralysis.");
static const u8 sMoveFourLineDescription_Grudge[] = _("If the user faints,\nthis move deletes\nthe PP of the move\nthat finished it.");
static const u8 sMoveFourLineDescription_Snatch[] = _("Steals the effects\nof the foe's\nhealing or status-\nchanging move.");
static const u8 sMoveFourLineDescription_SecretPower[] = _("An attack that may\nhave an additional\neffect that varies\nwith the terrain.");
static const u8 sMoveFourLineDescription_Dive[] = _("The user dives\nunderwater on the\nfirst turn and\nstrikes next turn.");
static const u8 sMoveFourLineDescription_ArmThrust[] = _("A quick flurry of\nstraight-arm\npunches that hit\ntwo to five times.");
static const u8 sMoveFourLineDescription_Camouflage[] = _("Alters the user's\ntype depending on\nthe location's\nterrain.");
static const u8 sMoveFourLineDescription_TailGlow[] = _("The user flashes a\nlight that sharply\nraises its Sp. Atk\nstat.");
static const u8 sMoveFourLineDescription_LusterPurge[] = _("A burst of light\ninjures the foe. It\nmay also lower the\nfoe's Sp. Def.");
static const u8 sMoveFourLineDescription_MistBall[] = _("A flurry of down\nhits the foe. It\nmay also lower the\nfoe's Sp. Atk.");
static const u8 sMoveFourLineDescription_FeatherDance[] = _("The foe is covered\nwith a mass of down\nthat sharply cuts\nthe Attack stat.");
static const u8 sMoveFourLineDescription_TeeterDance[] = _("A wobbly dance\nthat confuses all\nthe Pokémon in\nbattle.");
static const u8 sMoveFourLineDescription_BlazeKick[] = _("A fiery kick with a\nhigh critical-hit\nratio. It may also\nburn the foe.");
static const u8 sMoveFourLineDescription_MudSport[] = _("Weakens Electric-\ntype attacks while\nthe user is in the\nbattle.");
static const u8 sMoveFourLineDescription_IceBall[] = _("A 5-turn rolling\nattack that becomes\nstronger each time\nit rolls.");
static const u8 sMoveFourLineDescription_NeedleArm[] = _("An attack using\nthorny arms.\nIt may make the\nfoe flinch.");
static const u8 sMoveFourLineDescription_SlackOff[] = _("The user slacks off\nand restores its HP\nby half its full\nHP.");
static const u8 sMoveFourLineDescription_HyperVoice[] = _("The user lets loose\na horribly loud\nshout with the\npower to damage.");
static const u8 sMoveFourLineDescription_PoisonFang[] = _("The foe is bitten\nwith toxic fangs.\nIt may also badly\npoison the foe.");
static const u8 sMoveFourLineDescription_CrushClaw[] = _("The foe is attacked\nwith sharp claws.\nIt may also lower\nthe foe's Defense.");
static const u8 sMoveFourLineDescription_BlastBurn[] = _("The foe is hit with\na huge explosion.\nThe user can't move\non the next turn.");
static const u8 sMoveFourLineDescription_HydroCannon[] = _("The foe is hit with\na watery cannon.\nThe user can't move\non the next turn.");
static const u8 sMoveFourLineDescription_MeteorMash[] = _("The foe is hit with\na hard, fast punch.\nIt may also raise\nthe user's Attack.");
static const u8 sMoveFourLineDescription_Astonish[] = _("An attack using a\nstartling shout.\nIt also may make\nthe foe flinch.");
static const u8 sMoveFourLineDescription_WeatherBall[] = _("An attack that\nvaries in power and\ntype depending on\nthe weather.");
static const u8 sMoveFourLineDescription_Aromatherapy[] = _("A soothing scent is\nreleased to heal\nall status problems\nin the user's party.");
static const u8 sMoveFourLineDescription_FakeTears[] = _("The user feigns\ncrying to sharply\nlower the foe's\nSp. Def stat.");
static const u8 sMoveFourLineDescription_AirCutter[] = _("The foe is hit with\nrazor-like wind.\nIt has a high\ncritical-hit ratio.");
static const u8 sMoveFourLineDescription_Overheat[] = _("An intense attack\nthat also sharply\nreduces the user's\nSp. Atk stat.");
static const u8 sMoveFourLineDescription_OdorSleuth[] = _("Completely negates\nthe foe's efforts to\nheighten its ability\nto evade.");
static const u8 sMoveFourLineDescription_RockTomb[] = _("Boulders are hurled\nat the foe. It also\nlowers the foe's\nSpeed if it hits.");
static const u8 sMoveFourLineDescription_SilverWind[] = _("The foe is attacked\nwith a silver dust.\nIt may raise all\nthe user's stats.");
static const u8 sMoveFourLineDescription_MetalSound[] = _("A horrible metallic\nscreech is used to\nsharply lower the\nfoe's Sp. Def.");
static const u8 sMoveFourLineDescription_GrassWhistle[] = _("A pleasant melody\nis played to lull\nthe foe into a deep\nsleep.");
static const u8 sMoveFourLineDescription_Tickle[] = _("The foe is made to\nlaugh, reducing its\nAttack and Defense\nstats.");
static const u8 sMoveFourLineDescription_CosmicPower[] = _("The user absorbs a\nmystic power to\nraise its Defense\nand Sp. Def.");
static const u8 sMoveFourLineDescription_WaterSpout[] = _("The higher the\nuser's HP, the more\npowerful this\nattack becomes.");
static const u8 sMoveFourLineDescription_SignalBeam[] = _("The foe is hit with\na flashing beam\nthat may also\ncause confusion.");
static const u8 sMoveFourLineDescription_ShadowPunch[] = _("The user throws a\npunch from the\nshadows. It cannot\nbe evaded.");
static const u8 sMoveFourLineDescription_Extrasensory[] = _("The user attacks\nwith an odd power\nthat may make the\nfoe flinch.");
static const u8 sMoveFourLineDescription_SkyUppercut[] = _("The user attacks\nwith an uppercut\nthrown skywards\nwith force.");
#if defined(BATTLE_ENGINE) && B_BINDING_TURNS >= GEN_5
static const u8 sMoveFourLineDescription_SandTomb[] = _("The foe is trapped\ninside a painful\nsandstorm for four\nor five turns.");
#else
static const u8 sMoveFourLineDescription_SandTomb[] = _("The foe is trapped\ninside a painful\nsandstorm for two\nto five turns.");
#endif
static const u8 sMoveFourLineDescription_SheerCold[] = _("The foe is attacked\nwith ultimate cold\nthat causes fainting\nif it hits.");
static const u8 sMoveFourLineDescription_MuddyWater[] = _("The user attacks\nwith muddy water.\nIt may also lower\nthe foe's accuracy.");
static const u8 sMoveFourLineDescription_BulletSeed[] = _("The user shoots\nseeds at the foe.\nTwo to five seeds\nare shot at once.");
static const u8 sMoveFourLineDescription_AerialAce[] = _("An extremely fast\nattack against one\ntarget. It can't be\nevaded.");
static const u8 sMoveFourLineDescription_IcicleSpear[] = _("Sharp icicles are\nfired at the foe.\nIt strikes two to\nfive times.");
static const u8 sMoveFourLineDescription_IronDefense[] = _("The user hardens\nits body's surface\nto sharply raise its\nDefense stat.");
static const u8 sMoveFourLineDescription_Block[] = _("The user blocks the\nfoe's way with arms\nspread wide to\nprevent escape.");
static const u8 sMoveFourLineDescription_Howl[] = _("The user howls to\nraise its spirit and\nboost its Attack\nstat.");
static const u8 sMoveFourLineDescription_DragonClaw[] = _("Sharp, huge claws\nhook and slash the\nfoe quickly and\nwith great power.");
static const u8 sMoveFourLineDescription_FrenzyPlant[] = _("The foe is hit with\nan enormous branch.\nThe user can't move\non the next turn.");
static const u8 sMoveFourLineDescription_BulkUp[] = _("The user bulks up\nits body to boost\nboth its Attack and\nDefense stats.");
static const u8 sMoveFourLineDescription_Bounce[] = _("The user bounces\non the foe on the\n2nd turn. It may\nparalyze the foe.");
static const u8 sMoveFourLineDescription_MudShot[] = _("The user attacks by\nhurling mud.\nIt also reduces the\nfoe's Speed.");
static const u8 sMoveFourLineDescription_PoisonTail[] = _("An attack with a\nhigh critical-hit\nratio. It may also\npoison the foe.");
static const u8 sMoveFourLineDescription_Covet[] = _("A cutely executed\nattack that also\nsteals the foe's\nhold item.");
static const u8 sMoveFourLineDescription_VoltTackle[] = _("The user throws an\nelectrified tackle.\nIt hurts the user\na little.");
static const u8 sMoveFourLineDescription_MagicalLeaf[] = _("The foe is attacked\nwith a strange leaf\nthat cannot be\nevaded.");
static const u8 sMoveFourLineDescription_WaterSport[] = _("Weakens FIRE-type\nattacks while the\nuser is in the\nbattle.");
static const u8 sMoveFourLineDescription_CalmMind[] = _("The user focuses\nits mind to raise\nthe Sp. Atk and\nSp. Def stats.");
static const u8 sMoveFourLineDescription_LeafBlade[] = _("The foe is slashed\nwith a sharp leaf.\nIt has a high\ncritical-hit ratio.");
static const u8 sMoveFourLineDescription_DragonDance[] = _("A mystic, powerful\ndance that boosts\nthe user's Attack\nand Speed stats.");
static const u8 sMoveFourLineDescription_RockBlast[] = _("The user hurls two\nto five hard rocks\nat the foe to\nattack.");
static const u8 sMoveFourLineDescription_ShockWave[] = _("A rapid jolt of\nelectricity strikes\nthe foe. It can't\nbe evaded.");
static const u8 sMoveFourLineDescription_WaterPulse[] = _("An attack with a\npulsing blast of\nwater. It may also\nconfuse the foe.");
static const u8 sMoveFourLineDescription_DoomDesire[] = _("A move that attacks\nthe foe with a\nblast of light two\nturns after use.");
static const u8 sMoveFourLineDescription_PsychoBoost[] = _("An intense attack\nthat also sharply\nreduces the user's\nSp. Atk stat.");

#else //if CONFIG_DECAPITALIZE_MOVE_DESCRIPTION_STRINGS

static const u8 sMoveFourLineDescription_SwordsDance[] = _("Baile que mejora el \nAtaque.");
static const u8 sMoveFourLineDescription_Cut[] = _("Corta con garras, \nguadañas, etc.");
static const u8 sMoveFourLineDescription_Gust[] = _("Crea un tornado con \nlas alas.");
static const u8 sMoveFourLineDescription_WingAttack[] = _("Golpea al objetivo \ncon las alas.");
static const u8 sMoveFourLineDescription_Whirlwind[] = _("Se lleva al rival y \ntermina el combate.");
static const u8 sMoveFourLineDescription_Fly[] = _("1.{SUPER_ER} turno: \nvuela. 2.º: ataca.");
#if defined(BATTLE_ENGINE) && B_BINDING_TURNS >= GEN_5
static const u8 sMoveFourLineDescription_Bind[] = _("Ata y oprime de 2 a 5 \nturnos.");
#else
static const u8 sMoveFourLineDescription_Bind[] = _("Ata y oprime de 2 a 5 \nturnos.");
#endif
static const u8 sMoveFourLineDescription_Slam[] = _("Golpea con las \nextremidades.");
static const u8 sMoveFourLineDescription_VineWhip[] = _("Azota al enemigo con \nramas finas.");
static const u8 sMoveFourLineDescription_Stomp[] = _("Tremendo pisotón que\npuede causar \nretroceso.");
static const u8 sMoveFourLineDescription_DoubleKick[] = _("Una patada doble. \nGolpea 2 veces.");
static const u8 sMoveFourLineDescription_MegaKick[] = _("Patada de extrema \nfuerza.");
static const u8 sMoveFourLineDescription_JumpKick[] = _("Si falla, dañará a \nquien lo usa.");
static const u8 sMoveFourLineDescription_RollingKick[] = _("Una patada rápida y \ncircular.");
static const u8 sMoveFourLineDescription_SandAttack[] = _("Arroja arena a la \ncara y baja la \nPrecisión.");
static const u8 sMoveFourLineDescription_Headbutt[] = _("Cabezazo que puede \nhacer retroceder al \nrival.");
static const u8 sMoveFourLineDescription_HornAttack[] = _("Ataca al enemigo con \nafilados cuernos.");
static const u8 sMoveFourLineDescription_FuryAttack[] = _("Cornea al enemigo de \n2 a 5 veces.");
static const u8 sMoveFourLineDescription_HornDrill[] = _("Ataque taladro. \nFulmina en 1 golpe.");
static const u8 sMoveFourLineDescription_Tackle[] = _("Embiste con todo el \ncuerpo.");
static const u8 sMoveFourLineDescription_BodySlam[] = _("Ataque corporal que \npuede paralizar.");
#if defined(BATTLE_ENGINE) && B_BINDING_TURNS >= GEN_5
static const u8 sMoveFourLineDescription_Wrap[] = _("Oprime de 2 a 5 \nturnos con ramas, etc.");
#else
static const u8 sMoveFourLineDescription_Wrap[] = _("Oprime de 2 a 5 \nturnos con ramas, etc.");
#endif
//TOTRANS
static const u8 sMoveFourLineDescription_TakeDown[] = _("Carga desmedida que \ntambién hiere al \nagresor.");
static const u8 sMoveFourLineDescription_Thrash[] = _("Dura de 2 a 3 turnos y\nacaba \nconfundiéndote.");
static const u8 sMoveFourLineDescription_DoubleEdge[] = _("Ataque arriesgado \nque también hiere al \nagresor.");
static const u8 sMoveFourLineDescription_TailWhip[] = _("Agita la cola para \nbajar la Defensa del \notro.");
static const u8 sMoveFourLineDescription_PoisonSting[] = _("Puede envenenar al \nenemigo con púas, etc.");
static const u8 sMoveFourLineDescription_Twineedle[] = _("Clava aguijones al \nrival 2 veces.");
static const u8 sMoveFourLineDescription_PinMissile[] = _("Lanza finas púas que \nhieren de 2 a 5 veces.");
static const u8 sMoveFourLineDescription_Leer[] = _("Asusta al enemigo \npara bajar su \nDefensa.");
static const u8 sMoveFourLineDescription_Bite[] = _("Un voraz bocado que \npuede causar \nretroceso.");
static const u8 sMoveFourLineDescription_Growl[] = _("Dulce gruñido que \nreduce el Ataque del \notro.");
static const u8 sMoveFourLineDescription_Roar[] = _("Ahuyenta al rival y \nfinaliza el combate.");
static const u8 sMoveFourLineDescription_Sing[] = _("Cancioncilla que \npuede dormir al \nenemigo.");
static const u8 sMoveFourLineDescription_Supersonic[] = _("Raras ondas sónicas \nque pueden \nconfundir.");
static const u8 sMoveFourLineDescription_SonicBoom[] = _("Lanza ondas de \nchoque que restan 20\nPS.");
static const u8 sMoveFourLineDescription_Disable[] = _("Desactiva un ataque \ndel contrincante.");
static const u8 sMoveFourLineDescription_Acid[] = _("Enemigo es rociado\ncon un ácido que\nderrite piel, puede\nreducir la defensa.");
static const u8 sMoveFourLineDescription_Ember[] = _("Ligero ataque que \npuede causar \nquemaduras.");
static const u8 sMoveFourLineDescription_Flamethrower[] = _("Fuerte ataque que \npuede causar \nquemaduras.");
static const u8 sMoveFourLineDescription_Mist[] = _("Te rodea de fina \nniebla y protege tus \nhabilidades.");
static const u8 sMoveFourLineDescription_WaterGun[] = _("Rocía agua para \natacar.");
static const u8 sMoveFourLineDescription_HydroPump[] = _("Lanza agua a chorros \npara atacar.");
static const u8 sMoveFourLineDescription_Surf[] = _("Crea una ola enorme y\nse la lanza al \nenemigo.");
static const u8 sMoveFourLineDescription_IceBeam[] = _("Enemigo es atacado\ncon un rayo helado.\nPuede congelar al\nenemigo.");
static const u8 sMoveFourLineDescription_Blizzard[] = _("Enemigo es atacado\npor una ventisca.\nPuede congelar al\nenemigo.");
static const u8 sMoveFourLineDescription_Psybeam[] = _("Extraño rayo que \npuede causar \nconfusión.");
static const u8 sMoveFourLineDescription_BubbleBeam[] = _("Diluvio de burbujas \nque puede bajar la \nVelocidad.");
static const u8 sMoveFourLineDescription_AuroraBeam[] = _("Rayo multicolor que \npuede reducir el \nAtaque.");
static const u8 sMoveFourLineDescription_HyperBeam[] = _("Es eficaz, pero deja \ninmóvil al atacante 1 \nturno.");
static const u8 sMoveFourLineDescription_Peck[] = _("Ataca con un \npunzante pico.");
static const u8 sMoveFourLineDescription_DrillPeck[] = _("Picotazo giratorio y \nperforador muy \npotente.");
static const u8 sMoveFourLineDescription_Submission[] = _("Golpe desmedido que \ntambién hiere al \nagresor.");
static const u8 sMoveFourLineDescription_LowKick[] = _("Cuanto más pesa el \nenemigo, más daño \ncausa.");
static const u8 sMoveFourLineDescription_Counter[] = _("Devuelve un golpe \nfísico por duplicado.");
static const u8 sMoveFourLineDescription_SeismicToss[] = _("Resta los mismos PS \nque nivel tenga el \nagresor.");
static const u8 sMoveFourLineDescription_Strength[] = _("Potente ataque \nfísico.");
static const u8 sMoveFourLineDescription_Absorb[] = _("Absorbe la mitad del \ndaño producido.");
static const u8 sMoveFourLineDescription_MegaDrain[] = _("Absorbe la mitad del \ndaño producido.");
static const u8 sMoveFourLineDescription_LeechSeed[] = _("Planta tres semillas \nque quitan PS en cada\nturno.");
static const u8 sMoveFourLineDescription_Growth[] = _("Crece a marchas \nforzadas y aumenta \nel At. Esp.");
static const u8 sMoveFourLineDescription_RazorLeaf[] = _("Corta con hojas. \nSuele ser crítico.");
static const u8 sMoveFourLineDescription_SolarBeam[] = _("1.{SUPER_ER} turno: \nabsorbe luz. 2.º: \nataca.");
static const u8 sMoveFourLineDescription_PoisonPowder[] = _("Polvo tóxico que \npuede envenenar al \nenemigo.");
static const u8 sMoveFourLineDescription_StunSpore[] = _("Esparce polvo que \npuede paralizar al \nenemigo.");
static const u8 sMoveFourLineDescription_SleepPowder[] = _("Esparce polvo que \npuede dormir al \nenemigo.");
static const u8 sMoveFourLineDescription_PetalDance[] = _("Dura de 2 a 3 turnos y\nacaba \nconfundiéndote.");
static const u8 sMoveFourLineDescription_StringShot[] = _("Baja la Velocidad del \nenemigo.");
static const u8 sMoveFourLineDescription_DragonRage[] = _("Cadena de ondas de \nchoque que quitan 40 \nPS.");
#if defined(BATTLE_ENGINE) && B_BINDING_TURNS >= GEN_5
static const u8 sMoveFourLineDescription_FireSpin[] = _("Un aro de fuego que \natrapa de 2 a 5 \nveces.");
#else
static const u8 sMoveFourLineDescription_FireSpin[] = _("Un aro de fuego que \natrapa de 2 a 5 \nveces.");
#endif
static const u8 sMoveFourLineDescription_ThunderShock[] = _("Ataque eléctrico que \npuede paralizar al \nenemigo.");
static const u8 sMoveFourLineDescription_Thunderbolt[] = _("Duro ataque \neléctrico que puede \nparalizar al enemigo.");
static const u8 sMoveFourLineDescription_ThunderWave[] = _("Una descarga que \npuede paralizar al \nenemigo.");
static const u8 sMoveFourLineDescription_Thunder[] = _("Un estruendo que \npuede paralizar al \nenemigo.");
static const u8 sMoveFourLineDescription_RockThrow[] = _("Tira pequeñas rocas \nal enemigo.");
static const u8 sMoveFourLineDescription_Earthquake[] = _("Fuerte, pero inútil \ncontra voladores.");
static const u8 sMoveFourLineDescription_Fissure[] = _("Ataque de tierra. \nFulmina en 1 golpe.");
static const u8 sMoveFourLineDescription_Dig[] = _("1.{SUPER_ER} turno: \ncava. 2.º: ataca.");
static const u8 sMoveFourLineDescription_Toxic[] = _("Envenena al rival de \nforma progresiva.");
static const u8 sMoveFourLineDescription_Confusion[] = _("Ataque psíquico que \npuede causar \nconfusión.");
static const u8 sMoveFourLineDescription_Psychic[] = _("Fuerte ataque \npsíquico que puede \nbajar la Def. Esp.");
static const u8 sMoveFourLineDescription_Hypnosis[] = _("Ataque hipnótico que\npuede dormir al \nenemigo.");
static const u8 sMoveFourLineDescription_Meditate[] = _("Reposa y medita para \naumentar el Ataque.");
static const u8 sMoveFourLineDescription_Agility[] = _("Relaja el cuerpo para\nganar Velocidad.");
static const u8 sMoveFourLineDescription_QuickAttack[] = _("Ataque rápido que \npermite golpear en \n1.{SUPER_ER} lugar.");
static const u8 sMoveFourLineDescription_Rage[] = _("Mejora tu Ataque \ncada vez que te \ngolpean.");
static const u8 sMoveFourLineDescription_Teleport[] = _("Movimiento psíquico \nque permite huir al \ninstante.");
static const u8 sMoveFourLineDescription_NightShade[] = _("Se restarán tantos \nPS como nivel tenga \nel agresor.");
static const u8 sMoveFourLineDescription_Mimic[] = _("Copia un ataque \nusado por el enemigo.");
static const u8 sMoveFourLineDescription_Screech[] = _("Ruido agudo que baja \nmucho la Defensa del \nrival.");
static const u8 sMoveFourLineDescription_DoubleTeam[] = _("Crea espejismos para \nmejorar la Evasión.");
static const u8 sMoveFourLineDescription_Recover[] = _("Restaura hasta la \nmitad de los PS \nmáximos.");
static const u8 sMoveFourLineDescription_Harden[] = _("Tensa la musculatura \npara aumentar la \nDefensa.");
static const u8 sMoveFourLineDescription_Minimize[] = _("El agresor mengua \npara aumentar la \nEvasión.");
static const u8 sMoveFourLineDescription_Smokescreen[] = _("Baja la Precisión del \nenemigo con humo, etc.");
static const u8 sMoveFourLineDescription_ConfuseRay[] = _("Rayo siniestro que \nconfunde al enemigo.");
static const u8 sMoveFourLineDescription_Withdraw[] = _("El agresor se protege\nen su coraza y sube \nla Defensa.");
static const u8 sMoveFourLineDescription_DefenseCurl[] = _("Oculta su punto débil\nal rizarse. Sube la \nDefensa.");
static const u8 sMoveFourLineDescription_Barrier[] = _("Crea una barrera para\nsubir mucho la \nDefensa.");
static const u8 sMoveFourLineDescription_LightScreen[] = _("Reduce el daño que \ncausa el At. Esp. del \nrival.");
static const u8 sMoveFourLineDescription_Haze[] = _("Nube negra que \nelimina los cambios \nde caracterís.");
static const u8 sMoveFourLineDescription_Reflect[] = _("Pared de luz que \ndebilita los ataques \nfísicos.");
static const u8 sMoveFourLineDescription_FocusEnergy[] = _("Concentra energía \npara asegurar un \ngolpe crítico.");
static const u8 sMoveFourLineDescription_Bide[] = _("Espera 2 turnos para \natacar con doble \npotencia.");
static const u8 sMoveFourLineDescription_Metronome[] = _("Usa al azar un ataque\nPokémon.");
static const u8 sMoveFourLineDescription_MirrorMove[] = _("Contraataca con el \nmismo movimiento.");
static const u8 sMoveFourLineDescription_SelfDestruct[] = _("Potente, pero hace \nque te debilites.");
static const u8 sMoveFourLineDescription_EggBomb[] = _("Arroja un huevo al \nenemigo.");
static const u8 sMoveFourLineDescription_Lick[] = _("Usa la lengua para \natacar. Puede causar \nparálisis.");
static const u8 sMoveFourLineDescription_Smog[] = _("Gases de escape que \npueden llegar a \nenvenenar.");
static const u8 sMoveFourLineDescription_Sludge[] = _("Arroja residuos al \nrival. Puede llegar a \nenvenenar.");
static const u8 sMoveFourLineDescription_BoneClub[] = _("Aporrea con un hueso.\nPuede causar \nretroceso.");
static const u8 sMoveFourLineDescription_FireBlast[] = _("Llama que lo \nchamusca todo y \nsuele causar \nquemadura.");
static const u8 sMoveFourLineDescription_Waterfall[] = _("Embiste con impulso \npara remontar una \ncascada.");
#if defined(BATTLE_ENGINE) && B_BINDING_TURNS >= GEN_5
static const u8 sMoveFourLineDescription_Clamp[] = _("Atrapa y atenaza con\nfuerza de 2 a 5 \nturnos.");
#else
static const u8 sMoveFourLineDescription_Clamp[] = _("Atrapa y atenaza con\nfuerza de 2 a 5 \nturnos.");
#endif
static const u8 sMoveFourLineDescription_Swift[] = _("Lanza rayos en forma \nde estrella que no \nfallan.");
static const u8 sMoveFourLineDescription_SkullBash[] = _("1.{SUPER_ER} turno: se \nprepara. 2.º: da el \ncabezazo.");
static const u8 sMoveFourLineDescription_SpikeCannon[] = _("Lanza finas púas que \nhieren de 2 a 5 veces.");
static const u8 sMoveFourLineDescription_Constrict[] = _("Constriñe para herir \ny puede bajar la \nVelocidad.");
static const u8 sMoveFourLineDescription_Amnesia[] = _("Olvida algo y aumenta\nmucho la Defensa Esp.");
static const u8 sMoveFourLineDescription_Kinesis[] = _("Distrae al rival y \nbaja su nivel de \nPrecisión.");
static const u8 sMoveFourLineDescription_SoftBoiled[] = _("Restaura hasta la \nmitad de tus PS \nmáximos.");
static const u8 sMoveFourLineDescription_HiJumpKick[] = _("Si fallas esta patada,\npuedes \nautolesionarte.");
static const u8 sMoveFourLineDescription_Glare[] = _("Intimida y asusta al \nrival hasta dejarlo \nparalizado.");
static const u8 sMoveFourLineDescription_DreamEater[] = _("Roba la mitad del \ndaño causado a un \nrival dormido.");
static const u8 sMoveFourLineDescription_PoisonGas[] = _("Envuelve al enemigo \nen gas tóxico y \nvenenoso.");
static const u8 sMoveFourLineDescription_Barrage[] = _("Arroja esferas al \nrival de 2 a 5 veces.");
static const u8 sMoveFourLineDescription_LeechLife[] = _("Absorbe la mitad del \ndaño producido.");
static const u8 sMoveFourLineDescription_LovelyKiss[] = _("Pide un beso con una \ncara que asusta y \nadormece.");
static const u8 sMoveFourLineDescription_SkyAttack[] = _("1.º: busca punto flaco.\n2.º: va a por él.");
static const u8 sMoveFourLineDescription_Transform[] = _("Modifica las células \ndel rival y lo clona.");
static const u8 sMoveFourLineDescription_Bubble[] = _("Usa burbujas para \nintentar bajar la \nVelocidad.");
static const u8 sMoveFourLineDescription_DizzyPunch[] = _("Puño repetitivo que \npuede causar \nconfusión.");
static const u8 sMoveFourLineDescription_Spore[] = _("Esparce esporas que \ninducen al sueño.");
static const u8 sMoveFourLineDescription_Flash[] = _("Ciega con un \nfogonazo de luz y \nbaja la Precisión.");
static const u8 sMoveFourLineDescription_Psywave[] = _("Ataque con onda \npsíquica de \nintensidad variable.");
static const u8 sMoveFourLineDescription_Splash[] = _("No tiene ningún \nefecto. Sólo salpica.");
static const u8 sMoveFourLineDescription_AcidArmor[] = _("Te hace líquido y \naumenta bastante tu \nDefensa.");
static const u8 sMoveFourLineDescription_Crabhammer[] = _("Pinza con fuerza y \nsuele dar un golpe \ncrítico.");
static const u8 sMoveFourLineDescription_Explosion[] = _("Causa mucho daño, \npero te debilita.");
static const u8 sMoveFourLineDescription_FurySwipes[] = _("Araña rápidamente de\n2 a 5 veces.");
static const u8 sMoveFourLineDescription_Bonemerang[] = _("Lanza un hueso a \nmodo de bumerán, que \nda 2 veces.");
static const u8 sMoveFourLineDescription_Rest[] = _("Te duerme durante 2 \nturnos para curarte \ntotalmente.");
static const u8 sMoveFourLineDescription_RockSlide[] = _("Lanza grandes \npedruscos. Puede \ncausar retroceso.");
static const u8 sMoveFourLineDescription_HyperFang[] = _("Ataque con finos \ncolmillos. Puede \ncausar retroceso.");
static const u8 sMoveFourLineDescription_Sharpen[] = _("Mejora el Ataque de \nquien lo usa.");
static const u8 sMoveFourLineDescription_Conversion[] = _("Cambia tu tipo por el \ntipo de un ataque \nconocido.");
static const u8 sMoveFourLineDescription_TriAttack[] = _("Dispara 3 tipos de \nrayos a la vez.");
static const u8 sMoveFourLineDescription_SuperFang[] = _("Finos colmillos que \nbajan a la mitad los \nPS del rival.");
static const u8 sMoveFourLineDescription_Slash[] = _("Acuchilla con pinzas, \netc. Suele dar un \ngolpe crítico.");
static const u8 sMoveFourLineDescription_Substitute[] = _("Crea un señuelo con \n1/4 de tus PS \nmáximos.");
static const u8 sMoveFourLineDescription_Struggle[] = _("Sólo se usa al \nacabarse los PP. Te \nhiere un poco.");
static const u8 sMoveFourLineDescription_Sketch[] = _("Copia siempre el \núltimo ataque del \nrival.");
static const u8 sMoveFourLineDescription_TripleKick[] = _("Patea 3 veces \nseguidas y cada vez \nmás fuerte.");
static const u8 sMoveFourLineDescription_Thief[] = _("Puede quitarle al \nrival el objeto que \nlleve.");
static const u8 sMoveFourLineDescription_SpiderWeb[] = _("Enreda al rival para \nevitar que huya o \npida el relevo.");
static const u8 sMoveFourLineDescription_MindReader[] = _("Adivina el ataque del \notro y actúa en \nconsecuencia.");
static const u8 sMoveFourLineDescription_Nightmare[] = _("El rival dormido \npierde 1/4 de PS por \nturno.");
static const u8 sMoveFourLineDescription_FlameWheel[] = _("Ataque de fuego que \npuede causar \nquemaduras.");
static const u8 sMoveFourLineDescription_Snore[] = _("Fuerte ronquido que \npuede usarse \nestando dormido.");
static const u8 sMoveFourLineDescription_Curse[] = _("En el tipo Fantasma \ntiene un efecto \ndistinto.");
static const u8 sMoveFourLineDescription_Flail[] = _("Causa un daño mayor \nsi tienes pocos PS.");
static const u8 sMoveFourLineDescription_Conversion2[] = _("Tu tipo se hace \nresistente al último \ntipo de ataque.");
static const u8 sMoveFourLineDescription_Aeroblast[] = _("Lanza un chorro de \naire que suele dar un \ngolpe crítico.");
static const u8 sMoveFourLineDescription_CottonSpore[] = _("Le pega esporas al \nrival para reducir su \nVelocidad.");
static const u8 sMoveFourLineDescription_Reversal[] = _("Si tienes pocos PS, el \ndaño que causa es \nmucho mayor.");
static const u8 sMoveFourLineDescription_Spite[] = _("Baja con rencor PP \ndel último ataque \nrecibido.");
static const u8 sMoveFourLineDescription_PowderSnow[] = _("Lanza una nevada que\npuede llegar a \ncongelar.");
static const u8 sMoveFourLineDescription_Protect[] = _("Frena ataques, pero \npuede fallar si se \nusa sin cesar.");
static const u8 sMoveFourLineDescription_MachPunch[] = _("Puñetazo que se da \nrápido para golpear \nprimero.");
static const u8 sMoveFourLineDescription_ScaryFace[] = _("Asusta al enemigo \npara bajarle \nVelocidad.");
static const u8 sMoveFourLineDescription_FaintAttack[] = _("Acerca al enemigo \npara que el golpe no \nfalle.");
static const u8 sMoveFourLineDescription_SweetKiss[] = _("Pide un beso con \ndulzura y suele \ncausar confusión.");
static const u8 sMoveFourLineDescription_BellyDrum[] = _("Reduce tus PS para \nmejorar el Ataque.");
static const u8 sMoveFourLineDescription_SludgeBomb[] = _("Explosión de lodo que\npuede llegar a \nenvenenar.");
static const u8 sMoveFourLineDescription_MudSlap[] = _("Echa lodo en la cara \npara bajar la \nPrecisión.");
static const u8 sMoveFourLineDescription_Octazooka[] = _("Dispara tinta para \natacar y bajar la \nPrecisión.");
static const u8 sMoveFourLineDescription_Spikes[] = _("Riega púas que hieren\nsi el rival pide el \nrelevo.");
static const u8 sMoveFourLineDescription_ZapCannon[] = _("No es certero, pero \ncausa parálisis si \natina.");
static const u8 sMoveFourLineDescription_Foresight[] = _("Anula los intentos \ndel rival de aumentar \nla Evasión.");
static const u8 sMoveFourLineDescription_DestinyBond[] = _("Si te debilitas, el \nenemigo se debilita \ncontigo.");
static const u8 sMoveFourLineDescription_PerishSong[] = _("A los 3 turnos del \ncanto, caen rival y \natacante.");
static const u8 sMoveFourLineDescription_IcyWind[] = _("Ataque helado que \nbaja la Velocidad.");
static const u8 sMoveFourLineDescription_Detect[] = _("Frena ataques, pero \npuede fallar si se \nusa sin parar.");
static const u8 sMoveFourLineDescription_BoneRush[] = _("Hueso en ristre, \naporrea al enemigo de\n2 a 5 veces.");
static const u8 sMoveFourLineDescription_LockOn[] = _("Fija el blanco para \nque el siguiente \nataque no falle.");
static const u8 sMoveFourLineDescription_Outrage[] = _("Embestida que dura 2 \nó 3 turnos y te \nconfunde.");
static const u8 sMoveFourLineDescription_Sandstorm[] = _("Tormenta de arena \nque dura varios \nturnos.");
static const u8 sMoveFourLineDescription_GigaDrain[] = _("Absorbe la mitad del \ndaño producido.");
static const u8 sMoveFourLineDescription_Endure[] = _("Resiste el ataque de \n1 turno y deja al \nmenos 1 PS.");
static const u8 sMoveFourLineDescription_Charm[] = _("Engatusa al rival y \nreduce bastante su \nAtaque.");
static const u8 sMoveFourLineDescription_Rollout[] = _("Ataque de 5 turnos, \ncon fuerza cada vez \nmayor.");
static const u8 sMoveFourLineDescription_FalseSwipe[] = _("Deja al enemigo con \nal menos 1 PS.");
static const u8 sMoveFourLineDescription_Swagger[] = _("Provoca confusión, \npero también sube el \nAtaque.");
static const u8 sMoveFourLineDescription_MilkDrink[] = _("Restaura hasta la \nmitad de tus PS \nmáximos.");
static const u8 sMoveFourLineDescription_Spark[] = _("Ataque eléctrico que \npuede llegar a \nparalizar.");
static const u8 sMoveFourLineDescription_FuryCutter[] = _("Crece en intensidad \nsi se usa repetidas \nveces.");
static const u8 sMoveFourLineDescription_SteelWing[] = _("Alas rígidas que \ngolpean al rival.");
static const u8 sMoveFourLineDescription_MeanLook[] = _("Mal de ojo que impide \nal rival huir o pedir \nel relevo.");
static const u8 sMoveFourLineDescription_Attract[] = _("Reduce la posibilidad\nde que el enemigo \nataque.");
static const u8 sMoveFourLineDescription_SleepTalk[] = _("Mientras duerme, usa \nun ataque elegido al \nazar.");
static const u8 sMoveFourLineDescription_HealBell[] = _("Repicar que cura los \nproblemas de estado.");
static const u8 sMoveFourLineDescription_Return[] = _("Ataque que aumenta \nsus efectos con la \namistad.");
static const u8 sMoveFourLineDescription_Present[] = _("Regalo con forma de \nbomba. Puede que \nrestaure los PS.");
static const u8 sMoveFourLineDescription_Frustration[] = _("Es más fuerte si no \nse aprecia al \nEntrenador.");
static const u8 sMoveFourLineDescription_Safeguard[] = _("Fuerza mística que \nevita problemas de \nestado.");
static const u8 sMoveFourLineDescription_PainSplit[] = _("Une tus PS a los del \nrival y los reparte \npor igual.");
static const u8 sMoveFourLineDescription_SacredFire[] = _("Fuego místico que \npuede causar \nquemaduras.");
static const u8 sMoveFourLineDescription_Magnitude[] = _("Sacudida sísmica de \nintensidad variable.");
static const u8 sMoveFourLineDescription_DynamicPunch[] = _("No es certero, pero \ncausa confusión si \natina.");
static const u8 sMoveFourLineDescription_Megahorn[] = _("Violenta embestida \ncon retorcidos \ncuernos.");
static const u8 sMoveFourLineDescription_DragonBreath[] = _("Fuerte ráfaga de \naliento que golpea al \nenemigo.");
static const u8 sMoveFourLineDescription_BatonPass[] = _("Cambia de compañero \ny mantiene los \nestados.");
static const u8 sMoveFourLineDescription_Encore[] = _("El rival repite el \núltimo ataque de 2 a \n6 veces.");
static const u8 sMoveFourLineDescription_Pursuit[] = _("Hace mucho daño al \nrival que pide el \nrelevo.");
static const u8 sMoveFourLineDescription_RapidSpin[] = _("Ataque corporal \ngiratorio de gran \nvelocidad.");
static const u8 sMoveFourLineDescription_SweetScent[] = _("Engatusa al rival \npara reducir su \nEvasión.");
static const u8 sMoveFourLineDescription_IronTail[] = _("Ataca con una cola \nférrea y puede bajar \nla Defensa.");
static const u8 sMoveFourLineDescription_MetalClaw[] = _("Ataque con garra que \npuede aumentar tu \nAtaque.");
static const u8 sMoveFourLineDescription_VitalThrow[] = _("Lleva su tiempo, pero \nno falla.");
static const u8 sMoveFourLineDescription_MorningSun[] = _("Restaura PS. La \ncantidad varía según\nel clima.");
static const u8 sMoveFourLineDescription_Synthesis[] = _("Restaura PS. La \ncantidad varía según\nel clima.");
static const u8 sMoveFourLineDescription_Moonlight[] = _("Restaura PS. La \ncantidad varía según\nel clima.");
static const u8 sMoveFourLineDescription_HiddenPower[] = _("Su eficacia varía \nsegún el agresor.");
static const u8 sMoveFourLineDescription_CrossChop[] = _("Corte doble que suele\npropinar un golpe \ncrítico.");
static const u8 sMoveFourLineDescription_Twister[] = _("Crea un violento \ntornado para hacer \ntrizas al rival.");
static const u8 sMoveFourLineDescription_RainDance[] = _("Refuerza los ataques\nde tipo Agua durante \n5 turnos.");
static const u8 sMoveFourLineDescription_SunnyDay[] = _("Sube los ataques de \ntipo Fuego durante 5 \nturnos.");
static const u8 sMoveFourLineDescription_Crunch[] = _("Tritura con finos \ncolmillos y puede \nbajar la Def. Esp.");
static const u8 sMoveFourLineDescription_MirrorCoat[] = _("Responde a un Ataque\nEspecial con doble \nfuerza.");
static const u8 sMoveFourLineDescription_PsychUp[] = _("Copia los efectos del\nrival y te los \nadjudica.");
static const u8 sMoveFourLineDescription_ExtremeSpeed[] = _("Ataque \nextremadamente \nrápido y demoledor.");
static const u8 sMoveFourLineDescription_AncientPower[] = _("Puede subir todas las\ncaracterísticas.");
static const u8 sMoveFourLineDescription_ShadowBall[] = _("Lanza una bola negra \nque puede bajar la \nDef. Esp.");
static const u8 sMoveFourLineDescription_FutureSight[] = _("Aumenta la energía \ninterior para golpear\na los 2 turnos.");
static const u8 sMoveFourLineDescription_RockSmash[] = _("Ataque de fuerza \nbrutal que puede \nbajar la Defensa.");
#if defined(BATTLE_ENGINE) && B_BINDING_TURNS >= GEN_5
static const u8 sMoveFourLineDescription_Whirlpool[] = _("Atrapa y daña al rival\nde 2 a 5 turnos con \nun torbellino.");
#else
static const u8 sMoveFourLineDescription_Whirlpool[] = _("Atrapa y daña al rival\nde 2 a 5 turnos con \nun torbellino.");
#endif
static const u8 sMoveFourLineDescription_BeatUp[] = _("Ataque de todo el \nequipo Pokémon.");
static const u8 sMoveFourLineDescription_FakeOut[] = _("Ataca primero en un \nturno y puede causar \nretroceso.");
static const u8 sMoveFourLineDescription_Uproar[] = _("Alborota de 2 a 5 \nturnos. Mantiene \ndespierto.");
static const u8 sMoveFourLineDescription_Stockpile[] = _("Recarga energía \nhasta 3 veces.");
static const u8 sMoveFourLineDescription_SpitUp[] = _("Libera energía \nacumulada. Cuanta \nmás, mejor.");
static const u8 sMoveFourLineDescription_Swallow[] = _("Absorbe energía \nacumulada y restaura\nPS.");
static const u8 sMoveFourLineDescription_HeatWave[] = _("Exhala un vaho ígneo \nque puede quemar al \nrival.");
static const u8 sMoveFourLineDescription_Hail[] = _("Tormenta de granizo \nque golpea en cada \nturno.");
static const u8 sMoveFourLineDescription_Torment[] = _("Agobia e impide el uso\nreiterado de un \nataque.");
static const u8 sMoveFourLineDescription_Flatter[] = _("Confunde al rival, \npero sube su At. Esp.");
static const u8 sMoveFourLineDescription_WillOWisp[] = _("Fuego muy intenso \nque produce \nquemaduras.");
static const u8 sMoveFourLineDescription_Memento[] = _("Baja las habilidades \ndel rival y te fulmina.");
static const u8 sMoveFourLineDescription_Facade[] = _("Potencia el Ataque al\nestar quemado, \nparaliz. o enven.");
static const u8 sMoveFourLineDescription_FocusPunch[] = _("Es tardío, pero si el \nrival te golpea no te \nmoverás.");
static const u8 sMoveFourLineDescription_SmellingSalt[] = _("Afecta a rivales \nparaliza- dos, pero \ntambién los cura.");
static const u8 sMoveFourLineDescription_FollowMe[] = _("Llama la atención \npara concentrar los \nataques.");
static const u8 sMoveFourLineDescription_NaturePower[] = _("El tipo de ataque \nvaría según el sitio.");
static const u8 sMoveFourLineDescription_Charge[] = _("Recarga energía y \nsube el ataque \neléctrico posterior.");
static const u8 sMoveFourLineDescription_Taunt[] = _("Hace que el rival solo\nuse ataques.");
static const u8 sMoveFourLineDescription_HelpingHand[] = _("Refuerza los \nmovimientos del \nreceptor.");
static const u8 sMoveFourLineDescription_Trick[] = _("Engaña al rival y \nprovoca un cambio de \nobjeto.");
static const u8 sMoveFourLineDescription_RolePlay[] = _("Imita al rival y copia \nsu Habilidad \nEspecial.");
static const u8 sMoveFourLineDescription_Wish[] = _("Lleva tiempo, pero \ncumple el deseo de \nrestaurar PS.");
static const u8 sMoveFourLineDescription_Assist[] = _("Ataque elegido al \nazar de un miembro \ndel equipo.");
static const u8 sMoveFourLineDescription_Ingrain[] = _("Echa raíces para \nrecuperar PS, pero \nimpide el relevo.");
static const u8 sMoveFourLineDescription_Superpower[] = _("Aumenta mucho la \nfuerza, pero las \nhabilidades bajan.");
static const u8 sMoveFourLineDescription_MagicCoat[] = _("El agresor recibe el \nreflejo de los \nefectos especiales.");
static const u8 sMoveFourLineDescription_Recycle[] = _("Recicla un objeto \nusado para utilizarlo\nde nuevo.");
static const u8 sMoveFourLineDescription_Revenge[] = _("Ataque que gana \nfuerza si el enemigo \nte hiere.");
static const u8 sMoveFourLineDescription_BrickBreak[] = _("Destruye barreras \ncomo Reflejo y causa \ndaño.");
static const u8 sMoveFourLineDescription_Yawn[] = _("Provoca el bostezo y \ndespués el sueño.");
static const u8 sMoveFourLineDescription_KnockOff[] = _("Deja al rival \ndesprovisto del \nobjeto que lleva.");
static const u8 sMoveFourLineDescription_Endeavor[] = _("Gana fuerza si el \natacante tiene menos\nPS que el rival.");
static const u8 sMoveFourLineDescription_Eruption[] = _("Cuanto mayor sea el \nnúmero de tus PS, más \ndaño harás.");
static const u8 sMoveFourLineDescription_SkillSwap[] = _("Intercambia la \nhabilidad especial \ncon otro Pokémon.");
static const u8 sMoveFourLineDescription_Imprison[] = _("Impide al rival usar \nataques que tú \nconoces.");
static const u8 sMoveFourLineDescription_Refresh[] = _("Cura \nenvenenamientos, \nparálisis y \nquemaduras.");
static const u8 sMoveFourLineDescription_Grudge[] = _("Si te debilitas, borra \nlos PP del último \nataque del rival.");
static const u8 sMoveFourLineDescription_Snatch[] = _("Roba el efecto del \nataque que el \nobjetivo use \ndespués.");
static const u8 sMoveFourLineDescription_SecretPower[] = _("Los efectos de este \nataque varían según \nla zona.");
static const u8 sMoveFourLineDescription_Dive[] = _("1.{SUPER_ER} turno: \nbucea. 2.º: golpea.");
static const u8 sMoveFourLineDescription_ArmThrust[] = _("Se dan puñetazos \ndirectos de 2 a 5 \nveces.");
static const u8 sMoveFourLineDescription_Camouflage[] = _("Modifica el tipo del \nPokémon según la \nzona donde esté.");
static const u8 sMoveFourLineDescription_TailGlow[] = _("Ráfaga de luz que \nsube muchísimo el At.\nEsp.");
static const u8 sMoveFourLineDescription_LusterPurge[] = _("Fogonazo de luz que \npuede bajar la Def. \nEsp.");
static const u8 sMoveFourLineDescription_MistBall[] = _("Banco de niebla que \npuede bajar el At. \nEsp.");
static const u8 sMoveFourLineDescription_FeatherDance[] = _("Envuelve al rival con \nplumón para reducir \nsu Ataque.");
static const u8 sMoveFourLineDescription_TeeterDance[] = _("Confunde a todos los \nPokémon que hay en \nescena.");
static const u8 sMoveFourLineDescription_BlazeKick[] = _("Suele ser un golpe \ncrítico y causar \nquemaduras.");
static const u8 sMoveFourLineDescription_MudSport[] = _("Te cubre de lodo y \nmejora tu \nresistencia \neléctrica.");
static const u8 sMoveFourLineDescription_IceBall[] = _("Dura 5 turnos y gana \nfuerza en cada uno.");
static const u8 sMoveFourLineDescription_NeedleArm[] = _("Pega con brazos de \npinchos y puede \ncausar retroceso.");
static const u8 sMoveFourLineDescription_SlackOff[] = _("Te relaja y restaura \nla mitad de los PS \nmáximos.");
static const u8 sMoveFourLineDescription_HyperVoice[] = _("Ondas sonoras de \nalta frecuencia que \nhieren.");
static const u8 sMoveFourLineDescription_PoisonFang[] = _("Incisivos colmillos \nque pueden \nenvenenar al rival.");
static const u8 sMoveFourLineDescription_CrushClaw[] = _("Hace trizas al \nenemigo y puede \nbajar la Defensa.");
static const u8 sMoveFourLineDescription_BlastBurn[] = _("Es muy eficaz, pero te\ninmoviliza 1 turno.");
static const u8 sMoveFourLineDescription_HydroCannon[] = _("Es muy eficaz, pero te\ninmoviliza 1 turno.");
static const u8 sMoveFourLineDescription_MeteorMash[] = _("Impacta como un \nmeteorito y suele \nsubir el Ataque.");
static const u8 sMoveFourLineDescription_Astonish[] = _("Impresiona tanto que\npuede hacer \nretroceder al rival.");
static const u8 sMoveFourLineDescription_WeatherBall[] = _("El tipo y fuerza del \nataque varían según \nel clima.");
static const u8 sMoveFourLineDescription_Aromatherapy[] = _("Cura todos los \nproblemas de estado \ncon un suave aroma.");
static const u8 sMoveFourLineDescription_FakeTears[] = _("Lágrimas de cocodrilo\nque bajan mucho la \nDef. Esp.");
static const u8 sMoveFourLineDescription_AirCutter[] = _("Viento cortante que \nazota. Suele ser un \ngolpe crítico.");
static const u8 sMoveFourLineDescription_Overheat[] = _("Ataque en toda regla \nque baja mucho tu At.\nEsp.");
static const u8 sMoveFourLineDescription_OdorSleuth[] = _("Anula los intentos \ndel rival por \naumentar la Evasión.");
static const u8 sMoveFourLineDescription_RockTomb[] = _("Tira rocas al rival, lo \npara y le baja la \nVelocidad.");
static const u8 sMoveFourLineDescription_SilverWind[] = _("Partículas de plata \nque quizá suban las \nhabilidades.");
static const u8 sMoveFourLineDescription_MetalSound[] = _("Tremendo chirrido \nque baja mucho la \nDef. Esp.");
static const u8 sMoveFourLineDescription_GrassWhistle[] = _("Agradable melodía \nque adormece al rival.");
static const u8 sMoveFourLineDescription_Tickle[] = _("Hace reír para bajar \nel Ataque y la \nDefensa.");
static const u8 sMoveFourLineDescription_CosmicPower[] = _("Sube la Defensa y la \nDef. Esp. con energía\nmística.");
static const u8 sMoveFourLineDescription_WaterSpout[] = _("Si tienes muchos PS, \nel daño que causa es \nmucho mayor.");
static const u8 sMoveFourLineDescription_SignalBeam[] = _("Extraño ataque con \nrayo. Puede causar \nconfusión.");
static const u8 sMoveFourLineDescription_ShadowPunch[] = _("Puñetazo ineludible \nprocedente de las \nsombras.");
static const u8 sMoveFourLineDescription_Extrasensory[] = _("Energía muy extraña \nque puede causar \nretroceso.");
static const u8 sMoveFourLineDescription_SkyUppercut[] = _("Gancho ascendente \nde gran ímpetu.");
#if defined(BATTLE_ENGINE) && B_BINDING_TURNS >= GEN_5
static const u8 sMoveFourLineDescription_SandTomb[] = _("Enreda en un remolino\nde arena de 2 a 5 \nturnos.");
#else
static const u8 sMoveFourLineDescription_SandTomb[] = _("Enreda en un remolino\nde arena de 2 a 5 \nturnos.");
#endif
static const u8 sMoveFourLineDescription_SheerCold[] = _("Ataque polar que \ndebilita al rival si le \nalcanza.");
static const u8 sMoveFourLineDescription_MuddyWater[] = _("Ataque con agua \nlodosa que puede \nbajar la Precisión.");
static const u8 sMoveFourLineDescription_BulletSeed[] = _("Dispara de 2 a 5 \nráfagas \nconsecutivas de \nsemillas.");
static const u8 sMoveFourLineDescription_AerialAce[] = _("Ataque \ntremendamente \nrápido e ineludible.");
static const u8 sMoveFourLineDescription_IcicleSpear[] = _("Ataca lanzando de 2 a\n5 ráfagas de \ncarámbanos.");
static const u8 sMoveFourLineDescription_IronDefense[] = _("Te fortalece y sube \nmucho la Defensa.");
static const u8 sMoveFourLineDescription_Block[] = _("Le corta el paso al \nrival para que no \npueda escapar.");
static const u8 sMoveFourLineDescription_Howl[] = _("Aullido que sube el \nánimo y aumenta el \nAtaque.");
static const u8 sMoveFourLineDescription_DragonClaw[] = _("Araña al rival con \ngarras afiladas.");
static const u8 sMoveFourLineDescription_FrenzyPlant[] = _("Es eficaz, pero deja \ninmóvil al agresor 1 \nturno.");
static const u8 sMoveFourLineDescription_BulkUp[] = _("Robustece el cuerpo \npara subir Ataque y \nDefensa.");
static const u8 sMoveFourLineDescription_Bounce[] = _("1.{SUPER_ER} turno: \nbota. 2.º: golpea. \nPuede paralizar.");
static const u8 sMoveFourLineDescription_MudShot[] = _("Dispara lodo al rival \ny reduce su \nVelocidad.");
static const u8 sMoveFourLineDescription_PoisonTail[] = _("Puede envenenar y \ndar un golpe crítico.");
static const u8 sMoveFourLineDescription_Covet[] = _("Pide con ternura al \nrival el objeto que \nlleve.");
static const u8 sMoveFourLineDescription_VoltTackle[] = _("Placaje de alto \nriesgo que hiere un \npoco al atacante.");
static const u8 sMoveFourLineDescription_MagicalLeaf[] = _("Ataca con una \nextraña hoja que no \nse puede esquivar.");
static const u8 sMoveFourLineDescription_WaterSport[] = _("Te moja para que \nresistas más los \nataques de fuego.");
static const u8 sMoveFourLineDescription_CalmMind[] = _("Sube el At. Esp. y la \nDef. Esp. con \nconcentración.");
static const u8 sMoveFourLineDescription_LeafBlade[] = _("Acuchilla con una \nhoja fina. Suele dar \nun golpe crítico.");
static const u8 sMoveFourLineDescription_DragonDance[] = _("Danza mística que \nsube el Ataque y la \nVelocidad.");
static const u8 sMoveFourLineDescription_RockBlast[] = _("Lanza pedruscos al \nrival de 2 a 5 veces \nconsecutivas.");
static const u8 sMoveFourLineDescription_ShockWave[] = _("Ataque eléctrico muy \nrápido e ineludible.");
static const u8 sMoveFourLineDescription_WaterPulse[] = _("Ondas ultrasónicas \nque pueden confundir\nal rival.");
static const u8 sMoveFourLineDescription_DoomDesire[] = _("Concentra intensa \nluz solar y ataca 2 \nturnos después.");
static const u8 sMoveFourLineDescription_PsychoBoost[] = _("Es tremendamente \npotente, pero baja \nmucho el At. Esp.");

#endif

#ifdef BATTLE_ENGINE
static const u8 sMoveFourLineDescription_Roost[] = _("Recupera hasta la \nmitad de los PS del \nusuario.");
static const u8 sMoveFourLineDescription_Gravity[] = _("Intensifica la \ngravedad, negando \nvuelo y levitación.");
static const u8 sMoveFourLineDescription_MiracleEye[] = _("Hace a los Siniestros\ny evasivos fáciles de\nver.");
static const u8 sMoveFourLineDescription_WakeUpSlap[] = _("Poderoso contra \ndormidos, pero \ntambién los \ndespierta.");
static const u8 sMoveFourLineDescription_HammerArm[] = _("Un gran puñetazo que\nbaja la Velocidad del \nusuario.");
static const u8 sMoveFourLineDescription_GyroBall[] = _("Un giro rápido que \nhace más daño a \nrivales más rápidos.");
static const u8 sMoveFourLineDescription_HealingWish[] = _("El usuario se debilita\ny sana al siguiente \nque sale.");
static const u8 sMoveFourLineDescription_Brine[] = _("Hace doble de daño al\nque tiene la mitad de \nlos PS.");
static const u8 sMoveFourLineDescription_NaturalGift[] = _("Su poder varía en \nfunción de la Baya \nequipada.");
static const u8 sMoveFourLineDescription_Feint[] = _("Golpea a usuarios de \nmovimientos \nprotectores.");
static const u8 sMoveFourLineDescription_Pluck[] = _("Se come la Baya del \nrival, adquiriendo sus\nefectos.");
static const u8 sMoveFourLineDescription_Tailwind[] = _("Levanta un aire \nturbulento que sube \nla Velocidad.");
static const u8 sMoveFourLineDescription_Acupressure[] = _("Sube mucho una de las\nestadísticas al azar.");
static const u8 sMoveFourLineDescription_MetalBurst[] = _("Reprime cualquier \ngolpe con un gran \npoder.");
static const u8 sMoveFourLineDescription_CloseCombat[] = _("Un fuerte ataque que\nbaja las defensas.");
static const u8 sMoveFourLineDescription_Payback[] = _("Gana potencia si el \nusuario ataca el \núltimo este turno.");
static const u8 sMoveFourLineDescription_Assurance[] = _("Gana potencia si el \nenemigo ha sido \nherido este turno.");
static const u8 sMoveFourLineDescription_Embargo[] = _("Impide que el enemigo\nuse objetos.");
static const u8 sMoveFourLineDescription_Fling[] = _("Su poder varía en \nfunción del objeto \nequipado.");
static const u8 sMoveFourLineDescription_PsychoShift[] = _("Transfiere el estado \nalterado al enemigo.");
static const u8 sMoveFourLineDescription_TrumpCard[] = _("Cuantos menos PP \ntenga, más daño hace.");
static const u8 sMoveFourLineDescription_HealBlock[] = _("Impide que el enemigo\nrecupere PS.");
static const u8 sMoveFourLineDescription_WringOut[] = _("Hace más daño a más \naltos sean los PS del \nenemigo.");
static const u8 sMoveFourLineDescription_PowerTrick[] = _("Intercambia el \nAtaque y la Defensa \ndel usuario.");
static const u8 sMoveFourLineDescription_GastroAcid[] = _("Anula la habilidad del\nenemigo con jugo \ngástrico.");
static const u8 sMoveFourLineDescription_LuckyChant[] = _("Impide recibir golpes\ncríticos por 5 \nturnos.");
static const u8 sMoveFourLineDescription_MeFirst[] = _("Ejecuta el \nmovimiento del \nenemigo con más \npoder.");
static const u8 sMoveFourLineDescription_Copycat[] = _("Copia el último \nmovimiento usado por \nel enemigo.");
static const u8 sMoveFourLineDescription_PowerSwap[] = _("Modifica cambios de \nAt. y y At. Esp. con el \nenemigo.");
static const u8 sMoveFourLineDescription_GuardSwap[] = _("Modifica cambios de \nDef. y y Def. Esp. con \nel enemigo.");
static const u8 sMoveFourLineDescription_Punishment[] = _("Hace más daño si el \nenemigo tiene \nestadísticas \nsubidas.");
static const u8 sMoveFourLineDescription_LastResort[] = _("Solo puede usarse si \nse ha usado los demás\nmovimientos.");
static const u8 sMoveFourLineDescription_WorrySeed[] = _("Cambia la habilidad \ndel objetivo a \nInsomnio.");
static const u8 sMoveFourLineDescription_SuckerPunch[] = _("Golpea primero si el \nenemigo prepara un \nataque.");
static const u8 sMoveFourLineDescription_ToxicSpikes[] = _("Esparce púas que \nenvenenan a los \nPokémon que entran.");
static const u8 sMoveFourLineDescription_HeartSwap[] = _("Intercambia los \ncambios de \nestadísticas con el \nenemigo.");
static const u8 sMoveFourLineDescription_AquaRing[] = _("Creo un velo acuoso \nque restaura PS.");
static const u8 sMoveFourLineDescription_MagnetRise[] = _("El usuario levita \ngracias al \nelectromagnetismo.");
static const u8 sMoveFourLineDescription_FlareBlitz[] = _("Embestida que puede \nquemar al enemigo. \nTamabién hiere.");
static const u8 sMoveFourLineDescription_ForcePalm[] = _("Palmada rápida que \npuede paralizar al \nenemigo.");
static const u8 sMoveFourLineDescription_AuraSphere[] = _("Esfera imbuida en \naura totalmente \nineludible.");
static const u8 sMoveFourLineDescription_RockPolish[] = _("Pule el cuerpo para \nsubir mucho la \nVelocidad.");
static const u8 sMoveFourLineDescription_PoisonJab[] = _("Ataque punzante que \npuede envenenar al \nenemigo.");
static const u8 sMoveFourLineDescription_DarkPulse[] = _("Ataca con un aura \noscura. Puede causar \nretroceso.");
static const u8 sMoveFourLineDescription_NightSlash[] = _("Tiene alta \npropabilidad de golpe\ncrítico.");
static const u8 sMoveFourLineDescription_AquaTail[] = _("Balancea la cola como\nuna ola para atacar.");
static const u8 sMoveFourLineDescription_SeedBomb[] = _("Bombardea al enemigo \ncon una gran semilla.");
static const u8 sMoveFourLineDescription_AirSlash[] = _("Ataca con un hoja \nvoladora. Puede \nhacer retroceder.");
static const u8 sMoveFourLineDescription_XScissor[] = _("Corta al enemigo con \ncuchillas, guadañas, \netc.");
static const u8 sMoveFourLineDescription_BugBuzz[] = _("Una gran onda sonora \nque puede bajar la \nDef. Esp.");
static const u8 sMoveFourLineDescription_DragonPulse[] = _("Genera una onda de \nchoque para dañar al \nenemigo.");
static const u8 sMoveFourLineDescription_DragonRush[] = _("Una gran carga \nviolenta. Puede hacer\nretroceder.");
static const u8 sMoveFourLineDescription_PowerGem[] = _("Ataca con rayos de \nluz que brillan como \ndiamantes.");
static const u8 sDrainPunchDescription[] = _("Puño contundente\nrecupera la mitad\nde los PS del\ndaño que inflige.");
static const u8 sMoveFourLineDescription_VacuumWave[] = _("Gira sus puños para \nlanzar ondas que \ngolpean primero.");
static const u8 sMoveFourLineDescription_FocusBlast[] = _("Ataque a plena \npotencia. Puede \nbajar la Def. Esp.");
static const u8 sMoveFourLineDescription_EnergyBall[] = _("Ataca con poder \nnatural. Puede bajar \nla Def. Esp.");
static const u8 sMoveFourLineDescription_BraveBird[] = _("Carga de baja altitud\nque hiere también al \nusuario.");
static const u8 sMoveFourLineDescription_EarthPower[] = _("Provoca una gran \nerupción. Puede bajar\nla Def. Esp.");
static const u8 sMoveFourLineDescription_Switcheroo[] = _("Intercambia objetos \ncon el enemigo \nrápidamente.");
static const u8 sMoveFourLineDescription_NastyPlot[] = _("Piensa cosas \nmaléficas y sube \nmucho el At. Esp.");
static const u8 sMoveFourLineDescription_BulletPunch[] = _("Golpea con un puño \nmuy veloz. Siempre va \nprimero.");
static const u8 sMoveFourLineDescription_IceShard[] = _("Lanza un trozo de \nhielo que siempre va \nprimero.");
static const u8 sMoveFourLineDescription_ShadowClaw[] = _("Golpea con una garra \numbría. Probabilidad \nde crítico.");
static const u8 sMoveFourLineDescription_ThunderFang[] = _("Puede hacer \nretroceder o \nparalizar al enemigo.");
static const u8 sMoveFourLineDescription_IceFang[] = _("Puede hacer \nretroceder o \ncongelar al enemigo.");
static const u8 sMoveFourLineDescription_FireFang[] = _("Puede hacer \nretroceder o quemar \nal enemigo.");
static const u8 sMoveFourLineDescription_ShadowSneak[] = _("Golpea primero \nusando la sombra del \nusuario.");
static const u8 sMoveFourLineDescription_MudBomb[] = _("Lanza un trozo de \nbarro que baja la \nprecisión.");
static const u8 sMoveFourLineDescription_PsychoCut[] = _("Usa cuchillas \npsíquicas. \nProbabilidad de \ncrítico.");
static const u8 sMoveFourLineDescription_ZenHeadbutt[] = _("Gran cabezazo que \npuede hacer \nretroceder.");
static const u8 sMoveFourLineDescription_MirrorShot[] = _("Emite una luz \ncegadora que baja la \nprecisión.");
static const u8 sMoveFourLineDescription_FlashCannon[] = _("Lanza un golpe \nluminoso que puede \nbajar la Def. Esp.");
static const u8 sMoveFourLineDescription_RockClimb[] = _("Carga contra el \nenemigo y puede \nllegar a confundirlo.");
static const u8 sMoveFourLineDescription_Defog[] = _("Elimina obstáculos y \nbaja la evasión del \nenemigo.");
static const u8 sMoveFourLineDescription_TrickRoom[] = _("Los Pokémon lentos \nse mueven primero 5 \nturnos.");
static const u8 sMoveFourLineDescription_DracoMeteor[] = _("Lanza meteoritos al \nenemigo. Baja mucho \nel At. Esp.");
static const u8 sMoveFourLineDescription_Discharge[] = _("Electrifica a todos. \nPuede paralizarlos.");
static const u8 sMoveFourLineDescription_LavaPlume[] = _("Fuego baña a todos\nen batalla. Esto\npuede provocar\n quemaduras.");
static const u8 sMoveFourLineDescription_PowerWhip[] = _("Azota al enemigo con \nlianas o tentáculos.");
static const u8 sMoveFourLineDescription_CrossPoison[] = _("Corte que puede \nenvenenar y hacer un \ngolpe crítico.");
static const u8 sMoveFourLineDescription_GunkShot[] = _("Lanza basura al \nenemigo. También \npuede envenenar.");
static const u8 sMoveFourLineDescription_IronHead[] = _("Gran cabezazo al \nenemigo. Puede hacer \nretroceder.");
static const u8 sMoveFourLineDescription_MagnetBomb[] = _("Lanza un imán que \ngolpea al enemigo sin \nfallar.");
static const u8 sMoveFourLineDescription_StoneEdge[] = _("Apuñala con muchas \npiedras. Probabilidad\nde crítico.");
static const u8 sMoveFourLineDescription_Captivate[] = _("Baja mucho el At. Esp \ndel género opuesto.");
static const u8 sMoveFourLineDescription_StealthRock[] = _("Esparce rocas que \nhieren cuando el \nenemigo cambia.");
static const u8 sMoveFourLineDescription_GrassKnot[] = _("Un lazo que hace más \ndaño a enemigos más \npesados.");
static const u8 sMoveFourLineDescription_Chatter[] = _("Ataca con una onda \nsonora que puede \ncausar confusión.");
static const u8 sMoveFourLineDescription_BugBite[] = _("Usuario muerde a su\nenemigo. Si él\ntiene una baya,\nse la come.");
static const u8 sMoveFourLineDescription_Judgment[] = _("Su tipo varía en \nfunción de la Tabla \nequipada.");
static const u8 sMoveFourLineDescription_ChargeBeam[] = _("Un rayo eléctrico que\npuede subir el At. \nEsp.");
static const u8 sMoveFourLineDescription_WoodHammer[] = _("Gran impacto con el \ncuerpo que hiere al \nusuario.");
static const u8 sMoveFourLineDescription_AquaJet[] = _("Golpea primero \nlanzándose contra el \nenemigo.");
static const u8 sMoveFourLineDescription_AttackOrder[] = _("Los subordinados \natacan. Probabilidad \nde crítico.");
static const u8 sMoveFourLineDescription_DefendOrder[] = _("Sube Defensa y Def. \nEsp. con un escudo \nviviente.");
static const u8 sMoveFourLineDescription_HealOrder[] = _("Los subordinados \naparecen curan la \nmitad de los PS.");
static const u8 sMoveFourLineDescription_HeadSmash[] = _("Cabezazo arriesgado \nque hiere seriamente \nal usuario.");
static const u8 sMoveFourLineDescription_DoubleHit[] = _("Golpea al enemigo con\nla cola dos veces.");
static const u8 sMoveFourLineDescription_RoarOfTime[] = _("Poderoso, pero deja \ninmóvil al atacante 1 \nturno.");
static const u8 sMoveFourLineDescription_SpacialRend[] = _("Distorsiona el \nespacio. Probabilidad\nde crítico.");
static const u8 sMoveFourLineDescription_CrushGrip[] = _("Aplasta al enemigo.\nA más PS tenga,\nmás fuerte será\neste mov.");
#if B_BINDING_TURNS >= GEN_5
static const u8 sMoveFourLineDescription_MagmaStorm[] = _("Atrapa en un vórtice \nde llamas de 2 a 5 \nturnos.");
#else
static const u8 sMoveFourLineDescription_MagmaStorm[] = _("Atrapa en un vórtice \nde llamas de 2 a 5 \nturnos.");
#endif
static const u8 sMoveFourLineDescription_DarkVoid[] = _("Sume al enemigo en un\nsueño totalmente \noscuro.");
static const u8 sMoveFourLineDescription_SeedFlare[] = _("Genera una onda de \nchoque que baja \nmucho la Def. Esp.");
static const u8 sMoveFourLineDescription_OminousWind[] = _("Ataque repulsivo que \npuede subir las \nestadísticas.");
static const u8 sMoveFourLineDescription_ShadowForce[] = _("Desaparece en el \nprimer turno y golpea\nal siguiente.");
static const u8 sMoveFourLineDescription_HoneClaws[] = _("Afila las garras para \nsubir el Ataque y la \nPrecisión.");
static const u8 sMoveFourLineDescription_WideGuard[] = _("Evita ataques \nmultiobjetivo \ndurante un turno.");
static const u8 sMoveFourLineDescription_GuardSplit[] = _("Divide a partes \niguales las defensas \ncon el enemigo.");
static const u8 sMoveFourLineDescription_PowerSplit[] = _("Divide a partes \niguales el poder con \nel enemigo.");
static const u8 sMoveFourLineDescription_WonderRoom[] = _("Intercambia la \nDefensa y la Def. Esp.\ndurante 5 turnos.");
static const u8 sMoveFourLineDescription_Psyshock[] = _("Ataca con una onda \npsíquica que causa \ndaño físico.");
static const u8 sMoveFourLineDescription_TailSlap[] = _("Golpea al enemigo con\nla cola de 2 a 5 \nveces.");
static const u8 sMoveFourLineDescription_Venoshock[] = _("Hace el doble de daño\nsi el enemigo está \nenvenenado.");
static const u8 sMoveFourLineDescription_Autotomize[] = _("Se quita peso para \nsubir mucho la \nVelocidad.");
static const u8 sMoveFourLineDescription_RagePowder[] = _("Esparce polvo para \nque ataquen solo al \nusuario.");
static const u8 sMoveFourLineDescription_Telekinesis[] = _("El enemigo flota 3 \nturnos y es más fácil \nde golpear.");
static const u8 sMoveFourLineDescription_MagicRoom[] = _("Los objetos \nequipados no \nfuncionan durante 5 \nturnos.");
static const u8 sMoveFourLineDescription_SmackDown[] = _("Lanza una roca y \ntumba al enemigo en \nel suelo.");
static const u8 sMoveFourLineDescription_StormThrow[] = _("Este ataque siempre \nhace un golpe \ncrítico.");
static const u8 sMoveFourLineDescription_FlameBurst[] = _("Llama abrasadora que\ngolpea a todos los \nenemigos.");
static const u8 sMoveFourLineDescription_SludgeWave[] = _("Inunda al enemigo \ncon una ola que puede\nenvenenar.");
static const u8 sMoveFourLineDescription_QuiverDance[] = _("Baila para subir At. \nEsp., Def Esp. y \nVelocidad.");
static const u8 sMoveFourLineDescription_HeavySlam[] = _("Hace más daño si el \nusuario pesa más que \nel enemigo.");
static const u8 sMoveFourLineDescription_Synchronoise[] = _("Extraña onda que \nsolo golpea a \nPokémon del mismo \ntipo.");
static const u8 sMoveFourLineDescription_ElectroBall[] = _("Daña con un orbe a \nenemigos que son más \nlentos.");
static const u8 sMoveFourLineDescription_Soak[] = _("Moja al enemigo y lo \nconvierte en tipo \nAgua.");
static const u8 sMoveFourLineDescription_FlameCharge[] = _("Cloaked in flames,\nthe user strikes.\nThis raises its\nSpeed stat.");
static const u8 sMoveFourLineDescription_Coil[] = _("Se enrrolla para \nsubir Ataque, Defensa\ny Precisión.");
static const u8 sMoveFourLineDescription_LowSweep[] = _("Golpea las piernas \npara bajar la \nVelocidad.");
static const u8 sMoveFourLineDescription_AcidSpray[] = _("Esparce un ácido \nderretido. Baja mucho\nla Def. Esp.");
static const u8 sMoveFourLineDescription_FoulPlay[] = _("Causa más daño \ncuanto más Ataque \ntenga el enemigo.");
static const u8 sMoveFourLineDescription_SimpleBeam[] = _("Un rayo que \nconvierte al enemigo \nen Simple.");
static const u8 sMoveFourLineDescription_Entrainment[] = _("El enemigo imita al \nusario, obteniendo su \nhabilidad.");
static const u8 sMoveFourLineDescription_AfterYou[] = _("Ayuda al enemigo, \nhaciendo que se \nmueva primero.");
static const u8 sMoveFourLineDescription_Round[] = _("Una canción que \ncausa daño. Los \ndemás pueden unirse.");
static const u8 sMoveFourLineDescription_EchoedVoice[] = _("A cada turno que se \nuse, hará más daño.");
static const u8 sMoveFourLineDescription_ChipAway[] = _("Golpea sin tener en \ncuenta cambios de \nestadísticas.");
static const u8 sMoveFourLineDescription_ClearSmog[] = _("Haz de luz que elimina\nlos cambios de \nestadísticas.");
static const u8 sMoveFourLineDescription_StoredPower[] = _("Más daño si el \nusuario se ha subido \nestadísticas.");
static const u8 sMoveFourLineDescription_QuickGuard[] = _("Evita ataques de \nprioridad durante 1 \nturno.");
static const u8 sMoveFourLineDescription_AllySwitch[] = _("El usuario cambia de \nlugar con su \ncompañero.");
static const u8 sMoveFourLineDescription_Scald[] = _("Lanza agua hirviendo \nal enemigo. Puede \nquemar.");
static const u8 sMoveFourLineDescription_ShellSmash[] = _("Sube estadísticas \nofensivas, pero baja \nlas defensivas.");
static const u8 sMoveFourLineDescription_HealPulse[] = _("Restaura la mitad de \nlos PS máximos del \nobjetivo.");
static const u8 sMoveFourLineDescription_Hex[] = _("Doble de daño si el \nenemigo tiene un \nproblema de estado.");
static const u8 sMoveFourLineDescription_SkyDrop[] = _("Se lleva al enemigo en\nel aire hasta el \npróximo turno.");
static const u8 sMoveFourLineDescription_ShiftGear[] = _("Gira sus mecanismos \npara subir Ataque y \nVelocidad.");
static const u8 sMoveFourLineDescription_CircleThrow[] = _("Lanza al enemigo y \ntermina el combate.");
static const u8 sMoveFourLineDescription_Incinerate[] = _("Quema Bayas y Gemas, \nimpidiendo su uso.");
static const u8 sMoveFourLineDescription_Quash[] = _("Presiona al enemigo y\nhace que se mueva el \núltimo.");
static const u8 sMoveFourLineDescription_Acrobatics[] = _("Doble de daño si el \nusuario no lleva \nningún objeto.");
static const u8 sMoveFourLineDescription_ReflectType[] = _("El usuario refleja el \ntipo del enemigo y lo \ncopia.");
static const u8 sMoveFourLineDescription_Retaliate[] = _("Hace más daño si hay \nun aliado caído en \ncombate.");
static const u8 sMoveFourLineDescription_FinalGambit[] = _("Se sacrifica para \nhacer el mismo daño \nque PS restantes.");
static const u8 sMoveFourLineDescription_Bestow[] = _("El usuario le da su \nobjeto equipado al \nenemigo.");
static const u8 sMoveFourLineDescription_Inferno[] = _("Poderoso y seguro \npara quemar, pero \nimpreciso.");
static const u8 sMoveFourLineDescription_WaterPledge[] = _("Ataca con una \ncolumna de agua. \nPuede formar \narcoíris.");
static const u8 sMoveFourLineDescription_FirePledge[] = _("Ataca con una \ncolumna de fuego. \nPuede quemar hierba.");
static const u8 sMoveFourLineDescription_GrassPledge[] = _("Ataca con una \ncolumna de hierba. \nPuede crear pantano.");
static const u8 sMoveFourLineDescription_StruggleBug[] = _("Ataca resistiendo al \nenemigo y baja el At. \nEsp.");
static const u8 sMoveFourLineDescription_Bulldoze[] = _("Pisotea el suelo con \nfuerza. Baja la \nVelocidad.");
static const u8 sMoveFourLineDescription_FrostBreath[] = _("Aliento gélido que\nsiempre es en un\ngolpe crítico.");
static const u8 sMoveFourLineDescription_DragonTail[] = _("The foe is knocked\naway, and a\ndifferent Pokémon\nis dragged out.");
static const u8 sMoveFourLineDescription_WorkUp[] = _("El usuario se \ndespierta. Sube el \nAtaque y el At. Esp.");
static const u8 sMoveFourLineDescription_Electroweb[] = _("Atrapa al enemigo en \nuna red eléctrica y \nbaja Velocidad.");
static const u8 sMoveFourLineDescription_WildCharge[] = _("Embestida eléctrica \nque también hiere al \nagresor.");
static const u8 sMoveFourLineDescription_DrillRun[] = _("Gira como un gran \ntaladro. Probabilidad\nde crítico.");
static const u8 sMoveFourLineDescription_DualChop[] = _("Ataca brutalmente y \ngolpea dos veces.");
static const u8 sMoveFourLineDescription_HeartStamp[] = _("Golpe por sorpresa \nque puede hacer \nretroceder.");
static const u8 sMoveFourLineDescription_HornLeech[] = _("A horn attack that\nabsorbs half the\ndamage it inflicted\nto restore HP.");
static const u8 sMoveFourLineDescription_SacredSword[] = _("Golpea sin tener en \ncuenta cambios de \nestadísticas.");
static const u8 sMoveFourLineDescription_RazorShell[] = _("Lanza conchas \nafiladas al enemigo y \npuede bajar Def.");
static const u8 sMoveFourLineDescription_HeatCrash[] = _("Covered in flames,\nthe user slams its\nfoe. Heavier users\ndeal more damage.");
static const u8 sMoveFourLineDescription_LeafTornado[] = _("Envuelve en hojas al \nenemigo y le baja la \nprecisión.");
static const u8 sMoveFourLineDescription_Steamroller[] = _("Embiste al enemigo \ncon todo. Puede \nhacer retroceder.");
static const u8 sMoveFourLineDescription_CottonGuard[] = _("Envuelve el cuerpo en\nalgodón y sube mucho \nDef.");
static const u8 sMoveFourLineDescription_NightDaze[] = _("Lanza una onda \noscura. Puede bajar \nla precisión.");
static const u8 sMoveFourLineDescription_Hurricane[] = _("Atrapa en un viento \nferoz que puede \nconfundir.");
static const u8 sMoveFourLineDescription_HeadCharge[] = _("Carga con toda la \ncabeza. También hiere\nal usuario.");
static const u8 sMoveFourLineDescription_GearGrind[] = _("Lanza dos engranajes\nque golpean 2 veces.");
static const u8 sMoveFourLineDescription_SearingShot[] = _("Llamas ardientes que \nabrasan todo \nalrededor del \nusuario.");
static const u8 sMoveFourLineDescription_TechnoBlast[] = _("Su tipo varía en \nfunción de la ROM \nequipada.");
static const u8 sMoveFourLineDescription_RelicSong[] = _("Ataca con una \ncanción antigua que \npuede dormir.");
static const u8 sMoveFourLineDescription_SecretSword[] = _("Corta con un cuerno \nque daña físicamente\nal enemigo.");
static const u8 sMoveFourLineDescription_Glaciate[] = _("Sopla aire frío a los \nenemigos y puede \nbajar Vel.");
static const u8 sMoveFourLineDescription_BoltStrike[] = _("Golpea con una gran \ncantidad de rayos. \nPuede paralizar.");
static const u8 sMoveFourLineDescription_BlueFlare[] = _("Envuelve al enemigo \nen una llama azul. \nPuede quemar.");
static const u8 sMoveFourLineDescription_FieryDance[] = _("Baila envuelto en \nllamas. Puede subir el\nAt. Esp.");
static const u8 sMoveFourLineDescription_FreezeShock[] = _("Poderoso ataque de 2\nturnos que puede \nparalizar.");
static const u8 sMoveFourLineDescription_IceBurn[] = _("Poderoso ataque de 2\nturnos que puede \nquemar.");
static const u8 sMoveFourLineDescription_Snarl[] = _("Grita al enemigo y \nbaja su At. Esp.");
static const u8 sMoveFourLineDescription_IcicleCrash[] = _("Lanza carámbanos al \nenemigo y puede \nhacerlo retroceder.");
static const u8 sMoveFourLineDescription_VCreate[] = _("Poderoso, pero baja \nDefensa Def. Esp. y \nVelocidad.");
static const u8 sMoveFourLineDescription_FusionFlare[] = _("Invoca una bola de \nfuego. Combina bien \ncon un rayo.");
static const u8 sMoveFourLineDescription_FusionBolt[] = _("Invoca un rayo. \nCombina bien con una \nbola de fuego.");
static const u8 sMoveFourLineDescription_FlyingPress[] = _("Ataque con daño de \ntipo Lucha y tipo \nVolador.");
static const u8 sMoveFourLineDescription_MatBlock[] = _("Evita movimientos \nofensivos durante 1 \nturno.");
static const u8 sMoveFourLineDescription_Belch[] = _("Suelta un gran \neructo. Debe comerse \nuna Baya.");
static const u8 sMoveFourLineDescription_Rototiller[] = _("Sube Ataque y At. \nEsp. de Pokémon de \ntipo Planta.");
static const u8 sMoveFourLineDescription_StickyWeb[] = _("Ondea una red que \nralentiza a los \nenemigos que entran.");
static const u8 sMoveFourLineDescription_FellStinger[] = _("Si debilita al enemigo,\nel Ataque sube.");
static const u8 sMoveFourLineDescription_TrickOrTreat[] = _("Chantajea al Pokémon\ny lo convierte en \ntipo Fantasma.");
static const u8 sMoveFourLineDescription_NobleRoar[] = _("Intimida al enemigo, y \nle baja Ataque y At. \nEsp.");
static const u8 sMoveFourLineDescription_IonDeluge[] = _("Electrifica los \nmovimientos de tipo \nNormal con iones.");
static const u8 sMoveFourLineDescription_ParabolicCharge[] = _("Daña a Pokémon \nadyascentes y se \ncura la mitad de ello.");
static const u8 sMoveFourLineDescription_ForestsCurse[] = _("Maldice al enemigo y \nlo convierte en tipo \nPlanta.");
static const u8 sMoveFourLineDescription_PetalBlizzard[] = _("Creo una tormenta \nviolenta de pétalos \npara atacar.");
static const u8 sMoveFourLineDescription_FreezeDry[] = _("Muy eficaz contra el \ntipo Agua. Puede \ncongelar.");
static const u8 sMoveFourLineDescription_DisarmingVoice[] = _("Llanto encantador \nque no puede ser \nevitado.");
static const u8 sMoveFourLineDescription_PartingShot[] = _("Baja Ataque y At. \nEsp. del enemigo y \nluego, se cambia.");
static const u8 sMoveFourLineDescription_TopsyTurvy[] = _("Intercambia los \ncambios de \nestadísticas del \nobjetivo.");
static const u8 sMoveFourLineDescription_DrainingKiss[] = _("Ataque que absorbe \nla mitad del daño que \ninflige.");
static const u8 sMoveFourLineDescription_CraftyShield[] = _("Evita movimientos de \nestado durante 1 \nturno.");
static const u8 sMoveFourLineDescription_FlowerShield[] = _("Sube la Defensa de \nlos Pokémon de tipo \nPlanta.");
static const u8 sMoveFourLineDescription_GrassyTerrain[] = _("Crea un campo de \nhierba por 5 turnos. \nRestaura PS.");
static const u8 sMoveFourLineDescription_MistyTerrain[] = _("Cubre campo con \nniebla por 5 turnos. \nEvita estados.");
static const u8 sMoveFourLineDescription_Electrify[] = _("Convierte el próximo \nmov. del enemigo en \ntipo Eléc.");
static const u8 sMoveFourLineDescription_PlayRough[] = _("Hace una jugarreta y \npuede bajar el \nAtaque.");
static const u8 sMoveFourLineDescription_FairyWind[] = _("Levanta polvo de \nhadas y golpea al \nenemigo.");
static const u8 sMoveFourLineDescription_Moonblast[] = _("Ataca con poder \nlunar. Puede bajar el \nAt. Esp.");
static const u8 sMoveFourLineDescription_Boomburst[] = _("Ataca a todos con \nuna onda sonora \ndestructiva.");
static const u8 sMoveFourLineDescription_FairyLock[] = _("Encierra a todos en \nel campo hasta el \npróximo turno.");
static const u8 sMoveFourLineDescription_KingsShield[] = _("Evita el daño y baja \nel Ataque del \nagresor.");
static const u8 sMoveFourLineDescription_PlayNice[] = _("Engaña al enemigo, \nbajando su Ataque \nsin fallar.");
static const u8 sMoveFourLineDescription_Confide[] = _("Comparte un secreto \ny baja el At. Esp. del \nenemigo.");
static const u8 sMoveFourLineDescription_DiamondStorm[] = _("Desata una tormenta \nde diamantes. Puede \nsubir Def.");
static const u8 sMoveFourLineDescription_SteamEruption[] = _("Cubre al enemigo con \nvapor ardiente que \npuede quemar.");
static const u8 sMoveFourLineDescription_HyperspaceHole[] = _("Ataca con un agujero \nnegro que es \nineludible.");
static const u8 sMoveFourLineDescription_WaterShuriken[] = _("Lanza de 2 a 5 \nestrellas que siempre\ngolpean primero.");
static const u8 sMoveFourLineDescription_MysticalFire[] = _("Aliento de fuego que \npuede bajar el At. \nEsp.");
static const u8 sMoveFourLineDescription_SpikyShield[] = _("Evita el ataque y \nhiere al agresor si es\nfísico.");
static const u8 sMoveFourLineDescription_AromaticMist[] = _("Sube la Def. Esp. del \nPokémon aliado.");
static const u8 sMoveFourLineDescription_EerieImpulse[] = _("Expone al enemigo a \nondas y baja mucho \nsu At. Esp.");
static const u8 sMoveFourLineDescription_VenomDrench[] = _("Baja Ataque, At. Esp. \ny Velocidad de un \nenvenenado.");
static const u8 sMoveFourLineDescription_Powder[] = _("Daña con prioridad si \nva a usar un mov. tipo\nFuego.");
static const u8 sMoveFourLineDescription_Geomancy[] = _("Sube At. Esp., Def. \nEsp. y Velocidad en el\n2º turno.");
static const u8 sMoveFourLineDescription_MagneticFlux[] = _("Sube las Defensas a \nlos que tengan Más y \nMenos.");
static const u8 sMoveFourLineDescription_HappyHour[] = _("Dobla la cantidad de \ndinero recibido.");
static const u8 sMoveFourLineDescription_ElectricTerrain[] = _("Electrifica el campo \npor 5 turnos. Evita \ndormirse.");
static const u8 sMoveFourLineDescription_DazzlingGleam[] = _("Daña a los enemigos \ncon una haz de luz \nbrillante.");
static const u8 sMoveFourLineDescription_Celebrate[] = _("Te felicita en tu \ncumpleaños.");
static const u8 sMoveFourLineDescription_HoldHands[] = _("Junta las manos con \nlos aliados \nfelizmente.");
static const u8 sMoveFourLineDescription_BabyDollEyes[] = _("Baja el Ataque del \nenemigo antes de que \nse mueva.");
static const u8 sMoveFourLineDescription_Nuzzle[] = _("Frota las mejillas \ncontra enemigo, \nparalizándolo.");
#if B_BINDING_TURNS >= GEN_5
static const u8 sMoveFourLineDescription_Infestation[] = _("Acosa al enemigo y lo \nataca de 2 a 5 \nturnos.");
#else
static const u8 sMoveFourLineDescription_Infestation[] = _("Acosa al enemigo y lo \nataca de 2 a 5 \nturnos.");
#endif
static const u8 sMoveFourLineDescription_PowerUpPunch[] = _("Fuerte puñetazo que \nsube el Ataque del \nusuario.");
static const u8 sMoveFourLineDescription_ThousandArrows[] = _("Puede golpear en el \naire y lanzar contra \nel suelo.");
static const u8 sMoveFourLineDescription_ThousandWaves[] = _("No deja escapar a los\nque han sido heridos.");
static const u8 sMoveFourLineDescription_LandsWrath[] = _("Libera la energía \nterrestre para \natacar a los \nenemigos.");
static const u8 sMoveFourLineDescription_LightOfRuin[] = _("Potente rayo de luz \nque también hiere al \nagresor.");
static const u8 sMoveFourLineDescription_OriginPulse[] = _("Gran rayo de luz azul \nque golpea a ambos \nenemigos.");
static const u8 sMoveFourLineDescription_PrecipiceBlades[] = _("Hojas de piedra que \ngolpean a ambos \nenemigos.");
static const u8 sMoveFourLineDescription_LeafStorm[] = _("Tormenta de hojas. \nBaja mucho el At. Esp.");
static const u8 sMoveFourLineDescription_ShoreUp[] = _("Restaura PS del \nusuario, más si hay \nTor. Arena.");
static const u8 sMoveFourLineDescription_FirstImpression[] = _("Golpea primero y \nfuerte. Solo funciona\nen turno 1.");
static const u8 sMoveFourLineDescription_BanefulBunker[] = _("Protege al usuario y \nenvenena al \ncontacto.");
static const u8 sMoveFourLineDescription_SpiritShackle[] = _("No deja escapar \nenemigos que te \nhayan golpeado.");
static const u8 sMoveFourLineDescription_DarkestLariat[] = _("Golpea con los \nbrazos. Ignora \ncambios de estadíst.");
static const u8 sMoveFourLineDescription_SparklingAria[] = _("Canta con burbujas. \nCura quemaduras al \ncontacto.");
static const u8 sMoveFourLineDescription_IceHammer[] = _("Golpea con un \npuñetazo. Baja \nVelocidad del \nusuario.");
static const u8 sMoveFourLineDescription_FloralHealing[] = _("Restaura PS del \nobjetivo. Más \nefectivo sobre \nhierba.");
static const u8 sMoveFourLineDescription_HighHorsepower[] = _("Embiste al enemigo \ncon todo el cuerpo.");
static const u8 sMoveFourLineDescription_StrengthSap[] = _("Restaura PS en \nfunción del Ataque \nenemigo y lo baja.");
static const u8 sMoveFourLineDescription_SolarBlade[] = _("Carga 1{SUPER_ER} turno\ny corta en el 2º con \nuna hoja.");
static const u8 sMoveFourLineDescription_Leafage[] = _("Ataca con una ráfaga\nde hojas pequeñas.");
static const u8 sMoveFourLineDescription_Spotlight[] = _("Hace atacar al \nenemigo el Pokémon \nbajo el foco.");
static const u8 sMoveFourLineDescription_ToxicThread[] = _("Ataca con un hilo que\nenvenena y baja \nVelocidad.");
static const u8 sMoveFourLineDescription_LaserFocus[] = _("Garantiza que el \npróximo golpe sea \ncrítico.");
static const u8 sMoveFourLineDescription_GearUp[] = _("Sube el poder a los \nque tengan Más y \nMenos.");
static const u8 sMoveFourLineDescription_ThroatChop[] = _("Golpea la garganta \npara anular los mov. \nde sonido.");
static const u8 sMoveFourLineDescription_PollenPuff[] = _("Causa daño a \nenemigos. Restaura \nPS de aliados.");
static const u8 sMoveFourLineDescription_AnchorShot[] = _("Estrangula al \nenemigo con cadenas. \nNo deja retroceder.");
static const u8 sMoveFourLineDescription_PsychicTerrain[] = _("Invoca un campo \nextraño por 5 turnos.\nEvita prioridad.");
static const u8 sMoveFourLineDescription_Lunge[] = _("Se lanza contra el \nenemigo y baja su \nAtaque.");
static const u8 sMoveFourLineDescription_FireLash[] = _("Envuelve al enemigo \nen llamas y baja su \nDefensa.");
static const u8 sMoveFourLineDescription_PowerTrip[] = _("A más subida de \nestadíst., del \nenemigo, más poder.");
static const u8 sMoveFourLineDescription_BurnUp[] = _("Quema por completo al\nusaurio. Pierde tipo \nFuego.");
static const u8 sMoveFourLineDescription_SpeedSwap[] = _("Intercambia la \nVelocidad con la del \nobjetivo.");
static const u8 sMoveFourLineDescription_SmartStrike[] = _("Golpea con un cuerno \npreciso que nunca \nfalla.");
static const u8 sMoveFourLineDescription_Purify[] = _("Cura el estado del \nenemigo y restaura \nPS del usuario.");
static const u8 sMoveFourLineDescription_RevelationDance[] = _("Baile místico que usa\nel 1.{SUPER_ER} tipo del \nusuario.");
static const u8 sMoveFourLineDescription_CoreEnforcer[] = _("Rayo fulminante que \nanula la habilidad del\nenemigo.");
static const u8 sMoveFourLineDescription_TropKick[] = _("Patada tropical \nintensa. Baja el \nAtaque.");
static const u8 sMoveFourLineDescription_Instruct[] = _("Ordena usar el último \nmov. del objetivo de \nnuevo.");
static const u8 sMoveFourLineDescription_BeakBlast[] = _("Calienta el pico y \nataca. Quema al \ncontacto.");
static const u8 sMoveFourLineDescription_ClangingScales[] = _("Fuerte ruido \nescamoso que baja la \nDefensa.");
static const u8 sMoveFourLineDescription_DragonHammer[] = _("Mueve todo el cuerpo \npara golpear como un \nmartillo.");
static const u8 sMoveFourLineDescription_BrutalSwing[] = _("Movimiento violento \nque golpea todo el \nalrededor.");
static const u8 sMoveFourLineDescription_AuroraVeil[] = _("Debilita los ataques. \nSolo funciona bajo el\ngranizo.");
static const u8 sMoveFourLineDescription_ShellTrap[] = _("Pone una trampa de \nconchas que daña al \ncontacto.");
static const u8 sMoveFourLineDescription_FleurCannon[] = _("Fuerte rayo que baja \nmuchísimo el At. Esp.");
static const u8 sMoveFourLineDescription_PsychicFangs[] = _("Muerde con colmillos \npsíquicos. Destruye \nbarreas.");
static const u8 sMoveFourLineDescription_StompingTantrum[] = _("Pisa alrededor con \nfuria. Más poderoso \nsi falló antes.");
static const u8 sMoveFourLineDescription_ShadowBone[] = _("Golpea con un hueso \nmaldito. Puede bajar \nla Defensa.");
static const u8 sMoveFourLineDescription_Accelerock[] = _("Golpea con una roca \nveloz que siempre da \nprimero.");
static const u8 sMoveFourLineDescription_Liquidation[] = _("Golpea al enemigo con\nagua. Puede bajar la \nDefensa.");
static const u8 sMoveFourLineDescription_PrismaticLaser[] = _("Poderoso rayo de luz \nque te inmoviliza 1 \nturno.");
static const u8 sMoveFourLineDescription_SpectralThief[] = _("Roba el cambio de \nestadíst. y luego \nataca.");
static const u8 sMoveFourLineDescription_SunsteelStrike[] = _("Golpe solar que \nignora las \nhabilidades.");
static const u8 sMoveFourLineDescription_MoongeistBeam[] = _("Golpe lunar que \nignora las \nhabilidades.");
static const u8 sMoveFourLineDescription_TearfulLook[] = _("El usuario da pena. \nBaja At. y At. Esp. del\nenemigo.");
static const u8 sMoveFourLineDescription_ZingZap[] = _("Impacto eléctrico \nque puede hacer \nretroceder.");
static const u8 sMoveFourLineDescription_NaturesMadness[] = _("Reduce a la mitad los \nPS del enemigo.");
static const u8 sMoveFourLineDescription_MultiAttack[] = _("Ataque que varía en \nfunción del Disco \nequipado.");
static const u8 sMoveFourLineDescription_MindBlown[] = _("El usuario explota su\ncabeza para dañar \ntodo alrededor.");
static const u8 sMoveFourLineDescription_PlasmaFists[] = _("Golpea con puños \neléctricos. Tipo \nNormal pasa a Eléc.");
static const u8 sMoveFourLineDescription_PhotonGeyser[] = _("Categoría en función\nde si At. o At. Esp. es \nmás alto.");
static const u8 sMoveFourLineDescription_ZippyZap[] = _("Ráfaga eléctrica \nprioritaria que \nsiempre es crítica.");
static const u8 sMoveFourLineDescription_SplishySplash[] = _("Gran onda eléctrica \nque puede paralizar \nal enemigo.");
static const u8 sMoveFourLineDescription_FloatyFall[] = _("Flota y cae en \npicado. Puede hacer \nretroceder");
static const u8 sMoveFourLineDescription_PikaPapow[] = _("El amor de Pikachu \nsube su poder. Nunca \nfalla.");
#if B_UPDATED_MOVE_DATA >= GEN_8
static const u8 sMoveFourLineDescription_BouncyBubble[] = _("Un ataque que\nabsorbe todo el\ndaño que infligió\npara restaurar PS.");
#else
static const u8 sMoveFourLineDescription_BouncyBubble[] = _("Un ataque que\nabsorbe todo el\ndaño que infligió\npara restaurar PS.");
#endif
static const u8 sMoveFourLineDescription_BuzzyBuzz[] = _("Suelta un chispa \neléctrica que siempre\nparaliza.");
static const u8 sMoveFourLineDescription_SizzlySlide[] = _("El usuario se \nenvuelve en. llamas y \nquema al enemigo.");
static const u8 sMoveFourLineDescription_GlitzyGlow[] = _("Fuerza telequinética\nque baja el At. Esp.");
static const u8 sMoveFourLineDescription_BaddyBad[] = _("Ataque maléfico que \nbaja el Ataque.");
static const u8 sMoveFourLineDescription_SappySeed[] = _("Esparce semillas que \ndrenan PS cada turno.");
static const u8 sMoveFourLineDescription_FreezyFrost[] = _("Cristal brumoso. \nElimina los cambios \nde estadísticas.");
static const u8 sMoveFourLineDescription_SparklySwirl[] = _("Torbellino aromático.\nCura los estados del \nequipo.");
static const u8 sMoveFourLineDescription_VeeveeVolley[] = _("El amor de Eevee sube\nsu poder. Nunca falla.");
static const u8 sMoveFourLineDescription_DoubleIronBash[] = _("Gira y golpea con \nbrazos. Puede hacer \nretroceder.");

// GEN 8
static const u8 sMoveFourLineDescription_DynamaxCannon[] = _("Dispara un gran rayo. \nDaña el doble a \nenemigos Dinamax.");
static const u8 sMoveFourLineDescription_SnipeShot[] = _("Ignora los efectos \nque atraen \nmovimientos.");
static const u8 sMoveFourLineDescription_JawLock[] = _("Evita escapar al \nenemigo y al usuario.");
static const u8 sMoveFourLineDescription_StuffCheeks[] = _("El usuario se come la \nBaya y sube mucho la \ndefensa.");
static const u8 sMoveFourLineDescription_NoRetreat[] = _("Sube todas las \nestadísticas pero no\ndeja escapar.");
static const u8 sMoveFourLineDescription_TarShot[] = _("Baja Velocidad del \nenemigo y lo hace \ndébil al Fuego.");
static const u8 sMoveFourLineDescription_MagicPowder[] = _("Polvo mágico que \ncambia el objetivo a \ntipo Psíquico.");
static const u8 sMoveFourLineDescription_DragonDarts[] = _("Ataca dos veces. 2 \nenemigos son \ngolpeados por \nseparado.");
static const u8 sMoveFourLineDescription_Teatime[] = _("Todos los Pokémon se \ncomen sus Bayas en la\nhora del té.");
static const u8 sMoveFourLineDescription_Octolock[] = _("Atrapa al enemigo. \nBaja Def. y Def Esp. \ncada turno.");
static const u8 sMoveFourLineDescription_BoltBeak[] = _("Dobla su poder si el \nusuario se mueve \nprimero.");
static const u8 sMoveFourLineDescription_FishiousRend[] = _("Dobla su poder si el \nusuario se mueve \nprimero.");
static const u8 sMoveFourLineDescription_CourtChange[] = _("Intercambia los \nefectos en cada lado \ndel campo.");
static const u8 sMoveFourLineDescription_ClangorousSoul[] = _("Usa algunos PS para \nsubir todas las \nestadísticas.");
static const u8 sMoveFourLineDescription_BodyPress[] = _("Hace más daño en \nfunción de la \nDefensa del enemigo.");
static const u8 sMoveFourLineDescription_Decorate[] = _("Sube muchísimo el \nAtaque y el At. Esp. \ndel objetivo.");
static const u8 sMoveFourLineDescription_DrumBeating[] = _("Toca la batería y \nataca. Baja Velocidad\ndel enemigo.");
static const u8 sMoveFourLineDescription_SnapTrap[] = _("Atrapa al objetivo en\nuna trampa durante 4 \no 5 turnos.");
static const u8 sMoveFourLineDescription_PyroBall[] = _("Lanza un balón \nardiente al objetivo. \nPuede quemar.");
static const u8 sMoveFourLineDescription_BehemothBlade[] = _("Un gran espadazo. \nDaña el doble a \nenemigos Dinamax.");
static const u8 sMoveFourLineDescription_BehemothBash[] = _("Golpe de escudo. Daña\nel doble a enemigos \nDinamax.");
static const u8 sMoveFourLineDescription_AuraWheel[] = _("Sube la Velocidad si \ngolpea. Su tipo varía \nsegún la forma.");
static const u8 sMoveFourLineDescription_BreakingSwipe[] = _("Agita la cola para \natacar. Baja Ataque \nde los heridos.");
static const u8 sMoveFourLineDescription_BranchPoke[] = _("Golpea con una rama \npuntiaguda.");
static const u8 sMoveFourLineDescription_Overdrive[] = _("Toca la guitarra \ncausando fuertes \nvibraciones.");
static const u8 sMoveFourLineDescription_AppleAcid[] = _("Ácido de manzana que \nbaja la Def. Esp. del \nenemigo.");
static const u8 sMoveFourLineDescription_GravApple[] = _("Deja caer una \nmanzana que la \nDefensa del enemigo.");
static const u8 sMoveFourLineDescription_SpiritBreak[] = _("Fuerza \nrompeespíritus. Baja \nel At. Esp del \nenemigo.");
static const u8 sMoveFourLineDescription_StrangeSteam[] = _("Emite un vapor \nextraño que \nconfunde al enemigo.");
static const u8 sMoveFourLineDescription_LifeDew[] = _("Esparce agua para \nrestaurar PS propios \ny de aliados.");
static const u8 sMoveFourLineDescription_Obstruct[] = _("Protege y baja \nmuchísimo la Defensa\nal contacto.");
static const u8 sMoveFourLineDescription_FalseSurrender[] = _("Se inclina y apuñala \nal enemigo. Nunca \nfalla.");
static const u8 sMoveFourLineDescription_MeteorAssault[] = _("Ataca con un puerro \ngrueso. Te inmoviliza \n1 turno.");
static const u8 sMoveFourLineDescription_Eternabeam[] = _("Ataque muy poderoso.\nTe inmoviliza 1 turno.");
static const u8 sMoveFourLineDescription_SteelBeam[] = _("Lanza un rayo \nardiente que también \nhiere al agresor.");

static const u8 sMoveFourLineDescription_ExpandingForce[] = _("En Campo Psíquico \ngolpea más fuerte y a\ntodos.");
static const u8 sMoveFourLineDescription_SteelRoller[] = _("Destruye el campo. \nFalla si no hay un \ncampo activo.");
static const u8 sMoveFourLineDescription_ScaleShot[] = _("Dispara de 2 a 5 \nescamas. Sube \nVelocidad, baja Def.");
static const u8 sMoveFourLineDescription_MeteorBeam[] = _("Ataque de 2 turnos \nque sube el At. Esp. \nantes de atacar.");
static const u8 sMoveFourLineDescription_ShellSideArm[] = _("Usa el poder ofensivo\nmás grande. Puede \nenvenenar.");
static const u8 sMoveFourLineDescription_MistyExplosion[] = _("Golpea a todo y se \ndebilita. Más fuerte \nen Campo Niebla.");
static const u8 sMoveFourLineDescription_GrassyGlide[] = _("Se desliza y golpea. \nVa primero en Campo \nde Hierba.");
static const u8 sMoveFourLineDescription_RisingVoltage[] = _("En Campo Eléctrico su\npotencia se duplica.");
static const u8 sMoveFourLineDescription_TerrainPulse[] = _("Su poder y tipo varía\nen función del campo \nactivo.");
static const u8 sMoveFourLineDescription_SkitterSmack[] = _("Se desliza por \ndetrás. Baja At. Esp. \ndel enemigo.");
static const u8 sMoveFourLineDescription_BurningJealousy[] = _("Quema a los enemigos \ncon estadísticas \npotenciadas.");
static const u8 sMoveFourLineDescription_LashOut[] = _("Su poder se duplica \nsi ha bajado estad. \neste turno.");
static const u8 sMoveFourLineDescription_Poltergeist[] = _("Controla el objeto \ndel enemigo y lo \nataca con él.");
static const u8 sMoveFourLineDescription_CorrosiveGas[] = _("Gas corrosivo que \nderrite todos los \nobjetos equipados.");
static const u8 sMoveFourLineDescription_Coaching[] = _("Aconseja a los \naliados para subir su \nAtaque y Defensa.");
static const u8 sMoveFourLineDescription_UTurn[] = _("Ataca y corre para \ncambiarse con otro \nPokémon del equipo.");
//static const u8 sMoveFourLineDescription_TripleKick[] = _("3 patadas que se \nvuelven más \npoderosas en cada \ngolpe.");
static const u8 sMoveFourLineDescription_DualWingbeat[] = _("Golpea con las alas \ndos veces seguidas.");
static const u8 sMoveFourLineDescription_ScorchingSands[] = _("Lanza arena ardiente\nal objetivo. Puede \nquemar.");
static const u8 sMoveFourLineDescription_JungleHealing[] = _("Restaura PS y \nestados de sí mismo y\nde los aliados.");
static const u8 sMoveFourLineDescription_WickedBlow[] = _("Golpe oscuro que \nsiempre causa un \ngolpe crítico.");
static const u8 sMoveFourLineDescription_SurgingStrikes[] = _("3 azotes \ntorrenciales que \nsiempre son golpes \ncríticos.");
#if B_BINDING_TURNS >= GEN_5
static const u8 sMoveFourLineDescription_ThunderCage[] = _("Encierra al enemigo \nen una jaula eléc. de \n2 a 5 turnos.");
#else
static const u8 sMoveFourLineDescription_ThunderCage[] = _("Encierra al enemigo \nen una jaula eléc. de \n2 a 5 turnos.");
#endif
static const u8 sMoveFourLineDescription_DragonEnergy[] = _("Causa más daño si el \nusuario tiene más PS.");
static const u8 sMoveFourLineDescription_FreezingGlare[] = _("El usuario dispara\npoder psíq. desde\n sus ojos. Puede\ncongelar al rival.");
static const u8 sMoveFourLineDescription_FieryWrath[] = _("Ataque lleno de furia\nque puede hacer \nretroceder.");
static const u8 sMoveFourLineDescription_ThunderousKick[] = _("Patada imbuida en \nrayos. Baja Defensa \ndel enemigo.");
static const u8 sMoveFourLineDescription_GlacialLance[] = _("Ensarta con una \nlanza llena de \ncarámbanos al \nenemigo.");
static const u8 sMoveFourLineDescription_AstralBarrage[] = _("Envía espíritus para\ngolpear al enemigo.");
static const u8 sMoveFourLineDescription_EerieSpell[] = _("Poderoso ataque \npsíquico. Quita 3 PP \nal último mov.");

//9 GEN //TRANS
static const u8 sMoveFourLineDescription_DireClaw[] = _("Alta probabilidad \ncrítica. Paraliza, \nenvenena o duerme.");
static const u8 sMoveFourLineDescription_PsyshieldBash[] = _("Golpea con\nfuerza psíq. Puede\nsubir la defensa.");
static const u8 sMoveFourLineDescription_PowerShift[] = _("Intercambia tus \nestadísticas de \nAtaque y Defensa.");
static const u8 sMoveFourLineDescription_StoneAxe[] = _("Alta probabilidad \nde golpes críticos.\nColoca astillas que\ndañan al enemigo.");
static const u8 sMoveFourLineDescription_SpringtideStorm[] = _("Envuelve al rival en\nvientos feroces.\nVaría según la\nforma del usuario.");
static const u8 sMoveFourLineDescription_MysticalPower[] = _("Un poder misterioso\ngolpea, aumentando\nel Atq. Esp. del\nusuario.");
static const u8 sMoveFourLineDescription_RagingFury[] = _("Un alboroto de\n 2 a 3 turnos que\nconfunde al\nusuario.");
static const u8 sMoveFourLineDescription_WaveCrash[] = _("Un golpe envuelto\nen nagua. También\nperjudica al\nusuario.");
static const u8 sMoveFourLineDescription_Chloroblast[] = _("Explosión de\nclorofila acumulada\nque daña al\nusuario.");
static const u8 sMoveFourLineDescription_MountainGale[] = _("Trozos gigantes de\nhielo dañan al\nenemigo. Puede\nretroceder.");
static const u8 sMoveFourLineDescription_VictoryDance[] = _("Bailes para subir\nAtaque, Defensa y \nVelocidad.");
static const u8 sMoveFourLineDescription_HeadlongRush[] = _("Golpea con un \nplacaje de cuerpo\ncompleto.\nReduce la defensa.");
static const u8 sMoveFourLineDescription_BarbBarrage[] = _("Puede envenenar al\nimpactar. Aumenta\nsu potencia contra\nrivales envs.");
static const u8 sMoveFourLineDescription_EsperWing[] = _("Alta prob. de\ngolpes críticos.\nSube la velocidad\ndel usuario.");
static const u8 sMoveFourLineDescription_BitterMalice[] = _("Un resentimiento\nhorrible. Puede\nreducir el \nataque del enemigo.");
static const u8 sMoveFourLineDescription_Shelter[] = _("Usuario endurece\nsu piel, aumentando\ndrásticamente su\ndefensa.");
static const u8 sMoveFourLineDescription_TripleArrows[] = _("Alta prob.\nde golpes críticos.\nPuede bajar la\ndef. o retroceder.");
static const u8 sMoveFourLineDescription_InfernalParade[] = _("Daña más a un\nenemigo si \ntiene una dolencia.\nPuede quemar.");
static const u8 sMoveFourLineDescription_CeaselessEdge[] = _("Alta probabilidad \nde golpes críticos.\nColoca astillas que\ndañan al enemigo.");
static const u8 sMoveFourLineDescription_BleakwindStorm[] = _("Golpea con vientos\ngélidos. Puede\nbajar la velocidad\ndel enemigo.");
static const u8 sMoveFourLineDescription_WildboltStorm[] = _("Golpea con una\ntempestad brutal.\nPuede causar \nparálisis.");
static const u8 sMoveFourLineDescription_SandsearStorm[] = _("Golpea con arena\nardiendo.\nPuede provocar \na quemaduras.");
static const u8 sMoveFourLineDescription_LunarBlessing[] = _("El usuario se cura y\na su aliado.");
static const u8 sMoveFourLineDescription_TakeHeart[] = _("El usuario levanta\nsu espíritu\npara sanarse y \nfortalecerse.");
static const u8 sMoveFourLineDescription_TeraBlast[] = _("Si el usuario está \nTerastalizado,\ngolpea con su\ntipo Tera.");
static const u8 sMoveFourLineDescription_SilkTrap[] = _("Se protege,\nreduciendo la\nvelocidad al \ncontacto.");
static const u8 sMoveFourLineDescription_AxeKick[] = _("Puede fallar y\nherir el pateador.\nPuede causar\nconfusión.");
static const u8 sMoveFourLineDescription_LastRespects[] = _("Este mov. causa\nmás daño por cada\naliado derrotado.");
static const u8 sMoveFourLineDescription_LuminaCrash[] = _("Una luz\nenajenadora reduce\ndrásticamente \nDef. Esp.");
static const u8 sMoveFourLineDescription_OrderUp[] = _("Aumenta las stats\nde un usuario\ndependiendo del\nTatsugiri.");
static const u8 sMoveFourLineDescription_JetPunch[] = _("Lanza un puño a\nvelocidad de la luz\npara pegar primero.");
static const u8 sMoveFourLineDescription_SpicyExtract[] = _("Sube mucho el\nAtq. del objetivo, \nbaja severamente\nsu Defensa.");
static const u8 sMoveFourLineDescription_SpinOut[] = _("Fuerza mucho sus\npiernas.\nReduce mucho la\nveloc. del usuario.");
static const u8 sMoveFourLineDescription_PopulationBomb[] = _("Los compañeros\ndel usuario \ngolpean de 1 a\n10 veces seguidas.");
static const u8 sMoveFourLineDescription_IceSpinner[] = _("Los pies cubiertos\nde hielo golpean\nal rival y\nrompe el terreno.");
static const u8 sMoveFourLineDescription_GlaiveRush[] = _("Ataques rivales en\nel siguiente turno\nno pueden fallar\ny hacen doble daño.");
static const u8 sMoveFourLineDescription_RevivalBlessing[] = _("Revive a un aliado\n{PKMN}desmayado y \nrestaura la mitad\nde su PS.");
static const u8 sMoveFourLineDescription_SaltCure[] = _("Daña al enemigo en\ncada turno.\nDoble daño al \nAcero y Agua.");
static const u8 sMoveFourLineDescription_TripleDive[] = _("Golpea al rival con\nsalpicaduras de\nagua 3 veces\nseguidas.");
static const u8 sMoveFourLineDescription_MortalSpin[] = _("Elimina movs trampa\ny drenadoras.\nVenenos adjunto a\nenemigos.");
static const u8 sMoveFourLineDescription_Doodle[] = _("Cambia su habilidad\ndel usuario por la\ndel objetivo.");
static const u8 sMoveFourLineDescription_FilletAway[] = _("Aumenta mucho el\n atq. y la veloc.\nal usar sus\npropios PS.");
static const u8 sMoveFourLineDescription_KowtowCleave[] = _("Corta al enemigo\ndespués de hacer\nuna reverencia.\nNunca falla.");
static const u8 sMoveFourLineDescription_FlowerTrick[] = _("Ramo amañado.\nSiempre obtiene un\ngolpe crítico,\nnunca falla.");
static const u8 sMoveFourLineDescription_TorchSong[] = _("Llamas queman al\nobjetivo. Sube el\n nivel de Atq.\nEsp. del usuario.");
static const u8 sMoveFourLineDescription_AquaStep[] = _("Golpea con pasos\nde baile ligeros y\nfluidos. Sube la\nveloc. del usuario.");
static const u8 sMoveFourLineDescription_RagingBull[] = _("Abordaje que rompe\nbarreras. La forma\ndel usuario \ndetermina el tipo.");
static const u8 sMoveFourLineDescription_MakeItRain[] = _("Reduce el Atq. Esp.\ndel usuario. \nEl dinero se\nrecupera después.");
static const u8 sMoveFourLineDescription_Ruination[] = _("Invoca un desastre\nruinoso y reduce\na la mitad de\nPS del enemigo.");
static const u8 sMoveFourLineDescription_CollisionCourse[] = _("Explosión\nprehistórica\nque es más fuerte\nsi es supereficaz.");
static const u8 sMoveFourLineDescription_ElectroDrift[] = _("Electricidad\nfuturista. Es\nmás fuerte si\nes superefectivo.");
static const u8 sMoveFourLineDescription_ShedTail[] = _("Crea un sustituto\npara sí mismo antes\nde cambiarse.");
static const u8 sMoveFourLineDescription_ChillyReception[] = _("Mal chiste invoca\nuna ventisca. El\nusuario también\nse desconecta.");
static const u8 sMoveFourLineDescription_TidyUp[] = _("El usuario elimina \npeligros y aumenta \nsu ataque\ny velocidad.");
static const u8 sMoveFourLineDescription_Snowscape[] = _("Invoca un\ntormenta de nieve \nque dura cinco \nturnos.");
static const u8 sMoveFourLineDescription_Pounce[] = _("El usuario se\nabalanza sobre \nel enemigo, bajando\nsu velocidad.");
static const u8 sMoveFourLineDescription_Trailblaze[] = _("El usuario ataca \nrepentinamente, aumentando su \nVelocidad.");
static const u8 sMoveFourLineDescription_ChillingWater[] = _("Una ducha con\nagua bien fría\nreduce el ataque\ndel objetivo.");
static const u8 sMoveFourLineDescription_HyperDrill[] = _("Una cuerno\n puntiagudo gira\nevitando la protec.\nde un enemigo.");
static const u8 sMoveFourLineDescription_TwinBeam[] = _("Rayos oculares\nmísticos que\npegan al objetivo \n2 veces seguidas.");
static const u8 sMoveFourLineDescription_RageFist[] = _("Cuanto más haya\nsido golpeado el\nusuario, más fuerte\nserá el movimiento.");
static const u8 sMoveFourLineDescription_ArmorCannon[] = _("Un ataque fuerte\npero baja las stats\ndefensivas.");
static const u8 sMoveFourLineDescription_BitterBlade[] = _("Un ataque que\nabsorbe la mitad\ndel daño infligido.");
static const u8 sMoveFourLineDescription_DoubleShock[] = _("Descarga toda\nelectricidad,\nperdiendo el\ntipo Eléctrico.");
static const u8 sMoveFourLineDescription_GigatonHammer[] = _("Balancea un\nmartillo enorme.\nNo se puede usar\n2 veces seguidas.");
static const u8 sMoveFourLineDescription_Comeuppance[] = _("Toma fuertes\nrepresalias contra\nquién le lastimó\npor última vez.");
static const u8 sMoveFourLineDescription_AquaCutter[] = _("Corte con agua\npresurizada con\nalta prob. de\ngolpes críticos.");
static const u8 sMoveFourLineDescription_BlazingTorque[] = _("Causa daño y\npuede llegar a\nquemar al objetivo.");
static const u8 sMoveFourLineDescription_WickedTorque[] = _("Causa daño y\npuede llegar a\ndormir al objetivo.");
static const u8 sMoveFourLineDescription_NoxiousTorque[] = _("Causa daño y\npuede llegar a\nenvenenar\nal objetivo.");
static const u8 sMoveFourLineDescription_CombatTorque[] = _("Causa daño y\npuede llegar a\nparalizar\nal objetivo.");
static const u8 sMoveFourLineDescription_MagicalTorque[] = _("Causa daño y\npuede llegar a\nconfundir\nal objetivo.");
static const u8 sMoveFourLineDescription_Psyblade[] = _("El poder de este\nmov. naumenta\ncuando hay\nterreno eléctrico.");
static const u8 sMoveFourLineDescription_HydroSteam[] = _("El poder de este.\nmov aumenta bajo\nluz solar intensa.");
static const u8 sMoveFourLineDescription_BloodMoon[] = _("Desata la luna\nde sangre. No se\npuede usar\n2 veces seguidas.");
static const u8 sMoveFourLineDescription_MatchaGotcha[] = _("Absorbe la mitad\ndel daño infligido.\nPuede quemar.");
static const u8 sMoveFourLineDescription_SyrupBomb[] = _("Reduce la veloc.\ndel enemigo\n durante 3 turnos.");
static const u8 sMoveFourLineDescription_IvyCudgel[] = _("Cambios de tipo con\nmáscara equipada.\nAlta prob. de\ngolpes críticos.");

#endif

const u8 *const gMoveFourLineDescriptionPointers[MOVES_COUNT - 1] = {
    [MOVE_POUND         - 1] = sMoveFourLineDescription_Pound,
    [MOVE_KARATE_CHOP   - 1] = sMoveFourLineDescription_KarateChop,
    [MOVE_DOUBLE_SLAP   - 1] = sMoveFourLineDescription_DoubleSlap,
    [MOVE_COMET_PUNCH   - 1] = sMoveFourLineDescription_CometPunch,
    [MOVE_MEGA_PUNCH    - 1] = sMoveFourLineDescription_MegaPunch,
    [MOVE_PAY_DAY       - 1] = sMoveFourLineDescription_PayDay,
    [MOVE_FIRE_PUNCH    - 1] = sMoveFourLineDescription_FirePunch,
    [MOVE_ICE_PUNCH     - 1] = sMoveFourLineDescription_IcePunch,
    [MOVE_THUNDER_PUNCH - 1] = sMoveFourLineDescription_ThunderPunch,
    [MOVE_SCRATCH       - 1] = sMoveFourLineDescription_Scratch,
#if defined(BATTLE_ENGINE) || defined(POKEMON_EXPANSION)
    [MOVE_VISE_GRIP     - 1] = sMoveFourLineDescription_ViceGrip,
#else
    [MOVE_VICE_GRIP     - 1] = sMoveFourLineDescription_ViceGrip,
#endif
    [MOVE_GUILLOTINE    - 1] = sMoveFourLineDescription_Guillotine,
    [MOVE_RAZOR_WIND    - 1] = sMoveFourLineDescription_RazorWind,
    [MOVE_SWORDS_DANCE  - 1] = sMoveFourLineDescription_SwordsDance,
    [MOVE_CUT           - 1] = sMoveFourLineDescription_Cut,
    [MOVE_GUST          - 1] = sMoveFourLineDescription_Gust,
    [MOVE_WING_ATTACK   - 1] = sMoveFourLineDescription_WingAttack,
    [MOVE_WHIRLWIND     - 1] = sMoveFourLineDescription_Whirlwind,
    [MOVE_FLY           - 1] = sMoveFourLineDescription_Fly,
    [MOVE_BIND          - 1] = sMoveFourLineDescription_Bind,
    [MOVE_SLAM          - 1] = sMoveFourLineDescription_Slam,
    [MOVE_VINE_WHIP     - 1] = sMoveFourLineDescription_VineWhip,
    [MOVE_STOMP         - 1] = sMoveFourLineDescription_Stomp,
    [MOVE_DOUBLE_KICK   - 1] = sMoveFourLineDescription_DoubleKick,
    [MOVE_MEGA_KICK     - 1] = sMoveFourLineDescription_MegaKick,
    [MOVE_JUMP_KICK     - 1] = sMoveFourLineDescription_JumpKick,
    [MOVE_ROLLING_KICK  - 1] = sMoveFourLineDescription_RollingKick,
    [MOVE_SAND_ATTACK   - 1] = sMoveFourLineDescription_SandAttack,
    [MOVE_HEADBUTT      - 1] = sMoveFourLineDescription_Headbutt,
    [MOVE_HORN_ATTACK   - 1] = sMoveFourLineDescription_HornAttack,
    [MOVE_FURY_ATTACK   - 1] = sMoveFourLineDescription_FuryAttack,
    [MOVE_HORN_DRILL    - 1] = sMoveFourLineDescription_HornDrill,
    [MOVE_TACKLE        - 1] = sMoveFourLineDescription_Tackle,
    [MOVE_BODY_SLAM     - 1] = sMoveFourLineDescription_BodySlam,
    [MOVE_WRAP          - 1] = sMoveFourLineDescription_Wrap,
    [MOVE_TAKE_DOWN     - 1] = sMoveFourLineDescription_TakeDown,
    [MOVE_THRASH        - 1] = sMoveFourLineDescription_Thrash,
    [MOVE_DOUBLE_EDGE   - 1] = sMoveFourLineDescription_DoubleEdge,
    [MOVE_TAIL_WHIP     - 1] = sMoveFourLineDescription_TailWhip,
    [MOVE_POISON_STING  - 1] = sMoveFourLineDescription_PoisonSting,
    [MOVE_TWINEEDLE     - 1] = sMoveFourLineDescription_Twineedle,
    [MOVE_PIN_MISSILE   - 1] = sMoveFourLineDescription_PinMissile,
    [MOVE_LEER          - 1] = sMoveFourLineDescription_Leer,
    [MOVE_BITE          - 1] = sMoveFourLineDescription_Bite,
    [MOVE_GROWL         - 1] = sMoveFourLineDescription_Growl,
    [MOVE_ROAR          - 1] = sMoveFourLineDescription_Roar,
    [MOVE_SING          - 1] = sMoveFourLineDescription_Sing,
    [MOVE_SUPERSONIC    - 1] = sMoveFourLineDescription_Supersonic,
    [MOVE_SONIC_BOOM    - 1] = sMoveFourLineDescription_SonicBoom,
    [MOVE_DISABLE       - 1] = sMoveFourLineDescription_Disable,
    [MOVE_ACID          - 1] = sMoveFourLineDescription_Acid,
    [MOVE_EMBER         - 1] = sMoveFourLineDescription_Ember,
    [MOVE_FLAMETHROWER  - 1] = sMoveFourLineDescription_Flamethrower,
    [MOVE_MIST          - 1] = sMoveFourLineDescription_Mist,
    [MOVE_WATER_GUN     - 1] = sMoveFourLineDescription_WaterGun,
    [MOVE_HYDRO_PUMP    - 1] = sMoveFourLineDescription_HydroPump,
    [MOVE_SURF          - 1] = sMoveFourLineDescription_Surf,
    [MOVE_ICE_BEAM      - 1] = sMoveFourLineDescription_IceBeam,
    [MOVE_BLIZZARD      - 1] = sMoveFourLineDescription_Blizzard,
    [MOVE_PSYBEAM       - 1] = sMoveFourLineDescription_Psybeam,
    [MOVE_BUBBLE_BEAM   - 1] = sMoveFourLineDescription_BubbleBeam,
    [MOVE_AURORA_BEAM   - 1] = sMoveFourLineDescription_AuroraBeam,
    [MOVE_HYPER_BEAM    - 1] = sMoveFourLineDescription_HyperBeam,
    [MOVE_PECK          - 1] = sMoveFourLineDescription_Peck,
    [MOVE_DRILL_PECK    - 1] = sMoveFourLineDescription_DrillPeck,
    [MOVE_SUBMISSION    - 1] = sMoveFourLineDescription_Submission,
    [MOVE_LOW_KICK      - 1] = sMoveFourLineDescription_LowKick,
    [MOVE_COUNTER       - 1] = sMoveFourLineDescription_Counter,
    [MOVE_SEISMIC_TOSS  - 1] = sMoveFourLineDescription_SeismicToss,
    [MOVE_STRENGTH      - 1] = sMoveFourLineDescription_Strength,
    [MOVE_ABSORB        - 1] = sMoveFourLineDescription_Absorb,
    [MOVE_MEGA_DRAIN    - 1] = sMoveFourLineDescription_MegaDrain,
    [MOVE_LEECH_SEED    - 1] = sMoveFourLineDescription_LeechSeed,
    [MOVE_GROWTH        - 1] = sMoveFourLineDescription_Growth,
    [MOVE_RAZOR_LEAF    - 1] = sMoveFourLineDescription_RazorLeaf,
    [MOVE_SOLAR_BEAM    - 1] = sMoveFourLineDescription_SolarBeam,
    [MOVE_POISON_POWDER - 1] = sMoveFourLineDescription_PoisonPowder,
    [MOVE_STUN_SPORE    - 1] = sMoveFourLineDescription_StunSpore,
    [MOVE_SLEEP_POWDER  - 1] = sMoveFourLineDescription_SleepPowder,
    [MOVE_PETAL_DANCE   - 1] = sMoveFourLineDescription_PetalDance,
    [MOVE_STRING_SHOT   - 1] = sMoveFourLineDescription_StringShot,
    [MOVE_DRAGON_RAGE   - 1] = sMoveFourLineDescription_DragonRage,
    [MOVE_FIRE_SPIN     - 1] = sMoveFourLineDescription_FireSpin,
    [MOVE_THUNDER_SHOCK - 1] = sMoveFourLineDescription_ThunderShock,
    [MOVE_THUNDERBOLT   - 1] = sMoveFourLineDescription_Thunderbolt,
    [MOVE_THUNDER_WAVE  - 1] = sMoveFourLineDescription_ThunderWave,
    [MOVE_THUNDER       - 1] = sMoveFourLineDescription_Thunder,
    [MOVE_ROCK_THROW    - 1] = sMoveFourLineDescription_RockThrow,
    [MOVE_EARTHQUAKE    - 1] = sMoveFourLineDescription_Earthquake,
    [MOVE_FISSURE       - 1] = sMoveFourLineDescription_Fissure,
    [MOVE_DIG           - 1] = sMoveFourLineDescription_Dig,
    [MOVE_TOXIC         - 1] = sMoveFourLineDescription_Toxic,
    [MOVE_CONFUSION     - 1] = sMoveFourLineDescription_Confusion,
    [MOVE_PSYCHIC       - 1] = sMoveFourLineDescription_Psychic,
    [MOVE_HYPNOSIS      - 1] = sMoveFourLineDescription_Hypnosis,
    [MOVE_MEDITATE      - 1] = sMoveFourLineDescription_Meditate,
    [MOVE_AGILITY       - 1] = sMoveFourLineDescription_Agility,
    [MOVE_QUICK_ATTACK  - 1] = sMoveFourLineDescription_QuickAttack,
    [MOVE_RAGE          - 1] = sMoveFourLineDescription_Rage,
    [MOVE_TELEPORT      - 1] = sMoveFourLineDescription_Teleport,
    [MOVE_NIGHT_SHADE   - 1] = sMoveFourLineDescription_NightShade,
    [MOVE_MIMIC         - 1] = sMoveFourLineDescription_Mimic,
    [MOVE_SCREECH       - 1] = sMoveFourLineDescription_Screech,
    [MOVE_DOUBLE_TEAM   - 1] = sMoveFourLineDescription_DoubleTeam,
    [MOVE_RECOVER       - 1] = sMoveFourLineDescription_Recover,
    [MOVE_HARDEN        - 1] = sMoveFourLineDescription_Harden,
    [MOVE_MINIMIZE      - 1] = sMoveFourLineDescription_Minimize,
    [MOVE_SMOKESCREEN   - 1] = sMoveFourLineDescription_Smokescreen,
    [MOVE_CONFUSE_RAY   - 1] = sMoveFourLineDescription_ConfuseRay,
    [MOVE_WITHDRAW      - 1] = sMoveFourLineDescription_Withdraw,
    [MOVE_DEFENSE_CURL  - 1] = sMoveFourLineDescription_DefenseCurl,
    [MOVE_BARRIER       - 1] = sMoveFourLineDescription_Barrier,
    [MOVE_LIGHT_SCREEN  - 1] = sMoveFourLineDescription_LightScreen,
    [MOVE_HAZE          - 1] = sMoveFourLineDescription_Haze,
    [MOVE_REFLECT       - 1] = sMoveFourLineDescription_Reflect,
    [MOVE_FOCUS_ENERGY  - 1] = sMoveFourLineDescription_FocusEnergy,
    [MOVE_BIDE          - 1] = sMoveFourLineDescription_Bide,
    [MOVE_METRONOME     - 1] = sMoveFourLineDescription_Metronome,
    [MOVE_MIRROR_MOVE   - 1] = sMoveFourLineDescription_MirrorMove,
    [MOVE_SELF_DESTRUCT - 1] = sMoveFourLineDescription_SelfDestruct,
    [MOVE_EGG_BOMB      - 1] = sMoveFourLineDescription_EggBomb,
    [MOVE_LICK          - 1] = sMoveFourLineDescription_Lick,
    [MOVE_SMOG          - 1] = sMoveFourLineDescription_Smog,
    [MOVE_SLUDGE        - 1] = sMoveFourLineDescription_Sludge,
    [MOVE_BONE_CLUB     - 1] = sMoveFourLineDescription_BoneClub,
    [MOVE_FIRE_BLAST    - 1] = sMoveFourLineDescription_FireBlast,
    [MOVE_WATERFALL     - 1] = sMoveFourLineDescription_Waterfall,
    [MOVE_CLAMP         - 1] = sMoveFourLineDescription_Clamp,
    [MOVE_SWIFT         - 1] = sMoveFourLineDescription_Swift,
    [MOVE_SKULL_BASH    - 1] = sMoveFourLineDescription_SkullBash,
    [MOVE_SPIKE_CANNON  - 1] = sMoveFourLineDescription_SpikeCannon,
    [MOVE_CONSTRICT     - 1] = sMoveFourLineDescription_Constrict,
    [MOVE_AMNESIA       - 1] = sMoveFourLineDescription_Amnesia,
    [MOVE_KINESIS       - 1] = sMoveFourLineDescription_Kinesis,
    [MOVE_SOFT_BOILED   - 1] = sMoveFourLineDescription_SoftBoiled,
#if defined(BATTLE_ENGINE) || defined(POKEMON_EXPANSION)
    [MOVE_HIGH_JUMP_KICK  - 1] = sMoveFourLineDescription_HiJumpKick,
#else
    [MOVE_HI_JUMP_KICK  - 1] = sMoveFourLineDescription_HiJumpKick,
#endif
    [MOVE_GLARE         - 1] = sMoveFourLineDescription_Glare,
    [MOVE_DREAM_EATER   - 1] = sMoveFourLineDescription_DreamEater,
    [MOVE_POISON_GAS    - 1] = sMoveFourLineDescription_PoisonGas,
    [MOVE_BARRAGE       - 1] = sMoveFourLineDescription_Barrage,
    [MOVE_LEECH_LIFE    - 1] = sMoveFourLineDescription_LeechLife,
    [MOVE_LOVELY_KISS   - 1] = sMoveFourLineDescription_LovelyKiss,
    [MOVE_SKY_ATTACK    - 1] = sMoveFourLineDescription_SkyAttack,
    [MOVE_TRANSFORM     - 1] = sMoveFourLineDescription_Transform,
    [MOVE_BUBBLE        - 1] = sMoveFourLineDescription_Bubble,
    [MOVE_DIZZY_PUNCH   - 1] = sMoveFourLineDescription_DizzyPunch,
    [MOVE_SPORE         - 1] = sMoveFourLineDescription_Spore,
    [MOVE_FLASH         - 1] = sMoveFourLineDescription_Flash,
    [MOVE_PSYWAVE       - 1] = sMoveFourLineDescription_Psywave,
    [MOVE_SPLASH        - 1] = sMoveFourLineDescription_Splash,
    [MOVE_ACID_ARMOR    - 1] = sMoveFourLineDescription_AcidArmor,
    [MOVE_CRABHAMMER    - 1] = sMoveFourLineDescription_Crabhammer,
    [MOVE_EXPLOSION     - 1] = sMoveFourLineDescription_Explosion,
    [MOVE_FURY_SWIPES   - 1] = sMoveFourLineDescription_FurySwipes,
    [MOVE_BONEMERANG    - 1] = sMoveFourLineDescription_Bonemerang,
    [MOVE_REST          - 1] = sMoveFourLineDescription_Rest,
    [MOVE_ROCK_SLIDE    - 1] = sMoveFourLineDescription_RockSlide,
    [MOVE_HYPER_FANG    - 1] = sMoveFourLineDescription_HyperFang,
    [MOVE_SHARPEN       - 1] = sMoveFourLineDescription_Sharpen,
    [MOVE_CONVERSION    - 1] = sMoveFourLineDescription_Conversion,
    [MOVE_TRI_ATTACK    - 1] = sMoveFourLineDescription_TriAttack,
    [MOVE_SUPER_FANG    - 1] = sMoveFourLineDescription_SuperFang,
    [MOVE_SLASH         - 1] = sMoveFourLineDescription_Slash,
    [MOVE_SUBSTITUTE    - 1] = sMoveFourLineDescription_Substitute,
    [MOVE_STRUGGLE      - 1] = sMoveFourLineDescription_Struggle,
    [MOVE_SKETCH        - 1] = sMoveFourLineDescription_Sketch,
    [MOVE_TRIPLE_KICK   - 1] = sMoveFourLineDescription_TripleKick,
    [MOVE_THIEF         - 1] = sMoveFourLineDescription_Thief,
    [MOVE_SPIDER_WEB    - 1] = sMoveFourLineDescription_SpiderWeb,
    [MOVE_MIND_READER   - 1] = sMoveFourLineDescription_MindReader,
    [MOVE_NIGHTMARE     - 1] = sMoveFourLineDescription_Nightmare,
    [MOVE_FLAME_WHEEL   - 1] = sMoveFourLineDescription_FlameWheel,
    [MOVE_SNORE         - 1] = sMoveFourLineDescription_Snore,
    [MOVE_CURSE         - 1] = sMoveFourLineDescription_Curse,
    [MOVE_FLAIL         - 1] = sMoveFourLineDescription_Flail,
    [MOVE_CONVERSION_2  - 1] = sMoveFourLineDescription_Conversion2,
    [MOVE_AEROBLAST     - 1] = sMoveFourLineDescription_Aeroblast,
    [MOVE_COTTON_SPORE  - 1] = sMoveFourLineDescription_CottonSpore,
    [MOVE_REVERSAL      - 1] = sMoveFourLineDescription_Reversal,
    [MOVE_SPITE         - 1] = sMoveFourLineDescription_Spite,
    [MOVE_POWDER_SNOW   - 1] = sMoveFourLineDescription_PowderSnow,
    [MOVE_PROTECT       - 1] = sMoveFourLineDescription_Protect,
    [MOVE_MACH_PUNCH    - 1] = sMoveFourLineDescription_MachPunch,
    [MOVE_SCARY_FACE    - 1] = sMoveFourLineDescription_ScaryFace,
#if defined(BATTLE_ENGINE) || defined(POKEMON_EXPANSION)
    [MOVE_FEINT_ATTACK  - 1] = sMoveFourLineDescription_FaintAttack,
#else
    [MOVE_FAINT_ATTACK  - 1] = sMoveFourLineDescription_FaintAttack,
#endif
    [MOVE_SWEET_KISS    - 1] = sMoveFourLineDescription_SweetKiss,
    [MOVE_BELLY_DRUM    - 1] = sMoveFourLineDescription_BellyDrum,
    [MOVE_SLUDGE_BOMB   - 1] = sMoveFourLineDescription_SludgeBomb,
    [MOVE_MUD_SLAP      - 1] = sMoveFourLineDescription_MudSlap,
    [MOVE_OCTAZOOKA     - 1] = sMoveFourLineDescription_Octazooka,
    [MOVE_SPIKES        - 1] = sMoveFourLineDescription_Spikes,
    [MOVE_ZAP_CANNON    - 1] = sMoveFourLineDescription_ZapCannon,
    [MOVE_FORESIGHT     - 1] = sMoveFourLineDescription_Foresight,
    [MOVE_DESTINY_BOND  - 1] = sMoveFourLineDescription_DestinyBond,
    [MOVE_PERISH_SONG   - 1] = sMoveFourLineDescription_PerishSong,
    [MOVE_ICY_WIND      - 1] = sMoveFourLineDescription_IcyWind,
    [MOVE_DETECT        - 1] = sMoveFourLineDescription_Detect,
    [MOVE_BONE_RUSH     - 1] = sMoveFourLineDescription_BoneRush,
    [MOVE_LOCK_ON       - 1] = sMoveFourLineDescription_LockOn,
    [MOVE_OUTRAGE       - 1] = sMoveFourLineDescription_Outrage,
    [MOVE_SANDSTORM     - 1] = sMoveFourLineDescription_Sandstorm,
    [MOVE_GIGA_DRAIN    - 1] = sMoveFourLineDescription_GigaDrain,
    [MOVE_ENDURE        - 1] = sMoveFourLineDescription_Endure,
    [MOVE_CHARM         - 1] = sMoveFourLineDescription_Charm,
    [MOVE_ROLLOUT       - 1] = sMoveFourLineDescription_Rollout,
    [MOVE_FALSE_SWIPE   - 1] = sMoveFourLineDescription_FalseSwipe,
    [MOVE_SWAGGER       - 1] = sMoveFourLineDescription_Swagger,
    [MOVE_MILK_DRINK    - 1] = sMoveFourLineDescription_MilkDrink,
    [MOVE_SPARK         - 1] = sMoveFourLineDescription_Spark,
    [MOVE_FURY_CUTTER   - 1] = sMoveFourLineDescription_FuryCutter,
    [MOVE_STEEL_WING    - 1] = sMoveFourLineDescription_SteelWing,
    [MOVE_MEAN_LOOK     - 1] = sMoveFourLineDescription_MeanLook,
    [MOVE_ATTRACT       - 1] = sMoveFourLineDescription_Attract,
    [MOVE_SLEEP_TALK    - 1] = sMoveFourLineDescription_SleepTalk,
    [MOVE_HEAL_BELL     - 1] = sMoveFourLineDescription_HealBell,
    [MOVE_RETURN        - 1] = sMoveFourLineDescription_Return,
    [MOVE_PRESENT       - 1] = sMoveFourLineDescription_Present,
    [MOVE_FRUSTRATION   - 1] = sMoveFourLineDescription_Frustration,
    [MOVE_SAFEGUARD     - 1] = sMoveFourLineDescription_Safeguard,
    [MOVE_PAIN_SPLIT    - 1] = sMoveFourLineDescription_PainSplit,
    [MOVE_SACRED_FIRE   - 1] = sMoveFourLineDescription_SacredFire,
    [MOVE_MAGNITUDE     - 1] = sMoveFourLineDescription_Magnitude,
    [MOVE_DYNAMIC_PUNCH - 1] = sMoveFourLineDescription_DynamicPunch,
    [MOVE_MEGAHORN      - 1] = sMoveFourLineDescription_Megahorn,
    [MOVE_DRAGON_BREATH - 1] = sMoveFourLineDescription_DragonBreath,
    [MOVE_BATON_PASS    - 1] = sMoveFourLineDescription_BatonPass,
    [MOVE_ENCORE        - 1] = sMoveFourLineDescription_Encore,
    [MOVE_PURSUIT       - 1] = sMoveFourLineDescription_Pursuit,
    [MOVE_RAPID_SPIN    - 1] = sMoveFourLineDescription_RapidSpin,
    [MOVE_SWEET_SCENT   - 1] = sMoveFourLineDescription_SweetScent,
    [MOVE_IRON_TAIL     - 1] = sMoveFourLineDescription_IronTail,
    [MOVE_METAL_CLAW    - 1] = sMoveFourLineDescription_MetalClaw,
    [MOVE_VITAL_THROW   - 1] = sMoveFourLineDescription_VitalThrow,
    [MOVE_MORNING_SUN   - 1] = sMoveFourLineDescription_MorningSun,
    [MOVE_SYNTHESIS     - 1] = sMoveFourLineDescription_Synthesis,
    [MOVE_MOONLIGHT     - 1] = sMoveFourLineDescription_Moonlight,
    [MOVE_HIDDEN_POWER  - 1] = sMoveFourLineDescription_HiddenPower,
    [MOVE_CROSS_CHOP    - 1] = sMoveFourLineDescription_CrossChop,
    [MOVE_TWISTER       - 1] = sMoveFourLineDescription_Twister,
    [MOVE_RAIN_DANCE    - 1] = sMoveFourLineDescription_RainDance,
    [MOVE_SUNNY_DAY     - 1] = sMoveFourLineDescription_SunnyDay,
    [MOVE_CRUNCH        - 1] = sMoveFourLineDescription_Crunch,
    [MOVE_MIRROR_COAT   - 1] = sMoveFourLineDescription_MirrorCoat,
    [MOVE_PSYCH_UP      - 1] = sMoveFourLineDescription_PsychUp,
    [MOVE_EXTREME_SPEED - 1] = sMoveFourLineDescription_ExtremeSpeed,
    [MOVE_ANCIENT_POWER - 1] = sMoveFourLineDescription_AncientPower,
    [MOVE_SHADOW_BALL   - 1] = sMoveFourLineDescription_ShadowBall,
    [MOVE_FUTURE_SIGHT  - 1] = sMoveFourLineDescription_FutureSight,
    [MOVE_ROCK_SMASH    - 1] = sMoveFourLineDescription_RockSmash,
    [MOVE_WHIRLPOOL     - 1] = sMoveFourLineDescription_Whirlpool,
    [MOVE_BEAT_UP       - 1] = sMoveFourLineDescription_BeatUp,
    [MOVE_FAKE_OUT      - 1] = sMoveFourLineDescription_FakeOut,
    [MOVE_UPROAR        - 1] = sMoveFourLineDescription_Uproar,
    [MOVE_STOCKPILE     - 1] = sMoveFourLineDescription_Stockpile,
    [MOVE_SPIT_UP       - 1] = sMoveFourLineDescription_SpitUp,
    [MOVE_SWALLOW       - 1] = sMoveFourLineDescription_Swallow,
    [MOVE_HEAT_WAVE     - 1] = sMoveFourLineDescription_HeatWave,
    [MOVE_HAIL          - 1] = sMoveFourLineDescription_Hail,
    [MOVE_TORMENT       - 1] = sMoveFourLineDescription_Torment,
    [MOVE_FLATTER       - 1] = sMoveFourLineDescription_Flatter,
    [MOVE_WILL_O_WISP   - 1] = sMoveFourLineDescription_WillOWisp,
    [MOVE_MEMENTO       - 1] = sMoveFourLineDescription_Memento,
    [MOVE_FACADE        - 1] = sMoveFourLineDescription_Facade,
    [MOVE_FOCUS_PUNCH   - 1] = sMoveFourLineDescription_FocusPunch,
#if defined(BATTLE_ENGINE) || defined(POKEMON_EXPANSION)
    [MOVE_SMELLING_SALTS - 1] = sMoveFourLineDescription_SmellingSalt,
#else
    [MOVE_SMELLING_SALT - 1] = sMoveFourLineDescription_SmellingSalt,
#endif
    [MOVE_FOLLOW_ME     - 1] = sMoveFourLineDescription_FollowMe,
    [MOVE_NATURE_POWER  - 1] = sMoveFourLineDescription_NaturePower,
    [MOVE_CHARGE        - 1] = sMoveFourLineDescription_Charge,
    [MOVE_TAUNT         - 1] = sMoveFourLineDescription_Taunt,
    [MOVE_HELPING_HAND  - 1] = sMoveFourLineDescription_HelpingHand,
    [MOVE_TRICK         - 1] = sMoveFourLineDescription_Trick,
    [MOVE_ROLE_PLAY     - 1] = sMoveFourLineDescription_RolePlay,
    [MOVE_WISH          - 1] = sMoveFourLineDescription_Wish,
    [MOVE_ASSIST        - 1] = sMoveFourLineDescription_Assist,
    [MOVE_INGRAIN       - 1] = sMoveFourLineDescription_Ingrain,
    [MOVE_SUPERPOWER    - 1] = sMoveFourLineDescription_Superpower,
    [MOVE_MAGIC_COAT    - 1] = sMoveFourLineDescription_MagicCoat,
    [MOVE_RECYCLE       - 1] = sMoveFourLineDescription_Recycle,
    [MOVE_REVENGE       - 1] = sMoveFourLineDescription_Revenge,
    [MOVE_BRICK_BREAK   - 1] = sMoveFourLineDescription_BrickBreak,
    [MOVE_YAWN          - 1] = sMoveFourLineDescription_Yawn,
    [MOVE_KNOCK_OFF     - 1] = sMoveFourLineDescription_KnockOff,
    [MOVE_ENDEAVOR      - 1] = sMoveFourLineDescription_Endeavor,
    [MOVE_ERUPTION      - 1] = sMoveFourLineDescription_Eruption,
    [MOVE_SKILL_SWAP    - 1] = sMoveFourLineDescription_SkillSwap,
    [MOVE_IMPRISON      - 1] = sMoveFourLineDescription_Imprison,
    [MOVE_REFRESH       - 1] = sMoveFourLineDescription_Refresh,
    [MOVE_GRUDGE        - 1] = sMoveFourLineDescription_Grudge,
    [MOVE_SNATCH        - 1] = sMoveFourLineDescription_Snatch,
    [MOVE_SECRET_POWER  - 1] = sMoveFourLineDescription_SecretPower,
    [MOVE_DIVE          - 1] = sMoveFourLineDescription_Dive,
    [MOVE_ARM_THRUST    - 1] = sMoveFourLineDescription_ArmThrust,
    [MOVE_CAMOUFLAGE    - 1] = sMoveFourLineDescription_Camouflage,
    [MOVE_TAIL_GLOW     - 1] = sMoveFourLineDescription_TailGlow,
    [MOVE_LUSTER_PURGE  - 1] = sMoveFourLineDescription_LusterPurge,
    [MOVE_MIST_BALL     - 1] = sMoveFourLineDescription_MistBall,
    [MOVE_FEATHER_DANCE - 1] = sMoveFourLineDescription_FeatherDance,
    [MOVE_TEETER_DANCE  - 1] = sMoveFourLineDescription_TeeterDance,
    [MOVE_BLAZE_KICK    - 1] = sMoveFourLineDescription_BlazeKick,
    [MOVE_MUD_SPORT     - 1] = sMoveFourLineDescription_MudSport,
    [MOVE_ICE_BALL      - 1] = sMoveFourLineDescription_IceBall,
    [MOVE_NEEDLE_ARM    - 1] = sMoveFourLineDescription_NeedleArm,
    [MOVE_SLACK_OFF     - 1] = sMoveFourLineDescription_SlackOff,
    [MOVE_HYPER_VOICE   - 1] = sMoveFourLineDescription_HyperVoice,
    [MOVE_POISON_FANG   - 1] = sMoveFourLineDescription_PoisonFang,
    [MOVE_CRUSH_CLAW    - 1] = sMoveFourLineDescription_CrushClaw,
    [MOVE_BLAST_BURN    - 1] = sMoveFourLineDescription_BlastBurn,
    [MOVE_HYDRO_CANNON  - 1] = sMoveFourLineDescription_HydroCannon,
    [MOVE_METEOR_MASH   - 1] = sMoveFourLineDescription_MeteorMash,
    [MOVE_ASTONISH      - 1] = sMoveFourLineDescription_Astonish,
    [MOVE_WEATHER_BALL  - 1] = sMoveFourLineDescription_WeatherBall,
    [MOVE_AROMATHERAPY  - 1] = sMoveFourLineDescription_Aromatherapy,
    [MOVE_FAKE_TEARS    - 1] = sMoveFourLineDescription_FakeTears,
    [MOVE_AIR_CUTTER    - 1] = sMoveFourLineDescription_AirCutter,
    [MOVE_OVERHEAT      - 1] = sMoveFourLineDescription_Overheat,
    [MOVE_ODOR_SLEUTH   - 1] = sMoveFourLineDescription_OdorSleuth,
    [MOVE_ROCK_TOMB     - 1] = sMoveFourLineDescription_RockTomb,
    [MOVE_SILVER_WIND   - 1] = sMoveFourLineDescription_SilverWind,
    [MOVE_METAL_SOUND   - 1] = sMoveFourLineDescription_MetalSound,
    [MOVE_GRASS_WHISTLE - 1] = sMoveFourLineDescription_GrassWhistle,
    [MOVE_TICKLE        - 1] = sMoveFourLineDescription_Tickle,
    [MOVE_COSMIC_POWER  - 1] = sMoveFourLineDescription_CosmicPower,
    [MOVE_WATER_SPOUT   - 1] = sMoveFourLineDescription_WaterSpout,
    [MOVE_SIGNAL_BEAM   - 1] = sMoveFourLineDescription_SignalBeam,
    [MOVE_SHADOW_PUNCH  - 1] = sMoveFourLineDescription_ShadowPunch,
    [MOVE_EXTRASENSORY  - 1] = sMoveFourLineDescription_Extrasensory,
    [MOVE_SKY_UPPERCUT  - 1] = sMoveFourLineDescription_SkyUppercut,
    [MOVE_SAND_TOMB     - 1] = sMoveFourLineDescription_SandTomb,
    [MOVE_SHEER_COLD    - 1] = sMoveFourLineDescription_SheerCold,
    [MOVE_MUDDY_WATER   - 1] = sMoveFourLineDescription_MuddyWater,
    [MOVE_BULLET_SEED   - 1] = sMoveFourLineDescription_BulletSeed,
    [MOVE_AERIAL_ACE    - 1] = sMoveFourLineDescription_AerialAce,
    [MOVE_ICICLE_SPEAR  - 1] = sMoveFourLineDescription_IcicleSpear,
    [MOVE_IRON_DEFENSE  - 1] = sMoveFourLineDescription_IronDefense,
    [MOVE_BLOCK         - 1] = sMoveFourLineDescription_Block,
    [MOVE_HOWL          - 1] = sMoveFourLineDescription_Howl,
    [MOVE_DRAGON_CLAW   - 1] = sMoveFourLineDescription_DragonClaw,
    [MOVE_FRENZY_PLANT  - 1] = sMoveFourLineDescription_FrenzyPlant,
    [MOVE_BULK_UP       - 1] = sMoveFourLineDescription_BulkUp,
    [MOVE_BOUNCE        - 1] = sMoveFourLineDescription_Bounce,
    [MOVE_MUD_SHOT      - 1] = sMoveFourLineDescription_MudShot,
    [MOVE_POISON_TAIL   - 1] = sMoveFourLineDescription_PoisonTail,
    [MOVE_COVET         - 1] = sMoveFourLineDescription_Covet,
    [MOVE_VOLT_TACKLE   - 1] = sMoveFourLineDescription_VoltTackle,
    [MOVE_MAGICAL_LEAF  - 1] = sMoveFourLineDescription_MagicalLeaf,
    [MOVE_WATER_SPORT   - 1] = sMoveFourLineDescription_WaterSport,
    [MOVE_CALM_MIND     - 1] = sMoveFourLineDescription_CalmMind,
    [MOVE_LEAF_BLADE    - 1] = sMoveFourLineDescription_LeafBlade,
    [MOVE_DRAGON_DANCE  - 1] = sMoveFourLineDescription_DragonDance,
    [MOVE_ROCK_BLAST    - 1] = sMoveFourLineDescription_RockBlast,
    [MOVE_SHOCK_WAVE    - 1] = sMoveFourLineDescription_ShockWave,
    [MOVE_WATER_PULSE   - 1] = sMoveFourLineDescription_WaterPulse,
    [MOVE_DOOM_DESIRE   - 1] = sMoveFourLineDescription_DoomDesire,
    [MOVE_PSYCHO_BOOST  - 1] = sMoveFourLineDescription_PsychoBoost,
#ifdef BATTLE_ENGINE
    [MOVE_ROOST             - 1] = sMoveFourLineDescription_Roost,
    [MOVE_GRAVITY           - 1] = sMoveFourLineDescription_Gravity,
    [MOVE_MIRACLE_EYE       - 1] = sMoveFourLineDescription_MiracleEye,
    [MOVE_WAKE_UP_SLAP      - 1] = sMoveFourLineDescription_WakeUpSlap,
    [MOVE_HAMMER_ARM        - 1] = sMoveFourLineDescription_HammerArm,
    [MOVE_GYRO_BALL         - 1] = sMoveFourLineDescription_GyroBall,
    [MOVE_HEALING_WISH      - 1] = sMoveFourLineDescription_HealingWish,
    [MOVE_BRINE             - 1] = sMoveFourLineDescription_Brine,
    [MOVE_NATURAL_GIFT      - 1] = sMoveFourLineDescription_NaturalGift,
    [MOVE_FEINT             - 1] = sMoveFourLineDescription_Feint,
    [MOVE_PLUCK             - 1] = sMoveFourLineDescription_Pluck,
    [MOVE_TAILWIND          - 1] = sMoveFourLineDescription_Tailwind,
    [MOVE_ACUPRESSURE       - 1] = sMoveFourLineDescription_Acupressure,
    [MOVE_METAL_BURST       - 1] = sMoveFourLineDescription_MetalBurst,
    [MOVE_U_TURN            - 1] = sMoveFourLineDescription_UTurn,
    [MOVE_CLOSE_COMBAT      - 1] = sMoveFourLineDescription_CloseCombat,
    [MOVE_PAYBACK           - 1] = sMoveFourLineDescription_Payback,
    [MOVE_ASSURANCE         - 1] = sMoveFourLineDescription_Assurance,
    [MOVE_EMBARGO           - 1] = sMoveFourLineDescription_Embargo,
    [MOVE_FLING             - 1] = sMoveFourLineDescription_Fling,
    [MOVE_PSYCHO_SHIFT      - 1] = sMoveFourLineDescription_PsychoShift,
    [MOVE_TRUMP_CARD        - 1] = sMoveFourLineDescription_TrumpCard,
    [MOVE_HEAL_BLOCK        - 1] = sMoveFourLineDescription_HealBlock,
    [MOVE_WRING_OUT         - 1] = sMoveFourLineDescription_WringOut,
    [MOVE_POWER_TRICK       - 1] = sMoveFourLineDescription_PowerTrick,
    [MOVE_GASTRO_ACID       - 1] = sMoveFourLineDescription_GastroAcid,
    [MOVE_LUCKY_CHANT       - 1] = sMoveFourLineDescription_LuckyChant,
    [MOVE_ME_FIRST          - 1] = sMoveFourLineDescription_MeFirst,
    [MOVE_COPYCAT           - 1] = sMoveFourLineDescription_Copycat,
    [MOVE_POWER_SWAP        - 1] = sMoveFourLineDescription_PowerSwap,
    [MOVE_GUARD_SWAP        - 1] = sMoveFourLineDescription_GuardSwap,
    [MOVE_PUNISHMENT        - 1] = sMoveFourLineDescription_Punishment,
    [MOVE_LAST_RESORT       - 1] = sMoveFourLineDescription_LastResort,
    [MOVE_WORRY_SEED        - 1] = sMoveFourLineDescription_WorrySeed,
    [MOVE_SUCKER_PUNCH      - 1] = sMoveFourLineDescription_SuckerPunch,
    [MOVE_TOXIC_SPIKES      - 1] = sMoveFourLineDescription_ToxicSpikes,
    [MOVE_HEART_SWAP        - 1] = sMoveFourLineDescription_HeartSwap,
    [MOVE_AQUA_RING         - 1] = sMoveFourLineDescription_AquaRing,
    [MOVE_MAGNET_RISE       - 1] = sMoveFourLineDescription_MagnetRise,
    [MOVE_FLARE_BLITZ       - 1] = sMoveFourLineDescription_FlareBlitz,
    [MOVE_FORCE_PALM        - 1] = sMoveFourLineDescription_ForcePalm,
    [MOVE_AURA_SPHERE       - 1] = sMoveFourLineDescription_AuraSphere,
    [MOVE_ROCK_POLISH       - 1] = sMoveFourLineDescription_RockPolish,
    [MOVE_POISON_JAB        - 1] = sMoveFourLineDescription_PoisonJab,
    [MOVE_DARK_PULSE        - 1] = sMoveFourLineDescription_DarkPulse,
    [MOVE_NIGHT_SLASH       - 1] = sMoveFourLineDescription_NightSlash,
    [MOVE_AQUA_TAIL         - 1] = sMoveFourLineDescription_AquaTail,
    [MOVE_SEED_BOMB         - 1] = sMoveFourLineDescription_SeedBomb,
    [MOVE_AIR_SLASH         - 1] = sMoveFourLineDescription_AirSlash,
    [MOVE_X_SCISSOR         - 1] = sMoveFourLineDescription_XScissor,
    [MOVE_BUG_BUZZ          - 1] = sMoveFourLineDescription_BugBuzz,
    [MOVE_DRAGON_PULSE      - 1] = sMoveFourLineDescription_DragonPulse,
    [MOVE_DRAGON_RUSH       - 1] = sMoveFourLineDescription_DragonRush,
    [MOVE_POWER_GEM         - 1] = sMoveFourLineDescription_PowerGem,
    [MOVE_DRAIN_PUNCH       - 1] = sMoveFourLineDescription_DrainingKiss,
    [MOVE_VACUUM_WAVE       - 1] = sMoveFourLineDescription_VacuumWave,
    [MOVE_FOCUS_BLAST       - 1] = sMoveFourLineDescription_FocusBlast,
    [MOVE_ENERGY_BALL       - 1] = sMoveFourLineDescription_EnergyBall,
    [MOVE_BRAVE_BIRD        - 1] = sMoveFourLineDescription_BraveBird,
    [MOVE_EARTH_POWER       - 1] = sMoveFourLineDescription_EarthPower,
    [MOVE_SWITCHEROO        - 1] = sMoveFourLineDescription_Switcheroo,
    [MOVE_GIGA_IMPACT       - 1] = sMoveFourLineDescription_HyperBeam,
    [MOVE_NASTY_PLOT        - 1] = sMoveFourLineDescription_NastyPlot,
    [MOVE_BULLET_PUNCH      - 1] = sMoveFourLineDescription_BulletPunch,
    [MOVE_AVALANCHE         - 1] = sMoveFourLineDescription_Revenge,
    [MOVE_ICE_SHARD         - 1] = sMoveFourLineDescription_IceShard,
    [MOVE_SHADOW_CLAW       - 1] = sMoveFourLineDescription_ShadowClaw,
    [MOVE_THUNDER_FANG      - 1] = sMoveFourLineDescription_ThunderFang,
    [MOVE_ICE_FANG          - 1] = sMoveFourLineDescription_IceFang,
    [MOVE_FIRE_FANG         - 1] = sMoveFourLineDescription_FireFang,
    [MOVE_SHADOW_SNEAK      - 1] = sMoveFourLineDescription_ShadowSneak,
    [MOVE_MUD_BOMB          - 1] = sMoveFourLineDescription_MudBomb,
    [MOVE_PSYCHO_CUT        - 1] = sMoveFourLineDescription_PsychoCut,
    [MOVE_ZEN_HEADBUTT      - 1] = sMoveFourLineDescription_ZenHeadbutt,
    [MOVE_MIRROR_SHOT       - 1] = sMoveFourLineDescription_MirrorShot,
    [MOVE_FLASH_CANNON      - 1] = sMoveFourLineDescription_FlashCannon,
    [MOVE_ROCK_CLIMB        - 1] = sMoveFourLineDescription_RockClimb,
    [MOVE_DEFOG             - 1] = sMoveFourLineDescription_Defog,
    [MOVE_TRICK_ROOM        - 1] = sMoveFourLineDescription_TrickRoom,
    [MOVE_DRACO_METEOR      - 1] = sMoveFourLineDescription_DracoMeteor,
    [MOVE_DISCHARGE         - 1] = sMoveFourLineDescription_Discharge,
    [MOVE_LAVA_PLUME        - 1] = sMoveFourLineDescription_LavaPlume,
    [MOVE_LEAF_STORM        - 1] = sMoveFourLineDescription_LeafStorm,
    [MOVE_POWER_WHIP        - 1] = sMoveFourLineDescription_PowerWhip,
    [MOVE_ROCK_WRECKER      - 1] = sMoveFourLineDescription_HyperBeam,
    [MOVE_CROSS_POISON      - 1] = sMoveFourLineDescription_CrossPoison,
    [MOVE_GUNK_SHOT         - 1] = sMoveFourLineDescription_GunkShot,
    [MOVE_IRON_HEAD         - 1] = sMoveFourLineDescription_IronHead,
    [MOVE_MAGNET_BOMB       - 1] = sMoveFourLineDescription_MagnetBomb,
    [MOVE_STONE_EDGE        - 1] = sMoveFourLineDescription_StoneEdge,
    [MOVE_CAPTIVATE         - 1] = sMoveFourLineDescription_Captivate,
    [MOVE_STEALTH_ROCK      - 1] = sMoveFourLineDescription_StealthRock,
    [MOVE_GRASS_KNOT        - 1] = sMoveFourLineDescription_GrassKnot,
    [MOVE_CHATTER           - 1] = sMoveFourLineDescription_Chatter,
    [MOVE_JUDGMENT          - 1] = sMoveFourLineDescription_Judgment,
    [MOVE_BUG_BITE          - 1] = sMoveFourLineDescription_BugBite,
    [MOVE_CHARGE_BEAM       - 1] = sMoveFourLineDescription_ChargeBeam,
    [MOVE_WOOD_HAMMER       - 1] = sMoveFourLineDescription_WoodHammer,
    [MOVE_AQUA_JET          - 1] = sMoveFourLineDescription_AquaJet,
    [MOVE_ATTACK_ORDER      - 1] = sMoveFourLineDescription_AttackOrder,
    [MOVE_DEFEND_ORDER      - 1] = sMoveFourLineDescription_DefendOrder,
    [MOVE_HEAL_ORDER        - 1] = sMoveFourLineDescription_HealOrder,
    [MOVE_HEAD_SMASH        - 1] = sMoveFourLineDescription_HeadSmash,
    [MOVE_DOUBLE_HIT        - 1] = sMoveFourLineDescription_DoubleHit,
    [MOVE_ROAR_OF_TIME      - 1] = sMoveFourLineDescription_RoarOfTime,
    [MOVE_SPACIAL_REND      - 1] = sMoveFourLineDescription_SpacialRend,
    [MOVE_LUNAR_DANCE       - 1] = sMoveFourLineDescription_HealingWish,
    [MOVE_CRUSH_GRIP        - 1] = sMoveFourLineDescription_WringOut,
    [MOVE_MAGMA_STORM       - 1] = sMoveFourLineDescription_MagmaStorm,
    [MOVE_DARK_VOID         - 1] = sMoveFourLineDescription_DarkVoid,
    [MOVE_SEED_FLARE        - 1] = sMoveFourLineDescription_SeedFlare,
    [MOVE_OMINOUS_WIND      - 1] = sMoveFourLineDescription_OminousWind,
    [MOVE_SHADOW_FORCE      - 1] = sMoveFourLineDescription_ShadowForce,
    [MOVE_HONE_CLAWS        - 1] = sMoveFourLineDescription_HoneClaws,
    [MOVE_WIDE_GUARD        - 1] = sMoveFourLineDescription_WideGuard,
    [MOVE_GUARD_SPLIT       - 1] = sMoveFourLineDescription_GuardSplit,
    [MOVE_POWER_SPLIT       - 1] = sMoveFourLineDescription_PowerSplit,
    [MOVE_WONDER_ROOM       - 1] = sMoveFourLineDescription_WonderRoom,
    [MOVE_PSYSHOCK          - 1] = sMoveFourLineDescription_Psyshock,
    [MOVE_VENOSHOCK         - 1] = sMoveFourLineDescription_Venoshock,
    [MOVE_AUTOTOMIZE        - 1] = sMoveFourLineDescription_Autotomize,
    [MOVE_RAGE_POWDER       - 1] = sMoveFourLineDescription_RagePowder,
    [MOVE_TELEKINESIS       - 1] = sMoveFourLineDescription_Telekinesis,
    [MOVE_MAGIC_ROOM        - 1] = sMoveFourLineDescription_MagicRoom,
    [MOVE_SMACK_DOWN        - 1] = sMoveFourLineDescription_SmackDown,
    [MOVE_STORM_THROW       - 1] = sMoveFourLineDescription_StormThrow,
    [MOVE_FLAME_BURST       - 1] = sMoveFourLineDescription_FlameBurst,
    [MOVE_SLUDGE_WAVE       - 1] = sMoveFourLineDescription_SludgeWave,
    [MOVE_QUIVER_DANCE      - 1] = sMoveFourLineDescription_QuiverDance,
    [MOVE_HEAVY_SLAM        - 1] = sMoveFourLineDescription_HeavySlam,
    [MOVE_SYNCHRONOISE      - 1] = sMoveFourLineDescription_Synchronoise,
    [MOVE_ELECTRO_BALL      - 1] = sMoveFourLineDescription_ElectroBall,
    [MOVE_SOAK              - 1] = sMoveFourLineDescription_Soak,
    [MOVE_FLAME_CHARGE      - 1] = sMoveFourLineDescription_FlameCharge,
    [MOVE_COIL              - 1] = sMoveFourLineDescription_Coil,
    [MOVE_LOW_SWEEP         - 1] = sMoveFourLineDescription_LowSweep,
    [MOVE_ACID_SPRAY        - 1] = sMoveFourLineDescription_AcidSpray,
    [MOVE_FOUL_PLAY         - 1] = sMoveFourLineDescription_FoulPlay,
    [MOVE_SIMPLE_BEAM       - 1] = sMoveFourLineDescription_SimpleBeam,
    [MOVE_ENTRAINMENT       - 1] = sMoveFourLineDescription_Entrainment,
    [MOVE_AFTER_YOU         - 1] = sMoveFourLineDescription_AfterYou,
    [MOVE_ROUND             - 1] = sMoveFourLineDescription_Round,
    [MOVE_ECHOED_VOICE      - 1] = sMoveFourLineDescription_EchoedVoice,
    [MOVE_CHIP_AWAY         - 1] = sMoveFourLineDescription_ChipAway,
    [MOVE_CLEAR_SMOG        - 1] = sMoveFourLineDescription_ClearSmog,
    [MOVE_STORED_POWER      - 1] = sMoveFourLineDescription_StoredPower,
    [MOVE_QUICK_GUARD       - 1] = sMoveFourLineDescription_QuickGuard,
    [MOVE_ALLY_SWITCH       - 1] = sMoveFourLineDescription_AllySwitch,
    [MOVE_SCALD             - 1] = sMoveFourLineDescription_Scald,
    [MOVE_SHELL_SMASH       - 1] = sMoveFourLineDescription_ShellSmash,
    [MOVE_HEAL_PULSE        - 1] = sMoveFourLineDescription_HealPulse,
    [MOVE_HEX               - 1] = sMoveFourLineDescription_Hex,
    [MOVE_SKY_DROP          - 1] = sMoveFourLineDescription_SkyDrop,
    [MOVE_SHIFT_GEAR        - 1] = sMoveFourLineDescription_ShiftGear,
    [MOVE_CIRCLE_THROW      - 1] = sMoveFourLineDescription_CircleThrow,
    [MOVE_INCINERATE        - 1] = sMoveFourLineDescription_Incinerate,
    [MOVE_QUASH             - 1] = sMoveFourLineDescription_Quash,
    [MOVE_ACROBATICS        - 1] = sMoveFourLineDescription_Acrobatics,
    [MOVE_REFLECT_TYPE      - 1] = sMoveFourLineDescription_ReflectType,
    [MOVE_RETALIATE         - 1] = sMoveFourLineDescription_Retaliate,
    [MOVE_FINAL_GAMBIT      - 1] = sMoveFourLineDescription_FinalGambit,
    [MOVE_BESTOW            - 1] = sMoveFourLineDescription_Bestow,
    [MOVE_INFERNO           - 1] = sMoveFourLineDescription_Inferno,
    [MOVE_WATER_PLEDGE      - 1] = sMoveFourLineDescription_WaterPledge,
    [MOVE_FIRE_PLEDGE       - 1] = sMoveFourLineDescription_FirePledge,
    [MOVE_GRASS_PLEDGE      - 1] = sMoveFourLineDescription_GrassPledge,
    [MOVE_VOLT_SWITCH       - 1] = sMoveFourLineDescription_UTurn,
    [MOVE_STRUGGLE_BUG      - 1] = sMoveFourLineDescription_StruggleBug,
    [MOVE_BULLDOZE          - 1] = sMoveFourLineDescription_Bulldoze,
    [MOVE_FROST_BREATH      - 1] = sMoveFourLineDescription_StormThrow,
    [MOVE_DRAGON_TAIL       - 1] = sMoveFourLineDescription_CircleThrow,
    [MOVE_WORK_UP           - 1] = sMoveFourLineDescription_WorkUp,
    [MOVE_ELECTROWEB        - 1] = sMoveFourLineDescription_Electroweb,
    [MOVE_WILD_CHARGE       - 1] = sMoveFourLineDescription_WildCharge,
    [MOVE_DRILL_RUN         - 1] = sMoveFourLineDescription_DrillRun,
    [MOVE_DUAL_CHOP         - 1] = sMoveFourLineDescription_DualChop,
    [MOVE_HEART_STAMP       - 1] = sMoveFourLineDescription_HeartStamp,
    [MOVE_HORN_LEECH        - 1] = sMoveFourLineDescription_MegaDrain,
    [MOVE_SACRED_SWORD      - 1] = sMoveFourLineDescription_ChipAway,
    [MOVE_RAZOR_SHELL       - 1] = sMoveFourLineDescription_RazorShell,
    [MOVE_HEAT_CRASH        - 1] = sMoveFourLineDescription_HeavySlam,
    [MOVE_LEAF_TORNADO      - 1] = sMoveFourLineDescription_LeafTornado,
    [MOVE_STEAMROLLER       - 1] = sMoveFourLineDescription_Steamroller,
    [MOVE_COTTON_GUARD      - 1] = sMoveFourLineDescription_CottonGuard,
    [MOVE_NIGHT_DAZE        - 1] = sMoveFourLineDescription_NightDaze,
    [MOVE_PSYSTRIKE         - 1] = sMoveFourLineDescription_Psyshock,
    [MOVE_TAIL_SLAP         - 1] = sMoveFourLineDescription_TailSlap,
    [MOVE_HURRICANE         - 1] = sMoveFourLineDescription_Hurricane,
    [MOVE_HEAD_CHARGE       - 1] = sMoveFourLineDescription_HeadCharge,
    [MOVE_GEAR_GRIND        - 1] = sMoveFourLineDescription_GearGrind,
    [MOVE_SEARING_SHOT      - 1] = sMoveFourLineDescription_LavaPlume,
    [MOVE_TECHNO_BLAST      - 1] = sMoveFourLineDescription_TechnoBlast,
    [MOVE_RELIC_SONG        - 1] = sMoveFourLineDescription_RelicSong,
    [MOVE_SECRET_SWORD      - 1] = sMoveFourLineDescription_SecretSword,
    [MOVE_GLACIATE          - 1] = sMoveFourLineDescription_Glaciate,
    [MOVE_BOLT_STRIKE       - 1] = sMoveFourLineDescription_BoltStrike,
    [MOVE_BLUE_FLARE        - 1] = sMoveFourLineDescription_BlueFlare,
    [MOVE_FIERY_DANCE       - 1] = sMoveFourLineDescription_FieryDance,
    [MOVE_FREEZE_SHOCK      - 1] = sMoveFourLineDescription_FreezeShock,
    [MOVE_ICE_BURN          - 1] = sMoveFourLineDescription_IceBurn,
    [MOVE_SNARL             - 1] = sMoveFourLineDescription_Snarl,
    [MOVE_ICICLE_CRASH      - 1] = sMoveFourLineDescription_IcicleCrash,
    [MOVE_V_CREATE          - 1] = sMoveFourLineDescription_VCreate,
    [MOVE_FUSION_FLARE      - 1] = sMoveFourLineDescription_FusionFlare,
    [MOVE_FUSION_BOLT       - 1] = sMoveFourLineDescription_FusionBolt,
    [MOVE_FLYING_PRESS      - 1] = sMoveFourLineDescription_FlyingPress,
    [MOVE_MAT_BLOCK         - 1] = sMoveFourLineDescription_MatBlock,
    [MOVE_BELCH             - 1] = sMoveFourLineDescription_Belch,
    [MOVE_ROTOTILLER        - 1] = sMoveFourLineDescription_Rototiller,
    [MOVE_STICKY_WEB        - 1] = sMoveFourLineDescription_StickyWeb,
    [MOVE_FELL_STINGER      - 1] = sMoveFourLineDescription_FellStinger,
    [MOVE_PHANTOM_FORCE     - 1] = sMoveFourLineDescription_ShadowForce,
    [MOVE_TRICK_OR_TREAT    - 1] = sMoveFourLineDescription_TrickOrTreat,
    [MOVE_NOBLE_ROAR        - 1] = sMoveFourLineDescription_NobleRoar,
    [MOVE_ION_DELUGE        - 1] = sMoveFourLineDescription_IonDeluge,
    [MOVE_PARABOLIC_CHARGE  - 1] = sMoveFourLineDescription_ParabolicCharge,
    [MOVE_FORESTS_CURSE     - 1] = sMoveFourLineDescription_ForestsCurse,
    [MOVE_PETAL_BLIZZARD    - 1] = sMoveFourLineDescription_PetalBlizzard,
    [MOVE_FREEZE_DRY        - 1] = sMoveFourLineDescription_FreezeDry,
    [MOVE_DISARMING_VOICE   - 1] = sMoveFourLineDescription_DisarmingVoice,
    [MOVE_PARTING_SHOT      - 1] = sMoveFourLineDescription_PartingShot,
    [MOVE_TOPSY_TURVY       - 1] = sMoveFourLineDescription_TopsyTurvy,
    [MOVE_DRAINING_KISS     - 1] = sMoveFourLineDescription_DrainingKiss,
    [MOVE_CRAFTY_SHIELD     - 1] = sMoveFourLineDescription_CraftyShield,
    [MOVE_FLOWER_SHIELD     - 1] = sMoveFourLineDescription_FlowerShield,
    [MOVE_GRASSY_TERRAIN    - 1] = sMoveFourLineDescription_GrassyTerrain,
    [MOVE_MISTY_TERRAIN     - 1] = sMoveFourLineDescription_MistyTerrain,
    [MOVE_ELECTRIFY         - 1] = sMoveFourLineDescription_Electrify,
    [MOVE_PLAY_ROUGH        - 1] = sMoveFourLineDescription_PlayRough,
    [MOVE_FAIRY_WIND        - 1] = sMoveFourLineDescription_FairyWind,
    [MOVE_MOONBLAST         - 1] = sMoveFourLineDescription_Moonblast,
    [MOVE_BOOMBURST         - 1] = sMoveFourLineDescription_Boomburst,
    [MOVE_FAIRY_LOCK        - 1] = sMoveFourLineDescription_FairyLock,
    [MOVE_KINGS_SHIELD      - 1] = sMoveFourLineDescription_KingsShield,
    [MOVE_PLAY_NICE         - 1] = sMoveFourLineDescription_PlayNice,
    [MOVE_CONFIDE           - 1] = sMoveFourLineDescription_Confide,
    [MOVE_DIAMOND_STORM     - 1] = sMoveFourLineDescription_DiamondStorm,
    [MOVE_STEAM_ERUPTION    - 1] = sMoveFourLineDescription_SteamEruption,
    [MOVE_HYPERSPACE_HOLE   - 1] = sMoveFourLineDescription_HyperspaceHole,
    [MOVE_WATER_SHURIKEN    - 1] = sMoveFourLineDescription_WaterShuriken,
    [MOVE_MYSTICAL_FIRE     - 1] = sMoveFourLineDescription_MysticalFire,
    [MOVE_SPIKY_SHIELD      - 1] = sMoveFourLineDescription_SpikyShield,
    [MOVE_AROMATIC_MIST     - 1] = sMoveFourLineDescription_AromaticMist,
    [MOVE_EERIE_IMPULSE     - 1] = sMoveFourLineDescription_EerieImpulse,
    [MOVE_VENOM_DRENCH      - 1] = sMoveFourLineDescription_VenomDrench,
    [MOVE_POWDER            - 1] = sMoveFourLineDescription_Powder,
    [MOVE_GEOMANCY          - 1] = sMoveFourLineDescription_Geomancy,
    [MOVE_MAGNETIC_FLUX     - 1] = sMoveFourLineDescription_MagneticFlux,
    [MOVE_HAPPY_HOUR        - 1] = sMoveFourLineDescription_HappyHour,
    [MOVE_ELECTRIC_TERRAIN  - 1] = sMoveFourLineDescription_ElectricTerrain,
    [MOVE_DAZZLING_GLEAM    - 1] = sMoveFourLineDescription_DazzlingGleam,
    [MOVE_CELEBRATE         - 1] = sMoveFourLineDescription_Celebrate,
    [MOVE_HOLD_HANDS        - 1] = sMoveFourLineDescription_HoldHands,
    [MOVE_BABY_DOLL_EYES    - 1] = sMoveFourLineDescription_BabyDollEyes,
    [MOVE_NUZZLE            - 1] = sMoveFourLineDescription_Nuzzle,
    [MOVE_HOLD_BACK         - 1] = sMoveFourLineDescription_FalseSwipe,
    [MOVE_INFESTATION       - 1] = sMoveFourLineDescription_Infestation,
    [MOVE_POWER_UP_PUNCH    - 1] = sMoveFourLineDescription_PowerUpPunch,
    [MOVE_OBLIVION_WING     - 1] = sMoveFourLineDescription_DrainingKiss,
    [MOVE_THOUSAND_ARROWS   - 1] = sMoveFourLineDescription_ThousandArrows,
    [MOVE_THOUSAND_WAVES    - 1] = sMoveFourLineDescription_ThousandWaves,
    [MOVE_LANDS_WRATH       - 1] = sMoveFourLineDescription_LandsWrath,
    [MOVE_LIGHT_OF_RUIN     - 1] = sMoveFourLineDescription_LightOfRuin,
    [MOVE_ORIGIN_PULSE      - 1] = sMoveFourLineDescription_OriginPulse,
    [MOVE_PRECIPICE_BLADES  - 1] = sMoveFourLineDescription_PrecipiceBlades,
    [MOVE_DRAGON_ASCENT     - 1] = sMoveFourLineDescription_CloseCombat,
    [MOVE_HYPERSPACE_FURY   - 1] = sMoveFourLineDescription_HyperspaceHole,
    [MOVE_SHORE_UP          - 1] = sMoveFourLineDescription_ShoreUp,
    [MOVE_FIRST_IMPRESSION  - 1] = sMoveFourLineDescription_FirstImpression,
    [MOVE_BANEFUL_BUNKER    - 1] = sMoveFourLineDescription_BanefulBunker,
    [MOVE_SPIRIT_SHACKLE    - 1] = sMoveFourLineDescription_SpiritShackle,
    [MOVE_DARKEST_LARIAT    - 1] = sMoveFourLineDescription_DarkestLariat,
    [MOVE_SPARKLING_ARIA    - 1] = sMoveFourLineDescription_SparklingAria,
    [MOVE_ICE_HAMMER        - 1] = sMoveFourLineDescription_HammerArm,
    [MOVE_FLORAL_HEALING    - 1] = sMoveFourLineDescription_FloralHealing,
    [MOVE_HIGH_HORSEPOWER   - 1] = sMoveFourLineDescription_HighHorsepower,
    [MOVE_STRENGTH_SAP      - 1] = sMoveFourLineDescription_StrengthSap,
    [MOVE_SOLAR_BLADE       - 1] = sMoveFourLineDescription_SolarBlade,
    [MOVE_LEAFAGE           - 1] = sMoveFourLineDescription_Leafage,
    [MOVE_SPOTLIGHT         - 1] = sMoveFourLineDescription_Spotlight,
    [MOVE_TOXIC_THREAD      - 1] = sMoveFourLineDescription_ToxicThread,
    [MOVE_LASER_FOCUS       - 1] = sMoveFourLineDescription_LaserFocus,
    [MOVE_GEAR_UP           - 1] = sMoveFourLineDescription_GearUp,
    [MOVE_THROAT_CHOP       - 1] = sMoveFourLineDescription_ThroatChop,
    [MOVE_POLLEN_PUFF       - 1] = sMoveFourLineDescription_PollenPuff,
    [MOVE_ANCHOR_SHOT       - 1] = sMoveFourLineDescription_AnchorShot,
    [MOVE_PSYCHIC_TERRAIN   - 1] = sMoveFourLineDescription_PsychicTerrain,
    [MOVE_LUNGE             - 1] = sMoveFourLineDescription_Lunge,
    [MOVE_FIRE_LASH         - 1] = sMoveFourLineDescription_FireLash,
    [MOVE_POWER_TRIP        - 1] = sMoveFourLineDescription_PowerTrip,
    [MOVE_BURN_UP           - 1] = sMoveFourLineDescription_BurnUp,
    [MOVE_SPEED_SWAP        - 1] = sMoveFourLineDescription_SpeedSwap,
    [MOVE_SMART_STRIKE      - 1] = sMoveFourLineDescription_SmartStrike,
    [MOVE_PURIFY            - 1] = sMoveFourLineDescription_Purify,
    [MOVE_REVELATION_DANCE  - 1] = sMoveFourLineDescription_RevelationDance,
    [MOVE_CORE_ENFORCER     - 1] = sMoveFourLineDescription_CoreEnforcer,
    [MOVE_TROP_KICK         - 1] = sMoveFourLineDescription_TropKick,
    [MOVE_INSTRUCT          - 1] = sMoveFourLineDescription_Instruct,
    [MOVE_BEAK_BLAST        - 1] = sMoveFourLineDescription_BeakBlast,
    [MOVE_CLANGING_SCALES   - 1] = sMoveFourLineDescription_ClangingScales,
    [MOVE_DRAGON_HAMMER     - 1] = sMoveFourLineDescription_DragonHammer,
    [MOVE_BRUTAL_SWING      - 1] = sMoveFourLineDescription_BrutalSwing,
    [MOVE_AURORA_VEIL       - 1] = sMoveFourLineDescription_AuroraVeil,
    [MOVE_SHELL_TRAP        - 1] = sMoveFourLineDescription_ShellTrap,
    [MOVE_FLEUR_CANNON      - 1] = sMoveFourLineDescription_FleurCannon,
    [MOVE_PSYCHIC_FANGS     - 1] = sMoveFourLineDescription_PsychicFangs,
    [MOVE_STOMPING_TANTRUM  - 1] = sMoveFourLineDescription_StompingTantrum,
    [MOVE_SHADOW_BONE       - 1] = sMoveFourLineDescription_ShadowBone,
    [MOVE_ACCELEROCK        - 1] = sMoveFourLineDescription_Accelerock,
    [MOVE_LIQUIDATION       - 1] = sMoveFourLineDescription_Liquidation,
    [MOVE_PRISMATIC_LASER   - 1] = sMoveFourLineDescription_PrismaticLaser,
    [MOVE_SPECTRAL_THIEF    - 1] = sMoveFourLineDescription_SpectralThief,
    [MOVE_SUNSTEEL_STRIKE   - 1] = sMoveFourLineDescription_SunsteelStrike,
    [MOVE_MOONGEIST_BEAM    - 1] = sMoveFourLineDescription_MoongeistBeam,
    [MOVE_TEARFUL_LOOK      - 1] = sMoveFourLineDescription_TearfulLook,
    [MOVE_ZING_ZAP          - 1] = sMoveFourLineDescription_ZingZap,
    [MOVE_NATURES_MADNESS   - 1] = sMoveFourLineDescription_NaturesMadness,
    [MOVE_MULTI_ATTACK      - 1] = sMoveFourLineDescription_MultiAttack,
    [MOVE_MIND_BLOWN        - 1] = sMoveFourLineDescription_MindBlown,
    [MOVE_PLASMA_FISTS      - 1] = sMoveFourLineDescription_PlasmaFists,
    [MOVE_PHOTON_GEYSER     - 1] = sMoveFourLineDescription_PhotonGeyser,
    [MOVE_ZIPPY_ZAP         - 1] = sMoveFourLineDescription_ZippyZap,
    [MOVE_SPLISHY_SPLASH    - 1] = sMoveFourLineDescription_SplishySplash,
    [MOVE_FLOATY_FALL       - 1] = sMoveFourLineDescription_FloatyFall,
    [MOVE_PIKA_PAPOW        - 1] = sMoveFourLineDescription_PikaPapow,
    [MOVE_BOUNCY_BUBBLE     - 1] = sMoveFourLineDescription_BouncyBubble,
    [MOVE_BUZZY_BUZZ        - 1] = sMoveFourLineDescription_BuzzyBuzz,
    [MOVE_SIZZLY_SLIDE      - 1] = sMoveFourLineDescription_SizzlySlide,
    [MOVE_GLITZY_GLOW       - 1] = sMoveFourLineDescription_GlitzyGlow,
    [MOVE_BADDY_BAD         - 1] = sMoveFourLineDescription_BaddyBad,
    [MOVE_SAPPY_SEED        - 1] = sMoveFourLineDescription_SappySeed,
    [MOVE_FREEZY_FROST      - 1] = sMoveFourLineDescription_FreezyFrost,
    [MOVE_SPARKLY_SWIRL     - 1] = sMoveFourLineDescription_SparklySwirl,
    [MOVE_VEEVEE_VOLLEY     - 1] = sMoveFourLineDescription_VeeveeVolley,
    [MOVE_DOUBLE_IRON_BASH  - 1] = sMoveFourLineDescription_DoubleIronBash,

    //GEN 8
    [MOVE_DYNAMAX_CANNON    - 1] = sMoveFourLineDescription_DynamaxCannon,
    [MOVE_SNIPE_SHOT        - 1] = sMoveFourLineDescription_SnipeShot,
    [MOVE_JAW_LOCK          - 1] = sMoveFourLineDescription_JawLock,
    [MOVE_STUFF_CHEEKS      - 1] = sMoveFourLineDescription_StuffCheeks,
    [MOVE_NO_RETREAT        - 1] = sMoveFourLineDescription_NoRetreat,
    [MOVE_TAR_SHOT          - 1] = sMoveFourLineDescription_TarShot,
    [MOVE_MAGIC_POWDER      - 1] = sMoveFourLineDescription_MagicPowder,
    [MOVE_DRAGON_DARTS      - 1] = sMoveFourLineDescription_DragonDarts,
    [MOVE_TEATIME           - 1] = sMoveFourLineDescription_Teatime,
    [MOVE_OCTOLOCK          - 1] = sMoveFourLineDescription_Octolock,
    [MOVE_BOLT_BEAK         - 1] = sMoveFourLineDescription_BoltBeak,
    [MOVE_FISHIOUS_REND     - 1] = sMoveFourLineDescription_BoltBeak,
    [MOVE_COURT_CHANGE      - 1] = sMoveFourLineDescription_CourtChange,
    [MOVE_CLANGOROUS_SOUL   - 1] = sMoveFourLineDescription_ClangorousSoul,
    [MOVE_BODY_PRESS        - 1] = sMoveFourLineDescription_BodyPress,
    [MOVE_DECORATE          - 1] = sMoveFourLineDescription_Decorate,
    [MOVE_DRUM_BEATING      - 1] = sMoveFourLineDescription_DrumBeating,
    [MOVE_SNAP_TRAP         - 1] = sMoveFourLineDescription_SnapTrap,
    [MOVE_PYRO_BALL         - 1] = sMoveFourLineDescription_PyroBall,
    [MOVE_BEHEMOTH_BLADE    - 1] = sMoveFourLineDescription_BehemothBlade,
    [MOVE_BEHEMOTH_BASH     - 1] = sMoveFourLineDescription_BehemothBash,
    [MOVE_AURA_WHEEL        - 1] = sMoveFourLineDescription_AuraWheel,
    [MOVE_BREAKING_SWIPE    - 1] = sMoveFourLineDescription_BreakingSwipe,
    [MOVE_BRANCH_POKE       - 1] = sMoveFourLineDescription_BranchPoke,
    [MOVE_OVERDRIVE         - 1] = sMoveFourLineDescription_Overdrive,
    [MOVE_APPLE_ACID        - 1] = sMoveFourLineDescription_AppleAcid,
    [MOVE_GRAV_APPLE        - 1] = sMoveFourLineDescription_GravApple,
    [MOVE_SPIRIT_BREAK      - 1] = sMoveFourLineDescription_SpiritBreak,
    [MOVE_STRANGE_STEAM     - 1] = sMoveFourLineDescription_StrangeSteam,
    [MOVE_LIFE_DEW          - 1] = sMoveFourLineDescription_LifeDew,
    [MOVE_OBSTRUCT          - 1] = sMoveFourLineDescription_Obstruct,
    [MOVE_FALSE_SURRENDER   - 1] = sMoveFourLineDescription_FalseSurrender,
    [MOVE_METEOR_ASSAULT    - 1] = sMoveFourLineDescription_MeteorAssault,
    [MOVE_ETERNABEAM        - 1] = sMoveFourLineDescription_Eternabeam,
    [MOVE_STEEL_BEAM        - 1] = sMoveFourLineDescription_SteelBeam,
    [MOVE_EXPANDING_FORCE   - 1] = sMoveFourLineDescription_ExpandingForce,
    [MOVE_STEEL_ROLLER      - 1] = sMoveFourLineDescription_SteelRoller,
    [MOVE_SCALE_SHOT        - 1] = sMoveFourLineDescription_ScaleShot,
    [MOVE_METEOR_BEAM       - 1] = sMoveFourLineDescription_MeteorBeam,
    [MOVE_SHELL_SIDE_ARM    - 1] = sMoveFourLineDescription_ShellSideArm,
    [MOVE_MISTY_EXPLOSION   - 1] = sMoveFourLineDescription_MistyExplosion,
    [MOVE_GRASSY_GLIDE      - 1] = sMoveFourLineDescription_GrassyGlide,
    [MOVE_RISING_VOLTAGE    - 1] = sMoveFourLineDescription_RisingVoltage,
    [MOVE_TERRAIN_PULSE     - 1] = sMoveFourLineDescription_TerrainPulse,
    [MOVE_SKITTER_SMACK     - 1] = sMoveFourLineDescription_SkitterSmack,
    [MOVE_BURNING_JEALOUSY  - 1] = sMoveFourLineDescription_BurningJealousy,
    [MOVE_LASH_OUT          - 1] = sMoveFourLineDescription_LashOut,
    [MOVE_POLTERGEIST       - 1] = sMoveFourLineDescription_Poltergeist,
    [MOVE_CORROSIVE_GAS     - 1] = sMoveFourLineDescription_CorrosiveGas,
    [MOVE_COACHING          - 1] = sMoveFourLineDescription_Coaching,
    [MOVE_FLIP_TURN         - 1] = sMoveFourLineDescription_UTurn,
    [MOVE_TRIPLE_AXEL       - 1] = sMoveFourLineDescription_TripleKick,
    [MOVE_DUAL_WINGBEAT     - 1] = sMoveFourLineDescription_DualWingbeat,
    [MOVE_SCORCHING_SANDS   - 1] = sMoveFourLineDescription_ScorchingSands,
    [MOVE_JUNGLE_HEALING    - 1] = sMoveFourLineDescription_JungleHealing,
    [MOVE_WICKED_BLOW       - 1] = sMoveFourLineDescription_WickedBlow,
    [MOVE_SURGING_STRIKES   - 1] = sMoveFourLineDescription_SurgingStrikes,
    [MOVE_THUNDER_CAGE      - 1] = sMoveFourLineDescription_ThunderCage,
    [MOVE_DRAGON_ENERGY     - 1] = sMoveFourLineDescription_DragonEnergy,
    [MOVE_FREEZING_GLARE    - 1] = sMoveFourLineDescription_FreezingGlare,
    [MOVE_FIERY_WRATH       - 1] = sMoveFourLineDescription_FieryWrath,
    [MOVE_THUNDEROUS_KICK   - 1] = sMoveFourLineDescription_ThunderousKick,
    [MOVE_GLACIAL_LANCE     - 1] = sMoveFourLineDescription_GlacialLance,
    [MOVE_ASTRAL_BARRAGE    - 1] = sMoveFourLineDescription_AstralBarrage,
    [MOVE_EERIE_SPELL       - 1] = sMoveFourLineDescription_EerieSpell,
    //9 gen
    [MOVE_DIRE_CLAW - 1] = sMoveFourLineDescription_DireClaw,
    [MOVE_PSYSHIELD_BASH - 1] = sMoveFourLineDescription_PsyshieldBash,
    [MOVE_POWER_SHIFT - 1] = sMoveFourLineDescription_PowerShift,
    [MOVE_STONE_AXE - 1] = sMoveFourLineDescription_StoneAxe,
    [MOVE_SPRINGTIDE_STORM - 1] = sMoveFourLineDescription_SpringtideStorm,
    [MOVE_MYSTICAL_POWER - 1] = sMoveFourLineDescription_MysticalPower,
    [MOVE_RAGING_FURY - 1] = sMoveFourLineDescription_RagingFury,
    [MOVE_WAVE_CRASH - 1] = sMoveFourLineDescription_WaveCrash,
    [MOVE_CHLOROBLAST - 1] = sMoveFourLineDescription_Chloroblast,
    [MOVE_MOUNTAIN_GALE - 1] = sMoveFourLineDescription_MountainGale,
    [MOVE_VICTORY_DANCE - 1] = sMoveFourLineDescription_VictoryDance,
    [MOVE_HEADLONG_RUSH - 1] = sMoveFourLineDescription_HeadlongRush,
    [MOVE_BARB_BARRAGE - 1] = sMoveFourLineDescription_BarbBarrage,
    [MOVE_ESPER_WING - 1] = sMoveFourLineDescription_EsperWing,
    [MOVE_BITTER_MALICE - 1] = sMoveFourLineDescription_BitterMalice,
    [MOVE_SHELTER - 1] = sMoveFourLineDescription_Shelter,
    [MOVE_TRIPLE_ARROWS - 1] = sMoveFourLineDescription_TripleArrows,
    [MOVE_INFERNAL_PARADE - 1] = sMoveFourLineDescription_InfernalParade,
    [MOVE_CEASELESS_EDGE - 1] = sMoveFourLineDescription_CeaselessEdge,
    [MOVE_BLEAKWIND_STORM - 1] = sMoveFourLineDescription_BleakwindStorm,
    [MOVE_WILDBOLT_STORM - 1] = sMoveFourLineDescription_WildboltStorm,
    [MOVE_SANDSEAR_STORM - 1] = sMoveFourLineDescription_SandsearStorm,
    [MOVE_LUNAR_BLESSING - 1] = sMoveFourLineDescription_LunarBlessing,
    [MOVE_TAKE_HEART - 1] = sMoveFourLineDescription_TakeHeart,
    [MOVE_TERA_BLAST - 1] = sMoveFourLineDescription_TeraBlast,
    [MOVE_SILK_TRAP - 1] = sMoveFourLineDescription_SilkTrap,
    [MOVE_AXE_KICK - 1] = sMoveFourLineDescription_AxeKick,
    [MOVE_LAST_RESPECTS - 1] = sMoveFourLineDescription_LastRespects,
    [MOVE_LUMINA_CRASH - 1] = sMoveFourLineDescription_LuminaCrash,
    [MOVE_ORDER_UP - 1] = sMoveFourLineDescription_OrderUp,
    [MOVE_JET_PUNCH - 1] = sMoveFourLineDescription_JetPunch,
    [MOVE_SPICY_EXTRACT - 1] = sMoveFourLineDescription_SpicyExtract,
    [MOVE_SPIN_OUT - 1] = sMoveFourLineDescription_SpinOut,
    [MOVE_POPULATION_BOMB - 1] = sMoveFourLineDescription_PopulationBomb,
    [MOVE_ICE_SPINNER - 1] = sMoveFourLineDescription_IceSpinner,
    [MOVE_GLAIVE_RUSH - 1] = sMoveFourLineDescription_GlaiveRush,
    [MOVE_REVIVAL_BLESSING - 1] = sMoveFourLineDescription_RevivalBlessing,
    [MOVE_SALT_CURE - 1] = sMoveFourLineDescription_SaltCure,
    [MOVE_TRIPLE_DIVE - 1] = sMoveFourLineDescription_TripleDive,
    [MOVE_MORTAL_SPIN - 1] = sMoveFourLineDescription_MortalSpin,
    [MOVE_DOODLE - 1] = sMoveFourLineDescription_Doodle,
    [MOVE_FILLET_AWAY - 1] = sMoveFourLineDescription_FilletAway,
    [MOVE_KOWTOW_CLEAVE - 1] = sMoveFourLineDescription_KowtowCleave,
    [MOVE_FLOWER_TRICK - 1] = sMoveFourLineDescription_FlowerTrick,
    [MOVE_TORCH_SONG - 1] = sMoveFourLineDescription_TorchSong,
    [MOVE_AQUA_STEP - 1] = sMoveFourLineDescription_AquaStep,
    [MOVE_RAGING_BULL - 1] = sMoveFourLineDescription_RagingBull,
    [MOVE_MAKE_IT_RAIN - 1] = sMoveFourLineDescription_MakeItRain,
    [MOVE_RUINATION - 1] = sMoveFourLineDescription_Ruination,
    [MOVE_COLLISION_COURSE - 1] = sMoveFourLineDescription_CollisionCourse,
    [MOVE_ELECTRO_DRIFT - 1] = sMoveFourLineDescription_ElectroDrift,
    [MOVE_SHED_TAIL - 1] = sMoveFourLineDescription_ShedTail,
    [MOVE_CHILLY_RECEPTION - 1] = sMoveFourLineDescription_ChillyReception,
    [MOVE_TIDY_UP - 1] = sMoveFourLineDescription_TidyUp,
    [MOVE_SNOWSCAPE - 1] = sMoveFourLineDescription_Snowscape,
    [MOVE_POUNCE - 1] = sMoveFourLineDescription_Pounce,
    [MOVE_TRAILBLAZE - 1] = sMoveFourLineDescription_Trailblaze,
    [MOVE_CHILLING_WATER - 1] = sMoveFourLineDescription_ChillingWater,
    [MOVE_HYPER_DRILL - 1] = sMoveFourLineDescription_HyperDrill,
    [MOVE_TWIN_BEAM - 1] = sMoveFourLineDescription_TwinBeam,
    [MOVE_RAGE_FIST - 1] = sMoveFourLineDescription_RageFist,
    [MOVE_ARMOR_CANNON - 1] = sMoveFourLineDescription_ArmorCannon,
    [MOVE_BITTER_BLADE - 1] = sMoveFourLineDescription_BitterBlade,
    [MOVE_DOUBLE_SHOCK - 1] = sMoveFourLineDescription_DoubleShock,
    [MOVE_GIGATON_HAMMER - 1] = sMoveFourLineDescription_GigatonHammer,
    [MOVE_COMEUPPANCE - 1] = sMoveFourLineDescription_Comeuppance,
    [MOVE_AQUA_CUTTER - 1] = sMoveFourLineDescription_AquaCutter,
    [MOVE_BLAZING_TORQUE - 1] = sMoveFourLineDescription_BlazingTorque,
    [MOVE_WICKED_TORQUE - 1] = sMoveFourLineDescription_WickedTorque,
    [MOVE_NOXIOUS_TORQUE - 1] = sMoveFourLineDescription_NoxiousTorque,
    [MOVE_COMBAT_TORQUE - 1] = sMoveFourLineDescription_CombatTorque,
    [MOVE_MAGICAL_TORQUE - 1] = sMoveFourLineDescription_MagicalTorque,
    [MOVE_PSYBLADE - 1] = sMoveFourLineDescription_Psyblade,
    [MOVE_HYDRO_STEAM - 1] = sMoveFourLineDescription_HydroSteam,
    [MOVE_BLOOD_MOON - 1] = sMoveFourLineDescription_BloodMoon,
    [MOVE_MATCHA_GOTCHA - 1] = sMoveFourLineDescription_MatchaGotcha,
    [MOVE_SYRUP_BOMB - 1] = sMoveFourLineDescription_SyrupBomb,
    [MOVE_IVY_CUDGEL - 1] = sMoveFourLineDescription_IvyCudgel,
#endif
};
