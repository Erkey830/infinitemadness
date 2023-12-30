const struct Ability gAbilities[ABILITIES_COUNT] =
{
    [ABILITY_NONE] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("No special ability."),
    },

    [ABILITY_STENCH] =
    {
        .name = _("Hedor"),
        .description = COMPOUND_STRING("Aleja a Pokémon salvajes."),
    },

    [ABILITY_DRIZZLE] =
    {
        .name = _("Llovizna"),
        .description = COMPOUND_STRING("Hace que llueva en combate."),
    },

    [ABILITY_SPEED_BOOST] =
    {
        .name = _("Impulso"),
        .description = COMPOUND_STRING("Va subiendo la Velocidad."),
    },

    [ABILITY_BATTLE_ARMOR] =
    {
        .name = _("Armadura Batalla"),
        .description = COMPOUND_STRING("Bloquea golpes críticos."),
    },

    [ABILITY_STURDY] =
    {
        .name = _("Robustez"),
        .description = COMPOUND_STRING("Anula golpes fulminantes."),
    },

    [ABILITY_DAMP] =
    {
        .name = _("Humedad"),
        .description = COMPOUND_STRING("Evita la autodestrucción."),
    },

    [ABILITY_LIMBER] =
    {
        .name = _("Flexibilidad"),
        .description = COMPOUND_STRING("Evita la parálisis."),
    },

    [ABILITY_SAND_VEIL] =
    {
        .name = _("Velo Arena"),
        .description = COMPOUND_STRING("Más evasión en Torm. Arena."),
    },

    [ABILITY_STATIC] =
    {
        .name = _("Elec. Estática"),
        .description = COMPOUND_STRING("Paraliza al mín. contacto."),
    },

    [ABILITY_VOLT_ABSORB] =
    {
        .name = _("Absorbe Elec"),
        .description = COMPOUND_STRING("Cambia electricidad en PS."),
    },

    [ABILITY_WATER_ABSORB] =
    {
        .name = _("Absorbe Agua"),
        .description = COMPOUND_STRING("Convierte el agua en PS."),
    },

    [ABILITY_OBLIVIOUS] =
    {
        .name = _("Despiste"),
        .description = COMPOUND_STRING("Evita la atracción."),
    },

    [ABILITY_CLOUD_NINE] =
    {
        .name = _("Aclimatación"),
        .description = COMPOUND_STRING("Anula los efectos del clima."),
    },

    [ABILITY_COMPOUND_EYES] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Ojocompuesto"),
    #else
        .name = _("Ojocompuesto"),
    #endif
        .description = COMPOUND_STRING("Aumenta la Precisión."),
    },

    [ABILITY_INSOMNIA] =
    {
        .name = _("Insomnio"),
        .description = COMPOUND_STRING("Evita el quedarse dormido."),
    },

    [ABILITY_COLOR_CHANGE] =
    {
        .name = _("Cambio Color"),
        .description = COMPOUND_STRING("Toma el tipo del mov. rival."),
    },

    [ABILITY_IMMUNITY] =
    {
        .name = _("Inmunidad"),
        .description = COMPOUND_STRING("Evita el envenenamiento."),
    },

    [ABILITY_FLASH_FIRE] =
    {
        .name = _("Absorbefuego"),
        .description = COMPOUND_STRING("Se carga si recibe Fuego."),
    },

    [ABILITY_SHIELD_DUST] =
    {
        .name = _("Polvo Escudo"),
        .description = COMPOUND_STRING("Evita efectos secundarios."),
    },

    [ABILITY_OWN_TEMPO] =
    {
        .name = _("Ritmo Propio"),
        .description = COMPOUND_STRING("Evita la confusión."),
    },

    [ABILITY_SUCTION_CUPS] =
    {
        .name = _("Ventosas"),
        .description = COMPOUND_STRING("Fija el cuerpo con firmeza."),
    },

    [ABILITY_INTIMIDATE] =
    {
        .name = _("Intimidación"),
        .description = COMPOUND_STRING("Baja el Ataque del rival."),
    },

    [ABILITY_SHADOW_TAG] =
    {
        .name = _("Sombratrampa"),
        .description = COMPOUND_STRING("Evita que el enemigo huya."),
    },

    [ABILITY_ROUGH_SKIN] =
    {
        .name = _("Piel Tosca"),
        .description = COMPOUND_STRING("Hiere al tacto."),
    },

    [ABILITY_WONDER_GUARD] =
    {
        .name = _("Superguarda"),
        .description = COMPOUND_STRING("Cuesta mucho hacerle daño."),
    },

    [ABILITY_LEVITATE] =
    {
        .name = _("Levitación"),
        .description = COMPOUND_STRING("No sufre at. tipo Tierra."),
    },

    [ABILITY_EFFECT_SPORE] =
    {
        .name = _("Efectoespora"),
        .description = COMPOUND_STRING("Deja esporas al contacto."),
    },

    [ABILITY_SYNCHRONIZE] =
    {
        .name = _("Sincronía"),
        .description = COMPOUND_STRING("Transmite problem. de estado"),
    },

    [ABILITY_CLEAR_BODY] =
    {
        .name = _("Cuerpo Puro"),
        .description = COMPOUND_STRING("Evita que baje la habilidad."),
    },

    [ABILITY_NATURAL_CURE] =
    {
        .name = _("Cura Natural"),
        .description = COMPOUND_STRING("Se cura al salir."),
    },

    [ABILITY_LIGHTNING_ROD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Pararrayos"),
    #else
        .name = _("Pararrayos"),
    #endif
        .description = COMPOUND_STRING("Frena ataques eléctricos."),
    },

    [ABILITY_SERENE_GRACE] =
    {
        .name = _("Dicha"),
        .description = COMPOUND_STRING("Añade efectos secundarios."),
    },

    [ABILITY_SWIFT_SWIM] =
    {
        .name = _("Nado Rápido"),
        .description = COMPOUND_STRING("Con lluvia, sube Velocidad."),
    },

    [ABILITY_CHLOROPHYLL] =
    {
        .name = _("Clorofila"),
        .description = COMPOUND_STRING("Con sol, sube la Velocidad."),
    },

    [ABILITY_ILLUMINATE] =
    {
        .name = _("Iluminación"),
        .description = COMPOUND_STRING("Facilita el encuentro."),
    },

    [ABILITY_TRACE] =
    {
        .name = _("Rastro"),
        .description = COMPOUND_STRING("Copia habilidad especial."),
    },

    [ABILITY_HUGE_POWER] =
    {
        .name = _("Potencia"),
        .description = COMPOUND_STRING("Aumenta el Ataque."),
    },

    [ABILITY_POISON_POINT] =
    {
        .name = _("Punto Tóxico"),
        .description = COMPOUND_STRING("Envenena al mín. contacto."),
    },

    [ABILITY_INNER_FOCUS] =
    {
        .name = _("Foco Interno"),
        .description = COMPOUND_STRING("Evita el retroceso."),
    },

    [ABILITY_MAGMA_ARMOR] =
    {
        .name = _("Escudo Magma"),
        .description = COMPOUND_STRING("Evita el congelamiento."),
    },

    [ABILITY_WATER_VEIL] =
    {
        .name = _("Velo Agua"),
        .description = COMPOUND_STRING("Evita las quemaduras."),
    },

    [ABILITY_MAGNET_PULL] =
    {
        .name = _("Imán"),
        .description = COMPOUND_STRING("Atrapa Pokémon de Acero."),
    },

    [ABILITY_SOUNDPROOF] =
    {
        .name = _("Insonorizar"),
        .description = COMPOUND_STRING("Evita ataques de sonido."),
    },

    [ABILITY_RAIN_DISH] =
    {
        .name = _("Cura Lluvia"),
        .description = COMPOUND_STRING("Sube PS cuando llueve."),
    },

    [ABILITY_SAND_STREAM] =
    {
        .name = _("Chorro Arena"),
        .description = COMPOUND_STRING("Crea una Tormenta de Arena."),
    },

    [ABILITY_PRESSURE] =
    {
        .name = _("Presión"),
        .description = COMPOUND_STRING("Baja los PP del enemigo."),
    },

    [ABILITY_THICK_FAT] =
    {
        .name = _("Sebo"),
        .description = COMPOUND_STRING("Protege del frío y calor."),
    },

    [ABILITY_EARLY_BIRD] =
    {
        .name = _("Madrugar"),
        .description = COMPOUND_STRING("Despierta rápido al Pkmn."),
    },

    [ABILITY_FLAME_BODY] =
    {
        .name = _("Cuerpo Llama"),
        .description = COMPOUND_STRING("Quema al mín. contacto."),
    },

    [ABILITY_RUN_AWAY] =
    {
        .name = _("Fuga"),
        .description = COMPOUND_STRING("Facilita la huida."),
    },

    [ABILITY_KEEN_EYE] =
    {
        .name = _("Vista Lince"),
        .description = COMPOUND_STRING("Evita que baje precisión."),
    },

    [ABILITY_HYPER_CUTTER] =
    {
        .name = _("Corte Fuerte"),
        .description = COMPOUND_STRING("Evita que baje el ataque."),
    },

    [ABILITY_PICKUP] =
    {
        .name = _("Recogida"),
        .description = COMPOUND_STRING("Puede tomar objetos."),
    },

    [ABILITY_TRUANT] =
    {
        .name = _("Ausente"),
        .description = COMPOUND_STRING("Interviene cada 2 rondas."),
    },

    [ABILITY_HUSTLE] =
    {
        .name = _("Entusiasmo"),
        .description = COMPOUND_STRING("Cambia Precis. por energía."),
    },

    [ABILITY_CUTE_CHARM] =
    {
        .name = _("Gran Encanto"),
        .description = COMPOUND_STRING("Emboba al mínimo contacto."),
    },

    [ABILITY_PLUS] =
    {
        .name = _("Más"),
        .description = COMPOUND_STRING("Mejora con habilidad menos."),
    },

    [ABILITY_MINUS] =
    {
        .name = _("Menos"),
        .description = COMPOUND_STRING("Mejora con habilidad más."),
    },

    [ABILITY_FORECAST] =
    {
        .name = _("Predicción"),
        .description = COMPOUND_STRING("Cambia con el clima."),
    },

    [ABILITY_STICKY_HOLD] =
    {
        .name = _("Viscosidad"),
        .description = COMPOUND_STRING("Evita el robo de objetos."),
    },

    [ABILITY_SHED_SKIN] =
    {
        .name = _("Mudar"),
        .description = COMPOUND_STRING("Se cura mudando la piel."),
    },

    [ABILITY_GUTS] =
    {
        .name = _("Agallas"),
        .description = COMPOUND_STRING("Sube el Ataque si sufre."),
    },

    [ABILITY_MARVEL_SCALE] =
    {
        .name = _("Esc. Espec"),
        .description = COMPOUND_STRING("Sube la Defensa si sufre."),
    },

    [ABILITY_LIQUID_OOZE] =
    {
        .name = _("Lodo Líquido"),
        .description = COMPOUND_STRING("Al verterlo, hiere."),
    },

    [ABILITY_OVERGROW] =
    {
        .name = _("Espesura"),
        .description = COMPOUND_STRING("Sube ataques tipo Planta."),
    },

    [ABILITY_BLAZE] =
    {
        .name = _("Mar Llamas"),
        .description = COMPOUND_STRING("Sube ataques tipo Fuego."),
    },

    [ABILITY_TORRENT] =
    {
        .name = _("Torrente"),
        .description = COMPOUND_STRING("Sube ataques tipo Agua."),
    },

    [ABILITY_SWARM] =
    {
        .name = _("Enjambre"),
        .description = COMPOUND_STRING("Sube ataques tipo Bicho."),
    },

    [ABILITY_ROCK_HEAD] =
    {
        .name = _("Cabeza Roca"),
        .description = COMPOUND_STRING("Evita volver a ser golpeado."),
    },

    [ABILITY_DROUGHT] =
    {
        .name = _("Sequía"),
        .description = COMPOUND_STRING("Toma luz solar en batalla."),
    },

    [ABILITY_ARENA_TRAP] =
    {
        .name = _("Trampa Arena"),
        .description = COMPOUND_STRING("Evita la huida."),
    },

    [ABILITY_VITAL_SPIRIT] =
    {
        .name = _("Espíritu Vital"),
        .description = COMPOUND_STRING("Evita quedarse dormido."),
    },

    [ABILITY_WHITE_SMOKE] =
    {
        .name = _("Humo Blanco"),
        .description = COMPOUND_STRING("Evita que baje la habilidad."),
    },

    [ABILITY_PURE_POWER] =
    {
        .name = _("Energía Pura"),
        .description = COMPOUND_STRING("Aumenta el Ataque."),
    },

    [ABILITY_SHELL_ARMOR] =
    {
        .name = _("Caparazón"),
        .description = COMPOUND_STRING("Bloquea golpes críticos."),
    },

    [ABILITY_AIR_LOCK] =
    {
        .name = _("Bucle Aire"),
        .description = COMPOUND_STRING("Anula los efectos del clima."),
    },

    [ABILITY_TANGLED_FEET] =
    {
        .name = _("Tumbos"),
        .description = COMPOUND_STRING("Sube Evas. estando conf."),
    },

    [ABILITY_MOTOR_DRIVE] =
    {
        .name = _("Electromotor"),
        .description = COMPOUND_STRING("Sube Vel. si recibe Eléct."),
    },

    [ABILITY_RIVALRY] =
    {
        .name = _("Rivalidad"),
        .description = COMPOUND_STRING("Sube Ataque mismo sexo."),
    },

    [ABILITY_STEADFAST] =
    {
        .name = _("Impasible"),
        .description = COMPOUND_STRING("Retroceder aumenta la Vel."),
    },

    [ABILITY_SNOW_CLOAK] =
    {
        .name = _("Manto Níveo"),
        .description = COMPOUND_STRING("Sube la Evas. con Granizo."),
    },

    [ABILITY_GLUTTONY] =
    {
        .name = _("Gula"),
        .description = COMPOUND_STRING("Come bayas más pronto."),
    },

    [ABILITY_ANGER_POINT] =
    {
        .name = _("Irascible"),
        .description = COMPOUND_STRING("Golpe crítico sube Ataque."),
    },

    [ABILITY_UNBURDEN] =
    {
        .name = _("Liviano"),
        .description = COMPOUND_STRING("Sube Vel. al usar obj. eq."),
    },

    [ABILITY_HEATPROOF] =
    {
        .name = _("Ignífugo"),
        .description = COMPOUND_STRING("Resiste calor y quemadura."),
    },

    [ABILITY_SIMPLE] =
    {
        .name = _("Simple"),
        .description = COMPOUND_STRING("Duplica cambios en estad."),
    },

    [ABILITY_DRY_SKIN] =
    {
        .name = _("Piel Seca"),
        .description = COMPOUND_STRING("Pierde PS si hace calor."),
    },

    [ABILITY_DOWNLOAD] =
    {
        .name = _("Descarga"),
        .description = COMPOUND_STRING("Sube At. según Def. rival."),
    },

    [ABILITY_IRON_FIST] =
    {
        .name = _("Puño Férreo"),
        .description = COMPOUND_STRING("Sube poten. de puñetazos."),
    },

    [ABILITY_POISON_HEAL] =
    {
        .name = _("Antídoto"),
        .description = COMPOUND_STRING("Recupera PS con veneno."),
    },

    [ABILITY_ADAPTABILITY] =
    {
        .name = _("Adaptable"),
        .description = COMPOUND_STRING("Potencia mov. mismo tipo."),
    },

    [ABILITY_SKILL_LINK] =
    {
        .name = _("Encadenado"),
        .description = COMPOUND_STRING("Siempre pot. mult. golpe."),
    },

    [ABILITY_HYDRATION] =
    {
        .name = _("Hidratación"),
        .description = COMPOUND_STRING("Cura estado si llueve."),
    },

    [ABILITY_SOLAR_POWER] =
    {
        .name = _("Poder Solar"),
        .description = COMPOUND_STRING("Sube el Ataque con sol."),
    },

    [ABILITY_QUICK_FEET] =
    {
        .name = _("Pies Rápidos"),
        .description = COMPOUND_STRING("Sube Vel. con prob. est."),
    },

    [ABILITY_NORMALIZE] =
    {
        .name = _("Normalidad"),
        .description = COMPOUND_STRING("Mov. vuelven tipo Normal."),
    },

    [ABILITY_SNIPER] =
    {
        .name = _("Francotiradr"),
        .description = COMPOUND_STRING("Potencia mov. críticos."),
    },

    [ABILITY_MAGIC_GUARD] =
    {
        .name = _("Muro Mágico"),
        .description = COMPOUND_STRING("Solo se daña por ataques."),
    },

    [ABILITY_NO_GUARD] =
    {
        .name = _("Indefenso"),
        .description = COMPOUND_STRING("Todos los mov. aciertan."),
    },

    [ABILITY_STALL] =
    {
        .name = _("Rezagado"),
        .description = COMPOUND_STRING("Ejecuta mov. tras demás."),
    },

    [ABILITY_TECHNICIAN] =
    {
        .name = _("Experto"),
        .description = COMPOUND_STRING("Potencia mov. más débiles."),
    },

    [ABILITY_LEAF_GUARD] =
    {
        .name = _("Defensa Hoja"),
        .description = COMPOUND_STRING("Evita prob. est. con sol."),
    },

    [ABILITY_KLUTZ] =
    {
        .name = _("Zoquete"),
        .description = COMPOUND_STRING("No puede usar obj. equip."),
    },

    [ABILITY_MOLD_BREAKER] =
    {
        .name = _("Rompemoldes"),
        .description = COMPOUND_STRING("Suprime habilidad rival."),
    },

    [ABILITY_SUPER_LUCK] =
    {
        .name = _("Afortunado"),
        .description = COMPOUND_STRING("Los críticos aciertan más."),
    },

    [ABILITY_AFTERMATH] =
    {
        .name = _("Detonación"),
        .description = COMPOUND_STRING("Ser vencido daña al rival."),
    },

    [ABILITY_ANTICIPATION] =
    {
        .name = _("Anticipación"),
        .description = COMPOUND_STRING("Prevé mov. peligrosos."),
    },

    [ABILITY_FOREWARN] =
    {
        .name = _("Alerta"),
        .description = COMPOUND_STRING("Dice mov. rival fuerte."),
    },

    [ABILITY_UNAWARE] =
    {
        .name = _("Ignorante"),
        .description = COMPOUND_STRING("Ignora cambios de estado."),
    },

    [ABILITY_TINTED_LENS] =
    {
        .name = _("Cromolente"),
        .description = COMPOUND_STRING("Potencia mov. no eficaces."),
    },

    [ABILITY_FILTER] =
    {
        .name = _("Filtro"),
        .description = COMPOUND_STRING("Mitiga mov. supereficaces."),
    },

    [ABILITY_SLOW_START] =
    {
        .name = _("Inicio Lento"),
        .description = COMPOUND_STRING("Tarda poco en prepararse."),
    },

    [ABILITY_SCRAPPY] =
    {
        .name = _("Intrépido"),
        .description = COMPOUND_STRING("Golpea a Pkmn Fantasma."),
    },

    [ABILITY_STORM_DRAIN] =
    {
        .name = _("Colector"),
        .description = COMPOUND_STRING("Atrae movimientos de Agua."),
    },

    [ABILITY_ICE_BODY] =
    {
        .name = _("Gélido"),
        .description = COMPOUND_STRING("Recupera PS con Granizo."),
    },

    [ABILITY_SOLID_ROCK] =
    {
        .name = _("Solid Rock"),
        .description = COMPOUND_STRING("Weakens “supereffective”."),
    },

    [ABILITY_SNOW_WARNING] =
    {
        .name = _("Nevada"),
        .description = COMPOUND_STRING("Invoca Granizo al entrar."),
    },

    [ABILITY_HONEY_GATHER] =
    {
        .name = _("Recogemiel"),
        .description = COMPOUND_STRING("Puede encontrar miel."),
    },

    [ABILITY_FRISK] =
    {
        .name = _("Cacheo"),
        .description = COMPOUND_STRING("Puede ver el objeto rival."),
    },

    [ABILITY_RECKLESS] =
    {
        .name = _("Audaz"),
        .description = COMPOUND_STRING("Potencia mov. hirientes."),
    },

    [ABILITY_MULTITYPE] =
    {
        .name = _("Multitipo"),
        .description = COMPOUND_STRING("Cambio tipo según tabla."),
    },

    [ABILITY_FLOWER_GIFT] =
    {
        .name = _("Don Floral"),
        .description = COMPOUND_STRING("Se transforma con sol."),
    },

    [ABILITY_BAD_DREAMS] =
    {
        .name = _("Mal Sueño"),
        .description = COMPOUND_STRING("Daña al rival dormido."),
    },

    [ABILITY_PICKPOCKET] =
    {
        .name = _("Hurto"),
        .description = COMPOUND_STRING("Roba el objeto al rival."),
    },

    [ABILITY_SHEER_FORCE] =
    {
        .name = _("Potencia Bruta"),
        .description = COMPOUND_STRING("Pot. mov. con prob. est."),
    },

    [ABILITY_CONTRARY] =
    {
        .name = _("Respondón"),
        .description = COMPOUND_STRING("Invierte cambios en estad."),
    },

    [ABILITY_UNNERVE] =
    {
        .name = _("Nerviosismo"),
        .description = COMPOUND_STRING("Rival no puede comer baya."),
    },

    [ABILITY_DEFIANT] =
    {
        .name = _("Competitivo"),
        .description = COMPOUND_STRING("Bajadas de est. suben At."),
    },

    [ABILITY_DEFEATIST] =
    {
        .name = _("Flaqueza"),
        .description = COMPOUND_STRING("Se rinde con mitad de PS."),
    },

    [ABILITY_CURSED_BODY] =
    {
        .name = _("Cuerpo Maldito"),
        .description = COMPOUND_STRING("Desactiva mov. al contacto."),
    },

    [ABILITY_HEALER] =
    {
        .name = _("Alma Cura"),
        .description = COMPOUND_STRING("Cura estado del aliado."),
    },

    [ABILITY_FRIEND_GUARD] =
    {
        .name = _("Compiescolta"),
        .description = COMPOUND_STRING("Reduce el daño a aliados."),
    },

    [ABILITY_WEAK_ARMOR] =
    {
        .name = _("Armadura Frágil"),
        .description = COMPOUND_STRING("Carac. cambian al golpear."),
    },

    [ABILITY_HEAVY_METAL] =
    {
        .name = _("Metal Pesado"),
        .description = COMPOUND_STRING("Duplica su peso."),
    },

    [ABILITY_LIGHT_METAL] =
    {
        .name = _("Metal Liviano"),
        .description = COMPOUND_STRING("Reduce a la mitad su peso."),
    },

    [ABILITY_MULTISCALE] =
    {
        .name = _("Multiescamas"),
        .description = COMPOUND_STRING("Reduce daño PS completo."),
    },

    [ABILITY_TOXIC_BOOST] =
    {
        .name = _("Ímpetu Tóxico"),
        .description = COMPOUND_STRING("Sube At. si es envenenado."),
    },

    [ABILITY_FLARE_BOOST] =
    {
        .name = _("Ímpetu Ardiente"),
        .description = COMPOUND_STRING("Sube At. si está quemado."),
    },

    [ABILITY_HARVEST] =
    {
        .name = _("Cosecha"),
        .description = COMPOUND_STRING("Puede reutilizar bayas."),
    },

    [ABILITY_TELEPATHY] =
    {
        .name = _("Telepatía"),
        .description = COMPOUND_STRING("Elude los ataques aliados."),
    },

    [ABILITY_MOODY] =
    {
        .name = _("Veleta"),
        .description = COMPOUND_STRING("Carac. suben gradualmente."),
    },

    [ABILITY_OVERCOAT] =
    {
        .name = _("Funda"),
        .description = COMPOUND_STRING("Bloquea clima y polvo."),
    },

    [ABILITY_POISON_TOUCH] =
    {
        .name = _("Poison Touch"),
        .description = COMPOUND_STRING("Poisons foe on contact."),
    },

    [ABILITY_REGENERATOR] =
    {
        .name = _("Regenerator"),
        .description = COMPOUND_STRING("Heals upon switching out."),
    },

    [ABILITY_BIG_PECKS] =
    {
        .name = _("Sacapecho"),
        .description = COMPOUND_STRING("Impide bajadas de defensa."),
    },

    [ABILITY_SAND_RUSH] =
    {
        .name = _("Ímpetu Arena"),
        .description = COMPOUND_STRING("Sube vel. con Tor. Arena."),
    },

    [ABILITY_WONDER_SKIN] =
    {
        .name = _("Piel Milagro"),
        .description = COMPOUND_STRING("Puede evitar prob. estado."),
    },

    [ABILITY_ANALYTIC] =
    {
        .name = _("Cálculofinal"),
        .description = COMPOUND_STRING("Ser último sube potencia."),
    },

    [ABILITY_ILLUSION] =
    {
        .name = _("Ilusión"),
        .description = COMPOUND_STRING("Adopta aspecto compañero."),
    },

    [ABILITY_IMPOSTER] =
    {
        .name = _("Impostor"),
        .description = COMPOUND_STRING("Se transforma en el rival."),
    },

    [ABILITY_INFILTRATOR] =
    {
        .name = _("Allanamiento"),
        .description = COMPOUND_STRING("Atraviesa barrera rival."),
    },

    [ABILITY_MUMMY] =
    {
        .name = _("Momia"),
        .description = COMPOUND_STRING("Se propaga con contacto."),
    },

    [ABILITY_MOXIE] =
    {
        .name = _("Autoestima"),
        .description = COMPOUND_STRING("Debilitar sube el Ataque."),
    },

    [ABILITY_JUSTIFIED] =
    {
        .name = _("Justiciero"),
        .description = COMPOUND_STRING("Mov. Siniestros suben At."),
    },

    [ABILITY_RATTLED] =
    {
        .name = _("Cobardía"),
        .description = COMPOUND_STRING("Sube Velocidad con susto."),
    },

    [ABILITY_MAGIC_BOUNCE] =
    {
        .name = _("Espejomágico"),
        .description = COMPOUND_STRING("Refleja mov. de estado."),
    },

    [ABILITY_SAP_SIPPER] =
    {
        .name = _("Herbívoro"),
        .description = COMPOUND_STRING("Mov. Planta suben Ataque."),
    },

    [ABILITY_PRANKSTER] =
    {
        .name = _("Bromista"),
        .description = COMPOUND_STRING("Mov. estado prioridad."),
    },

    [ABILITY_SAND_FORCE] =
    {
        .name = _("Poder Arena"),
        .description = COMPOUND_STRING("Sube ataque en Tor. Arena."),
    },

    [ABILITY_IRON_BARBS] =
    {
        .name = _("Iron Barbs"),
        .description = COMPOUND_STRING("Hurts to touch."),
    },

    [ABILITY_ZEN_MODE] =
    {
        .name = _("Modo Daruma"),
        .description = COMPOUND_STRING("Transforma a mitad de PS."),
    },

    [ABILITY_VICTORY_STAR] =
    {
        .name = _("Tinovictoria"),
        .description = COMPOUND_STRING("Sube precisión del bando."),
    },

    [ABILITY_TURBOBLAZE] =
    {
        .name = _("Turboblaze"),
        .description = COMPOUND_STRING("Moves hit through abilities."),
    },

    [ABILITY_TERAVOLT] =
    {
        .name = _("Teravolt"),
        .description = COMPOUND_STRING("Moves hit through abilities."),
    },

    [ABILITY_AROMA_VEIL] =
    {
        .name = _("Velo Aroma"),
        .description = COMPOUND_STRING("Previene límite de mov."),
    },

    [ABILITY_FLOWER_VEIL] =
    {
        .name = _("Velo Flor"),
        .description = COMPOUND_STRING("Protege al tipo Planta."),
    },

    [ABILITY_CHEEK_POUCH] =
    {
        .name = _("Carrillo"),
        .description = COMPOUND_STRING("Restaura PS si come bayas."),
    },

    [ABILITY_PROTEAN] =
    {
        .name = _("Mutatipo"),
        .description = COMPOUND_STRING("Cambia tipo al mov. usado."),
    },

    [ABILITY_FUR_COAT] =
    {
        .name = _("Pelaje Recio"),
        .description = COMPOUND_STRING("Reduce el daño físico."),
    },

    [ABILITY_MAGICIAN] =
    {
        .name = _("Magician"),
        .description = COMPOUND_STRING("Steals the foe's held item."),
    },

    [ABILITY_BULLETPROOF] =
    {
        .name = _("Antibalas"),
        .description = COMPOUND_STRING("Evita algunos proyectiles."),
    },

    [ABILITY_COMPETITIVE] =
    {
        .name = _("Tenacidad"),
        .description = COMPOUND_STRING("Sube At. Esp. si baja est."),
    },

    [ABILITY_STRONG_JAW] =
    {
        .name = _("Mandíbula Fuerte"),
        .description = COMPOUND_STRING("Potencia mov. mordiscos."),
    },

    [ABILITY_REFRIGERATE] =
    {
        .name = _("Piel Helada"),
        .description = COMPOUND_STRING("Mov. Normales de Hielo."),
    },

    [ABILITY_SWEET_VEIL] =
    {
        .name = _("Velo Dulce"),
        .description = COMPOUND_STRING("Previene sueño al bando."),
    },

    [ABILITY_STANCE_CHANGE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Cambio Táctico"),
    #else
        .name = _("Cambio Táctico"),
    #endif
        .description = COMPOUND_STRING("Transforma según combate."),
    },

    [ABILITY_GALE_WINGS] =
    {
        .name = _("Alas Vendaval"),
        .description = COMPOUND_STRING("Mov. Volador prioritarios."),
    },

    [ABILITY_MEGA_LAUNCHER] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Megadisparador"),
    #else
        .name = _("Megadisparador"),
    #endif
        .description = COMPOUND_STRING("Potencia mov. de pulsos."),
    },

    [ABILITY_GRASS_PELT] =
    {
        .name = _("Manto Frondoso"),
        .description = COMPOUND_STRING("Sube defensa en hierba."),
    },

    [ABILITY_SYMBIOSIS] =
    {
        .name = _("Simbiosis"),
        .description = COMPOUND_STRING("Pasa objeto a aliado."),
    },

    [ABILITY_TOUGH_CLAWS] =
    {
        .name = _("Garra Dura"),
        .description = COMPOUND_STRING("Potencia mov. de contacto."),
    },

    [ABILITY_PIXILATE] =
    {
        .name = _("Piel Feérica"),
        .description = COMPOUND_STRING("Mov. Normales son de Hada."),
    },

    [ABILITY_GOOEY] =
    {
        .name = _("Baba"),
        .description = COMPOUND_STRING("Baja Veloc. al contacto."),
    },

    [ABILITY_AERILATE] =
    {
        .name = _("Piel Celeste"),
        .description = COMPOUND_STRING("Mov. Normales son Volador."),
    },

    [ABILITY_PARENTAL_BOND] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Amor Filial"),
    #else
        .name = _("Amor Filial"),
    #endif
        .description = COMPOUND_STRING("Mov. golpean dos veces."),
    },

    [ABILITY_DARK_AURA] =
    {
        .name = _("Aura Oscura"),
        .description = COMPOUND_STRING("Potencia mov. Siniestro."),
    },

    [ABILITY_FAIRY_AURA] =
    {
        .name = _("Aura Feérica"),
        .description = COMPOUND_STRING("Potencia mov. Hada."),
    },

    [ABILITY_AURA_BREAK] =
    {
        .name = _("Rompeaura"),
        .description = COMPOUND_STRING("Invierte hab. de aura."),
    },

    [ABILITY_PRIMORDIAL_SEA] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Mar Albor"),
    #else
        .name = _("PrimrdialSea"),
    #endif
        .description = COMPOUND_STRING("Invoca un diluvio."),
    },

    [ABILITY_DESOLATE_LAND] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Tierra Ocaso"),
    #else
        .name = _("Tierra Ocaso"),
    #endif
        .description = COMPOUND_STRING("Invoca rayos abrasadores."),
    },

    [ABILITY_DELTA_STREAM] =
    {
        .name = _("Ráfaga Delta"),
        .description = COMPOUND_STRING("Invoca turbulencias."),
    },

    [ABILITY_STAMINA] =
    {
        .name = _("Firmeza"),
        .description = COMPOUND_STRING("Potencia Def. con golpe."),
    },

    [ABILITY_WIMP_OUT] =
    {
        .name = _("Huida"),
        .description = COMPOUND_STRING("Huye con mitad de PS."),
    },

    [ABILITY_EMERGENCY_EXIT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Emergency Exit"),
    #else
        .name = _("EmergncyExit"),
    #endif
        .description = COMPOUND_STRING("Flees at half HP."),
    },

    [ABILITY_WATER_COMPACTION] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Hidrorefuerzo"),
    #else
        .name = _("WtrCmpaction"),
    #endif
        .description = COMPOUND_STRING("Agua potencia Defensa."),
    },

    [ABILITY_MERCILESS] =
    {
        .name = _("Ensañamiento"),
        .description = COMPOUND_STRING("Golpe crít. a envenenado."),
    },

    [ABILITY_SHIELDS_DOWN] =
    {
        .name = _("Escudo Limitado"),
        .description = COMPOUND_STRING("Se rompe con mitad de PS."),
    },

    [ABILITY_STAKEOUT] =
    {
        .name = _("Vigilante"),
        .description = COMPOUND_STRING("Fuerte si rivales cambian."),
    },

    [ABILITY_WATER_BUBBLE] =
    {
        .name = _("Pompa"),
        .description = COMPOUND_STRING("Protege del Fuego y quem."),
    },

    [ABILITY_STEELWORKER] =
    {
        .name = _("Acero Templado"),
        .description = COMPOUND_STRING("Potencia mov. Acero."),
    },

    [ABILITY_BERSERK] =
    {
        .name = _("Cólera"),
        .description = COMPOUND_STRING("Sube At. Esp. si pocos PS."),
    },

    [ABILITY_SLUSH_RUSH] =
    {
        .name = _("Quitanieves"),
        .description = COMPOUND_STRING("Sube velocidad en Granizo."),
    },

    [ABILITY_LONG_REACH] =
    {
        .name = _("Remoto"),
        .description = COMPOUND_STRING("Nunca hace contacto."),
    },

    [ABILITY_LIQUID_VOICE] =
    {
        .name = _("Voz Fluida"),
        .description = COMPOUND_STRING("Mov. sonido son de Agua."),
    },

    [ABILITY_TRIAGE] =
    {
        .name = _("Primer Auxilio"),
        .description = COMPOUND_STRING("Mov. curación prioridad."),
    },

    [ABILITY_GALVANIZE] =
    {
        .name = _("Piel Eléctrica"),
        .description = COMPOUND_STRING("Mov. Normal son Eléctric."),
    },

    [ABILITY_SURGE_SURFER] =
    {
        .name = _("Cola Surf"),
        .description = COMPOUND_STRING("Rápido en electricidad."),
    },

    [ABILITY_SCHOOLING] =
    {
        .name = _("Banco"),
        .description = COMPOUND_STRING("Forma banco con muchos PS."),
    },

    [ABILITY_DISGUISE] =
    {
        .name = _("Disfraz"),
        .description = COMPOUND_STRING("Protege de un golpe."),
    },

    [ABILITY_BATTLE_BOND] =
    {
        .name = _("Fuerteafecto"),
        .description = COMPOUND_STRING("Cambia forma después KO."),
    },

    [ABILITY_POWER_CONSTRUCT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Agrupamiento"),
    #else
        .name = _("PwrConstruct"),
    #endif
        .description = COMPOUND_STRING("Cél. ayudan si está débil."),
    },

    [ABILITY_CORROSION] =
    {
        .name = _("Corrosión"),
        .description = COMPOUND_STRING("Envenena todos los tipos."),
    },

    [ABILITY_COMATOSE] =
    {
        .name = _("Letargo Perenne"),
        .description = COMPOUND_STRING("Actúa como dormido."),
    },

    [ABILITY_QUEENLY_MAJESTY] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Regia Presencia"),
    #else
        .name = _("QueenlyMjsty"),
    #endif
        .description = COMPOUND_STRING("Protege de prioridad."),
    },

    [ABILITY_INNARDS_OUT] =
    {
        .name = _("Revés"),
        .description = COMPOUND_STRING("Hiere al agresor al KO."),
    },

    [ABILITY_DANCER] =
    {
        .name = _("Pareja Baile"),
        .description = COMPOUND_STRING("Copia mov. de danza."),
    },

    [ABILITY_BATTERY] =
    {
        .name = _("Batería"),
        .description = COMPOUND_STRING("Sube at. esp. del aliado."),
    },

    [ABILITY_FLUFFY] =
    {
        .name = _("Peluche"),
        .description = COMPOUND_STRING("Suave pero inflamable."),
    },

    [ABILITY_DAZZLING] =
    {
        .name = _("Dazzling"),
        .description = COMPOUND_STRING("Protects from priority."),
    },

    [ABILITY_SOUL_HEART] =
    {
        .name = _("Soul-Heart"),
        .description = COMPOUND_STRING("KOs raise Sp. Atk."),
    },

    [ABILITY_TANGLING_HAIR] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Rizo Rebelde"),
    #else
        .name = _("Rizo Rebelde"),
    #endif
        .description = COMPOUND_STRING("Baja Veloc. al contacto."),
    },

    [ABILITY_RECEIVER] =
    {
        .name = _("Receptor"),
        .description = COMPOUND_STRING("Copia habilidad de aliado."),
    },

    [ABILITY_POWER_OF_ALCHEMY] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Power Of Alchemy"),
    #else
        .name = _("PwrOfAlchemy"),
    #endif
        .description = COMPOUND_STRING("Copies ally's ability."),
    },

    [ABILITY_BEAST_BOOST] =
    {
        .name = _("Ultraimpulso"),
        .description = COMPOUND_STRING("KO mejora est. más alta."),
    },

    [ABILITY_RKS_SYSTEM] =
    {
        .name = _("Sistema Alfa"),
        .description = COMPOUND_STRING("Disco cambia su tipo."),
    },

    [ABILITY_ELECTRIC_SURGE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Electrogénes"),
    #else
        .name = _("ElectrcSurge"),
    #endif
        .description = COMPOUND_STRING("Pone Campo Eléctrico."),
    },

    [ABILITY_PSYCHIC_SURGE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Psicogénesis"),
    #else
        .name = _("Psicogénesis"),
    #endif
        .description = COMPOUND_STRING("Pone Campo Psíquico."),
    },

    [ABILITY_MISTY_SURGE] =
    {
        .name = _("Nebulogénes"),
        .description = COMPOUND_STRING("Pone Campo de Niebla."),
    },

    [ABILITY_GRASSY_SURGE] =
    {
        .name = _("Herbogénesis"),
        .description = COMPOUND_STRING("Pone Campo de Hierba."),
    },

    [ABILITY_FULL_METAL_BODY] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Full Metal Body"),
    #else
        .name = _("FullMetalBdy"),
    #endif
        .description = COMPOUND_STRING("Previene reducción de est."),
    },

    [ABILITY_SHADOW_SHIELD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Shadow Shield"),
    #else
        .name = _("ShadowShield"),
    #endif
        .description = COMPOUND_STRING("Halves damage at full HP."),
    },

    [ABILITY_PRISM_ARMOR] =
    {
        .name = _("Prism Armor"),
        .description = COMPOUND_STRING("Weakens “supereffective”."),
    },

    [ABILITY_NEUROFORCE] =
    {
        .name = _("Fuerza Cerebral"),
        .description = COMPOUND_STRING("Potencia supereficaces."),
    },

    [ABILITY_INTREPID_SWORD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Espada Indómita"),
    #else
        .name = _("IntrepidSwrd"),
    #endif
        .description = COMPOUND_STRING("Sube Ataque al entrar."),
    },

    [ABILITY_DAUNTLESS_SHIELD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Escudo Recio"),
    #else
        .name = _("DauntlssShld"),
    #endif
        .description = COMPOUND_STRING("Sube Defensa al entrar."),
    },

    [ABILITY_LIBERO] =
    {
        .name = _("Líbero"),
        .description = COMPOUND_STRING("Cambia tipo al mov. usado."),
    },

    [ABILITY_BALL_FETCH] =
    {
        .name = _("Recogebolas"),
        .description = COMPOUND_STRING("Recupera Poké Balls."),
    },

    [ABILITY_COTTON_DOWN] =
    {
        .name = _("Pelusa"),
        .description = COMPOUND_STRING("Baja Vel. todos al cont."),
    },

    [ABILITY_PROPELLER_TAIL] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Hélice Caudal"),
    #else
        .name = _("PropellrTail"),
    #endif
        .description = COMPOUND_STRING("Ignora cambio de pos."),
    },

    [ABILITY_MIRROR_ARMOR] =
    {
        .name = _("Coraza Reflejo"),
        .description = COMPOUND_STRING("Devuelve disminución est."),
    },

    [ABILITY_GULP_MISSILE] =
    {
        .name = _("Tragamisil"),
        .description = COMPOUND_STRING("Escupe presa si golpeado."),
    },

    [ABILITY_STALWART] =
    {
        .name = _("Acérrimo"),
        .description = COMPOUND_STRING("Ignora cambio de pos."),
    },

    [ABILITY_STEAM_ENGINE] =
    {
        .name = _("Combustible"),
        .description = COMPOUND_STRING("Sube Vel. con Fuego y Agua."),
    },

    [ABILITY_PUNK_ROCK] =
    {
        .name = _("Punk Rock"),
        .description = COMPOUND_STRING("Sube y resiste sonido."),
    },

    [ABILITY_SAND_SPIT] =
    {
        .name = _("Expulsarena"),
        .description = COMPOUND_STRING("T. Arena si lo golpean."),
    },

    [ABILITY_ICE_SCALES] =
    {
        .name = _("Escama Hielo"),
        .description = COMPOUND_STRING("Reduce daño especial."),
    },

    [ABILITY_RIPEN] =
    {
        .name = _("Maduración"),
        .description = COMPOUND_STRING("Duplica efecto de bayas."),
    },

    [ABILITY_ICE_FACE] =
    {
        .name = _("Cara Hielo"),
        .description = COMPOUND_STRING("Cara regenera con Granizo."),
    },

    [ABILITY_POWER_SPOT] =
    {
        .name = _("Fuente Energía"),
        .description = COMPOUND_STRING("Potencia mov. aliados."),
    },

    [ABILITY_MIMICRY] =
    {
        .name = _("Mimetismo"),
        .description = COMPOUND_STRING("Cambia tipo al campo."),
    },

    [ABILITY_SCREEN_CLEANER] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Antibarrera"),
    #else
        .name = _("ScreenCleanr"),
    #endif
        .description = COMPOUND_STRING("Elimina las barreras."),
    },

    [ABILITY_STEELY_SPIRIT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Alma Acerada"),
    #else
        .name = _("Alma Acerada"),
    #endif
        .description = COMPOUND_STRING("Pot. mov. Acero aliado."),
    },

    [ABILITY_PERISH_BODY] =
    {
        .name = _("Cuerpo mortal"),
        .description = COMPOUND_STRING("Deb. al rival en 3 turnos."),
    },

    [ABILITY_WANDERING_SPIRIT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Alma Errante"),
    #else
        .name = _("WandrngSprit"),
    #endif
        .description = COMPOUND_STRING("Cambia hab. al contacto."),
    },

    [ABILITY_GORILLA_TACTICS] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Monotema"),
    #else
        .name = _("GorillaTacti"),
    #endif
        .description = COMPOUND_STRING("Sube At. e impide otros."),
    },

    [ABILITY_NEUTRALIZING_GAS] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Gas Reactivo"),
    #else
        .name = _("NeutrlzngGas"),
    #endif
        .description = COMPOUND_STRING("Desactiva todas las hab."),
    },

    [ABILITY_PASTEL_VEIL] =
    {
        .name = _("Velo Pastel"),
        .description = COMPOUND_STRING("Protege bando del veneno."),
    },

    [ABILITY_HUNGER_SWITCH] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Mutapetito"),
    #else
        .name = _("Mutapetito"),
    #endif
        .description = COMPOUND_STRING("Cambia forma cada turno."),
    },

    [ABILITY_QUICK_DRAW] =
    {
        .name = _("Mano Rápida"),
        .description = COMPOUND_STRING("A veces se mueve primero."),
    },

    [ABILITY_UNSEEN_FIST] =
    {
        .name = _("Puño Invisible"),
        .description = COMPOUND_STRING("Evade protección con fís."),
    },

    [ABILITY_CURIOUS_MEDICINE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Medicina Extraña"),
    #else
        .name = _("CuriusMedicn"),
    #endif
        .description = COMPOUND_STRING("Anula camb. estad. aliado."),
    },

    [ABILITY_TRANSISTOR] =
    {
        .name = _("Transistor"),
        .description = COMPOUND_STRING("Potencia mov. Eléctricos."),
    },

    [ABILITY_DRAGONS_MAW] =
    {
        .name = _("Dragon's Maw"),
        .description = COMPOUND_STRING("Ups Dragon-type moves."),
    },

    [ABILITY_CHILLING_NEIGH] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Relincho Blanco"),
    #else
        .name = _("ChillngNeigh"),
    #endif
        .description = COMPOUND_STRING("KOs suben Ataque."),
    },

    [ABILITY_GRIM_NEIGH] =
    {
        .name = _("Relincho Negro"),
        .description = COMPOUND_STRING("KOs suben At. Esp."),
    },

    [ABILITY_AS_ONE_ICE_RIDER] =
    {
        .name = _("As One"),
        .description = COMPOUND_STRING("Unnerve and Chilling Neigh."),
    },

    [ABILITY_AS_ONE_SHADOW_RIDER] =
    {
        .name = _("As One"),
        .description = COMPOUND_STRING("Unnerve and Grim Neigh."),
    },

    [ABILITY_LINGERING_AROMA] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Olor Persistente"),
    #else
        .name = _("LngerngAroma"),
    #endif
        .description = COMPOUND_STRING("Se propaga con contacto."),
    },

    [ABILITY_SEED_SOWER] =
    {
        .name = _("Disemillar"),
        .description = COMPOUND_STRING("Camb. terreno al ser golp."),
    },

    [ABILITY_THERMAL_EXCHANGE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Termoconversión"),
    #else
        .name = _("ThrmlExchnge"),
    #endif
        .description = COMPOUND_STRING("El fuego aumenta el ataque."),
    },

    [ABILITY_ANGER_SHELL] =
    {
        .name = _("Coraza Ira"),
        .description = COMPOUND_STRING("Se enfada a mitad de PS."),
    },

    [ABILITY_PURIFYING_SALT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Sal Purificadora"),
    #else
        .name = _("PurfyingSalt"),
    #endif
        .description = COMPOUND_STRING("Protección de sales puras."),
    },

    [ABILITY_WELL_BAKED_BODY] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Well-Baked Body"),
    #else
        .name = _("WellBakedBdy"),
    #endif
        .description = COMPOUND_STRING("Strengthened by Fire."),
    },

    [ABILITY_WIND_RIDER] =
    {
        .name = _("Surcavientos"),
        .description = COMPOUND_STRING("Áereo aumenta el ataque."),
    },

    [ABILITY_GUARD_DOG] =
    {
        .name = _("Perro Guardián"),
        .description = COMPOUND_STRING("Imposible de intimidar."),
    },

    [ABILITY_ROCKY_PAYLOAD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Transportarrocas"),
    #else
        .name = _("Transportarrocas"),
    #endif
        .description = COMPOUND_STRING("Potencia movs. de roca."),
    },

    [ABILITY_WIND_POWER] =
    {
        .name = _("Energía Eólica"),
        .description = COMPOUND_STRING("Rec. energía con el aire."),
    },

    [ABILITY_ZERO_TO_HERO] =
    {
        .name = _("Zero to Hero"),
        .description = COMPOUND_STRING("Cambia de forma al salir."),
    },

    [ABILITY_COMMANDER] =
    {
        .name = _("Comandar"),
        .description = COMPOUND_STRING("Da órdenes a Dondozo."),
    },

    [ABILITY_ELECTROMORPHOSIS] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Dinamo"),
    #else
        .name = _("Elecmrphosis"),
    #endif
        .description = COMPOUND_STRING("Se recarga al contacto."),
    },

    [ABILITY_PROTOSYNTHESIS] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Paleosíntesis"),
    #else
        .name = _("Protosnthsis"),
    #endif
        .description = COMPOUND_STRING("Sol mejora su mejor stat."),
    },

    [ABILITY_QUARK_DRIVE] =
    {
        .name = _("Carga Cuark"),
        .description = COMPOUND_STRING("Camp.Elec.Aum. mejor stat."),
    },

    [ABILITY_GOOD_AS_GOLD] =
    {
        .name = _("Good as Gold"),
        .description = COMPOUND_STRING("Evita problemas de estado."),
    },

    [ABILITY_VESSEL_OF_RUIN] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Vessel of Ruin"),
    #else
        .name = _("VesselOfRuin"),
    #endif
        .description = COMPOUND_STRING("Reduce atq. esp. rival."),
    },

    [ABILITY_SWORD_OF_RUIN] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Sword of Ruin"),
    #else
        .name = _("SwordOfRuin"),
    #endif
        .description = COMPOUND_STRING("Reduce defensa rival."),
    },

    [ABILITY_TABLETS_OF_RUIN] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Tablets of Ruin"),
    #else
        .name = _("TabltsOfRuin"),
    #endif
        .description = COMPOUND_STRING("Reduce ataque rival."),
    },

    [ABILITY_BEADS_OF_RUIN] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Beads of Ruin"),
    #else
        .name = _("BeadsOfRuin"),
    #endif
        .description = COMPOUND_STRING("Reduce la def. esp. rival."),
    },

    [ABILITY_ORICHALCUM_PULSE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Latido oricalco"),
    #else
        .name = _("OrchlcumPlse"),
    #endif
        .description = COMPOUND_STRING("Invoca el sol en combate."),
    },

    [ABILITY_HADRON_ENGINE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Motor Hadrónico"),
    #else
        .name = _("Motor Hadrónico"),
    #endif
        .description = COMPOUND_STRING("El Campo se transf. Elect."),
    },

    [ABILITY_OPPORTUNIST] =
    {
        .name = _("Oportunista"),
        .description = COMPOUND_STRING("Copia cambios stats riv."),
    },

    [ABILITY_CUD_CHEW] =
    {
        .name = _("Rumia"),
        .description = COMPOUND_STRING("Consume una baya ya usada."),
    },

    [ABILITY_SHARPNESS] =
    {
        .name = _("Cortante"),
        .description = COMPOUND_STRING("Pot. Movs. de corte."),
    },

    [ABILITY_SUPREME_OVERLORD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("General Supremo"),
    #else
        .name = _("SuprmeOvrlrd"),
    #endif
        .description = COMPOUND_STRING("Rec. fuerza de los caidos."),
    },

    [ABILITY_COSTAR] =
    {
        .name = _("Unísono"),
        .description = COMPOUND_STRING("Copia camb. stats aliados."),
    },

    [ABILITY_TOXIC_DEBRIS] =
    {
        .name = _("Capa Tóxica"),
        .description = COMPOUND_STRING("Al golp. caen puás tóx."),
    },

    [ABILITY_ARMOR_TAIL] =
    {
        .name = _("Cola Armadura"),
        .description = COMPOUND_STRING("Protege de la prioridad."),
    },

    [ABILITY_EARTH_EATER] =
    {
        .name = _("Geofagia"),
        .description = COMPOUND_STRING("Come tierra para curarse."),
    },

    [ABILITY_MYCELIUM_MIGHT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Poder Fúngico"),
    #else
        .name = _("MceliumMight"),
    #endif
        .description = COMPOUND_STRING("Movs. de estado no fallan."),
    },

    [ABILITY_HOSPITALITY] =
    {
        .name = _("Hospitalidad"),
        .description = COMPOUND_STRING("Recupera PS aliados."),
    },

    [ABILITY_MINDS_EYE] =
    {
        .name = _("Ojo Mental"),
        .description = COMPOUND_STRING("V. lince e Intrépido."),
    },

    [ABILITY_EMBODY_ASPECT_TEAL] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Evocarrec."),
    #else
        .name = _("EmbodyAspect"),
    #endif
        .description = COMPOUND_STRING("Aumenta Veloc."),
    },

    [ABILITY_EMBODY_ASPECT_HEARTHFLAME] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Evocarrec."),
    #else
        .name = _("EmbodyAspect"),
    #endif
        .description = COMPOUND_STRING("Aumenta Ataque."),
    },

    [ABILITY_EMBODY_ASPECT_WELLSPRING] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Evocarrec."),
    #else
        .name = _("EmbodyAspect"),
    #endif
        .description = COMPOUND_STRING("Aumenta Def. Esp."),
    },

    [ABILITY_EMBODY_ASPECT_CORNERSTONE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Evocarrec."),
    #else
        .name = _("EmbodyAspect"),
    #endif
        .description = COMPOUND_STRING("Aumenta Defensa."),
    },

    [ABILITY_TOXIC_CHAIN] =
    {
        .name = _("Cadena Tóxica"),
        .description = COMPOUND_STRING("Movs. pueden envenenar."),
    },

    [ABILITY_SUPERSWEET_SYRUP] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Néctar Dulce"),
    #else
        .name = _("SuprswtSyrup"),
    #endif
        .description = COMPOUND_STRING("Baja la veloc. rival."),
    },

    [ABILITY_TERA_SHIFT] =
    {
        .name = _("Teracambio"),
        .description = COMPOUND_STRING("Tera. al entrar."),
    },

    [ABILITY_TERA_SHELL] =
    {
        .name = _("Teracaparazón"),
        .description = COMPOUND_STRING("Res. tipos con PS completo."),
    },

    [ABILITY_TERAFORM_ZERO] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Teraform. 0"),
    #else
        .name = _("Teraform Zero"),
    #endif
        .description = COMPOUND_STRING("Elimina clima y terreno."),
    },

    [ABILITY_POISON_PUPPETEER] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Títere tóxico"),
    #else
        .name = _("PoisnPuppter"),
    #endif
        .description = COMPOUND_STRING("Confunde si envenena."),
    },
};
