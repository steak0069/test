#ifndef __AUDIOCLASSLIST_H__
#define __AUDIOCLASSLIST_H__


struct AudioDetectionItem {
    uint32_t index;
    const char* audioName;
    uint8_t filter;
};

//// List of audio the pre-trained model is capable of recognizing
//// Index number is fixed and hard-coded from training
//// Set the filter value to 0 to ignore any recognized audios
AudioDetectionItem audioNames[521] = {
    {0,   "Speech",                                   0},
    {1,   "Child speech, kid speaking",               0},
    {2,   "Conversation",                             0},
    {3,   "Narration, monologue",                     0},
    {4,   "Babbling",                                 0},
    {5,   "Speech synthesizer",                       0},
    {6,   "Shout",                                    0},
    {7,   "Bellow",                                   0},
    {8,   "Whoop",                                    0},
    {9,   "Yell",                                     0},
    {10,  "Children shouting",                        0},
    {11,  "Screaming",                                0},
    {12,  "Whispering",                               0},
    {13,  "Laughter",                                 0},
    {14,  "Baby laughter",                            0},
    {15,  "Giggle",                                   0},
    {16,  "Snicker",                                  0},
    {17,  "Belly laugh",                              0},
    {18,  "Chuckle, chortle",                         0},
    {19,  "Crying, sobbing",                          0},
    {20,  "Baby cry, infant cry",                     0},
    {21,  "Whimper",                                  0},
    {22,  "Wail, moan",                               0},
    {23,  "Sigh",                                     0},
    {24,  "Singing",                                  0},
    {25,  "Choir",                                    0},
    {26,  "Yodeling",                                 0},
    {27,  "Chant",                                    0},
    {28,  "Mantra",                                   0},
    {29,  "Child singing",                            0},
    {30,  "Synthetic singing",                        0},
    {31,  "Rapping",                                  0},
    {32,  "Humming",                                  0},
    {33,  "Groan",                                    0},
    {34,  "Grunt",                                    0},
    {35,  "Whistling",                                0},
    {36,  "Breathing",                                0},
    {37,  "Wheeze",                                   0},
    {38,  "Snoring",                                  0},
    {39,  "Gasp",                                     0},
    {40,  "Pant",                                     0},
    {41,  "Snort",                                    0},
    {42,  "Cough",                                    0},
    {43,  "Throat clearing",                          0},
    {44,  "Sneeze",                                   0},
    {45,  "Sniff",                                    0},
    {46,  "Run",                                      0},
    {47,  "Shuffle",                                  0},
    {48,  "Walk, footsteps",                          0},
    {49,  "Chewing, mastication",                     0},
    {50,  "Biting",                                   0},
    {51,  "Gargling",                                 0},
    {52,  "Stomach rumble",                           0},
    {53,  "Burping, eructation",                      0},
    {54,  "Hiccup",                                   0},
    {55,  "Fart",                                     0},
    {56,  "Hands",                                    1},
    {57,  "Finger snapping",                          0},
    {58,  "Clapping",                                 1},
    {59,  "Heart sounds, heartbeat",                  0},
    {60,  "Heart murmur",                             0},
    {61,  "Cheering",                                 0},
    {62,  "Applause",                                 0},
    {63,  "Chatter",                                  0},
    {64,  "Crowd",                                    0},
    {65,  "Hubbub, speech noise, speech babble",      0},
    {66,  "Children playing",                         0},
    {67,  "Animal",                                   0},
    {68,  "Domestic animals, pets",                   0},
    {69,  "Dog",                                      0},
    {70,  "Bark",                                     0},
    {71,  "Yip",                                      0},
    {72,  "Howl",                                     0},
    {73,  "Bow-wow",                                  0},
    {74,  "Growling",                                 0},
    {75,  "Whimper (dog)",                            0},
    {76,  "Cat",                                      0},
    {77,  "Purr",                                     0},
    {78,  "Meow",                                     0},
    {79,  "Hiss",                                     0},
    {80,  "Caterwaul",                                0},
    {81,  "Livestock, farm animals, working animals", 0},
    {82,  "Horse",                                    0},
    {83,  "Clip-clop",                                0},
    {84,  "Neigh, whinny",                            0},
    {85,  "Cattle, bovinae",                          0},
    {86,  "Moo",                                      0},
    {87,  "Cowbell",                                  0},
    {88,  "Pig",                                      0},
    {89,  "Oink",                                     0},
    {90,  "Goat",                                     0},
    {91,  "Bleat",                                    0},
    {92,  "Sheep",                                    0},
    {93,  "Fowl",                                     0},
    {94,  "Chicken, rooster",                         0},
    {95,  "Cluck",                                    0},
    {96,  "Crowing, cock-a-doodle-doo",               0},
    {97,  "Turkey",                                   0},
    {98,  "Gobble",                                   0},
    {99,  "Duck",                                     0},
    {100, "Quack",                                    0},
    {101, "Goose",                                    0},
    {102, "Honk",                                     0},
    {103, "Wild animals",                             0},
    {104, "Roaring cats (lions, tigers)",             0},
    {105, "Roar",                                     0},
    {106, "Bird",                                     0},
    {107, "Bird vocalization, bird call, bird song",  0},
    {108, "Chirp, tweet",                             0},
    {109, "Squawk",                                   0},
    {110, "Pigeon, dove",                             0},
    {111, "Coo",                                      0},
    {112, "Crow",                                     0},
    {113, "Caw",                                      0},
    {114, "Owl",                                      0},
    {115, "Hoot",                                     0},
    {116, "Bird flight, flapping wings",              0},
    {117, "Canidae, dogs, wolves",                    0},
    {118, "Rodents, rats, mice",                      0},
    {119, "Mouse",                                    0},
    {120, "Patter",                                   0},
    {121, "Insect",                                   0},
    {122, "Cricket",                                  0},
    {123, "Mosquito",                                 0},
    {124, "Fly, housefly",                            0},
    {125, "Buzz",                                     0},
    {126, "Bee, wasp, etc.",                          0},
    {127, "Frog",                                     0},
    {128, "Croak",                                    0},
    {129, "Snake",                                    0},
    {130, "Rattle",                                   0},
    {131, "Whale vocalization",                       0},
    {132, "Music",                                    0},
    {133, "Musical instrument",                       0},
    {134, "Plucked string instrument",                0},
    {135, "Guitar",                                   0},
    {136, "Electric guitar",                          0},
    {137, "Bass guitar",                              0},
    {138, "Acoustic guitar",                          0},
    {139, "Steel guitar, slide guitar",               0},
    {140, "Tapping (guitar technique)",               0},
    {141, "Strum",                                    0},
    {142, "Banjo",                                    0},
    {143, "Sitar",                                    0},
    {144, "Mandolin",                                 0},
    {145, "Zither",                                   0},
    {146, "Ukulele",                                  0},
    {147, "Keyboard (musical)",                       0},
    {148, "Piano",                                    0},
    {149, "Electric piano",                           0},
    {150, "Organ",                                    0},
    {151, "Electronic organ",                         0},
    {152, "Hammond organ",                            0},
    {153, "Synthesizer",                              0},
    {154, "Sampler",                                  0},
    {155, "Harpsichord",                              0},
    {156, "Percussion",                               0},
    {157, "Drum kit",                                 0},
    {158, "Drum machine",                             0},
    {159, "Drum",                                     0},
    {160, "Snare drum",                               0},
    {161, "Rimshot",                                  0},
    {162, "Drum roll",                                0},
    {163, "Bass drum",                                0},
    {164, "Timpani",                                  0},
    {165, "Tabla",                                    0},
    {166, "Cymbal",                                   0},
    {167, "Hi-hat",                                   0},
    {168, "Wood block",                               0},
    {169, "Tambourine",                               0},
    {170, "Rattle (instrument)",                      0},
    {171, "Maraca",                                   0},
    {172, "Gong",                                     0},
    {173, "Tubular bells",                            0},
    {174, "Mallet percussion",                        0},
    {175, "Marimba, xylophone",                       0},
    {176, "Glockenspiel",                             0},
    {177, "Vibraphone",                               0},
    {178, "Steelpan",                                 0},
    {179, "Orchestra",                                0},
    {180, "Brass instrument",                         0},
    {181, "French horn",                              0},
    {182, "Trumpet",                                  0},
    {183, "Trombone",                                 0},
    {184, "Bowed string instrument",                  0},
    {185, "String section",                           0},
    {186, "Violin, fiddle",                           0},
    {187, "Pizzicato",                                0},
    {188, "Cello",                                    0},
    {189, "Double bass",                              0},
    {190, "Wind instrument, woodwind instrument",     0},
    {191, "Flute",                                    0},
    {192, "Saxophone",                                0},
    {193, "Clarinet",                                 0},
    {194, "Harp",                                     0},
    {195, "Bell",                                     0},
    {196, "Church bell",                              0},
    {197, "Jingle bell",                              0},
    {198, "Bicycle bell",                             0},
    {199, "Tuning fork",                              0},
    {200, "Chime",                                    0},
    {201, "Wind chime",                               0},
    {202, "Change ringing (campanology)",             0},
    {203, "Harmonica",                                0},
    {204, "Accordion",                                0},
    {205, "Bagpipes",                                 0},
    {206, "Didgeridoo",                               0},
    {207, "Shofar",                                   0},
    {208, "Theremin",                                 0},
    {209, "Singing bowl",                             0},
    {210, "Scratching (performance technique)",       0},
    {211, "Pop music",                                0},
    {212, "Hip hop music",                            0},
    {213, "Beatboxing",                               0},
    {214, "Rock music",                               0},
    {215, "Heavy metal",                              0},
    {216, "Punk rock",                                0},
    {217, "Grunge",                                   0},
    {218, "Progressive rock",                         0},
    {219, "Rock and roll",                            0},
    {220, "Psychedelic rock",                         0},
    {221, "Rhythm and blues",                         0},
    {222, "Soul music",                               0},
    {223, "Reggae",                                   0},
    {224, "Country",                                  0},
    {225, "Swing music",                              0},
    {226, "Bluegrass",                                0},
    {227, "Funk",                                     0},
    {228, "Folk music",                               0},
    {229, "Middle Eastern music",                     0},
    {230, "Jazz",                                     0},
    {231, "Disco",                                    0},
    {232, "Classical music",                          0},
    {233, "Opera",                                    0},
    {234, "Electronic music",                         0},
    {235, "House music",                              0},
    {236, "Techno",                                   0},
    {237, "Dubstep",                                  0},
    {238, "Drum and bass",                            0},
    {239, "Electronica",                              0},
    {240, "Electronic dance music",                   0},
    {241, "Ambient music",                            0},
    {242, "Trance music",                             0},
    {243, "Music of Latin America",                   0},
    {244, "Salsa music",                              0},
    {245, "Flamenco",                                 0},
    {246, "Blues",                                    0},
    {247, "Music for children",                       0},
    {248, "New-age music",                            0},
    {249, "Vocal music",                              0},
    {250, "A capella",                                0},
    {251, "Music of Africa",                          0},
    {252, "Afrobeat",                                 0},
    {253, "Christian music",                          0},
    {254, "Gospel music",                             0},
    {255, "Music of Asia",                            0},
    {256, "Carnatic music",                           0},
    {257, "Music of Bollywood",                       0},
    {258, "Ska",                                      0},
    {259, "Traditional music",                        0},
    {260, "Independent music",                        0},
    {261, "Song",                                     0},
    {262, "Background music",                         0},
    {263, "Theme music",                              0},
    {264, "Jingle (music)",                           0},
    {265, "Soundtrack music",                         0},
    {266, "Lullaby",                                  0},
    {267, "Video game music",                         0},
    {268, "Christmas music",                          0},
    {269, "Dance music",                              0},
    {270, "Wedding music",                            0},
    {271, "Happy music",                              0},
    {272, "Sad music",                                0},
    {273, "Tender music",                             0},
    {274, "Exciting music",                           0},
    {275, "Angry music",                              0},
    {276, "Scary music",                              0},
    {277, "Wind",                                     0},
    {278, "Rustling leaves",                          0},
    {279, "Wind noise (microphone)",                  0},
    {280, "Thunderstorm",                             0},
    {281, "Thunder",                                  0},
    {282, "Water",                                    0},
    {283, "Rain",                                     0},
    {284, "Raindrop",                                 0},
    {285, "Rain on surface",                          0},
    {286, "Stream",                                   0},
    {287, "Waterfall",                                0},
    {288, "Ocean",                                    0},
    {289, "Waves, surf",                              0},
    {290, "Steam",                                    0},
    {291, "Gurgling",                                 0},
    {292, "Fire",                                     0},
    {293, "Crackle",                                  0},
    {294, "Vehicle",                                  0},
    {295, "Boat, Water vehicle",                      0},
    {296, "Sailboat, sailing ship",                   0},
    {297, "Rowboat, canoe, kayak",                    0},
    {298, "Motorboat, speedboat",                     0},
    {299, "Ship",                                     0},
    {300, "Motor vehicle (road)",                     0},
    {301, "Car",                                      0},
    {302, "Vehicle horn, car horn, honking",          0},
    {303, "Toot",                                     0},
    {304, "Car alarm",                                0},
    {305, "Power windows, electric windows",          0},
    {306, "Skidding",                                 0},
    {307, "Tire squeal",                              0},
    {308, "Car passing by",                           0},
    {309, "Race car, auto racing",                    0},
    {310, "Truck",                                    0},
    {311, "Air brake",                                0},
    {312, "Air horn, truck horn",                     0},
    {313, "Reversing beeps",                          0},
    {314, "Ice cream truck, ice cream van",           0},
    {315, "Bus",                                      0},
    {316, "Emergency vehicle",                        0},
    {317, "Police car (siren)",                       0},
    {318, "Ambulance (siren)",                        0},
    {319, "Fire engine, fire truck (siren)",          0},
    {320, "Motorcycle",                               0},
    {321, "Traffic noise, roadway noise",             0},
    {322, "Rail transport",                           0},
    {323, "Train",                                    0},
    {324, "Train whistle",                            0},
    {325, "Train horn",                               0},
    {326, "Railroad car, train wagon",                0},
    {327, "Train wheels squealing",                   0},
    {328, "Subway, metro, underground",               0},
    {329, "Aircraft",                                 0},
    {330, "Aircraft engine",                          0},
    {331, "Jet engine",                               0},
    {332, "Propeller, airscrew",                      0},
    {333, "Helicopter",                               0},
    {334, "Fixed-wing aircraft, airplane",            0},
    {335, "Bicycle",                                  0},
    {336, "Skateboard",                               0},
    {337, "Engine",                                   0},
    {338, "Light engine (high frequency)",            0},
    {339, "Dental drill, dentist's drill",            0},
    {340, "Lawn mower",                               0},
    {341, "Chainsaw",                                 0},
    {342, "Medium engine (mid frequency)",            0},
    {343, "Heavy engine (low frequency)",             0},
    {344, "Engine knocking",                          0},
    {345, "Engine starting",                          0},
    {346, "Idling",                                   0},
    {347, "Accelerating, revving, vroom",             0},
    {348, "Door",                                     0},
    {349, "Doorbell",                                 0},
    {350, "Ding-dong",                                0},
    {351, "Sliding door",                             0},
    {352, "Slam",                                     0},
    {353, "Knock",                                    0},
    {354, "Tap",                                      0},
    {355, "Squeak",                                   0},
    {356, "Cupboard open or close",                   0},
    {357, "Drawer open or close",                     0},
    {358, "Dishes, pots, and pans",                   0},
    {359, "Cutlery, silverware",                      0},
    {360, "Chopping (food)",                          0},
    {361, "Frying (food)",                            0},
    {362, "Microwave oven",                           0},
    {363, "Blender",                                  0},
    {364, "Water tap, faucet",                        0},
    {365, "Sink (filling or washing)",                0},
    {366, "Bathtub (filling or washing)",             0},
    {367, "Hair dryer",                               0},
    {368, "Toilet flush",                             0},
    {369, "Toothbrush",                               0},
    {370, "Electric toothbrush",                      0},
    {371, "Vacuum cleaner",                           0},
    {372, "Zipper (clothing)",                        0},
    {373, "Keys jangling",                            0},
    {374, "Coin (dropping)",                          0},
    {375, "Scissors",                                 0},
    {376, "Electric shaver, electric razor",          0},
    {377, "Shuffling cards",                          0},
    {378, "Typing",                                   0},
    {379, "Typewriter",                               0},
    {380, "Computer keyboard",                        0},
    {381, "Writing",                                  0},
    {382, "Alarm",                                    0},
    {383, "Telephone",                                0},
    {384, "Telephone bell ringing",                   0},
    {385, "Ringtone",                                 0},
    {386, "Telephone dialing, DTMF",                  0},
    {387, "Dial tone",                                0},
    {388, "Busy signal",                              0},
    {389, "Alarm clock",                              0},
    {390, "Siren",                                    0},
    {391, "Civil defense siren",                      0},
    {392, "Buzzer",                                   0},
    {393, "Smoke detector, smoke alarm",              0},
    {394, "Fire alarm",                               0},
    {395, "Foghorn",                                  0},
    {396, "Whistle",                                  0},
    {397, "Steam whistle",                            0},
    {398, "Mechanisms",                               0},
    {399, "Ratchet, pawl",                            0},
    {400, "Clock",                                    0},
    {401, "Tick",                                     0},
    {402, "Tick-tock",                                0},
    {403, "Gears",                                    0},
    {404, "Pulleys",                                  0},
    {405, "Sewing machine",                           0},
    {406, "Mechanical fan",                           0},
    {407, "Air conditioning",                         0},
    {408, "Cash register",                            0},
    {409, "Printer",                                  0},
    {410, "Camera",                                   0},
    {411, "Single-lens reflex camera",                0},
    {412, "Tools",                                    0},
    {413, "Hammer",                                   0},
    {414, "Jackhammer",                               0},
    {415, "Sawing",                                   0},
    {416, "Filing (rasp)",                            0},
    {417, "Sanding",                                  0},
    {418, "Power tool",                               0},
    {419, "Drill",                                    0},
    {420, "Explosion",                                0},
    {421, "Gunshot, gunfire",                         0},
    {422, "Machine gun",                              0},
    {423, "Fusillade",                                0},
    {424, "Artillery fire",                           0},
    {425, "Cap gun",                                  0},
    {426, "Fireworks",                                0},
    {427, "Firecracker",                              0},
    {428, "Burst, pop",                               0},
    {429, "Eruption",                                 0},
    {430, "Boom",                                     0},
    {431, "Wood",                                     0},
    {432, "Chop",                                     0},
    {433, "Splinter",                                 0},
    {434, "Crack",                                    0},
    {435, "Glass",                                    0},
    {436, "Chink, clink",                             0},
    {437, "Shatter",                                  0},
    {438, "Liquid",                                   0},
    {439, "Splash, splatter",                         0},
    {440, "Slosh",                                    0},
    {441, "Squish",                                   0},
    {442, "Drip",                                     0},
    {443, "Pour",                                     0},
    {444, "Trickle, dribble",                         0},
    {445, "Gush",                                     0},
    {446, "Fill (with liquid)",                       0},
    {447, "Spray",                                    0},
    {448, "Pump (liquid)",                            0},
    {449, "Stir",                                     0},
    {450, "Boiling",                                  0},
    {451, "Sonar",                                    0},
    {452, "Arrow",                                    0},
    {453, "Whoosh, swoosh, swish",                    0},
    {454, "Thump, thud",                              0},
    {455, "Thunk",                                    0},
    {456, "Electronic tuner",                         0},
    {457, "Effects unit",                             0},
    {458, "Chorus effect",                            0},
    {459, "Basketball bounce",                        0},
    {460, "Bang",                                     0},
    {461, "Slap, smack",                              0},
    {462, "Whack, thwack",                            0},
    {463, "Smash, crash",                             0},
    {464, "Breaking",                                 0},
    {465, "Bouncing",                                 0},
    {466, "Whip",                                     0},
    {467, "Flap",                                     0},
    {468, "Scratch",                                  0},
    {469, "Scrape",                                   0},
    {470, "Rub",                                      0},
    {471, "Roll",                                     0},
    {472, "Crushing",                                 0},
    {473, "Crumpling, crinkling",                     0},
    {474, "Tearing",                                  0},
    {475, "Beep, bleep",                              0},
    {476, "Ping",                                     0},
    {477, "Ding",                                     0},
    {478, "Clang",                                    0},
    {479, "Squeal",                                   0},
    {480, "Creak",                                    0},
    {481, "Rustle",                                   0},
    {482, "Whir",                                     0},
    {483, "Clatter",                                  0},
    {484, "Sizzle",                                   0},
    {485, "Clicking",                                 0},
    {486, "Clickety-clack",                           0},
    {487, "Rumble",                                   0},
    {488, "Plop",                                     0},
    {489, "Jingle, tinkle",                           0},
    {490, "Hum",                                      0},
    {491, "Zing",                                     0},
    {492, "Boing",                                    0},
    {493, "Crunch",                                   0},
    {494, "Silence",                                  0},
    {495, "Sine wave",                                0},
    {496, "Harmonic",                                 0},
    {497, "Chirp tone",                               0},
    {498, "Sound effect",                             0},
    {499, "Pulse",                                    0},
    {500, "Inside, small room",                       0},
    {501, "Inside, large room or hall",               0},
    {502, "Inside, public space",                     0},
    {503, "Outside, urban or manmade",                0},
    {504, "Outside, rural or natural",                0},
    {505, "Reverberation",                            0},
    {506, "Echo",                                     0},
    {507, "Noise",                                    0},
    {508, "Environmental noise",                      0},
    {509, "Static",                                   0},
    {510, "Mains hum",                                0},
    {511, "Distortion",                               0},
    {512, "Sidetone",                                 0},
    {513, "Cacophony",                                0},
    {514, "White noise",                              0},
    {515, "Pink noise",                               0},
    {516, "Throbbing",                                0},
    {517, "Vibration",                                0},
    {518, "Television",                               0},
    {519, "Radio",                                    0},
    {520, "Field recording",                          0},
};
#endif