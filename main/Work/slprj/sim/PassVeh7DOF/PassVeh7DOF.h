#include "__cf_PassVeh7DOF.h"
#ifndef RTW_HEADER_PassVeh7DOF_h_
#define RTW_HEADER_PassVeh7DOF_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef PassVeh7DOF_COMMON_INCLUDES_
#define PassVeh7DOF_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "PassVeh7DOF_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rt_zcfcn.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
typedef struct { real_T d5h53uezna [ 5 ] ; real_T lfqxtpersw [ 34 ] ; real_T
fb312db3ax [ 16 ] ; real_T axapykoqoq [ 24 ] ; real_T jufyrxj0jc ; real_T
jpw2xvx5f1 ; } isppcpplpd ; typedef struct { real_T pxdy3z0dbu ; } orfasxj0ep
; typedef struct { int8_T dygl2vbtcr ; } clgilwu00r ; typedef struct { real_T
bs2hjc5nu2 ; real_T ifttpgshqd ; real_T euk3scwzss ; real_T libbr311cm ;
real_T obpqast420 ; real_T fp2ilc0ley ; real_T n4xonjocfu ; real_T auwfmt1imw
; real_T jm1o4v20ho ; real_T m5n5c0hsov [ 3 ] ; real_T jmb25suz33 ; real_T
j2p04sytqr [ 4 ] ; real_T l4pg5xpxp1 ; real_T m4npe54j1c ; real_T eyxanztqx1
; real_T lcls111zdy ; real_T o0rhvekxea [ 3 ] ; real_T fvqfpke4jv ; real_T
bjsj1dfvfu ; real_T aq2vnamn3e ; real_T nquucjysva ; real_T pq0pomxlsc [ 4 ]
; real_T msli3xjzd4 [ 4 ] ; real_T nfqf4trzat ; real_T e2x3r2jeks ; real_T
jsbuy1s0zh ; real_T jlqqks3wuo ; real_T iolwkpz04u ; real_T mjrra1hfyg ;
real_T dae0zhs5fy ; real_T jp2tjiwtwu ; real_T ann1feexvg ; real_T jkq3y0qfgv
; real_T c2j5gkccdm ; real_T ard44y2p1h ; real_T iof1dhclh2 ; real_T
fqwn3oyjo3 ; real_T jrtvmmjxei ; real_T gjz1ie5un1 ; real_T lbp4dfbob0 ;
real_T hv1i03vcrx ; real_T eftgclmxsy ; real_T b2a12dteat ; real_T lsasi2uldc
; real_T g5agc0xg32 ; real_T hooc103vyj ; real_T eeb3auw5nx ; real_T
ek12timuyq ; real_T g2srpjb4za ; real_T ky55fcx12u ; real_T lli4msildn ;
real_T ekonhtwtew ; real_T kzdtcoisvi ; real_T ivswn3mcce ; real_T klywadtuwk
; real_T bc5mpnnywl ; real_T p4dxuexhmn ; real_T dgacotjrc4 ; real_T
opivgwwsqb ; real_T abpryvvknk ; real_T kkloewbxvk ; real_T dcwkj3tspn [ 3 ]
; real_T agcbzjjxc2 [ 3 ] ; real_T fblkngoubr [ 9 ] ; real_T bgbdvzlrnp ;
real_T ei3jjsazbv ; real_T l1sbdzlbft ; real_T hrdyz2htuu ; real_T g22rfrhcci
; real_T d51egdrz0z ; real_T gmqaszorzp ; real_T pu4cguusa5 ; real_T
hawqte0lkp ; real_T fqfqbihpo4 ; real_T fcmrvrr5m4 ; real_T aewmk31j2l ;
real_T ilblxiaesg ; real_T csbz5vwjbl ; real_T efotijbqgm ; real_T dn24fdverp
[ 3 ] ; real_T mpurjwwdjq [ 3 ] ; real_T a5hv2ji3cc [ 9 ] ; real_T fkg40b3zq2
; real_T amzgulqp12 ; real_T ijjphmn2q0 ; real_T hu5pmd13z1 ; real_T
nfnujv3tc2 ; real_T mqhdsdepts ; real_T igbd4extak ; real_T onrl0wpwlm ;
real_T bonsvi0den ; real_T pe2ebnzhq4 ; real_T isr01bpmsd ; real_T glwizfkrzi
; real_T j0032htb5y ; real_T fmvdhgj0c5 ; real_T obgyaeas1p ; real_T
jm54t5nyht ; real_T am0wr3vakl ; real_T hbjg5ycjap ; real_T flo2k44qyj ;
real_T fsb2e41l0m ; real_T m2xjbusmco ; real_T lhyhzghz5g ; real_T ldco5bshns
; real_T pxbcgurxxp ; real_T d3b0uleyfa ; real_T gssojkvg2t ; real_T
kihaqcuhgw ; real_T p4l2o41od2 ; real_T dlgefiim2f ; real_T p3yundq3ew ;
real_T p5c41u4oxs ; real_T peb3w5yei4 ; real_T nguio0nz2d ; real_T g5igejoxg1
; real_T c0ja0z23dg ; real_T gya0kbnvv3 ; real_T e543wt05dh ; real_T
naonrfraas ; real_T d5pcl30hua ; real_T enzmk5pf4o ; real_T njc1netzs3 ;
real_T psrn2rspbv ; real_T fx4bdcvxja ; real_T hv0jodqqs3 ; real_T f5mcrvxmrt
; real_T fcxug0bpsn ; real_T jhysjc540s ; real_T mssyoofqpv ; real_T
ffpimvq1sz ; real_T jf4jh5rlz0 ; real_T jc5dmbapbw ; real_T pspspmf0qs ;
real_T cm4en5t1nq ; real_T mjlza1k4nu ; real_T klxatjmabe ; real_T dobyt3vkx4
; real_T evss2jjgrf ; real_T gd03u24ntw ; real_T pjb4lrl0ur ; real_T
a5enc0h5cl ; real_T fctmvus1du ; real_T jdp4a2z1g5 ; real_T nf05aww25e ;
real_T goghp2x2da ; real_T mot0j1tqma ; real_T pq2fabvz5k ; real_T mjreasqhek
; real_T iftdgrsa05 ; real_T apqabofwu5 ; real_T aqds0ofasd ; real_T
bwclupiqxv ; real_T mo0zpwakun ; real_T n4bp4zjfwv [ 3 ] ; real_T frm4syq440
[ 3 ] ; real_T d2yrhfqtgt [ 9 ] ; real_T nvi4gppmvv ; real_T fkxmdwac2r ;
real_T htjp5ek3fq ; real_T oczgpffard ; real_T az5q3j0bed ; real_T pmkft3x5ig
; real_T izf5s33tmm ; real_T bxoaokm1pa ; real_T a54mfanpi0 ; real_T
jng0vonz3d ; real_T jctvycvsp0 ; real_T jrmweg4c4j ; real_T mhsrh5emdu ;
real_T df5dtpkovu ; real_T bbyxlrphmc ; real_T crkky0j4wi [ 3 ] ; real_T
oc3syc1had [ 3 ] ; real_T momgprkjbh [ 9 ] ; real_T hzdrl0i0ia ; real_T
p2dtigkgaf ; real_T mimwv5dvzs ; real_T kwzep05ody ; real_T c2izl10ezo ;
real_T b1kjrb022n ; real_T pvy3vbjvw2 ; real_T bnf3dwud1m ; real_T idvzhvb5zm
; real_T ebvkurz4ue ; real_T dakmjltvg3 ; real_T lp31hztb55 ; real_T
kckinb301k ; real_T ibgpb5vvta ; real_T pwyeshcpv2 ; real_T mq4nm2marh ;
real_T gcukvt1mcv ; real_T g00ccjwa2j ; real_T numplzjehj ; real_T cdhvl0jekq
; real_T m5x1rc5v2c ; real_T phkg0eilwd ; real_T e1wyvqrgpd ; real_T
lbmhaqyph2 ; real_T d2sicg5t5v ; real_T ddkgx3utjf ; real_T jqra0qrc4f ;
real_T numsq4h5aq ; real_T hxumbizg0d ; real_T c1ee4phlss ; real_T a4c0lwlpcd
; real_T cwucxqw2pf ; real_T ejgbaymku3 ; real_T jiue5code2 ; real_T
ikj1m0o4mz ; real_T ax00hnppth ; real_T k4tb3ntsf3 ; real_T nphikq3xj1 ;
real_T dl30i01l3p ; real_T fd0hla2abn ; real_T lsaj5xk0ks ; real_T bwvxjyivut
; real_T mwzifv1a5c ; real_T jmchmvxfhq ; real_T pqdxxygisp ; real_T
ec2ephpzxi ; real_T pyeudtquzg ; real_T dmcfkawsjf ; real_T hftqavup3t ;
real_T esoh5l5lxo ; real_T idctxzieo0 ; real_T hphiagg0re ; real_T f1mzffw2ii
; real_T bwacdjho4y ; real_T bkuuxygiqv ; real_T cvklcpcg5h ; real_T
ks5imzrjrb ; real_T pjn2ul1e5q ; real_T cq0ulc5p42 ; real_T m4jgqymj3m ;
real_T kfu4rsdusc ; real_T agahu4jva1 ; real_T d0mwow1ynj ; real_T chvcqjgtkd
; real_T ggy510ulkr ; real_T fefyztusl5 ; real_T n2oqsfqzgf ; real_T
p2ew0hvidw ; real_T kpt4zd10sl ; real_T iprkzcw0uf ; real_T gbyou3x5qj ;
real_T lxntqw3pa0 ; real_T gzjvzppbfb [ 3 ] ; real_T bwdfn5yr4y [ 3 ] ;
real_T bdxkllszng [ 9 ] ; real_T phqr3dlt5s ; real_T b55anpz0ry ; real_T
avaxnmw4it ; real_T aawt1jhkmi ; real_T ffzea14g1z ; real_T my5flu2qpd ;
real_T lvuprdvd3t ; real_T m2ee3ab4rk ; real_T lgmuosmxxg ; real_T mvhbt05gbg
; real_T jamrnffszs ; real_T osgfr2nr12 ; real_T gifebyd4pm ; real_T
ccgbuww52i ; real_T g5n0tdcjyr ; real_T odtlbjxf5w [ 3 ] ; real_T pwd3yzcihq
[ 3 ] ; real_T d0ll0sez0n [ 9 ] ; real_T jpv5umn2ki ; real_T hh1kadovlv ;
real_T cy1u0ypjlh ; real_T gjgv4vigdp ; real_T ghvh2gsyqo ; real_T iy3agwh4zg
; real_T lhgq3j20k1 ; real_T ezwciwsl2z ; real_T hcx3b2oh2i ; real_T
l15sbazs2h ; real_T cbktnow5af ; real_T anpxn4wrup ; real_T cw3x2kv3z4 ;
real_T ai5l40b3iu ; real_T dlwvafx3n4 ; real_T a0nueplqwy ; real_T lqlya1zs1k
; real_T j5ypkiaj2a ; real_T nq0m5padfo ; real_T esrllkz3f1 ; real_T
ndadoi2fa3 ; real_T ffmdhdniyz ; real_T m2ljmb52uk ; real_T i3rgk5at5k ;
real_T g1zar4icoz ; real_T byvynht2aq ; real_T edkbwlt3se ; real_T d0sjqehaob
; real_T pnxjm41zmq ; real_T ngpz2fg5xy ; real_T mujuob30yn ; real_T
ffjpij0dzo ; real_T lukjivu0vn ; real_T nmo0dyqft2 ; real_T cahbswhyq0 ;
real_T aw4g54p2uq ; real_T bzighdfjyo ; real_T i5a0blv02u ; real_T oapfg21ir4
; real_T oovcrc5txw ; real_T bzyvjhcmks ; real_T kfwsnou0z4 ; real_T
pbplrkuu32 ; real_T j4wcufg5bl ; real_T gaudlnhvry ; real_T fjxzajipkt ;
real_T hk4hnaqvh4 ; real_T cs5bymast3 ; real_T p42tgrvop2 ; real_T fbpvzxbevm
; real_T h3f101zvdb ; real_T jqkgvym2zy ; real_T fazkrkbsxw ; real_T
fazs2yxbxy ; real_T bzm41rdvhu ; real_T e3rsqlqayr ; real_T h10xaj22p2 ;
real_T mabbx0oage ; real_T kazjkxua33 ; real_T dwihbkixr5 ; real_T cxjni4j3is
; real_T geyriwpbwk ; real_T a0g100tdyx ; real_T dwl1yvwrok ; real_T
g1di3z0153 ; real_T cy1ie2jyct ; real_T ncet2youct ; real_T atyxanxoep ;
real_T fmo10qy00d ; real_T ded4oex3nw ; real_T lwb0azt42l ; real_T mdk0qxouay
; real_T if32pa3y2y [ 3 ] ; real_T bxgniuki54 [ 3 ] ; real_T hn1eupnvah [ 9 ]
; real_T lqykprkdhp ; real_T owjgcyyrc4 ; real_T k0jiqk4jr5 ; real_T
boiphodd5u ; real_T jlpvps21xb ; real_T favd3zjtdv ; real_T iwzzewai5j ;
real_T nfccvfr0wr ; real_T bcuxkc4ifo ; real_T hoswk5rqzo ; real_T cycn42gkig
; real_T g5xthmjg3u ; real_T axyino1l23 ; real_T bhwnfpdnfh ; real_T
pndhwp3wlp ; real_T jlcsqepfsn [ 3 ] ; real_T dnkaqrpiwe [ 3 ] ; real_T
og1pl52b0g [ 9 ] ; real_T eyv2b315td ; real_T oewprz1max ; real_T i4wafwdq1d
; real_T nrhk0fg5tx ; real_T jxyonkwdpp ; real_T nfkwuggdv3 ; real_T
hd2mkgvcqr ; real_T bvmbxvyhou ; real_T g0dyej4unr ; real_T adz43gjvi4 ;
real_T extqw4ppik ; real_T i4mqp0hn3c ; real_T lzx3txh2r5 ; real_T ein31d03ch
; real_T mddsia1bs4 ; real_T mkx1rcyupl ; real_T cjm2jf0thg ; real_T
g41hsn0s2r ; real_T jzaawga3sf ; real_T nzfdb2qwys ; real_T jucxtg5ndo ;
real_T ij0qesxo0x ; real_T o01kjgusit ; real_T jbiokc52mb ; real_T bdgo5lorke
; real_T lmed21unhr ; real_T a5yzeqgxla ; real_T eh21inp54r ; real_T
ckk03rh1z3 ; real_T n50351ufzw ; real_T oycbd4zsdl ; real_T awmjhwqf1y ;
real_T g45hl5q3iu ; real_T jb3u14tozr ; real_T dwdzvq30lg ; real_T j1uvqqhzuk
; real_T la15gblmjr ; real_T olxcszanag ; real_T ewlwxcybqs ; real_T
mdhbuol5q1 ; real_T efv5l1pqam ; real_T p5xem3od3d ; real_T bqcncmwkew ;
real_T dbjccy0p5m [ 3 ] ; real_T ey5vfxyzqq [ 3 ] ; real_T k5ghw3u455 ;
real_T irw5bmjnd2 [ 6 ] ; real_T hyntqlru1a ; real_T op20eyqhn0 ; real_T
pj112y04hg ; real_T lwsbjgunfw [ 4 ] ; real_T l40oei2hak [ 2 ] ; real_T
kiuep21v1r ; real_T mypypk30kt ; real_T kday3sgiju ; real_T ie22dwfqte ;
real_T kmtb3usggr [ 15 ] ; real_T ec40qvdazf [ 4 ] ; real_T fp0lz1z3pw [ 4 ]
; real_T fo02mk51l0 ; real_T fj5nty1pmy ; real_T jhibd0fk2e ; real_T
co0vgrhgxv ; boolean_T dt0bwnq1k5 ; boolean_T hm4gocqk3h ; boolean_T
g33vvsnq3o ; boolean_T oe5zgjmetl ; boolean_T engjw3ctqq ; boolean_T
krm0jkmd2d ; boolean_T loolhadail ; boolean_T na0yxcd24g ; boolean_T
bieyt1db1k ; boolean_T c5zkfremby ; boolean_T dvh2aiwmdo ; boolean_T
cz1wfypt0w ; orfasxj0ep eiud0ciipq ; isppcpplpd ehqxxy1j0v ; orfasxj0ep
jekbgdtwun ; isppcpplpd a21t3mltc4 ; orfasxj0ep kwvhl4ef3q ; isppcpplpd
lh5kjqwuvr ; orfasxj0ep ekmk5spjxa3 ; isppcpplpd azps4qfrqh ; } id4lpjcjia ;
typedef struct { int_T bkwexe1kru ; int_T pyrwzbu0vd ; int_T cy5d015mtw ;
int_T puigwz3vsu ; int_T j0vc5sz3xv ; int_T em512f0wkt ; int_T aixbqjjzjt ;
int_T iorqcjlmnb ; int_T k5yhnl2wmc ; int_T lgnoyudawr ; int_T i2lrfe4vsy ;
int_T n2wij4stkw ; int_T ogjeqhknwa ; int_T pw1i2shx4s ; int8_T hl5oc4enil ;
int8_T ngtk3y0d0k ; int8_T jcq45ux2tw ; int8_T a4hec4xq23 ; int8_T jp5udlopwm
; int8_T jmdhsygujx ; int8_T dvpvfskwai ; int8_T dtfk4nn1qz ; int8_T
hk0nfz3tiy ; boolean_T pksiahpaaw ; boolean_T eezel21inu ; boolean_T
lb1nn0qgui ; boolean_T gmuarwd0x2 ; boolean_T gbgapftrxi ; boolean_T
axwzh0jhgp ; boolean_T oywcgos5db ; boolean_T a001iqqtdq ; clgilwu00r
eiud0ciipq ; clgilwu00r jekbgdtwun ; clgilwu00r kwvhl4ef3q ; clgilwu00r
ekmk5spjxa3 ; } bpefjqedzq ; typedef struct { real_T ltaqjpquzu [ 4 ] ;
real_T k0pz3tariu ; real_T asiwx55gg1 [ 4 ] ; real_T gswussrcam ; real_T
ivyedmn25f ; real_T gn1qleso4d ; real_T azckz4uqjy [ 2 ] ; real_T afwcyok13n
; real_T mosvej2yjd ; real_T efxruepcrz ; real_T jg0z2f4dcg ; real_T
bxrckvq45q ; real_T gjqeaf15ke ; } hcqlainyez ; typedef struct { real_T
ltaqjpquzu [ 4 ] ; real_T k0pz3tariu ; real_T asiwx55gg1 [ 4 ] ; real_T
gswussrcam ; real_T ivyedmn25f ; real_T gn1qleso4d ; real_T azckz4uqjy [ 2 ]
; real_T afwcyok13n ; real_T mosvej2yjd ; real_T efxruepcrz ; real_T
jg0z2f4dcg ; real_T bxrckvq45q ; real_T gjqeaf15ke ; } ha25zehowz ; typedef
struct { boolean_T ltaqjpquzu [ 4 ] ; boolean_T k0pz3tariu ; boolean_T
asiwx55gg1 [ 4 ] ; boolean_T gswussrcam ; boolean_T ivyedmn25f ; boolean_T
gn1qleso4d ; boolean_T azckz4uqjy [ 2 ] ; boolean_T afwcyok13n ; boolean_T
mosvej2yjd ; boolean_T efxruepcrz ; boolean_T jg0z2f4dcg ; boolean_T
bxrckvq45q ; boolean_T gjqeaf15ke ; } dn0l2t323g ; typedef struct { real_T
ltaqjpquzu [ 4 ] ; real_T k0pz3tariu ; real_T asiwx55gg1 [ 4 ] ; real_T
gswussrcam ; real_T ivyedmn25f ; real_T gn1qleso4d ; real_T azckz4uqjy [ 2 ]
; real_T afwcyok13n ; real_T mosvej2yjd ; real_T efxruepcrz ; real_T
jg0z2f4dcg ; real_T bxrckvq45q ; real_T gjqeaf15ke ; } e3r11zdizr ; typedef
struct { real_T cqyo40j5es ; real_T klicthxs0q ; real_T cazyieeguw ; real_T
fbdy4ftvaq ; real_T fh3cfc1ox3 ; real_T bqibk0ztih ; real_T hmacrurqfb ;
real_T idcgzr5jvx ; real_T c5u3uo2uhe ; real_T ovz0jhiawc ; real_T cxdkc53ihg
; real_T nq2jz1rqn1 ; } kg2zcpxtlx ; typedef struct { ZCSigState prsm11mhyx ;
ZCSigState flpmsfbjwa ; ZCSigState bnxldw4l3m ; ZCSigState prj2ssfcy5 ; }
pcbmq2m11v ; struct liftzd2mdx_ { real_T P_0 ; real_T P_1 ; } ; struct
becrktx0d0o_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4
[ 31 ] ; real_T P_5 ; real_T P_6 ; real_T P_7 [ 31 ] ; real_T P_8 ; real_T
P_9 ; real_T P_10 ; real_T P_11 ; real_T P_12 ; real_T P_13 ; real_T P_14 ;
real_T P_15 ; real_T P_16 ; real_T P_17 ; real_T P_18 ; real_T P_19 ; real_T
P_20 ; real_T P_21 ; real_T P_22 ; real_T P_23 ; real_T P_24 ; real_T P_25 ;
real_T P_26 ; real_T P_27 ; real_T P_28 ; real_T P_29 ; real_T P_30 ; real_T
P_31 ; real_T P_32 ; real_T P_33 ; real_T P_34 ; real_T P_35 ; real_T P_36 ;
real_T P_37 ; real_T P_38 ; real_T P_39 ; real_T P_40 ; real_T P_41 ; real_T
P_42 ; real_T P_43 ; real_T P_44 ; real_T P_45 ; real_T P_46 ; real_T P_47 ;
real_T P_48 ; real_T P_49 ; real_T P_50 ; real_T P_51 ; real_T P_52 ; real_T
P_53 ; real_T P_54 ; real_T P_55 ; real_T P_56 ; real_T P_57 ; real_T P_58 ;
real_T P_59 ; real_T P_60 ; real_T P_61 ; real_T P_62 ; real_T P_63 ; real_T
P_64 ; real_T P_65 ; real_T P_66 ; real_T P_67 ; real_T P_68 ; real_T P_69 ;
real_T P_70 ; real_T P_71 ; real_T P_72 ; real_T P_73 ; real_T P_74 ; real_T
P_75 ; real_T P_76 ; real_T P_77 ; real_T P_78 ; real_T P_79 ; real_T P_80 ;
real_T P_81 ; real_T P_82 ; real_T P_83 ; real_T P_84 ; real_T P_85 ; real_T
P_86 ; real_T P_87 ; real_T P_88 ; real_T P_89 ; real_T P_90 ; real_T P_91 ;
real_T P_92 ; real_T P_93 ; real_T P_94 ; real_T P_95 ; real_T P_96 ; real_T
P_97 ; real_T P_98 ; real_T P_99 ; real_T P_100 ; real_T P_101 ; real_T P_102
; real_T P_103 ; real_T P_104 ; real_T P_105 ; real_T P_106 ; real_T P_107 ;
real_T P_108 ; real_T P_109 ; real_T P_110 ; real_T P_111 ; real_T P_112 ;
real_T P_113 ; real_T P_114 ; real_T P_115 ; real_T P_116 ; real_T P_117 ;
real_T P_118 ; real_T P_119 ; real_T P_120 ; real_T P_121 ; real_T P_122 ;
real_T P_123 ; real_T P_124 ; real_T P_125 ; real_T P_126 ; real_T P_127 ;
real_T P_128 ; real_T P_129 ; real_T P_130 ; real_T P_131 ; real_T P_132 ;
real_T P_133 ; real_T P_134 ; real_T P_135 ; real_T P_136 ; real_T P_137 ;
real_T P_138 ; real_T P_139 ; real_T P_140 ; real_T P_141 ; real_T P_142 ;
real_T P_143 ; real_T P_144 ; real_T P_145 ; real_T P_146 ; real_T P_147 ;
real_T P_148 ; real_T P_149 ; real_T P_150 ; real_T P_151 ; real_T P_152 ;
real_T P_153 ; real_T P_154 ; real_T P_155 ; real_T P_156 ; real_T P_157 ;
real_T P_158 ; real_T P_159 ; real_T P_160 ; real_T P_161 ; real_T P_162 ;
real_T P_163 ; real_T P_164 ; real_T P_165 ; real_T P_166 ; real_T P_167 ;
real_T P_168 ; real_T P_169 ; real_T P_170 ; real_T P_171 ; real_T P_172 ;
real_T P_173 [ 31 ] ; real_T P_174 ; real_T P_175 ; real_T P_176 ; real_T
P_177 ; real_T P_178 ; real_T P_179 ; real_T P_180 ; real_T P_181 ; real_T
P_182 ; real_T P_183 ; real_T P_184 ; real_T P_185 ; real_T P_186 ; real_T
P_187 ; real_T P_188 ; real_T P_189 ; real_T P_190 ; real_T P_191 ; real_T
P_192 ; real_T P_193 ; real_T P_194 ; real_T P_195 ; real_T P_196 ; real_T
P_197 ; real_T P_198 ; real_T P_199 ; real_T P_200 ; real_T P_201 ; real_T
P_202 ; real_T P_203 ; real_T P_204 ; real_T P_205 ; real_T P_206 ; real_T
P_207 ; real_T P_208 ; real_T P_209 ; real_T P_210 ; real_T P_211 ; real_T
P_212 ; real_T P_213 ; real_T P_214 ; real_T P_215 ; real_T P_216 ; real_T
P_217 ; real_T P_218 ; real_T P_219 ; real_T P_220 ; real_T P_221 ; real_T
P_222 ; real_T P_223 ; real_T P_224 ; real_T P_225 ; real_T P_226 ; real_T
P_227 ; real_T P_228 ; real_T P_229 ; real_T P_230 ; real_T P_231 ; real_T
P_232 ; real_T P_233 ; real_T P_234 ; real_T P_235 ; real_T P_236 ; real_T
P_237 ; real_T P_238 ; real_T P_239 ; real_T P_240 ; real_T P_241 ; real_T
P_242 ; real_T P_243 ; real_T P_244 ; real_T P_245 ; real_T P_246 ; real_T
P_247 ; real_T P_248 ; real_T P_249 ; real_T P_250 ; real_T P_251 ; real_T
P_252 ; real_T P_253 ; real_T P_254 ; real_T P_255 ; real_T P_256 ; real_T
P_257 ; real_T P_258 ; real_T P_259 ; real_T P_260 [ 2 ] ; real_T P_261 ;
real_T P_262 ; real_T P_263 ; real_T P_264 ; real_T P_265 ; real_T P_266 ;
real_T P_267 ; real_T P_268 ; real_T P_269 ; real_T P_270 ; real_T P_271 ;
real_T P_272 ; real_T P_273 ; real_T P_274 ; real_T P_275 [ 4 ] ; real_T
P_276 ; real_T P_277 ; real_T P_278 ; real_T P_279 ; real_T P_280 ; real_T
P_281 ; real_T P_282 ; real_T P_283 ; real_T P_284 [ 3 ] ; real_T P_285 [ 3 ]
; real_T P_286 [ 9 ] ; real_T P_287 ; real_T P_288 ; real_T P_289 [ 3 ] ;
real_T P_290 [ 3 ] ; real_T P_291 [ 9 ] ; real_T P_292 ; real_T P_293 ;
real_T P_294 ; real_T P_295 ; real_T P_296 ; real_T P_297 ; real_T P_298 ;
real_T P_299 ; real_T P_300 ; real_T P_301 ; real_T P_302 ; real_T P_303 ;
real_T P_304 ; real_T P_305 ; real_T P_306 ; real_T P_307 ; real_T P_308 ;
real_T P_309 ; real_T P_310 ; real_T P_311 ; real_T P_312 ; real_T P_313 ;
real_T P_314 ; real_T P_315 ; real_T P_316 ; real_T P_317 ; real_T P_318 ;
real_T P_319 ; real_T P_320 ; real_T P_321 ; real_T P_322 ; real_T P_323 ;
real_T P_324 ; real_T P_325 ; real_T P_326 ; real_T P_327 ; real_T P_328 ;
real_T P_329 ; real_T P_330 ; real_T P_331 ; real_T P_332 ; real_T P_333 ;
real_T P_334 ; real_T P_335 [ 3 ] ; real_T P_336 [ 3 ] ; real_T P_337 [ 9 ] ;
real_T P_338 ; real_T P_339 ; real_T P_340 [ 3 ] ; real_T P_341 [ 3 ] ;
real_T P_342 [ 9 ] ; real_T P_343 ; real_T P_344 ; real_T P_345 ; real_T
P_346 ; real_T P_347 ; real_T P_348 ; real_T P_349 ; real_T P_350 ; real_T
P_351 ; real_T P_352 ; real_T P_353 ; real_T P_354 ; real_T P_355 ; real_T
P_356 ; real_T P_357 ; real_T P_358 ; real_T P_359 ; real_T P_360 ; real_T
P_361 ; real_T P_362 ; real_T P_363 ; real_T P_364 ; real_T P_365 ; real_T
P_366 ; real_T P_367 ; real_T P_368 ; real_T P_369 ; real_T P_370 ; real_T
P_371 ; real_T P_372 ; real_T P_373 ; real_T P_374 ; real_T P_375 ; real_T
P_376 ; real_T P_377 ; real_T P_378 ; real_T P_379 ; real_T P_380 ; real_T
P_381 ; real_T P_382 ; real_T P_383 ; real_T P_384 ; real_T P_385 ; real_T
P_386 [ 3 ] ; real_T P_387 [ 3 ] ; real_T P_388 [ 9 ] ; real_T P_389 ; real_T
P_390 ; real_T P_391 [ 3 ] ; real_T P_392 [ 3 ] ; real_T P_393 [ 9 ] ; real_T
P_394 ; real_T P_395 ; real_T P_396 ; real_T P_397 ; real_T P_398 ; real_T
P_399 ; real_T P_400 ; real_T P_401 ; real_T P_402 ; real_T P_403 ; real_T
P_404 ; real_T P_405 ; real_T P_406 ; real_T P_407 ; real_T P_408 ; real_T
P_409 ; real_T P_410 ; real_T P_411 ; real_T P_412 ; real_T P_413 ; real_T
P_414 ; real_T P_415 ; real_T P_416 ; real_T P_417 ; real_T P_418 ; real_T
P_419 ; real_T P_420 ; real_T P_421 ; real_T P_422 ; real_T P_423 ; real_T
P_424 ; real_T P_425 ; real_T P_426 ; real_T P_427 ; real_T P_428 ; real_T
P_429 ; real_T P_430 ; real_T P_431 ; real_T P_432 ; real_T P_433 ; real_T
P_434 ; real_T P_435 ; real_T P_436 ; real_T P_437 [ 3 ] ; real_T P_438 [ 3 ]
; real_T P_439 [ 9 ] ; real_T P_440 ; real_T P_441 ; real_T P_442 [ 3 ] ;
real_T P_443 [ 3 ] ; real_T P_444 [ 9 ] ; real_T P_445 ; real_T P_446 ;
real_T P_447 ; real_T P_448 ; real_T P_449 ; real_T P_450 ; real_T P_451 ;
real_T P_452 ; real_T P_453 ; real_T P_454 ; real_T P_455 ; real_T P_456 ;
real_T P_457 ; real_T P_458 ; real_T P_459 ; real_T P_460 ; real_T P_461 ;
real_T P_462 ; real_T P_463 ; real_T P_464 ; real_T P_465 ; real_T P_466 ;
real_T P_467 ; real_T P_468 ; real_T P_469 ; real_T P_470 ; real_T P_471 ;
real_T P_472 ; real_T P_473 ; real_T P_474 ; real_T P_475 ; real_T P_476 [ 3
] ; real_T P_477 ; real_T P_478 [ 2 ] ; real_T P_479 [ 2 ] ; real_T P_480 ;
real_T P_481 ; real_T P_482 ; real_T P_483 ; real_T P_484 ; real_T P_485 ;
real_T P_486 ; real_T P_487 [ 4 ] ; boolean_T P_488 ; boolean_T P_489 [ 8 ] ;
boolean_T P_490 ; boolean_T P_491 [ 8 ] ; boolean_T P_492 ; boolean_T P_493 [
8 ] ; boolean_T P_494 ; boolean_T P_495 [ 8 ] ; liftzd2mdx eiud0ciipq ;
liftzd2mdx jekbgdtwun ; liftzd2mdx kwvhl4ef3q ; liftzd2mdx ekmk5spjxa3 ; } ;
struct mkmp3c5j3y { struct SimStruct_tag * _mdlRefSfcnS ; struct { real_T
mr_nonContSig0 [ 3 ] ; real_T mr_nonContSig1 [ 1 ] ; real_T mr_nonContSig2 [
1 ] ; real_T mr_nonContSig3 [ 1 ] ; real_T mr_nonContSig4 [ 1 ] ; real_T
mr_nonContSig5 [ 1 ] ; real_T mr_nonContSig6 [ 1 ] ; real_T mr_nonContSig7 [
1 ] ; real_T mr_nonContSig8 [ 1 ] ; real_T mr_nonContSig9 [ 1 ] ; real_T
mr_nonContSig10 [ 1 ] ; real_T mr_nonContSig11 [ 3 ] ; real_T mr_nonContSig12
[ 1 ] ; real_T mr_nonContSig13 [ 1 ] ; real_T mr_nonContSig14 [ 1 ] ; real_T
mr_nonContSig15 [ 1 ] ; real_T mr_nonContSig16 [ 3 ] ; real_T mr_nonContSig17
[ 1 ] ; real_T mr_nonContSig18 [ 1 ] ; } NonContDerivMemory ;
ssNonContDerivSigInfo nonContDerivSignal [ 19 ] ; const rtTimingBridge *
timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
13 ] ; int32_T * vardimsAddress [ 13 ] ; RTWLoggingFcnPtr loggingPtrs [ 13 ]
; sysRanDType * systemRan [ 17 ] ; int_T systemTid [ 17 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 2 ] ; } Timing ; } ; typedef struct {
id4lpjcjia rtb ; bpefjqedzq rtdw ; pa50wxsaaa rtm ; pcbmq2m11v rtzce ; }
pqca3kvywqf ; extern void lahi4jyhaj ( SimStruct * _mdlRefSfcnS ,
ssNonContDerivSigFeedingOutports * * mr_nonContOutputArray , int_T
mdlref_TID0 , int_T mdlref_TID1 , pa50wxsaaa * const hokadafud5 , id4lpjcjia
* localB , bpefjqedzq * localDW , hcqlainyez * localX , pcbmq2m11v * localZCE
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_PassVeh7DOF_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_PassVeh7DOF_GetDWork (
const pqca3kvywqf * mdlrefDW ) ; extern void mr_PassVeh7DOF_SetDWork (
pqca3kvywqf * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_PassVeh7DOF_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_PassVeh7DOF_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * PassVeh7DOF_GetCAPIStaticMap ( void ) ;
extern void hor3rithbp ( real_T ilffr4btj5 , real_T pfjlghkggb , real_T
djfsfpj4qr , real_T exb3burec2 , real_T btp1gnxg02 , real_T dck3dqvqmx ,
real_T krmy4cl1um , real_T j4aqt55g2q , real_T dmiespubsg , real_T mo4nmz4dui
, real_T dlj0yi5tka , real_T hgjkq3rufa , const real_T * patgulbqmk , real_T
lyklokzsu4 , real_T k22p4holuz , real_T fjx1adphei , real_T kkut5t432y ,
real_T cizl4iss3n , real_T lbesb2c3zi , real_T ehu5lvdfn2 , real_T fuk5zl503w
, real_T be0orbfspb , real_T hqmvg12ti0 , real_T npwnugvscc , real_T
huic1c4v55 , real_T iirsl31hdo , real_T g2lysmlhyi , real_T a00ih3oxlk ,
real_T mczrpgw2wm , real_T aeptep1nip , real_T enff4ghtir , real_T ij314icd3s
, real_T chjdmyvqxw , real_T kcptdouxiy , real_T ncqzkqjsi5 , real_T
cvk0ncglt2 , real_T nrlhbcvdrj , const real_T * iwup2rjnly , real_T
jk3e44ywwc , real_T a35hpppuoz , real_T ph0ymmh5bd , real_T e10q0lhd4i ,
real_T pznws2ac3n , const real_T c0lh1c1elq [ 3 ] , const real_T dpvuosztse [
3 ] , const real_T d3xks5eixq [ 9 ] , real_T nc2kpvmfsf , real_T elxybvxjvj ,
real_T nxgzwxhwto , real_T ce4aots51j , real_T c0g12pojmz , real_T fvwwfdsk4k
, real_T oducigfnlg , real_T aaosao0j1p , real_T f2fuje5nkj , real_T
bjdyk5yqdr , real_T kpf44nicuu , real_T ffpyhdgr2y , real_T hwbv55ijok ,
real_T dexwsni3hm , real_T itpvgcv0fr , const real_T bjzqtf430o [ 3 ] , const
real_T ogihkjapxm [ 3 ] , const real_T bkom5ytmqe [ 9 ] , real_T er0fttewvi ,
real_T gfaavtttqm , real_T n5olq2bccj , real_T l0oknvdvkx , real_T gu4hswlxp5
, real_T lp5bdiqspv , real_T oy4emxdjoh , real_T crno3gqpev , real_T
dldnuryub1 , real_T auu5ang0o2 , real_T dyv2j5zovi , real_T mmmicydxgc ,
real_T fikyfswgql , real_T gmsc0grzar , real_T axcwfgjptt , real_T f1tqoyuh4d
, real_T mvjvsasyhj , real_T chhocy4irm , real_T a2dyewy3jy , real_T
c3b2ezb5i3 , real_T bzedi2wtff , real_T psmcmllijr , real_T orjl001kvi ,
real_T jdxksqajpx , real_T khsfuldvnp , real_T n2xncev0ib , real_T h3wdnrrz3n
, real_T * jvc4v23k1x , real_T * bwzzfyfbno , isppcpplpd * localB , real_T
rtp_FZMAX , real_T rtp_FZMIN , real_T rtp_VXLOW , real_T rtp_kappamax ) ;
extern void bgjvfsnvvf ( pa50wxsaaa * const hokadafud5 ) ; extern void
iibbapsg2n ( pa50wxsaaa * const hokadafud5 ) ; extern void ekmk5spjxa (
pa50wxsaaa * const hokadafud5 , real_T * gpmvtxcsc4 , orfasxj0ep * localB ,
liftzd2mdx * localP ) ; extern void hzczw4rimi ( pa50wxsaaa * const
hokadafud5 , bpefjqedzq * localDW , hcqlainyez * localX ) ; extern void
ps1ayp5pv5 ( pa50wxsaaa * const hokadafud5 , bpefjqedzq * localDW ,
hcqlainyez * localX ) ; extern void aoae4c423r ( real_T * hnk0xxowmm , real_T
* io1pn0hnwg , real_T * av1e2e2zlq , real_T * amgwfcyfmi , real_T *
hzkodf3i3c , real_T g2tnztcpzi [ 4 ] , id4lpjcjia * localB , bpefjqedzq *
localDW ) ; extern void iu231drtpw ( id4lpjcjia * localB , bpefjqedzq *
localDW , ha25zehowz * localXdot ) ; extern void pgy4d5vijx ( id4lpjcjia *
localB , kg2zcpxtlx * localZCSV ) ; extern void g3iefm0j4w ( pa50wxsaaa *
const hokadafud5 , bpefjqedzq * localDW , dn0l2t323g * localXdis ) ; extern
void ii3iorkudk ( pa50wxsaaa * const hokadafud5 , id4lpjcjia * localB ,
bpefjqedzq * localDW ) ; extern void PassVeh7DOF ( pa50wxsaaa * const
hokadafud5 , const real_T fo3cvtmfih [ 4 ] , const real_T dfx1ca0pmi [ 4 ] ,
const real_T pf4xf35zus [ 3 ] , const real_T gxlrb30ei4 [ 4 ] , const real_T
bv2zp3o4ji [ 4 ] , const real_T czlc2qmxmx [ 4 ] , real_T * lfffcfi0vv ,
real_T * o4a5winsib , real_T * c040sjjy2f , real_T * hnk0xxowmm , real_T *
io1pn0hnwg , real_T * hb0nga1cnl , real_T cyqteuatay [ 4 ] , real_T
av2ap4nkgj [ 4 ] , real_T * cqivd3kemx , real_T * n0fjwjtmw3 , real_T *
dfywnyxbtq , real_T * av1e2e2zlq , real_T * pu1mlebux4 , real_T * hxjzroc5ux
, real_T * amgwfcyfmi , real_T * hzkodf3i3c , real_T eueb01ol1w [ 4 ] ,
real_T g2tnztcpzi [ 4 ] , real_T ebhsrqq1o4 [ 4 ] , real_T eplypn1mx4 [ 4 ] ,
id4lpjcjia * localB , bpefjqedzq * localDW , hcqlainyez * localX , pcbmq2m11v
* localZCE , dn0l2t323g * localXdis ) ; extern void b51av3ulwn ( pa50wxsaaa *
const hokadafud5 ) ;
#endif
