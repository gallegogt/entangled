/*
 * Copyright (c) 2018 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef __COMMON_MODEL_TESTS_DEFS_H__
#define __COMMON_MODEL_TESTS_DEFS_H__

#include "common/model/transaction.h"

static int64_t TEST_VALUE = 123456;
static uint64_t TEST_TIMESTAMP = 1477037811737;
static int64_t TEST_CURRENT_INDEX = 2;
static int64_t TEST_LAST_INDEX = 5;
static uint64_t TEST_ATTACHMENT_TIMESTAMP = 1477037821737;
static uint64_t TEST_ATTACHMENT_TIMESTAMP_LOWER = 1477037831737;
static uint64_t TEST_ATTACHMENT_TIMESTAMP_UPPER = 1477037841737;
static uint64_t TEST_SNAPSHOT_INDEX = 2345;
static bool TEST_SOLID = true;
static uint64_t TEST_ARRIVAL_TIMESTAMP = 1477037812737;

static tryte_t const * const TEST_DATA =
    (tryte_t*)"LQZYGHAQLJLENO9IBSFOFIYHIBKOHEWVAEHKYOED9WBERCCLGGLOJVIZSIUUXGJ9WONIGBXKTVAWUXNHW";

static tryte_t const* const TEST_SEED =
    (tryte_t*)"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
static tryte_t const* const TEST_TAG = (tryte_t*)"ZTDIDNQDJZGUQKOWJ9JZRCKOVGP";
static tryte_t const* const TEST_OBSOLETE_TAG =
    (tryte_t*)"ABCCCQDZZZGUQKOWJ9JZRCKOVGP";
static tryte_t const* const TEST_TAG_NULL =
    (tryte_t*)"999999999999999999999999999";
static tryte_t const* const TEST_ADDRESS_0 =
  (tryte_t *)"XUERGHWTYRTFUYKFKXURKHMFEVLOIFTTCNTXOGLDPCZ9CJLKHROOPGNAQYFJEPGK9OKUQROUECBAVNXRX";
static tryte_t const* const TEST_ADDRESS_1 =
  (tryte_t *)"RJBYLCIOUKWJVCUKZQZCPIKNBUOGRGVXHRTTE9ZFSCGTFRKELMJBDDAKEYYCLHLJDNSHQ9RTIUIDLMUOB";
static tryte_t const* const TEST_HASH =
  (tryte_t *)"DLQUUDSOIGZLEYYOGXICWWCIBHRPLOGRSLAQNTIJXOBTCEXAUNIKKJICJKTKZ9SLOWSTDBZJETADPFLFD";
static tryte_t const* const TEST_BUNDLE =
  (tryte_t *)"AAAAACROIGZLEYYOGXICWWCIBHRPLOGRSLAQNTIJXOBTCEXAUNIKKJICJKTKZ9SLOWSTDBZJETADPFLFD";

static tryte_t const* const TEST_TRUNK = (tryte_t *)"JVMTDGDPDFYHMZPMWEKKANBQSLSDTIIHAYQUMZOKHXXXGJHJDQPOMDOMNRDKYCZRUFZROZDADTHZC9999";
static tryte_t const* const TEST_BRANCH = (tryte_t *)"TKGDZ9GEI9CPNQGHEATIISAKYPPPSXVCXBSR9EIWCTHHSSEQCD9YLDPEXYERCNJVASRGWMAVKFQTC9999";
static tryte_t const* const TEST_NONCE =
    (tryte_t*)"BBBBDNQDJZGUQKOWJ9JZRCKAAAA";
static tryte_t const* const TEST_DATA_ADDRESS =
  (tryte_t *)"9XV9RJGFJJZWITDPKSQXRTHCKJAIZZY9BYLBEQUXUNCLITRQDR9CCD99AANMXYEKD9GLJGVB9HIAGRIBQ";
static tryte_t const* const TEST_SIG_1 = (tryte_t *)
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999999999999999999999999999999999999"
    "99999999999999999999999999999999999999999";

static tryte_t const* const TEST_SIG_2 = (tryte_t *)
    "ELMOHGRBDLMXEXXVYJTXMBNMCPAZEQ9XHQSD9ZQTIH99CEKIBZVZDXTSVFCQDBZITQQKLCGVAZ"
    "9WG9ORDSD9YYILVJOAFFDECSIFXAWGXQUCWJB9XXZGVPMMJNVLMB9EQQYMHTKFYWBC9X9QDVZV"
    "RNOWKWNXIOJFWYGPNPCIDQXIAKQTHYPOFRLCZDULKVQVIRBZZJBHULLHOMNDU9EYOANVPWQGIE"
    "MY9IIYAGTNECBVSRZCBKCJIPRIXQOAFLLVHFJ9GVBO9AQYJPNXTAXJX9LRZZHOFWELMHWUXAHS"
    "QHMEBFXRMKQQMPXZHWYKQJOFXWQDMARNFXNQJNWVTOWJMPPKIP9RQKBFIHTFMIEVWRAOZUFAVY"
    "ZTLPMFBHDZRDRTATIYFPSGEUUZSHZWGLIDWV9RZRNTDZEALIBBASARJLUWOPZIT9FAD9NKPKAG"
    "MWTLEITVVMQPI9VMUNFKZUPQQEWWJRETZVNEJFTQIWPDZUSFKWKBIWNAXUDUAHJHOU9WVOGOMP"
    "DLCHP9MDJAJYTCEX9QZUQYXMSJCCUDJNPFBSWNVEWEJTPTFXWJSHRQZQMHXNVSJRJO99MHAM9K"
    "UISDUVDGXTONNNBWXDJH9LWXSPSCYJSAACNPVQEKYAZYOHSWPPOFWAL9SFVPODZSDUMJYJRLFT"
    "CHTYDNNQAHVJPNGPZRIBLFBBUTZDDVXBI9PFSGONSZUPDF9BSJHOBJLYERSIELYCJDWJIJPBG9"
    "KVP9KHACCTJMCPHNSOWEU9DAZJMCTWAUBNPCAAFOPUECDBKMDAPQYUDSCEGQCSTKYRYSUDAI9M"
    "NQXAYTPITN9DEVDVFLCCTMUEDAFTPHOXQAWTFPESLTDNNBCZWFJ9ZOPPIQIIGZUNVVOMDCMDHU"
    "BGDWQQGYEY9HBZOKDTSR9CSQNR9HZBPNYEPPRROSQCYWPXWLTCZGSXSAKZTXQZCHOBMVDFTWZQ"
    "JPFGOYODNWDEETK9XBOPIPMIDLHMISRSHUILN9KFCWGXYMQHGBYCEQNJLJWPCYGDBWWKWJJLDB"
    "RJYKSQFZJHSKQCFBBBLJQIGJLPUXIGO9ODYDWGLDFEASNVRPQGCSWTGCZWBZITEQKMJVZPJMRC"
    "XKVMGOUMHDFTMBROQKRCEVYYCSSKZWPYFHVMGFOGRUPHFYPBMCMHGYK9GXGOOBLJMROIJQXZTQ"
    "XXNWMVPSKGMORTBIWVBCALMCYVDIZAWHXMTBVTQNYWJRZUQDUOZKITNECGYRRGOFVJCKINYLCK"
    "PPFTKAU9NBJMUOPYCKJJQIIYLLTEHRODLUINLCIY9CEYNRR9MKARMOD9NDTXMSLIYUARKNKVEO"
    "LUEYBQE9FXJVJUMQGOWMXTZTGODOVCBGM9IETQULNTMC9KOENQ9IVEVMACWRSMST9LTGIXMTZR"
    "QOKDYGXQASJPBFDWDKPZKSAHEEWMONFWCUKMFIOQHOTALHPVRWDXVNQELIE9HIJT9GJJIXENP9"
    "WUS9H9LDMYWPAQVSAKZTBMBVSHUZVRJZXNUVCOGTEJXJKLKK9PJEYXZSUI9SREZDATMPSACZUL"
    "VMDZONKJKVNCUBPGDJUXHJWNYFBNWPJHXXABCEX9D9HJRUOOBDINIZHXBVRSJIROBDPGLLZDLR"
    "IP9CYVRSFDPTELJZIYNPJIZEHWRPVIBURGLPMMIFJOSPDZTSMDAUCRETGZQAKQWEYIHJWWGOWQ"
    "EUUWB9WLCRAHTFJLMXAD9QPIXADUZMSVZLFMLCXAMCEXIBNUBSVWTZRMKANPZDEXC9XMYCSEDF"
    "EXAXNACDWIYELGCHKRCFAGHTLJAFG9PUEAIORYHMCDWENGODDJWEQNQKBNLSVSZYPBGDPGTQSM"
    "B9RHH9ZVKTBB9YCWK9LEQEOZZTIHFZJQHFWNNRHJUVHYYODTSLBKOUBHMW9CXWNVVAHHYSTPJQ"
    "BGWMJHFOARIKJIRXKRADUWONLQ9IMJICMMWNDJKAKLIMJTWMMGIALJPL9OGDUHCBOUTINZZWCW"
    "CDIPFTRUROCZYJOOSJGALKKSOUAVCBGUBIQBFBANVUGKJNBYGTFZOHHBG9WFXJYUDMRSKUHOWA"
    "AYQBETFEZNRXWMJQQIQQCHSWKCU9SCYVBZ9DJ9XEPXFILFWWTVCNCYYNHMV9WYUONRWINGW9EH"
    "PNOXBHQSGDOGIIEMKKCMBIOSBP9ZHCV9S9HDIMQOB";

static tryte_t const* const TEST_SIG_3 = (tryte_t *)
    "LSJVBJNSXBLZZAULLCEKHMXZHPSZAIDZLNOGQPLKZVAZX9IWNJELXUPAWLFKYLLHKTHNEMIQPC"
    "JSMWKYYCIULWV9HKHXOLZMYIZAFDZETEPZOKDJMUJLWJHNDMVROH9CHHYYS9CLD9RZUIHZLFYV"
    "HEKODFBGTHUGFBVZYSKIVUQTRWLFEQYUNGVSVXYCUMGEYDAXEEMBETGPYPITUFKCXFYXO9NXVS"
    "JFKHOFILVCJQLXW9JSBNCEVWSHAVCVBBBLXWISOWYITIECXFPUJEFMKECADBICSLAAVNDAGXMZ"
    "UKYRCXEMQCRWTMVHVFYYPIDLVQCCPXBDBLLDKOQAKBEPVBUGKEMFUIXWIDLPD9ZZSSXKKWSFBJ"
    "WQ9JSSYULLG9M9XUK9SSIBNLRI99AUZUYWBSBJ9DPNRLZTAOQAEIDTKCFEQTPNLBGWZQFQPXQU"
    "BBSJZVNYABAGAXVF9NLALCKYSMMQRJWAYNDJPSNSMDBJRWKWROOVECPXHXPTYKPCDDXSEUIBVC"
    "RPOABQYLMWEJQEUUKQSZEYUOVKRPMZYPIMPDNETEBJAPJIBGCIUDHEZIQSPCRURXNXTBHPVYR9"
    "LIEFRVMZNB9DDBTCNQOTNEQNJBQTNFCCDDQZHQGURUBBHVGMARLIDGD9WVUTYFXNTVLAENF9DQ"
    "BUKITNHWFKOYDB9RAOZTSNROGHXUILWKWS9HEDGNUEGIWRRPFYHPMWUCSHXUOU9AKAAZPWEDPG"
    "HDGIEKIFWFYYLCPMGKTKZVMMVGJIHYMMAAFEQJXDZCEXZMNALAKUA9KMJEZBDD9ZMSNPGBEJAM"
    "PAAVHWGCOCJDABHPLXTEJZVFQDTZFNTTJLAUEJJKPKLQCXTNCROMUBBPRBKWBPNFPYFUNMD9VS"
    "GAWNRZWUYOHNVXRQUHYNMLOTISYYUIXKCXNANIFRNDOGNDLOUJRFHWFAJDNTKARDEBDJBQ9QOA"
    "OZNPBVWENXDPPSWLMWUPUFPSYJZVKGRSKLMMI9YYBQEQOZPHWLVFJGLDTNY9VIFLSXXROVRFHO"
    "POYHOEHOBHHZWOKEBSWXGVLPXKH9R9KQUPPAGBIYAY9ALMECXVHGEOHQTKCXWHRDYPVEPUVQBS"
    "SFVFQMJYXNMUHPHXVCVWUOIWRLLQULDGHJOHZTSAKMQDLJKG9JXDONQPZU9FUEDKWYICYCWDXT"
    "ZPIRZZPPUAJAUHDTHHYDG9MUUEQHSLWCWIJKLAJVAUWDCJAEIXEPPUMYUMSYVFXXI9SLXSDFYO"
    "MLNUUUGTBYQHSWXGC9OTNMGLDKTBGMUDVAAXRBGIXLASDKPTEHZTS9AX9RXMSTLFJH9UXILKLQ"
    "QETGPDKVII9HIUCOEZVGOJZFHMJLZPGKGNTFWGWZBZEVYIQGKMORCXUQQJZJYNAHSAVBEGTBWE"
    "VWMKEMZK99XMJDEDNDAMIXHZUZANCJBVCGLRRBUVLWUXDUQSYFOWQMWEHIOQGDQPYSAXREOEBK"
    "XQRAJKUGVHTUPGHTUVBDLIYBMIUWVSPWZB9JOERRJPAILRCXEOD9CYIS9N9PYBMKGXIURKDOFA"
    "YKN9JRTUHAERTNUJPKFSTQGXEJBGOYBIVOVSHUXNNJKN9AUCIAJCNB9NDMNLCSHPB9WVMPCHMV"
    "UJVXOOCJM9DTPDKBHNPATGPNETDHZHGHRYCQA9JTPRKGODYYZQQLYJGLMSWPLGOXW9NXQBMDXY"
    "9GPMSLWBYLIH9S9LGLDWDRYAYLYGNBCEAIQCXHTTHSYNCJ9OJDLI9YKETAQLCTCTHTJKJN9UZO"
    "YSBQQCFROHLBQGMYJCSDTISHUYHJZUPAUPEGDWDPVQSKDIENAYXMJDFWYBIXMAZZWZJISFQXYX"
    "HSTKZWWYD9ZYBCID9IWWUPRXAQARZSLXONJSMEPPZCMPGL9FFRKDOAPD9LKCAGOZLECTMLLWLI"
    "KPV9SPWVLZWVFPLSMNYCSMNJGKXNNZROHJPH9OUEWPJPVANDAIWYQHSWDXWYUQNGLSKCGFGRVH"
    "9AFBJRVEDNQGODZYOBUNZINGYBCNIOOGPIBQARWMYGG9YYJENNMTXGLJEQZHLJDSJVCCZMALAE"
    "DNCVRLPDCWBOFDUHZECUQXABVBHOWWLBFBSUZAGYEUUQQWMTZLJCQ9HXIORFXKUTIGRFUZDXPF"
    "LMRASRIVQABGUZBQGUPCVPQPILYQEKMQVGFCGXKAD";
static tryte_t const* const TEST_MSG = (tryte_t *)
    "XQRAJKUGVHTUPGHTUVBDLIYBMIUWVSPWZB9JOERRJPAILRCXEOD9CYIS9N9PYBMKGXIURKDOFA"
    "CDIPFTRUROCZYJOOSJGALKKSOUAVCBGUBIQBFBANVUGKJNBYGTFZOHHBG9WFXJYUDMRSKUHOWA"
    "HEKODFBGTHUGFBVZYSKIVUQTRWLFEQYUNGVSVXYCUMGEYDAXEEMBETGPYPITUFKCXFYXO9NXVS"
    "JFKHOFILVCJQLXW9JSBNCEVWSHAVCVBBBLXWISOWYITIECXFPUJEFMKECADBICSLAAVNDAGXMZ"
    "UKYRCXEMQCRWTMVHVFYYPIDLVQCCPXBDBLLDKOQAKBEPVBUGKEMFUIXWIDLPD9ZZSSXKKWSFBJ"
    "WQ9JSSYULLG9M9XUK9SSIBNLRI99AUZUYWBSBJ9DPNRLZTAOQAEIDTKCFEQTPNLBGWZQFQPXQU"
    "BBSJZVNYABAGAXVF9NLALCKYSMMQRJWAYNDJPSNSMDBJRWKWROOVECPXHXPTYKPCDDXSEUIBVC"
    "RPOABQYLMWEJQEUUKQSZEYUOVKRPMZYPIMPDNETEBJAPJIBGCIUDHEZIQSPCRURXNXTBHPVYR9"
    "LIEFRVMZNB9DDBTCNQOTNEQNJBQTNFCCDDQZHQGURUBBHVGMARLIDGD9WVUTYFXNTVLAENF9DQ"
    "BUKITNHWFKOYDB9RAOZTSNROGHXUILWKWS9HEDGNUEGIWRRPFYHPMWUCSHXUOU9AKAAZPWEDPG"
    "HDGIEKIFWFYYLCPMGKTKZVMMVGJIHYMMAAFEQJXDZCEXZMNALAKUA9KMJEZBDD9ZMSNPGBEJAM"
    "PAAVHWGCOCJDABHPLXTEJZVFQDTZFNTTJLAUEJJKPKLQCXTNCROMUBBPRBKWBPNFPYFUNMD9VS"
    "GAWNRZWUYOHNVXRQUHYNMLOTISYYUIXKCXNANIFRNDOGNDLOUJRFHWFAJDNTKARDEBDJBQ9QOA"
    "OZNPBVWENXDPPSWLMWUPUFPSYJZVKGRSKLMMI9YYBQEQOZPHWLVFJGLDTNY9VIFLSXXROVRFHO"
    "POYHOEHOBHHZWOKEBSWXGVLPXKH9R9KQUPPAGBIYAY9ALMECXVHGEOHQTKCXWHRDYPVEPUVQBS"
    "SFVFQMJYXNMUHPHXVCVWUOIWRLLQULDGHJOHZTSAKMQDLJKG9JXDONQPZU9FUEDKWYICYCWDXT"
    "ZPIRZZPPUAJAUHDTHHYDG9MUUEQHSLWCWIJKLAJVAUWDCJAEIXEPPUMYUMSYVFXXI9SLXSDFYO"
    "MLNUUUGTBYQHSWXGC9OTNMGLDKTBGMUDVAAXRBGIXLASDKPTEHZTS9AX9RXMSTLFJH9UXILKLQ"
    "QETGPDKVII9HIUCOEZVGOJZFHMJLZPGKGNTFWGWZBZEVYIQGKMORCXUQQJZJYNAHSAVBEGTBWE"
    "VWMKEMZK99XMJDEDNDAMIXHZUZANCJBVCGLRRBUVLWUXDUQSYFOWQMWEHIOQGDQPYSAXREOEBK"
    "XQRAJKUGVHTUPGHTUVLRCXEOD9CYIS9N9PYBMKGXIURKDOFASDAGGGGMMOGNCCLPWBCZGEIYNV"
    "YKN9JRTUHAERTNUJPKFSTQGXEJBGOYBIVOVSHUXNNJKN9AUCIAJCNB9NDMNLCSHPB9WVMPCHMV"
    "UJVXOOCJM9DTPDKBHNPATGPNETDHZHGHRYCQA9JTPRKGODYYZQQLYJGLMSWPLGOXW9NXQBMDXY"
    "9GPMSLWBYLIH9S9LGLDWDRYAYLYGNBCEAIQCXHTTHSYNCJ9OJDLI9YKETAQLCTCTHTJKJN9UZO"
    "YSBQQCFROHLBQGMYJCSDTISHUYHJZUPAUPEGDWDPVQSKDIENAYXMJDFWYBIXMAZZWZJISFQXYX"
    "HSTKZWWYD9ZYBCID9IWWUPRXAQARZSLXONJSMEPPZCMPGL9FFRKDOAPD9LKCAGOZLECTMLLWLI"
    "KPV9SPWVLZWVFPLSMNYCSMNJGKXNNZROHJPH9OUEWPJPVANDAIWYQHSWDXWYUQNGLSKCGFGRVH"
    "9AFBJRVEDNQGODZYOBUNZINGYBCNIOOGPIBQARWMYGG9YYJENNMTXGLJEQZHLJDSJVCCZMALAE"
    "DNCVRLPDCWBOFDUHZECUQXABVBHOWWLBFBSUZAGYEUUQQWMTZLJCQ9HXIORFXKUTIGRFUZDXPF"
    "LMRASRIVQABGUZBQGUPCVPQPILYQEKMQVGFCGXKAD";

static const char TRYTES[] = {
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', 'A', '9', 'R',
    'G', 'R', 'K', 'V', 'G', 'W', 'M', 'W', 'M', 'K', 'O', 'L', 'V', 'M', 'D',
    'F', 'W', 'J', 'U', 'H', 'N', 'U', 'N', 'Y', 'W', 'Z', 'T', 'J', 'A', 'D',
    'G', 'G', 'P', 'Z', 'G', 'X', 'N', 'L', 'E', 'R', 'L', 'X', 'Y', 'W', 'J',
    'E', '9', 'W', 'Q', 'H', 'W', 'W', 'B', 'M', 'C', 'P', 'Z', 'M', 'V', 'V',
    'M', 'J', 'U', 'M', 'W', 'W', 'B', 'L', 'Z', 'L', 'N', 'M', 'L', 'D', 'C',
    'G', 'D', 'J', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', 'Y', 'G', 'Y',
    'Q', 'I', 'V', 'D', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', 'T', 'X', 'E', 'F', 'L', 'K',
    'N', 'P', 'J', 'R', 'B', 'Y', 'Z', 'P', 'O', 'R', 'H', 'Z', 'U', '9', 'C',
    'E', 'M', 'F', 'I', 'F', 'V', 'V', 'Q', 'B', 'U', 'S', 'T', 'D', 'G', 'S',
    'J', 'C', 'Z', 'M', 'B', 'T', 'Z', 'C', 'D', 'T', 'T', 'J', 'V', 'U', 'F',
    'P', 'T', 'C', 'C', 'V', 'H', 'H', 'O', 'R', 'P', 'M', 'G', 'C', 'U', 'R',
    'K', 'T', 'H', '9', 'V', 'G', 'J', 'I', 'X', 'U', 'Q', 'J', 'V', 'H', 'K',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9',
    '9', '9', '9'};

#endif  // __COMMON_MODEL_TESTS_DEFS_H__
