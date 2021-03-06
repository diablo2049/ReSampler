/*
* Copyright (C) 2016 - 2021 Judd Niemann - All Rights Reserved.
* You may use, distribute and modify this code under the
* terms of the GNU Lesser General Public License, version 2.1
*
* You should have received a copy of GNU Lesser General Public License v2.1
* with this file. If not, please refer to: https://github.com/jniemann66/ReSampler
*/

// factorial.h : table of factorial constants

#ifndef FACTORIAL_H
#define FACTORIAL_H

#define FACTORIAL_TABLE_DOUBLE_COUNT 60
#define FACTORIAL_TABLE_QUAD_COUNT 170

// table of double-precision factorials:

const double factorial[FACTORIAL_TABLE_DOUBLE_COUNT] = {
	1                     , // +1.00000000000000000000000000000000000e+00     
	1                     , // +1.00000000000000000000000000000000000e+00     
	2                     , // +2.00000000000000000000000000000000000e+00     
	6                     , // +6.00000000000000000000000000000000000e+00     
	24                    , // +2.40000000000000000000000000000000000e+01     
	120                   , // +1.20000000000000000000000000000000000e+02     
	720                   , // +7.20000000000000000000000000000000000e+02     
	5040                  , // +5.04000000000000000000000000000000000e+03     
	40320                 , // +4.03200000000000000000000000000000000e+04     
	362880                , // +3.62880000000000000000000000000000000e+05     
	3628800               , // +3.62880000000000000000000000000000000e+06     
	39916800              , // +3.99168000000000000000000000000000000e+07     
	479001600             , // +4.79001600000000000000000000000000000e+08     
	6227020800            , // +6.22702080000000000000000000000000000e+09     
	87178291200           , // +8.71782912000000000000000000000000000e+10     
	1307674368000         , // +1.30767436800000000000000000000000000e+12     
	20922789888000        , // +2.09227898880000000000000000000000000e+13     
	355687428096000       , // +3.55687428096000000000000000000000000e+14     
	6402373705728000      , // +6.40237370572800000000000000000000000e+15     
	1.21645100408832e+17  , // +1.21645100408832000000000000000000000e+17     
	2.43290200817664e+18  , // +2.43290200817664000000000000000000000e+18     
	5.109094217170944e+19 , // +5.10909421717094400000000000000000000e+19
	//     
	1.124000727777608e+21 , // +1.12400072777760768000000000000000000e+21     
	2.585201673888498e+22 , // +2.58520167388849766400000000000000000e+22     
	6.204484017332394e+23 , // +6.20448401733239439360000000000000000e+23     
	1.551121004333099e+25 , // +1.55112100433309859840000000000000000e+25     
	4.032914611266057e+26 ,     // +4.03291461126605635584000000000000000e+26     
	1.088886945041835e+28 , // +1.08888694504183521607680000000000000e+28     
	3.048883446117139e+29 , // +3.04888344611713860501504000000000000e+29     
	8.841761993739702e+30 , // +8.84176199373970195454361600000000000e+30     
	2.652528598121911e+32 , // +2.65252859812191058636308480000000000e+32     
	8.222838654177922e+33 ,     // +8.22283865417792281772556288000000000e+33     
	2.631308369336935e+35 , // +2.63130836933693530167218012160000000e+35     
	8.683317618811886e+36 , // +8.68331761881188649551819440128000000e+36     
	2.952327990396042e+38 ,     // +2.95232799039604140847618609643520000e+38     
	1.033314796638615e+40 ,     // +1.03331479663861449296666513375232000e+40     
	3.719933267899013e+41 ,     // +3.71993326789901217467999448150835200e+41     
	1.376375309122635e+43 , // +1.37637530912263450463159795815809024e+43     
	5.230226174666011e+44 , // +5.23022617466601111760007224100074326e+44     
	2.039788208119744e+46 , // +2.03978820811974433586402817399028990e+46     
	8.159152832478977e+47 , // +8.15915283247897734345611269596115994e+47     
	3.345252661316381e+49 , // +3.34525266131638071081700620534407553e+49     
	1.40500611775288e+51  , // +1.40500611775287989854314260624451167e+51     
	6.041526306337383e+52 ,     // +6.04152630633738356373551320685140054e+52     
	2.658271574788449e+54 , // +2.65827157478844876804362581101461616e+54     
	1.196222208654802e+56 , // +1.19622220865480194561963161495657732e+56     
	5.502622159812089e+57 , // +5.50262215981208894985030542880025565e+57     
	2.586232415111682e+59 , // +2.58623241511168180642964355153612013e+59     
	1.241391559253607e+61 , // +1.24139155925360726708622890473733766e+61     
	6.082818640342675e+62 ,     // +6.08281864034267560872252163321295418e+62     
	3.041409320171338e+64 , // +3.04140932017133780436126081660647707e+64     
	1.551118753287382e+66 , // +1.55111875328738228022424301646930328e+66     
	8.065817517094388e+67 , // +8.06581751709438785716606368564037680e+67     
	4.274883284060025e+69 ,     // +4.27488328406002556429801375338939947e+69     
	2.308436973392414e+71 , // +2.30843697339241380472092742683027573e+71     
	1.269640335365828e+73 , // +1.26964033536582759259651008475665158e+73     
	7.109985878048635e+74 , // +7.10998587804863451854045647463724864e+74     
	4.052691950487721e+76 ,     // +4.05269195048772167556806019054323162e+76     
	2.350561331282878e+78 ,     // +2.35056133128287857182947491051507425e+78     
	1.386831185456898e+80   // +1.38683118545689835737939019720389389e+80
};

// table of Quad-Precision Factorials as Hexfloats:


#ifdef USE_QUADMATH

const __float128 factorialq[FACTORIAL_TABLE_QUAD_COUNT] =

{
	0x1p+0Q,
	0x1p+0Q,
	0x1p+1Q,
	0x1.8p+2Q,
	0x1.8p+4Q,
	0x1.ep+6Q,
	0x1.68p+9Q,
	0x1.3bp+12Q,
	0x1.3bp+15Q,
	0x1.626p+18Q,
	0x1.baf8p+21Q,
	0x1.308a8p+25Q,
	0x1.c8cfcp+28Q,
	0x1.7328ccp+32Q,
	0x1.44c3b28p+36Q,
	0x1.30777758p+40Q,
	0x1.30777758p+44Q,
	0x1.437eeecd8p+48Q,
	0x1.6beecca73p+52Q,
	0x1.b02b930689p+56Q,
	0x1.0e1b3be415ap+61Q,
	0x1.6283be9b5c62p+65Q,
	0x1.e77526159f06cp+69Q,
	0x1.5e5c335f8a4cdap+74Q,
	0x1.06c52687a7b9a38p+79Q,
	0x1.9a940c33f6120f78p+83Q,
	0x1.4d9849ea37eeac918p+88Q,
	0x1.19787e5d9f31619ac4p+93Q,
	0x1.ec92dd23d6966aced7p+97Q,
	0x1.be6518687a7850cb72d8p+102Q,
	0x1.a27ec6e1f2d0cbbebbaa8p+107Q,
	0x1.956ad0aae33a4560c5cd2cp+112Q,
	0x1.956ad0aae33a4560c5cd2cp+117Q,
	0x1.a21627303a54178bcbfb956p+122Q,
	0x1.bc3789a33df9590488bb4eb6p+127Q,
	0x1.e5dcbe8a8bc8b95cf58cde171p+132Q,
	0x1.114c2b2deea0e8444a1f3cecf9p+138Q,
	0x1.3c0011ed1bea0c8ef5b41e71ffe8p+143Q,
	0x1.774015499125eee9c3c5e4275fe4p+148Q,
	0x1.c95619f1a8e63b2ce6992e0ffcdep+153Q,
	0x1.1dd5d037098fe4fc101fbcc9fe0bp+159Q,
	0x1.6e39f2c684405d62f4a8a9e2cd7ep+164Q,
	0x1.e0ac0ea48d947a91e11d5ef9adb5p+169Q,
	0x1.42f399d68f1fc25a033fbbcfc0b6p+175Q,
	0x1.bc0ef38704cbab3bc477a23da8fap+180Q,
	0x1.383a833aef5f346606241e135adp+186Q,
	0x1.c0d41ca4b818db52a8d3eb3bd28bp+191Q,
	0x1.499bc508f7324110b3fba0bfee9ep+197Q,
	0x1.ee69a78d72cb61990df9711fe5edp+202Q,
	0x1.7a88e4484be3b6b92eb2fa9c6c09p+208Q,
	0x1.27baf2587b49e6c0ac7bd3ca3467p+214Q,
	0x1.d751f23d047dc7c312e5598a4384p+219Q,
	0x1.7ef294d193a6324e7f5a58c056dbp+225Q,
	0x1.3d20e33d8e45a1a90176d17f47edp+231Q,
	0x1.0b93bfbbf00ac066993c40c364bp+237Q,
	0x1.cbe5f18b04927ab0575f8f4fd50ep+242Q,
	0x1.92693359a4002b5a4c739d65da6cp+248Q,
	0x1.6665b1bbd610269c6c16f82eb688p+254Q,
	0x1.44cc291239fea2fdc1f4d0ea556bp+260Q,
	0x1.2b6c35dccd76be41eecdb09806bfp+266Q,
	0x1.18b5727f009f525dcfe0d58e8653p+272Q,
	0x1.0b8cf1210c97da816a224b8bd807p+278Q,
	0x1.0330899804331bad5ed1392f7947p+284Q,
	0x1.fe478ee348449e7d52abe89576c4p+289Q,
	0x1.fe478ee348449e7d52abe89576c4p+295Q,
	0x1.0320568f6ab2d87ba3fb4c1be65p+302Q,
	0x1.0b395943e6086f3f811b267cc582p+308Q,
	0x1.17c0097314d0d4767b286c4a9ec4p+314Q,
	0x1.293c0a0a461de1bde2daf30f48bp+320Q,
	0x1.4074bad313983760b8940e0c7a5ep+326Q,
	0x1.5e7fac56dd6e7c91c9e1ef5da5d7p+332Q,
	0x1.84d5a3305da69231bbf6a58be3fbp+338Q,
	0x1.b5705796695b6477f3757a3d607ap+344Q,
	0x1.f2f423e7902c3e98d1b1ff6e020bp+350Q,
	0x1.207524c1df599430593ae7ab992ep+357Q,
	0x1.5209471331bcf9a8a891077d1782p+363Q,
	0x1.916b0466cb106878482c38e48beap+369Q,
	0x1.e2f4c14bac4fbdb0b6d53472f856p+375Q,
	0x1.264d25ca1d009797af69ebf60f54p+382Q,
	0x1.6b473aa57bccbb1f3c86bf43baecp+388Q,
	0x1.c619094edabfe9e70ba86f14a9a7p+394Q,
	0x1.1f5bd7e3e66d72043560964b135cp+401Q,
	0x1.702dac9bff3c3a156463c09030cep+407Q,
	0x1.dd7b3bda4f021b53be315dbaff4bp+413Q,
	0x1.3958df4743d961eef4d06582b789p+420Q,
	0x1.a02a088aa61cb6115d24c6d19bc2p+426Q,
	0x1.179c3dbd279b4a53aa94b594d4a6p+433Q,
	0x1.7c1863ed21d71909bbe226d65112p+439Q,
	0x1.0550c4b30743e136b12b7ab357bcp+446Q,
	0x1.6b645188f61a65300e6076a16601p+452Q,
	0x1.ff0512a89a151e4b9437a6d2f771p+458Q,
	0x1.6b4d9b43dd8b0389bb5f9099fbeap+465Q,
	0x1.051fc798c73bea8afeacafeead1p+472Q,
	0x1.7b722e0a018310d1fa12efa6d37bp+478Q,
	0x1.16a7d9cf591c405a33a5e7fe834ep+485Q,
	0x1.9da1274fc845ef85e4aa445dcae8p+491Q,
	0x1.3638dd7bd63473a46b7fb346582ep+498Q,
	0x1.d62e2fafb0a77f4532ed8bb69da6p+504Q,
	0x1.67fb5c8283403d70fafddef7d0b3p+511Q,
	0x1.166c698cf183af8562205a73ab6ap+518Q,
	0x1.b30964ec395dc24069528d54bbd6p+524Q,
	0x1.574569a26543fb46d31b2384dc37p+531Q,
	0x1.118b502d68b22c3c7039a04ddf7cp+538Q,
	0x1.b83c3509147ebf31449cbdfd53acp+544Q,
	0x1.65b0eb1760a6fb5807bf5a5dd3fcp+551Q,
	0x1.256b20d92d48fa2e365af820f7e5p+558Q,
	0x1.e5f96e67b300de5c8a06aaf69a93p+564Q,
	0x1.963e824aafa2b9e15b6192ea2537p+571Q,
	0x1.56c4bdef04314cd6251a53f58f66p+578Q,
	0x1.23e389bd8991fb6e5b986b7f1c1dp+585Q,
	0x1.f5af14bdc472e825ad6df8c27852p+591Q,
	0x1.b30dd3fc905ba550ac655db8a457p+598Q,
	0x1.7cac197cfe5030a696d8b2018fccp+605Q,
	0x1.500fee805882caf3112b4d2560f2p+612Q,
	0x1.2b4e306a4ed47cc07b4a90b54a58p+619Q,
	0x1.0ce83f7f82d2e814eec4fe02e0cbp+626Q,
	0x1.e764f3171d1e44a5f0c50c65377p+632Q,
	0x1.bd824633209daabfae141d5484acp+639Q,
	0x1.9ab418b722115968b47a8b09ea4fp+646Q,
	0x1.7dd36efa41ac211f57c9ed4337d5p+653Q,
	0x1.65f6380a9d915f0d624d4e6f0458p+660Q,
	0x1.5262c0fa08f36bdaa6ed1424f21bp+667Q,
	0x1.42861fee508802cc6719f73336c2p+674Q,
	0x1.35ece2af0162b2b06b12f38b369ep+681Q,
	0x1.2c3d7b9989579d1ae7ba5beedce9p+688Q,
	0x1.25340ab3f01f8f6c464bfdc743bcp+695Q,
	0x1.209f3a89205f112e9532cdd026adp+702Q,
	0x1.1e5dfc140e1e530c38086834866p+709Q,
	0x1.1e5dfc140e1e530c38086834866p+716Q,
	0x1.209ab80c363a8fb250787904ef6dp+723Q,
	0x1.251d22ec671379f119ba5ae9032bp+730Q,
	0x1.2bfbd1bdf17deeccc054b90a793ep+737Q,
	0x1.355bb04be109de4326575ed2cd08p+744Q,
	0x1.4171452ed7d440f1c5d6c887090ap+751Q,
	0x1.5082946d09f233fd1b1cd9ed5d76p+758Q,
	0x1.62e9b88b007d72d4f2986dd85892p+765Q,
	0x1.79185413b0854a0241c1f4b5de1bp+772Q,
	0x1.939c09fd12eea9366a6197eaa7b9p+779Q,
	0x1.b3243ac4d8694e6eaab137c8fcd3p+786Q,
	0x1.d88957d1c3025b2c2d5c7294428dp+793Q,
	0x1.026b1c06b6a549dc28ce8ea91465p+801Q,
	0x1.1ca9fcdf6532135c84f389264077p+808Q,
	0x1.3bcc9487d4438d7aa37e2c266f84p+815Q,
	0x1.60ce8defbf23780f02a6f552f095p+822Q,
	0x1.8ce85fadb707e710e2fbd3fd4ea8p+829Q,
	0x1.c19f3c62c956f3c121214624f31ap+836Q,
	0x1.006cd07056d3970424e4fa0112a5p+844Q,
	0x1.267cf76103b6ff6ec25ef71d3b69p+851Q,
	0x1.54807e082c4b975810bdcdb9ccb1p+858Q,
	0x1.8c5d92b5838ffe2c837cf17a4846p+865Q,
	0x1.d07da7ecb62cbddc2a166afb4cb2p+872Q,
	0x1.11fa1e0c9f7463fcdcd3391a3a3dp+880Q,
	0x1.455903aefd5a36bc463ad3cf2528p+887Q,
	0x1.84e466672ad5d56d0bf2512d9a6ap+894Q,
	0x1.d3e2cb341f8944c7325f89aaddc8p+901Q,
	0x1.1b4a51088f181ca49b7fd85a7448p+909Q,
	0x1.594292c26e6562e89d83cfae3db8p+916Q,
	0x1.a77ba8027b685b515133acbbb7b4p+923Q,
	0x1.055e51b1882a685c301de49bdb61p+931Q,
	0x1.44ab297a8724ada283c521f99a82p+938Q,
	0x1.95d5f3d928edd90b24b66a780122p+945Q,
	0x1.fe771cb7257b2b00042d71eaf16dp+952Q,
	0x1.4307602be5b7f13602a4c216acc7p+960Q,
	0x1.9b5b6477e6883d2ac75dcf28e005p+967Q,
	0x1.07868c5ccfaf472f67b818b62f83p+975Q,
	0x1.53b370efa3b7f1c31bb34fdad93fp+982Q,
	0x1.b88cb676c8528d8907ec8b8fd1bep+989Q,
	0x1.1f63cb077cadda54642b4f0ad1d3p+997Q,
	0x1.7932fa79d3a42e8ec378d7be3365p+1004Q,
	0x1.f2054eb4d96ec5787e158cd91fdbp+1011Q
};

const __float128 factorialSquaredq[FACTORIAL_TABLE_QUAD_COUNT] = 
{
	0x1p+0Q,
	0x1p+0Q,
	0x1p+2Q,
	0x1.2p+5Q,
	0x1.2p+9Q,
	0x1.c2p+13Q,
	0x1.fa4p+18Q,
	0x1.8399p+24Q,
	0x1.8399p+30Q,
	0x1.ea8da4p+36Q,
	0x1.7f3ea82p+43Q,
	0x1.6a493aee4p+50Q,
	0x1.9792624c08p+57Q,
	0x1.0d0fa2e43148p+65Q,
	0x1.9bfff16d6b764p+72Q,
	0x1.6a1bf3312b72ee4p+80Q,
	0x1.6a1bf3312b72ee4p+88Q,
	0x1.98c98d8a820cbef64p+96Q,
	0x1.02af8b91a64c10d7d48p+105Q,
	0x1.6cc98bd0638143c05aa88p+113Q,
	0x1.1cfd753acdbcfcee46d3a4p+122Q,
	0x1.eaf09ef24c6a8fb678029584p+130Q,
	0x1.d01776410c3cbbda7d727156c8p+139Q,
	0x1.df803dae3524c0173e9cbe1a29a4p+148Q,
	0x1.0db822b1fde4ac0d13382aeeb76cp+158Q,
	0x1.493f465a466da405f5f6106866e8p+167Q,
	0x1.b2b58ae330fcc28fdebee1a9d7dep+176Q,
	0x1.3579be203d9ff182ec53642729eep+186Q,
	0x1.d9e26b215e5ce9d079dfb15bf834p+195Q,
	0x1.8532347c27bfcf077817f769c899p+205Q,
	0x1.561120211eef94f5908d1073f94ep+215Q,
	0x1.410592671548578b74e862b0d6b8p+225Q,
	0x1.410592671548578b74e862b0d6b8p+235Q,
	0x1.55662cf220622f1a0f1422f49059p+245Q,
	0x1.816858bd568ed72c6b05bb7616f4p+255Q,
	0x1.cd0f142880cc60e8e3079b8204f6p+265Q,
	0x1.23c38ac1a18155535faad0684723p+276Q,
	0x1.86102c415e2b2852b6a61d1f691bp+286Q,
	0x1.1306673416e56dee51c81f88a59cp+297Q,
	0x1.988242cb1f0248893cf980d6b7fep+307Q,
	0x1.3f25c42eb039c8ab37a2eca7bfbfp+318Q,
	0x1.05f4dfa6d2656dd5890a9a7f3042p+329Q,
	0x1.c342d5466070ba34d91344251a22p+339Q,
	0x1.9769b6cd29d1c61cf67b84e5ff39p+350Q,
	0x1.8121eecdf1884d476100c3a16b43p+361Q,
	0x1.7ccead3f6171e56933c9e16efb2fp+372Q,
	0x1.897389fffc2e2d873202156b2a86p+383Q,
	0x1.a861bf393be14edb72d07f5a373ep+394Q,
	0x1.dd6df720635d78b6e12a8f457e26p+405Q,
	0x1.17dc45ac6c3efa92b35d029bac41p+417Q,
	0x1.55a0630cfa22e0e013f309af07c6p+428Q,
	0x1.b1df51cbdb2d8bd8955609ac6abep+439Q,
	0x1.1e6c6cff93b11151fa95cc62d277p+451Q,
	0x1.88da77000b723ce190d2b5f50aebp+462Q,
	0x1.17ad8737c82613d7955a0209b306p+474Q,
	0x1.9d192f5944813e0ecd799242938cp+485Q,
	0x1.3c4748405872f383555113faf8f7p+497Q,
	0x1.f5c0957f14515c90b9b93fd28636p+508Q,
	0x1.9c156ac79e6fd245dc8864aaa6b9p+520Q,
	0x1.5e35f38f4595e8237f3baa0d4752p+532Q,
	0x1.33cd6b10ec28c10732d37075abafp+544Q,
	0x1.179f4c938f89c5db1a1c34d9e5c7p+556Q,
	0x1.066b3f9d7b750beedf40f8997de4p+568Q,
	0x1.fc9098a912e235c04e69c9c8771ap+579Q,
	0x1.fc9098a912e235c04e69c9c8771ap+591Q,
	0x1.064a733bf3053ac8d670ff59abaep+604Q,
	0x1.16f0ad0c81324fc4160dab8f1cd3p+616Q,
	0x1.31b424a70457b38b566b5b550807p+628Q,
	0x1.591c5d608be701b04c8f321afe0fp+640Q,
	0x1.91240849889db2e67bfd31ad7fefp+652Q,
	0x1.dfe15ae9f7aea74439d3a4adce4cp+664Q,
	0x1.274c2479c931b15db3b5846e13dbp+677Q,
	0x1.75bc5e2a22a2e47a9771bb9b5121p+689Q,
	0x1.e63d6242b1b00d61bea86824c23cp+701Q,
	0x1.4507c84ed506cef1f692529d9256p+714Q,
	0x1.be5c8004c26c2992292d51948446p+726Q,
	0x1.3ab838435b15434f8e0874053743p+739Q,
	0x1.c78f48f0ff87f73ed8081c70cccfp+751Q,
	0x1.52554a0bfbc6da7f8c31061f461ap+764Q,
	0x1.01c18a11712856a5fbc5b932036p+777Q,
	0x1.92be67bb40cf07635964f15e2547p+789Q,
	0x1.428f0f0430bfcf62c9b0a06feecbp+802Q,
	0x1.08c1ac3350837018f5cc19afdfe1p+815Q,
	0x1.bd4a3c2f0e1a1038fae715f3dcf9p+827Q,
	0x1.7f8a70d687a572f9141c0a688bd4p+840Q,
	0x1.52445154b4d2634ebd445b0e0493p+853Q,
	0x1.3165eded99c071e876a056b507ep+866Q,
	0x1.1a2c357d6ff7173ed0dad51cf37p+879Q,
	0x1.0abdca9093d793f9616edd755e1fp+892Q,
	0x1.01ead3451b738a4c397dba91e429p+905Q,
	0x1.fe0aa04b69893c3d3cb0e2330171p+917Q,
	0x1.01ca96ec9da360f66380d7140fa6p+931Q,
	0x1.0a59d0ef78df4dae91ce9e383a2bp+944Q,
	0x1.1935a39f54d582bbf6e0ecfbcd29p+957Q,
	0x1.2f50fb1c3b60cba2fda95b9d18a9p+970Q,
	0x1.4e28af24f24a7b57e8847c35ea14p+983Q,
	0x1.77edc5099093cac2e5950bbca756p+996Q,
	0x1.afc6cfb724563f7a29c058230613p+1009Q,
	0x1.fa32f44495799d2b18329f540f7ep+1022Q,
	0x1.2ecfa32756fab408db85a857a514p+1036Q,
	0x1.71a476a985ad08c4cff8a7fefd03p+1049Q,
	0x1.cc4b13e3487d601354195af1fd8p+1062Q,
	0x1.244a6cd103b81d52461759d04a8ap+1076Q,
	0x1.7a87823c0ed907b8f4556d880709p+1089Q,
	0x1.f3c6e9f34b9a8c323298ca9d994ap+1102Q,
	0x1.504e66059b6beb3ef75418b7b4dbp+1116Q,
	0x1.cd4587ae70cc6508bcfb3866f7efp+1129Q,
	0x1.42552a4421ca944a0f2efcf5d419p+1143Q,
	0x1.caf242ae021cf023729e672c047cp+1156Q,
	0x1.4ccf1562770044137489e608e771p+1170Q,
	0x1.eb935f761005448d3c822ee5e6dap+1183Q,
	0x1.71abff95c4e436214634d64c9baep+1197Q,
	0x1.1b07afaeaabeb97179c07412a731p+1211Q,
	0x1.b929d30eb99498fda84ec2ecb32bp+1224Q,
	0x1.5defbcf9de146e9ab450f97de0dfp+1238Q,
	0x1.1a7717a620c6b6175834aca31f98p+1252Q,
	0x1.cff89e5860d6661958628591f165p+1265Q,
	0x1.83a7152c8f48a1e6051cb0e163d3p+1279Q,
	0x1.4972aeeeae852a170bb832128c67p+1293Q,
	0x1.1cbf837a840f50b5133d20275021p+1307Q,
	0x1.f488a51d5c22ebde4bd172851adcp+1320Q,
	0x1.bf48ebac9089a4ce91b8965a39d4p+1334Q,
	0x1.9655ae98f40e0ac7e84140165729p+1348Q,
	0x1.7735b66d34bc476c8032e091a113p+1362Q,
	0x1.60202873fcbdb207934fbf40ab6ap+1376Q,
	0x1.4fd02b143d34585c4178b980887ap+1390Q,
	0x1.4566a6be4c8e88dee5310b401c3fp+1404Q,
	0x1.405621bdee5580f58d17dbd748cfp+1418Q,
	0x1.405621bdee5580f58d17dbd748cfp+1432Q,
	0x1.455c7b9d6d06904f67226fa6155p+1446Q,
	0x1.4f9bb5421245953ae751f54a405cp+1460Q,
	0x1.5f8633a6a86b6a02a672545039d2p+1474Q,
	0x1.75d6786dfc9c3b7d5183162a517dp+1488Q,
	0x1.939d419d9f4f1d2a58d52b1a4862p+1502Q,
	0x1.ba5708394ee82466b8fb1f0cfdf3p+1516Q,
	0x1.ec0b37c1df69f21dd3dc36b62fabp+1530Q,
	0x1.15bc54f8ee9b4d29d615cce1d5e8p+1545Q,
	0x1.3e2a53477b3720916123d148e5cfp+1559Q,
	0x1.71d2126cc62843cafb7931f34b9ep+1573Q,
	0x1.b41d5ec24dddd3920a7577ab8c98p+1587Q,
	0x1.04dc114df8d34f2cba8183347c78p+1602Q,
	0x1.3c8999ef8143493ee2804fd99c58p+1616Q,
	0x1.859119035305df54f4a20a45c0fap+1630Q,
	0x1.e638acfc0a2b205204a40e5a376ep+1644Q,
	0x1.33afdd777e6f4a73e6efd1151714p+1659Q,
	0x1.8ad7fa6f4b9bc8c6e3a6578ad471p+1673Q,
	0x1.00d9cf2136272ef3a146cd228783p+1688Q,
	0x1.52c34533699045e8cb618565de81p+1702Q,
	0x1.c4e58f43fbe1217679e7209770b7p+1716Q,
	0x1.32d8d00abd7d4dddf72379f2da9cp+1731Q,
	0x1.a563df33bfd9643f22b4a8289256p+1745Q,
	0x1.25376875a044a293368438ea8b23p+1760Q,
	0x1.9d7b224ddf00c94197e07442be34p+1774Q,
	0x1.27629117a5496dc64de1a6ce1625p+1789Q,
	0x1.ab929d25ca3119f65c1bf203afefp+1803Q,
	0x1.397d64bbdef8741b02947536f814p+1818Q,
	0x1.d1a480e00df08a751e95031ae5fcp+1832Q,
	0x1.5e44f0798a3c5b06cdbb334ff1d4p+1847Q,
	0x1.0ad9755418184b3906ec05ef7fb4p+1862Q,
	0x1.9bc1b36e967ddc722a9248d8a1c8p+1876Q,
	0x1.41af542e65925439314248e93e63p+1891Q,
	0x1.fcef66eab76a1587cbd2a2622359p+1905Q,
	0x1.979b9ce52c35ae8e6a760a9da95fp+1920Q,
	0x1.4a7f4a9cc9729ec2b54e29e789dep+1935Q,
	0x1.0f45bb1df0d9348f9110c8252c09p+1950Q,
	0x1.c2c4bae1cc8aad1adfe986d3e4ap+1964Q,
	0x1.7b1200483249fe62419c19e9e09bp+1979Q,
	0x1.42a0e821725d1df3dc5b3dc61fdcp+1994Q,
	0x1.15e397f0cf01344c8b4c96b52671p+2009Q,
	0x1.e46c5329e49b156f3f046ee7a117p+2023Q
};

#endif // USE_QUADMATH

#endif // FACTORIAL_H