//XPOS.h
//VERSION 2.0
//Includes old addresses for MIDI 

//Adding look up table for fastLED library so I can adress my neck matrix lengthwise instead
unsigned short int flip[936] = {
  0, 6, 12, 18, 24, 30, 36, 42, 48, 54, 60, 66, 72, 78, 84, 90, 96, 102, 108, 114, 120, 126, 132, 138, 144, 150, 156, 162, 168, 174, 180, 186, 192, 198, 204, 210, 216, 222, 228, 234, 240, 246, 252, 258, 264, 270, 276, 282, 288, 294, 300, 306, 312, 318, 324, 330, 336, 342, 348, 354, 360, 366, 372, 378, 384, 390, 396, 402, 408, 414, 420, 426, 432, 438, 444, 450, 456, 462, 468, 474, 480, 486, 492, 498, 504, 510, 516, 522, 528, 534, 540, 546, 552, 558, 564, 570, 576, 582, 588, 594, 600, 606, 612, 618, 624, 630, 636, 642, 648, 654, 660, 666, 672, 678, 684, 690, 696, 702, 708, 714, 720, 726, 732, 738, 744, 750, 756, 762, 768, 774, 780, 786, 792, 798, 804, 810, 816, 822, 828, 834, 840, 846, 852, 858, 864, 870, 876, 882, 888, 894, 900, 906, 912, 918, 924, 930, 1, 7, 13, 19, 25, 31, 37, 43, 49, 55, 61, 67, 73, 79, 85, 91, 97, 103, 109, 115, 121, 127, 133, 139, 145, 151, 157, 163, 169, 175, 181, 187, 193, 199, 205, 211, 217, 223, 229, 235, 241, 247, 253, 259, 265, 271, 277, 283, 289, 295, 301, 307, 313, 319, 325, 331, 337, 343, 349, 355, 361, 367, 373, 379, 385, 391, 397, 403, 409, 415, 421, 427, 433, 439, 445, 451, 457, 463, 469, 475, 481, 487, 493, 499, 505, 511, 517, 523, 529, 535, 541, 547, 553, 559, 565, 571, 577, 583, 589, 595, 601, 607, 613, 619, 625, 631, 637, 643, 649, 655, 661, 667, 673, 679, 685, 691, 697, 703, 709, 715, 721, 727, 733, 739, 745, 751, 757, 763, 769, 775, 781, 787, 793, 799, 805, 811, 817, 823, 829, 835, 841, 847, 853, 859, 865, 871, 877, 883, 889, 895, 901, 907, 913, 919, 925, 931, 2, 8, 14, 20, 26, 32, 38, 44, 50, 56, 62, 68, 74, 80, 86, 92, 98, 104, 110, 116, 122, 128, 134, 140, 146, 152, 158, 164, 170, 176, 182, 188, 194, 200, 206, 212, 218, 224, 230, 236, 242, 248, 254, 260, 266, 272, 278, 284, 290, 296, 302, 308, 314, 320, 326, 332, 338, 344, 350, 356, 362, 368, 374, 380, 386, 392, 398, 404, 410, 416, 422, 428, 434, 440, 446, 452, 458, 464, 470, 476, 482, 488, 494, 500, 506, 512, 518, 524, 530, 536, 542, 548, 554, 560, 566, 572, 578, 584, 590, 596, 602, 608, 614, 620, 626, 632, 638, 644, 650, 656, 662, 668, 674, 680, 686, 692, 698, 704, 710, 716, 722, 728, 734, 740, 746, 752, 758, 764, 770, 776, 782, 788, 794, 800, 806, 812, 818, 824, 830, 836, 842, 848, 854, 860, 866, 872, 878, 884, 890, 896, 902, 908, 914, 920, 926, 932, 3, 9, 15, 21, 27, 33, 39, 45, 51, 57, 63, 69, 75, 81, 87, 93, 99, 105, 111, 117, 123, 129, 135, 141, 147, 153, 159, 165, 171, 177, 183, 189, 195, 201, 207, 213, 219, 225, 231, 237, 243, 249, 255, 261, 267, 273, 279, 285, 291, 297, 303, 309, 315, 321, 327, 333, 339, 345, 351, 357, 363, 369, 375, 381, 387, 393, 399, 405, 411, 417, 423, 429, 435, 441, 447, 453, 459, 465, 471, 477, 483, 489, 495, 501, 507, 513, 519, 525, 531, 537, 543, 549, 555, 561, 567, 573, 579, 585, 591, 597, 603, 609, 615, 621, 627, 633, 639, 645, 651, 657, 663, 669, 675, 681, 687, 693, 699, 705, 711, 717, 723, 729, 735, 741, 747, 753, 759, 765, 771, 777, 783, 789, 795, 801, 807, 813, 819, 825, 831, 837, 843, 849, 855, 861, 867, 873, 879, 885, 891, 897, 903, 909, 915, 921, 927, 933, 4, 10, 16, 22, 28, 34, 40, 46, 52, 58, 64, 70, 76, 82, 88, 94, 100, 106, 112, 118, 124, 130, 136, 142, 148, 154, 160, 166, 172, 178, 184, 190, 196, 202, 208, 214, 220, 226, 232, 238, 244, 250, 256, 262, 268, 274, 280, 286, 292, 298, 304, 310, 316, 322, 328, 334, 340, 346, 352, 358, 364, 370, 376, 382, 388, 394, 400, 406, 412, 418, 424, 430, 436, 442, 448, 454, 460, 466, 472, 478, 484, 490, 496, 502, 508, 514, 520, 526, 532, 538, 544, 550, 556, 562, 568, 574, 580, 586, 592, 598, 604, 610, 616, 622, 628, 634, 640, 646, 652, 658, 664, 670, 676, 682, 688, 694, 700, 706, 712, 718, 724, 730, 736, 742, 748, 754, 760, 766, 772, 778, 784, 790, 796, 802, 808, 814, 820, 826, 832, 838, 844, 850, 856, 862, 868, 874, 880, 886, 892, 898, 904, 910, 916, 922, 928, 934, 5, 11, 17, 23, 29, 35, 41, 47, 53, 59, 65, 71, 77, 83, 89, 95, 101, 107, 113, 119, 125, 131, 137, 143, 149, 155, 161, 167, 173, 179, 185, 191, 197, 203, 209, 215, 221, 227, 233, 239, 245, 251, 257, 263, 269, 275, 281, 287, 293, 299, 305, 311, 317, 323, 329, 335, 341, 347, 353, 359, 365, 371, 377, 383, 389, 395, 401, 407, 413, 419, 425, 431, 437, 443, 449, 455, 461, 467, 473, 479, 485, 491, 497, 503, 509, 515, 521, 527, 533, 539, 545, 551, 557, 563, 569, 575, 581, 587, 593, 599, 605, 611, 617, 623, 629, 635, 641, 647, 653, 659, 665, 671, 677, 683, 689, 695, 701, 707, 713, 719, 725, 731, 737, 743, 749, 755, 761, 767, 773, 779, 785, 791, 797, 803, 809, 815, 821, 827, 833, 839, 845, 851, 857, 863, 869, 875, 881, 887, 893, 899, 905, 911, 917, 923, 929, 935
};

unsigned short int matrix[6][156] = {
  5, 11, 17, 23, 29, 35, 41, 47, 53, 59, 65, 71, 77, 83, 89, 95, 101, 107, 113, 119, 125, 131, 137, 143, 149, 155, 161, 167, 173, 179, 185, 191, 197, 203, 209, 215, 221, 227, 233, 239, 245, 251, 257, 263, 269, 275, 281, 287, 293, 299, 305, 311, 317, 323, 329, 335, 341, 347, 353, 359, 365, 371, 377, 383, 389, 395, 401, 407, 413, 419, 425, 431, 437, 443, 449, 455, 461, 467, 473, 479, 485, 491, 497, 503, 509, 515, 521, 527, 533, 539, 545, 551, 557, 563, 569, 575, 581, 587, 593, 599, 605, 611, 617, 623, 629, 635, 641, 647, 653, 659, 665, 671, 677, 683, 689, 695, 701, 707, 713, 719, 725, 731, 737, 743, 749, 755, 761, 767, 773, 779, 785, 791, 797, 803, 809, 815, 821, 827, 833, 839, 845, 851, 857, 863, 869, 875, 881, 887, 893, 899, 905, 911, 917, 923, 929, 935,
  4, 10, 16, 22, 28, 34, 40, 46, 52, 58, 64, 70, 76, 82, 88, 94, 100, 106, 112, 118, 124, 130, 136, 142, 148, 154, 160, 166, 172, 178, 184, 190, 196, 202, 208, 214, 220, 226, 232, 238, 244, 250, 256, 262, 268, 274, 280, 286, 292, 298, 304, 310, 316, 322, 328, 334, 340, 346, 352, 358, 364, 370, 376, 382, 388, 394, 400, 406, 412, 418, 424, 430, 436, 442, 448, 454, 460, 466, 472, 478, 484, 490, 496, 502, 508, 514, 520, 526, 532, 538, 544, 550, 556, 562, 568, 574, 580, 586, 592, 598, 604, 610, 616, 622, 628, 634, 640, 646, 652, 658, 664, 670, 676, 682, 688, 694, 700, 706, 712, 718, 724, 730, 736, 742, 748, 754, 760, 766, 772, 778, 784, 790, 796, 802, 808, 814, 820, 826, 832, 838, 844, 850, 856, 862, 868, 874, 880, 886, 892, 898, 904, 910, 916, 922, 928, 934,
  3, 9, 15, 21, 27, 33, 39, 45, 51, 57, 63, 69, 75, 81, 87, 93, 99, 105, 111, 117, 123, 129, 135, 141, 147, 153, 159, 165, 171, 177, 183, 189, 195, 201, 207, 213, 219, 225, 231, 237, 243, 249, 255, 261, 267, 273, 279, 285, 291, 297, 303, 309, 315, 321, 327, 333, 339, 345, 351, 357, 363, 369, 375, 381, 387, 393, 399, 405, 411, 417, 423, 429, 435, 441, 447, 453, 459, 465, 471, 477, 483, 489, 495, 501, 507, 513, 519, 525, 531, 537, 543, 549, 555, 561, 567, 573, 579, 585, 591, 597, 603, 609, 615, 621, 627, 633, 639, 645, 651, 657, 663, 669, 675, 681, 687, 693, 699, 705, 711, 717, 723, 729, 735, 741, 747, 753, 759, 765, 771, 777, 783, 789, 795, 801, 807, 813, 819, 825, 831, 837, 843, 849, 855, 861, 867, 873, 879, 885, 891, 897, 903, 909, 915, 921, 927, 933,
  2, 8, 14, 20, 26, 32, 38, 44, 50, 56, 62, 68, 74, 80, 86, 92, 98, 104, 110, 116, 122, 128, 134, 140, 146, 152, 158, 164, 170, 176, 182, 188, 194, 200, 206, 212, 218, 224, 230, 236, 242, 248, 254, 260, 266, 272, 278, 284, 290, 296, 302, 308, 314, 320, 326, 332, 338, 344, 350, 356, 362, 368, 374, 380, 386, 392, 398, 404, 410, 416, 422, 428, 434, 440, 446, 452, 458, 464, 470, 476, 482, 488, 494, 500, 506, 512, 518, 524, 530, 536, 542, 548, 554, 560, 566, 572, 578, 584, 590, 596, 602, 608, 614, 620, 626, 632, 638, 644, 650, 656, 662, 668, 674, 680, 686, 692, 698, 704, 710, 716, 722, 728, 734, 740, 746, 752, 758, 764, 770, 776, 782, 788, 794, 800, 806, 812, 818, 824, 830, 836, 842, 848, 854, 860, 866, 872, 878, 884, 890, 896, 902, 908, 914, 920, 926, 932,
  1, 7, 13, 19, 25, 31, 37, 43, 49, 55, 61, 67, 73, 79, 85, 91, 97, 103, 109, 115, 121, 127, 133, 139, 145, 151, 157, 163, 169, 175, 181, 187, 193, 199, 205, 211, 217, 223, 229, 235, 241, 247, 253, 259, 265, 271, 277, 283, 289, 295, 301, 307, 313, 319, 325, 331, 337, 343, 349, 355, 361, 367, 373, 379, 385, 391, 397, 403, 409, 415, 421, 427, 433, 439, 445, 451, 457, 463, 469, 475, 481, 487, 493, 499, 505, 511, 517, 523, 529, 535, 541, 547, 553, 559, 565, 571, 577, 583, 589, 595, 601, 607, 613, 619, 625, 631, 637, 643, 649, 655, 661, 667, 673, 679, 685, 691, 697, 703, 709, 715, 721, 727, 733, 739, 745, 751, 757, 763, 769, 775, 781, 787, 793, 799, 805, 811, 817, 823, 829, 835, 841, 847, 853, 859, 865, 871, 877, 883, 889, 895, 901, 907, 913, 919, 925, 931,
  0, 6, 12, 18, 24, 30, 36, 42, 48, 54, 60, 66, 72, 78, 84, 90, 96, 102, 108, 114, 120, 126, 132, 138, 144, 150, 156, 162, 168, 174, 180, 186, 192, 198, 204, 210, 216, 222, 228, 234, 240, 246, 252, 258, 264, 270, 276, 282, 288, 294, 300, 306, 312, 318, 324, 330, 336, 342, 348, 354, 360, 366, 372, 378, 384, 390, 396, 402, 408, 414, 420, 426, 432, 438, 444, 450, 456, 462, 468, 474, 480, 486, 492, 498, 504, 510, 516, 522, 528, 534, 540, 546, 552, 558, 564, 570, 576, 582, 588, 594, 600, 606, 612, 618, 624, 630, 636, 642, 648, 654, 660, 666, 672, 678, 684, 690, 696, 702, 708, 714, 720, 726, 732, 738, 744, 750, 756, 762, 768, 774, 780, 786, 792, 798, 804, 810, 816, 822, 828, 834, 840, 846, 852, 858, 864, 870, 876, 882, 888, 894, 900, 906, 912, 918, 924, 930
};


unsigned short int XSTART[22] = {
  0,    //0
  2,    //1
  13,   //2
  25,   //3
  36,   //4
  46,   //5
  56,   //6
  65,   //7
  74,   //8
  82,   //9
  90,   //10
  97,   //11
  104,  //12
  111,  //13
  117,  //14
  123,  //15
  129,  //16
  134,  //17
  139,  //18
  144,  //19
  148,  //20
  152   //21
};

unsigned short int XSTOP[22] = {
  1,    //0
  12,   //1
  24,   //2
  35,   //3
  45,   //4
  55,   //5
  64,   //6
  73,   //7
  81,   //8
  89,   //9
  96,   //10
  103,  //11
  110,  //12
  116,  //13
  122,  //14
  128,  //15
  133,  //16
  138,  //17
  143,  //18
  147,  //19
  151,  //20
  155   //21
};

unsigned short int BSTART[27] {
  0,    //0
  2,    //1
  62,   //2
  70,   //3
  77,   //4
  96,   //5
  99,   //6
  101,  //7
  116,  //8
  120,  //9
  122,  //10
  127,  //11
  288,  //12
  315,  //13
  324,  //14
  330,  //15
  336,  //16
  338,  //17
  447,  //18
  453,  //19
  456,  //20
  483,  //21
  487,  //22
  491,  //23
  494,  //24
  507,  //25
  522   //26
};

unsigned short int BSTOP[27] {
  1,    //0
  61,   //1
  69,   //2
  76,   //3
  95,   //4
  98,   //5
  100,  //6
  115,  //7
  119,  //8
  121,  //9
  126,  //10
  287,  //11
  314,  //12
  323,  //13
  329,  //14
  335,  //15
  337,  //16
  446,  //17
  452,  //18
  455,  //19
  482,  //20
  486,  //21
  490,  //22
  493,  //23
  506,  //24
  521,  //25
  526   //26
};


unsigned char chOffset[6] = {
  64, //e
  59, //B
  55, //G
  50, //D
  45, //A
  40  //E
};

unsigned char modeSteps[7] {
  2,  //0,  whole
  2,  //1,  whole
  1,  //2,  half
  2,  //3,  whole
  2,  //4,  whole
  2,  //5,  whole
  1   //6,  half

};

unsigned char stringOffset[6] {
  0,  //e
  5,  //B
  9,  //G
  2,  //D
  7,  //A
  0   //E
};
