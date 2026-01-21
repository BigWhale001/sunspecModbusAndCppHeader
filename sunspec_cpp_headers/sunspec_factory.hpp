// Generated SunSpec Factory
#pragma once
#include <memory>
#include "sunspec_model_base.hpp"
#include "sunspec_model_1.hpp"
#include "sunspec_model_10.hpp"
#include "sunspec_model_101.hpp"
#include "sunspec_model_102.hpp"
#include "sunspec_model_103.hpp"
#include "sunspec_model_11.hpp"
#include "sunspec_model_111.hpp"
#include "sunspec_model_112.hpp"
#include "sunspec_model_113.hpp"
#include "sunspec_model_12.hpp"
#include "sunspec_model_120.hpp"
#include "sunspec_model_121.hpp"
#include "sunspec_model_122.hpp"
#include "sunspec_model_123.hpp"
#include "sunspec_model_124.hpp"
#include "sunspec_model_125.hpp"
#include "sunspec_model_126.hpp"
#include "sunspec_model_127.hpp"
#include "sunspec_model_128.hpp"
#include "sunspec_model_129.hpp"
#include "sunspec_model_13.hpp"
#include "sunspec_model_130.hpp"
#include "sunspec_model_131.hpp"
#include "sunspec_model_132.hpp"
#include "sunspec_model_133.hpp"
#include "sunspec_model_134.hpp"
#include "sunspec_model_135.hpp"
#include "sunspec_model_136.hpp"
#include "sunspec_model_137.hpp"
#include "sunspec_model_138.hpp"
#include "sunspec_model_139.hpp"
#include "sunspec_model_14.hpp"
#include "sunspec_model_140.hpp"
#include "sunspec_model_141.hpp"
#include "sunspec_model_142.hpp"
#include "sunspec_model_143.hpp"
#include "sunspec_model_144.hpp"
#include "sunspec_model_145.hpp"
#include "sunspec_model_15.hpp"
#include "sunspec_model_16.hpp"
#include "sunspec_model_160.hpp"
#include "sunspec_model_17.hpp"
#include "sunspec_model_18.hpp"
#include "sunspec_model_19.hpp"
#include "sunspec_model_2.hpp"
#include "sunspec_model_201.hpp"
#include "sunspec_model_202.hpp"
#include "sunspec_model_203.hpp"
#include "sunspec_model_204.hpp"
#include "sunspec_model_211.hpp"
#include "sunspec_model_212.hpp"
#include "sunspec_model_213.hpp"
#include "sunspec_model_214.hpp"
#include "sunspec_model_220.hpp"
#include "sunspec_model_3.hpp"
#include "sunspec_model_302.hpp"
#include "sunspec_model_303.hpp"
#include "sunspec_model_304.hpp"
#include "sunspec_model_305.hpp"
#include "sunspec_model_306.hpp"
#include "sunspec_model_307.hpp"
#include "sunspec_model_308.hpp"
#include "sunspec_model_4.hpp"
#include "sunspec_model_401.hpp"
#include "sunspec_model_402.hpp"
#include "sunspec_model_403.hpp"
#include "sunspec_model_404.hpp"
#include "sunspec_model_5.hpp"
#include "sunspec_model_501.hpp"
#include "sunspec_model_502.hpp"
#include "sunspec_model_6.hpp"
#include "sunspec_model_601.hpp"
#include "sunspec_model_63001.hpp"
#include "sunspec_model_63002.hpp"
#include "sunspec_model_64001.hpp"
#include "sunspec_model_64020.hpp"
#include "sunspec_model_64101.hpp"
#include "sunspec_model_64111.hpp"
#include "sunspec_model_64112.hpp"
#include "sunspec_model_64410.hpp"
#include "sunspec_model_64411.hpp"
#include "sunspec_model_64412.hpp"
#include "sunspec_model_64413.hpp"
#include "sunspec_model_64414.hpp"
#include "sunspec_model_64415.hpp"
#include "sunspec_model_7.hpp"
#include "sunspec_model_701.hpp"
#include "sunspec_model_702.hpp"
#include "sunspec_model_703.hpp"
#include "sunspec_model_704.hpp"
#include "sunspec_model_705.hpp"
#include "sunspec_model_706.hpp"
#include "sunspec_model_707.hpp"
#include "sunspec_model_708.hpp"
#include "sunspec_model_709.hpp"
#include "sunspec_model_710.hpp"
#include "sunspec_model_711.hpp"
#include "sunspec_model_712.hpp"
#include "sunspec_model_713.hpp"
#include "sunspec_model_714.hpp"
#include "sunspec_model_715.hpp"
#include "sunspec_model_8.hpp"
#include "sunspec_model_801.hpp"
#include "sunspec_model_802.hpp"
#include "sunspec_model_803.hpp"
#include "sunspec_model_804.hpp"
#include "sunspec_model_805.hpp"
#include "sunspec_model_806.hpp"
#include "sunspec_model_807.hpp"
#include "sunspec_model_808.hpp"
#include "sunspec_model_809.hpp"
#include "sunspec_model_9.hpp"

class SunSpecFactory {
public:
    static std::shared_ptr<SunSpecModelBase> create_model(uint16_t id) {
        switch (id) {
            case 1: return std::make_shared<Model1>();
            case 10: return std::make_shared<Model10>();
            case 101: return std::make_shared<Model101>();
            case 102: return std::make_shared<Model102>();
            case 103: return std::make_shared<Model103>();
            case 11: return std::make_shared<Model11>();
            case 111: return std::make_shared<Model111>();
            case 112: return std::make_shared<Model112>();
            case 113: return std::make_shared<Model113>();
            case 12: return std::make_shared<Model12>();
            case 120: return std::make_shared<Model120>();
            case 121: return std::make_shared<Model121>();
            case 122: return std::make_shared<Model122>();
            case 123: return std::make_shared<Model123>();
            case 124: return std::make_shared<Model124>();
            case 125: return std::make_shared<Model125>();
            case 126: return std::make_shared<Model126>();
            case 127: return std::make_shared<Model127>();
            case 128: return std::make_shared<Model128>();
            case 129: return std::make_shared<Model129>();
            case 13: return std::make_shared<Model13>();
            case 130: return std::make_shared<Model130>();
            case 131: return std::make_shared<Model131>();
            case 132: return std::make_shared<Model132>();
            case 133: return std::make_shared<Model133>();
            case 134: return std::make_shared<Model134>();
            case 135: return std::make_shared<Model135>();
            case 136: return std::make_shared<Model136>();
            case 137: return std::make_shared<Model137>();
            case 138: return std::make_shared<Model138>();
            case 139: return std::make_shared<Model139>();
            case 14: return std::make_shared<Model14>();
            case 140: return std::make_shared<Model140>();
            case 141: return std::make_shared<Model141>();
            case 142: return std::make_shared<Model142>();
            case 143: return std::make_shared<Model143>();
            case 144: return std::make_shared<Model144>();
            case 145: return std::make_shared<Model145>();
            case 15: return std::make_shared<Model15>();
            case 16: return std::make_shared<Model16>();
            case 160: return std::make_shared<Model160>();
            case 17: return std::make_shared<Model17>();
            case 18: return std::make_shared<Model18>();
            case 19: return std::make_shared<Model19>();
            case 2: return std::make_shared<Model2>();
            case 201: return std::make_shared<Model201>();
            case 202: return std::make_shared<Model202>();
            case 203: return std::make_shared<Model203>();
            case 204: return std::make_shared<Model204>();
            case 211: return std::make_shared<Model211>();
            case 212: return std::make_shared<Model212>();
            case 213: return std::make_shared<Model213>();
            case 214: return std::make_shared<Model214>();
            case 220: return std::make_shared<Model220>();
            case 3: return std::make_shared<Model3>();
            case 302: return std::make_shared<Model302>();
            case 303: return std::make_shared<Model303>();
            case 304: return std::make_shared<Model304>();
            case 305: return std::make_shared<Model305>();
            case 306: return std::make_shared<Model306>();
            case 307: return std::make_shared<Model307>();
            case 308: return std::make_shared<Model308>();
            case 4: return std::make_shared<Model4>();
            case 401: return std::make_shared<Model401>();
            case 402: return std::make_shared<Model402>();
            case 403: return std::make_shared<Model403>();
            case 404: return std::make_shared<Model404>();
            case 5: return std::make_shared<Model5>();
            case 501: return std::make_shared<Model501>();
            case 502: return std::make_shared<Model502>();
            case 6: return std::make_shared<Model6>();
            case 601: return std::make_shared<Model601>();
            case 63001: return std::make_shared<Model63001>();
            case 63002: return std::make_shared<Model63002>();
            case 64001: return std::make_shared<Model64001>();
            case 64020: return std::make_shared<Model64020>();
            case 64101: return std::make_shared<Model64101>();
            case 64111: return std::make_shared<Model64111>();
            case 64112: return std::make_shared<Model64112>();
            case 64410: return std::make_shared<Model64410>();
            case 64411: return std::make_shared<Model64411>();
            case 64412: return std::make_shared<Model64412>();
            case 64413: return std::make_shared<Model64413>();
            case 64414: return std::make_shared<Model64414>();
            case 64415: return std::make_shared<Model64415>();
            case 7: return std::make_shared<Model7>();
            case 701: return std::make_shared<Model701>();
            case 702: return std::make_shared<Model702>();
            case 703: return std::make_shared<Model703>();
            case 704: return std::make_shared<Model704>();
            case 705: return std::make_shared<Model705>();
            case 706: return std::make_shared<Model706>();
            case 707: return std::make_shared<Model707>();
            case 708: return std::make_shared<Model708>();
            case 709: return std::make_shared<Model709>();
            case 710: return std::make_shared<Model710>();
            case 711: return std::make_shared<Model711>();
            case 712: return std::make_shared<Model712>();
            case 713: return std::make_shared<Model713>();
            case 714: return std::make_shared<Model714>();
            case 715: return std::make_shared<Model715>();
            case 8: return std::make_shared<Model8>();
            case 801: return std::make_shared<Model801>();
            case 802: return std::make_shared<Model802>();
            case 803: return std::make_shared<Model803>();
            case 804: return std::make_shared<Model804>();
            case 805: return std::make_shared<Model805>();
            case 806: return std::make_shared<Model806>();
            case 807: return std::make_shared<Model807>();
            case 808: return std::make_shared<Model808>();
            case 809: return std::make_shared<Model809>();
            case 9: return std::make_shared<Model9>();
            default: return nullptr;
        }
    }
};
