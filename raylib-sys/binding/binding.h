#include "../raylib/src/raylib.h"
#include "../raylib/src/rlgl.h"
#include "../raylib/src/rcamera.h"

#if 0
#include "../raygui/src/raygui.h"

typedef enum
{
    RAYGUI_ICON_NONE = 0,
    RAYGUI_ICON_FOLDER_FILE_OPEN = 1,
    RAYGUI_ICON_FILE_SAVE_CLASSIC = 2,
    RAYGUI_ICON_FOLDER_OPEN = 3,
    RAYGUI_ICON_FOLDER_SAVE = 4,
    RAYGUI_ICON_FILE_OPEN = 5,
    RAYGUI_ICON_FILE_SAVE = 6,
    RAYGUI_ICON_FILE_EXPORT = 7,
    RAYGUI_ICON_FILE_ADD = 8,
    RAYGUI_ICON_FILE_DELETE = 9,
    RAYGUI_ICON_FILETYPE_TEXT = 10,
    RAYGUI_ICON_FILETYPE_AUDIO = 11,
    RAYGUI_ICON_FILETYPE_IMAGE = 12,
    RAYGUI_ICON_FILETYPE_PLAY = 13,
    RAYGUI_ICON_FILETYPE_VIDEO = 14,
    RAYGUI_ICON_FILETYPE_INFO = 15,
    RAYGUI_ICON_FILE_COPY = 16,
    RAYGUI_ICON_FILE_CUT = 17,
    RAYGUI_ICON_FILE_PASTE = 18,
    RAYGUI_ICON_CURSOR_HAND = 19,
    RAYGUI_ICON_CURSOR_POINTER = 20,
    RAYGUI_ICON_CURSOR_CLASSIC = 21,
    RAYGUI_ICON_PENCIL = 22,
    RAYGUI_ICON_PENCIL_BIG = 23,
    RAYGUI_ICON_BRUSH_CLASSIC = 24,
    RAYGUI_ICON_BRUSH_PAINTER = 25,
    RAYGUI_ICON_WATER_DROP = 26,
    RAYGUI_ICON_COLOR_PICKER = 27,
    RAYGUI_ICON_RUBBER = 28,
    RAYGUI_ICON_COLOR_BUCKET = 29,
    RAYGUI_ICON_TEXT_T = 30,
    RAYGUI_ICON_TEXT_A = 31,
    RAYGUI_ICON_SCALE = 32,
    RAYGUI_ICON_RESIZE = 33,
    RAYGUI_ICON_FILTER_POINT = 34,
    RAYGUI_ICON_FILTER_BILINEAR = 35,
    RAYGUI_ICON_CROP = 36,
    RAYGUI_ICON_CROP_ALPHA = 37,
    RAYGUI_ICON_SQUARE_TOGGLE = 38,
    RAYGUI_ICON_SYMMETRY = 39,
    RAYGUI_ICON_SYMMETRY_HORIZONTAL = 40,
    RAYGUI_ICON_SYMMETRY_VERTICAL = 41,
    RAYGUI_ICON_LENS = 42,
    RAYGUI_ICON_LENS_BIG = 43,
    RAYGUI_ICON_EYE_ON = 44,
    RAYGUI_ICON_EYE_OFF = 45,
    RAYGUI_ICON_FILTER_TOP = 46,
    RAYGUI_ICON_FILTER = 47,
    RAYGUI_ICON_TARGET_POINT = 48,
    RAYGUI_ICON_TARGET_SMALL = 49,
    RAYGUI_ICON_TARGET_BIG = 50,
    RAYGUI_ICON_TARGET_MOVE = 51,
    RAYGUI_ICON_CURSOR_MOVE = 52,
    RAYGUI_ICON_CURSOR_SCALE = 53,
    RAYGUI_ICON_CURSOR_SCALE_RIGHT = 54,
    RAYGUI_ICON_CURSOR_SCALE_LEFT = 55,
    RAYGUI_ICON_UNDO = 56,
    RAYGUI_ICON_REDO = 57,
    RAYGUI_ICON_REREDO = 58,
    RAYGUI_ICON_MUTATE = 59,
    RAYGUI_ICON_ROTATE = 60,
    RAYGUI_ICON_REPEAT = 61,
    RAYGUI_ICON_SHUFFLE = 62,
    RAYGUI_ICON_EMPTYBOX = 63,
    RAYGUI_ICON_TARGET = 64,
    RAYGUI_ICON_TARGET_SMALL_FILL = 65,
    RAYGUI_ICON_TARGET_BIG_FILL = 66,
    RAYGUI_ICON_TARGET_MOVE_FILL = 67,
    RAYGUI_ICON_CURSOR_MOVE_FILL = 68,
    RAYGUI_ICON_CURSOR_SCALE_FILL = 69,
    RAYGUI_ICON_CURSOR_SCALE_RIGHT_FILL = 70,
    RAYGUI_ICON_CURSOR_SCALE_LEFT_FILL = 71,
    RAYGUI_ICON_UNDO_FILL = 72,
    RAYGUI_ICON_REDO_FILL = 73,
    RAYGUI_ICON_REREDO_FILL = 74,
    RAYGUI_ICON_MUTATE_FILL = 75,
    RAYGUI_ICON_ROTATE_FILL = 76,
    RAYGUI_ICON_REPEAT_FILL = 77,
    RAYGUI_ICON_SHUFFLE_FILL = 78,
    RAYGUI_ICON_EMPTYBOX_SMALL = 79,
    RAYGUI_ICON_BOX = 80,
    RAYGUI_ICON_BOX_TOP = 81,
    RAYGUI_ICON_BOX_TOP_RIGHT = 82,
    RAYGUI_ICON_BOX_RIGHT = 83,
    RAYGUI_ICON_BOX_BOTTOM_RIGHT = 84,
    RAYGUI_ICON_BOX_BOTTOM = 85,
    RAYGUI_ICON_BOX_BOTTOM_LEFT = 86,
    RAYGUI_ICON_BOX_LEFT = 87,
    RAYGUI_ICON_BOX_TOP_LEFT = 88,
    RAYGUI_ICON_BOX_CENTER = 89,
    RAYGUI_ICON_BOX_CIRCLE_MASK = 90,
    RAYGUI_ICON_POT = 91,
    RAYGUI_ICON_ALPHA_MULTIPLY = 92,
    RAYGUI_ICON_ALPHA_CLEAR = 93,
    RAYGUI_ICON_DITHERING = 94,
    RAYGUI_ICON_MIPMAPS = 95,
    RAYGUI_ICON_BOX_GRID = 96,
    RAYGUI_ICON_GRID = 97,
    RAYGUI_ICON_BOX_CORNERS_SMALL = 98,
    RAYGUI_ICON_BOX_CORNERS_BIG = 99,
    RAYGUI_ICON_FOUR_BOXES = 100,
    RAYGUI_ICON_GRID_FILL = 101,
    RAYGUI_ICON_BOX_MULTISIZE = 102,
    RAYGUI_ICON_ZOOM_SMALL = 103,
    RAYGUI_ICON_ZOOM_MEDIUM = 104,
    RAYGUI_ICON_ZOOM_BIG = 105,
    RAYGUI_ICON_ZOOM_ALL = 106,
    RAYGUI_ICON_ZOOM_CENTER = 107,
    RAYGUI_ICON_BOX_DOTS_SMALL = 108,
    RAYGUI_ICON_BOX_DOTS_BIG = 109,
    RAYGUI_ICON_BOX_CONCENTRIC = 110,
    RAYGUI_ICON_BOX_GRID_BIG = 111,
    RAYGUI_ICON_OK_TICK = 112,
    RAYGUI_ICON_CROSS = 113,
    RAYGUI_ICON_ARROW_LEFT = 114,
    RAYGUI_ICON_ARROW_RIGHT = 115,
    RAYGUI_ICON_ARROW_DOWN = 116,
    RAYGUI_ICON_ARROW_UP = 117,
    RAYGUI_ICON_ARROW_LEFT_FILL = 118,
    RAYGUI_ICON_ARROW_RIGHT_FILL = 119,
    RAYGUI_ICON_ARROW_DOWN_FILL = 120,
    RAYGUI_ICON_ARROW_UP_FILL = 121,
    RAYGUI_ICON_AUDIO = 122,
    RAYGUI_ICON_FX = 123,
    RAYGUI_ICON_WAVE = 124,
    RAYGUI_ICON_WAVE_SINUS = 125,
    RAYGUI_ICON_WAVE_SQUARE = 126,
    RAYGUI_ICON_WAVE_TRIANGULAR = 127,
    RAYGUI_ICON_CROSS_SMALL = 128,
    RAYGUI_ICON_PLAYER_PREVIOUS = 129,
    RAYGUI_ICON_PLAYER_PLAY_BACK = 130,
    RAYGUI_ICON_PLAYER_PLAY = 131,
    RAYGUI_ICON_PLAYER_PAUSE = 132,
    RAYGUI_ICON_PLAYER_STOP = 133,
    RAYGUI_ICON_PLAYER_NEXT = 134,
    RAYGUI_ICON_PLAYER_RECORD = 135,
    RAYGUI_ICON_MAGNET = 136,
    RAYGUI_ICON_LOCK_CLOSE = 137,
    RAYGUI_ICON_LOCK_OPEN = 138,
    RAYGUI_ICON_CLOCK = 139,
    RAYGUI_ICON_TOOLS = 140,
    RAYGUI_ICON_GEAR = 141,
    RAYGUI_ICON_GEAR_BIG = 142,
    RAYGUI_ICON_BIN = 143,
    RAYGUI_ICON_HAND_POINTER = 144,
    RAYGUI_ICON_LASER = 145,
    RAYGUI_ICON_COIN = 146,
    RAYGUI_ICON_EXPLOSION = 147,
    RAYGUI_ICON_1UP = 148,
    RAYGUI_ICON_PLAYER = 149,
    RAYGUI_ICON_PLAYER_JUMP = 150,
    RAYGUI_ICON_KEY = 151,
    RAYGUI_ICON_DEMON = 152,
    RAYGUI_ICON_TEXT_POPUP = 153,
    RAYGUI_ICON_GEAR_EX = 154,
    RAYGUI_ICON_CRACK = 155,
    RAYGUI_ICON_CRACK_POINTS = 156,
    RAYGUI_ICON_STAR = 157,
    RAYGUI_ICON_DOOR = 158,
    RAYGUI_ICON_EXIT = 159,
    RAYGUI_ICON_MODE_2D = 160,
    RAYGUI_ICON_MODE_3D = 161,
    RAYGUI_ICON_CUBE = 162,
    RAYGUI_ICON_CUBE_FACE_TOP = 163,
    RAYGUI_ICON_CUBE_FACE_LEFT = 164,
    RAYGUI_ICON_CUBE_FACE_FRONT = 165,
    RAYGUI_ICON_CUBE_FACE_BOTTOM = 166,
    RAYGUI_ICON_CUBE_FACE_RIGHT = 167,
    RAYGUI_ICON_CUBE_FACE_BACK = 168,
    RAYGUI_ICON_CAMERA = 169,
    RAYGUI_ICON_SPECIAL = 170,
    RAYGUI_ICON_LINK_NET = 171,
    RAYGUI_ICON_LINK_BOXES = 172,
    RAYGUI_ICON_LINK_MULTI = 173,
    RAYGUI_ICON_LINK = 174,
    RAYGUI_ICON_LINK_BROKE = 175,
    RAYGUI_ICON_TEXT_NOTES = 176,
    RAYGUI_ICON_NOTEBOOK = 177,
    RAYGUI_ICON_SUITCASE = 178,
    RAYGUI_ICON_SUITCASE_ZIP = 179,
    RAYGUI_ICON_MAILBOX = 180,
    RAYGUI_ICON_MONITOR = 181,
    RAYGUI_ICON_PRINTER = 182,
    RAYGUI_ICON_PHOTO_CAMERA = 183,
    RAYGUI_ICON_PHOTO_CAMERA_FLASH = 184,
    RAYGUI_ICON_HOUSE = 185,
    RAYGUI_ICON_HEART = 186,
    RAYGUI_ICON_CORNER = 187,
    RAYGUI_ICON_VERTICAL_BARS = 188,
    RAYGUI_ICON_VERTICAL_BARS_FILL = 189,
    RAYGUI_ICON_LIFE_BARS = 190,
    RAYGUI_ICON_INFO = 191,
    RAYGUI_ICON_CROSSLINE = 192,
    RAYGUI_ICON_HELP = 193,
    RAYGUI_ICON_FILETYPE_ALPHA = 194,
    RAYGUI_ICON_FILETYPE_HOME = 195,
    RAYGUI_ICON_LAYERS_VISIBLE = 196,
    RAYGUI_ICON_LAYERS = 197,
    RAYGUI_ICON_WINDOW = 198,
    RAYGUI_ICON_HIDPI = 199,
    RAYGUI_ICON_FILETYPE_BINARY = 200,
    RAYGUI_ICON_HEX = 201,
    RAYGUI_ICON_SHIELD = 202,
    RAYGUI_ICON_FILE_NEW = 203,
    RAYGUI_ICON_FOLDER_ADD = 204,
    RAYGUI_ICON_ALARM = 205,
    RAYGUI_ICON_CPU = 206,
    RAYGUI_ICON_ROM = 207,
    RAYGUI_ICON_STEP_OVER = 208,
    RAYGUI_ICON_STEP_INTO = 209,
    RAYGUI_ICON_STEP_OUT = 210,
    RAYGUI_ICON_RESTART = 211,
    RAYGUI_ICON_BREAKPOINT_ON = 212,
    RAYGUI_ICON_BREAKPOINT_OFF = 213,
    RAYGUI_ICON_BURGER_MENU = 214,
    RAYGUI_ICON_CASE_SENSITIVE = 215,
    RAYGUI_ICON_REG_EXP = 216,
    RAYGUI_ICON_FOLDER = 217,
    RAYGUI_ICON_FILE = 218,
    RAYGUI_ICON_219 = 219,
    RAYGUI_ICON_220 = 220,
    RAYGUI_ICON_221 = 221,
    RAYGUI_ICON_222 = 222,
    RAYGUI_ICON_223 = 223,
    RAYGUI_ICON_224 = 224,
    RAYGUI_ICON_225 = 225,
    RAYGUI_ICON_226 = 226,
    RAYGUI_ICON_227 = 227,
    RAYGUI_ICON_228 = 228,
    RAYGUI_ICON_229 = 229,
    RAYGUI_ICON_230 = 230,
    RAYGUI_ICON_231 = 231,
    RAYGUI_ICON_232 = 232,
    RAYGUI_ICON_233 = 233,
    RAYGUI_ICON_234 = 234,
    RAYGUI_ICON_235 = 235,
    RAYGUI_ICON_236 = 236,
    RAYGUI_ICON_237 = 237,
    RAYGUI_ICON_238 = 238,
    RAYGUI_ICON_239 = 239,
    RAYGUI_ICON_240 = 240,
    RAYGUI_ICON_241 = 241,
    RAYGUI_ICON_242 = 242,
    RAYGUI_ICON_243 = 243,
    RAYGUI_ICON_244 = 244,
    RAYGUI_ICON_245 = 245,
    RAYGUI_ICON_246 = 246,
    RAYGUI_ICON_247 = 247,
    RAYGUI_ICON_248 = 248,
    RAYGUI_ICON_249 = 249,
    RAYGUI_ICON_250 = 250,
    RAYGUI_ICON_251 = 251,
    RAYGUI_ICON_252 = 252,
    RAYGUI_ICON_253 = 253,
    RAYGUI_ICON_254 = 254,
    RAYGUI_ICON_255 = 255,
} guiRAYGUI_ICONName;
#endif