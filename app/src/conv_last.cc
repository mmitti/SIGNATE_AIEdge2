#ifdef RESNET
const float bias[10] = {-2.0392019748687744f, -2.0276942253112793f, -2.016599416732788f, -2.0295217037200928f, -2.177461624145508f, -2.1780524253845215f, -2.174921989440918f, -2.1865310668945312f, -2.1705925464630127f, -2.214693069458008f};
const float weight[640] = {
    0.1028432622551918f, 0.11396115273237228f, 0.13876892626285553f, 0.12380695343017578f, 0.024599257856607437f, 0.2021694779396057f, 0.11577913165092468f, 0.009750599041581154f, 0.09200197458267212f, 0.03739943355321884f, 0.18578028678894043f, 0.17779186367988586f, 0.12227189540863037f, 0.11195182055234909f, 0.12335389852523804f, 0.014077228493988514f, 0.1028960645198822f, 0.14172659814357758f, -0.033358942717313766f, 0.10956723988056183f, 0.029081428423523903f, 0.20033158361911774f, 0.11521916091442108f, -0.056074805557727814f, 0.14050781726837158f, 0.023075098171830177f, 0.19811829924583435f, 0.17464765906333923f, 0.04362194612622261f, 0.20144852995872498f, -0.002670925110578537f, 0.13552585244178772f, 0.16638360917568207f, 0.09189218282699585f, 0.09328845888376236f, 0.07044772803783417f, 0.15899600088596344f, 0.16382089257240295f, 0.11155885457992554f, 0.16883064806461334f, 0.07709254324436188f, 0.07188882678747177f, 0.11014106869697571f, -0.12795040011405945f, 0.0024730656296014786f, 0.08816730976104736f, -0.003282397985458374f, 0.1830647885799408f, 0.12237396091222763f, 0.09418129920959473f, 0.15382565557956696f, 0.1380140334367752f, 0.16701219975948334f, 0.01725168712437153f, 0.19814397394657135f, 0.17283539474010468f, 0.15363754332065582f, 0.1949843317270279f, 0.10349688678979874f, 0.19281531870365143f, 0.1015210971236229f, 0.11315739899873734f, 0.16331949830055237f, 0.0536968819797039f,
    0.0381803959608078f, 0.13533005118370056f, 0.13364176452159882f, 0.16323281824588776f, 0.0189153291285038f, 0.19923026859760284f, -0.07390129566192627f, -0.0002683388884179294f, 0.10873477160930634f, 0.1520431488752365f, 0.15703344345092773f, 0.13724930584430695f, 0.11664732545614243f, 0.13228006660938263f, 0.10297549515962601f, 0.17782951891422272f, 0.07850723713636398f, 0.09993945062160492f, 0.05726105719804764f, 0.12888824939727783f, 0.02370372787117958f, 0.16926135122776031f, 0.13709411025047302f, 0.15500810742378235f, 0.10576348006725311f, 0.0014434230979532003f, -0.006661194376647472f, 0.17182332277297974f, 0.030695313587784767f, 0.025137953460216522f, 0.060300473123788834f, 0.1207466572523117f, 0.07693134248256683f, 0.17962190508842468f, 0.07294865697622299f, 0.08887974917888641f, 0.15503409504890442f, 0.16878795623779297f, 0.10760743170976639f, 0.14903226494789124f, 0.057444486767053604f, 0.07895881682634354f, 0.1253875344991684f, 0.0928436815738678f, 0.005904273595660925f, 0.11610597372055054f, 0.017905227839946747f, 0.18811064958572388f, 0.09921836853027344f, 0.11623767018318176f, 0.1576206386089325f, 0.11218446493148804f, 0.05744361877441406f, 0.014476695097982883f, 0.14735066890716553f, 0.1706606149673462f, 0.18409307301044464f, 0.20167191326618195f, 0.05382642522454262f, 0.19365747272968292f, 0.11642155051231384f, 0.137565478682518f, 0.17636923491954803f, 0.059894710779190063f,
    0.04601786658167839f, 0.04409157484769821f, 0.14476794004440308f, 0.13555891811847687f, 0.2409677356481552f, 0.09540404379367828f, 0.025666601955890656f, 0.0017392414156347513f, 0.013391425833106041f, -0.005871391389518976f, 0.04476811736822128f, 0.10393522679805756f, 0.06434750556945801f, 0.031046610325574875f, 0.1882113367319107f, -0.045950692147016525f, 0.02068880945444107f, 0.045093879103660583f, 0.003142898203805089f, 0.13277684152126312f, -0.014740717597305775f, 0.12391059845685959f, -0.011309593915939331f, -0.010393205098807812f, 0.031324081122875214f, 0.007756747771054506f, 0.024981234222650528f, 0.0743304193019867f, 0.011890921741724014f, -0.05539241433143616f, 0.061873678117990494f, 0.08142077922821045f, 0.07665617018938065f, -0.015046413987874985f, 0.04780018702149391f, -0.011282352730631828f, -0.08109842985868454f, 0.07590620964765549f, -0.03192785009741783f, 0.10480041056871414f, 0.015343867242336273f, -0.009846637956798077f, 0.1105390414595604f, 0.04344698414206505f, -0.0336555577814579f, 0.15831689536571503f, -0.0018422731664031744f, 0.11120589822530746f, 0.01331450417637825f, 0.034171175211668015f, 0.0609419122338295f, 0.16730663180351257f, -0.1548672467470169f, 0.048257991671562195f, 0.09210381656885147f, 0.13083195686340332f, 0.1262621283531189f, 0.08807826787233353f, 0.017524031922221184f, 0.07407204806804657f, 0.011305996216833591f, 0.15634295344352722f, 0.14398713409900665f, 0.044280994683504105f,
    0.03892584517598152f, 0.16763052344322205f, 0.13011692464351654f, 0.07893028855323792f, 0.014761785976588726f, 0.09962402284145355f, 0.03783640265464783f, 0.05008915811777115f, 0.019987791776657104f, -0.025467995554208755f, 0.06049879267811775f, 0.10601146519184113f, 0.04216663911938667f, 0.07336213439702988f, 0.16684216260910034f, 0.0038958133663982153f, 0.01571630872786045f, 0.10289973020553589f, 0.010535134002566338f, 0.1614866405725479f, -0.011536389589309692f, 0.1100950688123703f, 0.011872155591845512f, 0.0015652483562007546f, -0.13830937445163727f, 0.010493695735931396f, -0.010243847034871578f, 0.06254790723323822f, 0.0020452779717743397f, 0.0006212229491211474f, 0.028890270739793777f, -0.1333421915769577f, -0.0011200044536963105f, -0.0688503310084343f, 0.04676848277449608f, -0.012256537564098835f, -0.03840000182390213f, 0.05982083082199097f, -0.0032976283691823483f, 0.12098117172718048f, 0.028360553085803986f, -0.0283750481903553f, 0.04850883409380913f, 0.08618252724409103f, 0.0006685858825221658f, 0.15623511373996735f, 0.02748001739382744f, 0.10896049439907074f, 0.029917443171143532f, 0.019125809893012047f, 0.1028168797492981f, 0.13638387620449066f, 0.19866293668746948f, -0.003935723099857569f, 0.0826679989695549f, 0.13138985633850098f, 0.082789346575737f, 0.11366394907236099f, 0.0401020310819149f, 0.09430020302534103f, 0.13138437271118164f, 0.1405886560678482f, 0.13824808597564697f, 0.05909771844744682f,
    -0.02310723066329956f, -0.09360141307115555f, -0.018098408356308937f, -0.03313233330845833f, -0.08227749913930893f, -0.3740684986114502f, -0.10338667780160904f, -0.17489176988601685f, 0.30425623059272766f, -0.14470504224300385f, -0.48034173250198364f, -0.19445814192295074f, -0.13150900602340698f, -0.4981115758419037f, -0.05321842432022095f, -0.2684849500656128f, -0.16233515739440918f, -0.23671095073223114f, -0.0032293666154146194f, -0.07107611745595932f, -0.13893698155879974f, -0.18155258893966675f, -0.05979321151971817f, -0.06585832685232162f, -0.018294550478458405f, -0.22872669994831085f, 0.03981951251626015f, -0.46801748871803284f, -0.18527363240718842f, -0.031188244000077248f, -0.1842181235551834f, -0.05671205371618271f, -0.06598373502492905f, -0.06957587599754333f, 0.28222134709358215f, -0.6283277869224548f, 0.012363304384052753f, -0.34593260288238525f, 0.1601499766111374f, -0.28827008605003357f, -0.38402023911476135f, -0.2288452684879303f, -0.22377416491508484f, -0.03178500384092331f, -0.19489741325378418f, -0.11061764508485794f, -0.33146557211875916f, -0.16364863514900208f, -0.28129568696022034f, 0.15152420103549957f, -0.4451965391635895f, -0.04288710281252861f, -0.033968422561883926f, -0.22805799543857574f, -0.23373934626579285f, -0.4284836947917938f, -0.14022964239120483f, -0.2631389796733856f, -0.12093827873468399f, -0.3061986267566681f, -0.10721384733915329f, -0.03700057789683342f, -0.23116174340248108f, 0.20705053210258484f,
    0.11829812824726105f, 0.037866972386837006f, 0.06576669216156006f, 0.04221262037754059f, -0.12977150082588196f, -0.22711513936519623f, -0.22365309298038483f, -0.3127328157424927f, 0.08545918017625809f, -0.1231585144996643f, -0.6648237705230713f, -0.19529369473457336f, -0.1713159680366516f, -0.5095306038856506f, 0.03536291792988777f, -0.19013060629367828f, -0.22455017268657684f, -0.27443766593933105f, -0.12039048969745636f, 0.041288070380687714f, -0.18759837746620178f, -0.12693436443805695f, -0.023612966760993004f, 0.07544521242380142f, -0.18881721794605255f, -0.23175151646137238f, -0.040606893599033356f, -0.4688461422920227f, -0.3079673945903778f, -0.06197936460375786f, -0.23083357512950897f, -0.23378652334213257f, -0.04031486064195633f, -0.10418866574764252f, 0.23700977861881256f, 0.2098207026720047f, -0.08308248221874237f, -0.21646226942539215f, -0.11976253241300583f, -0.20644286274909973f, -0.3172113299369812f, 0.2694288492202759f, -0.22296135127544403f, -0.21818670630455017f, -0.1933923065662384f, -0.033154040575027466f, -0.2910306453704834f, -0.09716074168682098f, -0.2778190076351166f, 0.25482669472694397f, -0.2189262956380844f, 0.014767305925488472f, -0.07543082535266876f, -0.242154061794281f, -0.16935355961322784f, -0.1788969188928604f, -0.18286852538585663f, -0.1765422821044922f, -0.16060574352741241f, -0.34852325916290283f, -0.020730694755911827f, 0.110136978328228f, -0.1520535796880722f, -0.49237918853759766f,
    -0.03244990110397339f, 0.038370754569768906f, -0.014090077951550484f, 0.003626293735578656f, 0.07039477676153183f, -0.17693400382995605f, -0.3547927737236023f, -0.20859868824481964f, 0.27710020542144775f, -0.14198267459869385f, -0.3489496111869812f, -0.17767557501792908f, -0.186176598072052f, -0.39158177375793457f, 0.021773571148514748f, 0.1587531864643097f, -0.23541676998138428f, -0.22815389931201935f, -0.12525133788585663f, 0.04130351170897484f, -0.22575977444648743f, -0.132884681224823f, -0.13876670598983765f, -0.026975534856319427f, 0.09661407023668289f, -0.34475409984588623f, -0.43071094155311584f, -0.17180578410625458f, -0.4291868209838867f, 0.08863114565610886f, -0.19114965200424194f, 0.02636404149234295f, -0.032850634306669235f, -0.011315243318676949f, -0.3809784948825836f, -0.22644737362861633f, -0.024620000272989273f, -0.21527118980884552f, -0.3239515423774719f, -0.1504184901714325f, -0.29971247911453247f, 0.20991885662078857f, -0.26352471113204956f, -0.42471471428871155f, -0.1550079733133316f, 0.08706776052713394f, -0.2953070402145386f, -0.11500620096921921f, -0.26001715660095215f, -0.4537683129310608f, -0.1830732226371765f, 0.06008477509021759f, -0.08604545891284943f, -0.14563360810279846f, -0.19634471833705902f, -0.15158657729625702f, -0.13464389741420746f, -0.13776324689388275f, -0.23760642111301422f, -0.1632857620716095f, 0.04217088595032692f, -0.06703173369169235f, -0.10185696184635162f, 0.3101235032081604f,
    0.3099749684333801f, -0.05531904473900795f, 0.001942194881848991f, -0.03233546018600464f, -0.08390793204307556f, -0.3751811683177948f, -0.19067613780498505f, -0.19688710570335388f, -0.08569817990064621f, -0.12238870561122894f, -0.44849908351898193f, -0.39929303526878357f, -0.15866653621196747f, -0.28467121720314026f, -0.0035134695935994387f, 0.03321507200598717f, -0.20334909856319427f, -0.3427620232105255f, -0.0565897636115551f, -0.04625076800584793f, -0.1736079454421997f, -0.21544405817985535f, -0.09758572280406952f, 0.2067585438489914f, -0.1206505224108696f, -0.0865546241402626f, -0.1649356335401535f, -0.407043993473053f, -0.5930567383766174f, -0.22487187385559082f, -0.16786643862724304f, 0.09843521565198898f, -0.12321636825799942f, -0.07345622032880783f, -0.1705181896686554f, -0.27226704359054565f, -0.05275558680295944f, -0.40769097208976746f, -0.4725024104118347f, -0.2942725419998169f, -0.37357446551322937f, -0.010391956195235252f, -0.28141388297080994f, -0.08770031481981277f, -0.1266474425792694f, -0.05076924338936806f, -0.18957673013210297f, -0.3868376314640045f, -0.2799515724182129f, 0.09743647277355194f, -0.3249463737010956f, -0.06202492117881775f, 0.02885187231004238f, -0.1997443437576294f, -0.3229846954345703f, -0.3799741268157959f, -0.16982872784137726f, -0.4641834795475006f, -0.24523597955703735f, -0.5028612017631531f, -0.1509382724761963f, 0.040212612599134445f, -0.29332205653190613f, 0.14229440689086914f,
    0.3120155930519104f, -0.06711067259311676f, -0.028245603665709496f, -0.02337774820625782f, -0.10308583080768585f, -0.20092394948005676f, -0.11000604927539825f, -0.2627852261066437f, -0.19219985604286194f, -0.21706905961036682f, -0.19622507691383362f, -0.21070507168769836f, -0.20937766134738922f, -0.152866929769516f, -0.044961027801036835f, -0.01649203710258007f, -0.28685933351516724f, -0.1242959275841713f, -0.43556103110313416f, -0.031843435019254684f, -0.2675241231918335f, -0.1969403326511383f, -0.1965026557445526f, -0.6163365840911865f, -0.079254649579525f, -0.2501596510410309f, -0.22525133192539215f, -0.1167478933930397f, 0.07490503042936325f, -0.07109265774488449f, -0.1593150496482849f, -0.04456975683569908f, -0.12559744715690613f, -0.07520826905965805f, -0.07867485284805298f, 0.0636259913444519f, 0.0032047140412032604f, -0.17865467071533203f, -0.10738524049520493f, -0.17228572070598602f, -0.19492389261722565f, 0.15610376000404358f, -0.17906531691551208f, -0.008192631416022778f, -0.29562193155288696f, -0.029489317908883095f, -0.1480981409549713f, -0.17134343087673187f, -0.140684574842453f, -0.22373217344284058f, -0.1676175594329834f, -0.023148227483034134f, -0.00968307163566351f, -0.24458788335323334f, -0.21216757595539093f, -0.1230824664235115f, -0.19292739033699036f, -0.20316371321678162f, -0.25106358528137207f, -0.18739235401153564f, -0.1216295063495636f, -0.04635045677423477f, -0.10288932174444199f, 0.23113508522510529f,
    0.25637930631637573f, -0.0639495924115181f, -0.036018796265125275f, -0.023373953998088837f, -0.08252307772636414f, -0.15116088092327118f, -0.10182108730077744f, -0.305873841047287f, -0.05259602889418602f, -0.10915953665971756f, -0.1271209716796875f, -0.2430228590965271f, -0.1517353057861328f, -0.11223740130662918f, -0.06009571626782417f, -0.03486007824540138f, -0.1621711105108261f, -0.13526810705661774f, 0.17000961303710938f, -0.05005694180727005f, -0.1557096391916275f, -0.18009181320667267f, -0.04765494167804718f, -0.20023071765899658f, -0.10009529441595078f, -0.18851955235004425f, -0.11002731323242188f, -0.1324702799320221f, 0.15335379540920258f, -0.05806596204638481f, -0.14465181529521942f, -0.12034124881029129f, -0.06779836118221283f, -0.08994411677122116f, 0.09528851509094238f, -0.3399001657962799f, -0.04337417334318161f, -0.17296543717384338f, -0.014687355607748032f, -0.181258887052536f, -0.13391315937042236f, -0.16263429820537567f, -0.15660862624645233f, -0.018294688314199448f, -0.2770420014858246f, -0.06056596711277962f, -0.14127090573310852f, -0.12393232434988022f, -0.21098199486732483f, 0.12937785685062408f, -0.13972865045070648f, -0.0403745137155056f, -0.05665828660130501f, -0.27207204699516296f, -0.3397634029388428f, -0.1412855088710785f, -0.14785674214363098f, -0.14267364144325256f, -0.2652115523815155f, -0.14147606492042542f, -0.08935214579105377f, -0.03526848182082176f, -0.12975353002548218f, -0.40575626492500305f,
};
#else
const float bias[10] = { -2.0048575401306152f, -1.9877972602844238f, -1.9850772619247437f, -2.0027554035186768f, -2.174510955810547f, -2.1783134937286377f, -2.1831138134002686f, -2.185563087463379f, -2.1754820346832275f, -2.2159178256988525f };
const float weight[640] = {
    0.1755313277244568f,0.14670078456401825f,0.1693616658449173f,0.12257853895425797f,0.09852442145347595f,-0.1004520058631897f,0.11837715655565262f,0.11908452212810516f,0.03742189332842827f,0.22026003897190094f,0.1616075187921524f,0.004410020541399717f,0.1267428696155548f,0.0010404502972960472f,0.11748405545949936f,0.1764177680015564f,0.128954216837883f,0.09165535867214203f,0.06758247315883636f,0.16909655928611755f,0.15193672478199005f,0.21134595572948456f,0.07013826072216034f,0.07944220304489136f,-0.1790088415145874f,0.04465935379266739f,0.14946170151233673f,0.0005687303491868079f,0.12213162332773209f,0.1260756254196167f,0.016287412494421005f,0.08856275677680969f,0.19175679981708527f,0.056108731776475906f,0.20489951968193054f,0.1445888876914978f,0.056002963334321976f,0.1490366905927658f,0.1295749992132187f,0.08886431157588959f,0.04868863523006439f,0.09365147352218628f,0.15128694474697113f,-0.009696471504867077f,0.01479265559464693f,0.27203744649887085f,0.1375618427991867f,-0.00750575540587306f,0.012314324267208576f,0.12966008484363556f,0.13272322714328766f,0.15020161867141724f,0.19292841851711273f,0.04393802210688591f,0.09270479530096054f,0.024586915969848633f,0.16761086881160736f,0.08436689525842667f,0.008675549179315567f,0.11808394640684128f,0.1333763599395752f,0.10479910671710968f,-0.009886747226119041f,0.004185013938695192f,
    0.22403305768966675f, 0.21939511597156525f, 0.07959743589162827f, 0.07344524562358856f, 0.11483164876699448f, 0.20439864695072174f, 0.14262966811656952f, 0.13464123010635376f, 0.15606582164764404f, 0.13385355472564697f, 0.1805906444787979f, 0.1123758852481842f, 0.06664730608463287f, -0.001702876528725028f, 0.010684494860470295f, 0.11909118294715881f, 0.12235495448112488f, 0.11068398505449295f, 0.08894585072994232f, 0.09606311470270157f, 0.16416874527931213f, 0.028511440381407738f, 0.1522529274225235f, 0.07501792162656784f, 0.20048126578330994f, 0.03329291194677353f, 0.17702974379062653f, 0.01228584535419941f, -0.06184786930680275f, 0.16304945945739746f, 0.021458739414811134f, 0.16388438642024994f, 0.031341005116701126f, 0.09729249030351639f, 0.17395217716693878f, 0.13874311745166779f, 0.05984852835536003f, 0.037753622978925705f, 0.01804761216044426f, 0.057706598192453384f, 0.03343968093395233f, 0.11279268562793732f, 0.16062092781066895f, 0.1223125085234642f, 0.020499028265476227f, 0.03917517513036728f, -0.02953852340579033f, 0.0019279057160019875f, 0.10561122000217438f, 0.28506284952163696f, 0.025839759036898613f, 0.1792309284210205f, 0.25852665305137634f, 0.05078643560409546f, 0.09181524068117142f, 0.003316662274301052f, 0.15934164822101593f, 0.1525488942861557f, 0.007490871474146843f, 0.12442534416913986f, -0.028284473344683647f, 0.11910098791122437f, 0.040681324899196625f, 0.002626777393743396f,
    0.0755387395620346f, 0.06310994923114777f, 0.1306912750005722f, 0.021926507353782654f, -0.013239397667348385f, 0.03602443262934685f, -0.07399488985538483f, 0.1045607477426529f, -0.02742084674537182f, 0.1080964133143425f, 0.08442942053079605f, 0.10256164520978928f, -0.012590805999934673f, 0.0021612951532006264f, 0.02383722923696041f, -0.07948624342679977f, 0.0730222836136818f, 0.07763899117708206f, 0.24255909025669098f, -0.021740760654211044f, 0.06086205691099167f, -0.027722427621483803f, -0.011846748180687428f, 0.04072341322898865f, 0.03204561397433281f, 0.03279750794172287f, 0.07333962619304657f, 0.0034778143744915724f, 0.11282020062208176f, 0.051375918090343475f, 0.018282350152730942f, 0.027776021510362625f, 0.10340353101491928f, 0.036314502358436584f, 0.05177852883934975f, 0.03784918412566185f, 0.06612663716077805f, 0.030583688989281654f, -0.011641409248113632f, -0.001812971313484013f, 0.04439368471503258f, 0.14432302117347717f, 0.07719343155622482f, 0.09328249096870422f, -0.010860318318009377f, 0.05168894678354263f, 0.026568425819277763f, 0.03348687291145325f, 0.07406862825155258f, 0.13147036731243134f, -0.0111140888184309f, 0.07866350561380386f, 0.0811532586812973f, 0.059713300317525864f, 0.10684069246053696f, 0.00003990471668657847f, 0.10472451895475388f, -0.00594745809212327f, 0.0037064433563500643f, -0.1816154569387436f, 0.022525420412421227f, 0.25193482637405396f, -0.005816707853227854f, -0.028949473053216934f,
    0.05759919807314873f, 0.08169526606798172f, 0.1572486162185669f, 0.01525577250868082f, 0.21724152565002441f, 0.08915399760007858f, -0.019624579697847366f, 0.05043608322739601f, 0.013816215097904205f, 0.14405527710914612f, 0.08969152718782425f, 0.07005555927753448f, -0.06567199528217316f, 0.037065643817186356f, 0.027278747409582138f, -0.010990959592163563f, 0.060066260397434235f, 0.0739457905292511f, 0.02954566851258278f, -0.04376891627907753f, 0.056663624942302704f, -0.03956136107444763f, 0.010823022574186325f, -0.007708030752837658f, 0.13578037917613983f, 0.03098687157034874f, 0.10077883303165436f, 0.00047010101843625307f, 0.26217615604400635f, 0.05466284230351448f, 0.006295009981840849f, 0.025071613490581512f, -0.02826455608010292f, 0.05182597413659096f, 0.08141779899597168f, 0.09605588763952255f, 0.08350657671689987f, 0.06227325275540352f, 0.008574607782065868f, -0.0019311871146783233f, 0.016000129282474518f, 0.1050078421831131f, 0.05542859807610512f, 0.049484312534332275f, 0.0019374097464606166f, 0.0019233622588217258f, 0.06891226768493652f, -0.0009552547708153725f, 0.07712550461292267f, 0.0840364545583725f, -0.002792635466903448f, 0.055183302611112595f, 0.06964035332202911f, 0.007578759454190731f, 0.015254625119268894f, 0.0016119974898174405f, 0.08958271890878677f, 0.16850268840789795f, -0.031466539949178696f, 0.00346959731541574f, 0.029732689261436462f, -0.10353503376245499f, -0.020142681896686554f, -0.0008590820943936706f,
    -0.08414044976234436f, -0.2713795006275177f, -0.12364107370376587f, 0.3403335511684418f, -0.19331035017967224f, 0.0015270502772182226f, -0.05877196788787842f, -0.10880862921476364f, -0.12038829922676086f, -0.3561013638973236f, 0.009366538375616074f, -0.17933593690395355f, -0.1263335943222046f, -0.3514914810657501f, -0.1311977058649063f, -0.010351205244660378f, -0.05638710781931877f, 0.2802441418170929f, -0.2509552240371704f, -0.0678533986210823f, -0.00731854559853673f, 0.05267232656478882f, -0.09794774651527405f, -0.717154324054718f, -0.15252017974853516f, -0.33006370067596436f, -0.0005803380045108497f, -0.4443040192127228f, 0.011154056526720524f, -0.041632797569036484f, -0.12156635522842407f, -0.10300599038600922f, -0.012345039285719395f, 0.24725984036922455f, -0.2630232274532318f, -0.005280869547277689f, -0.22521601617336273f, -0.08800728619098663f, -0.28282761573791504f, -0.12815158069133759f, 0.04573174938559532f, -0.3191463053226471f, -0.005812665447592735f, -0.13704700767993927f, 0.18817180395126343f, -0.2493920922279358f, -0.09223753958940506f, -0.3126513659954071f, -0.13854601979255676f, -0.35049840807914734f, -0.1180635318160057f, 0.008590742945671082f, -0.14067292213439941f, -0.23123276233673096f, -0.10197905451059341f, -0.12650983035564423f, 0.017147336155176163f, -0.042902421206235886f, -0.3211599290370941f, 0.02277868427336216f, -0.09456073492765427f, 0.0824422612786293f, -0.14681383967399597f, -0.2815142273902893f,
    -0.25716009736061096f, -0.3725297749042511f, -0.23798179626464844f, 0.18010149896144867f, -0.20996589958667755f, -0.13922372460365295f, 0.003122155787423253f, -0.024964435026049614f, -0.07851214706897736f, -0.1269713193178177f, 0.02156936191022396f, -0.18301241099834442f, -0.060414839535951614f, -0.43398764729499817f, -0.13993018865585327f, 0.026348169893026352f, -0.10913766175508499f, 0.23471570014953613f, -0.19403280317783356f, 0.10481441766023636f, -0.006390262860804796f, 0.030380193144083023f, -0.10674901306629181f, 0.3535352945327759f, -0.17526130378246307f, -0.41876420378685f, 0.011183575727045536f, -0.4124751091003418f, -0.07287078350782394f, -0.014301124028861523f, -0.34627142548561096f, -0.00228730752132833f, -0.017627203837037086f, 0.18454714119434357f, -0.17095346748828888f, 0.11239135265350342f, -0.21606755256652832f, -0.07595246285200119f, -0.23499028384685516f, 0.2642315626144409f, -0.48354074358940125f, -0.3925633430480957f, -0.004741809330880642f, -0.15666233003139496f, -0.5226698517799377f, -0.09450747072696686f, -0.10994706302881241f, -0.2755168080329895f, 0.23830345273017883f, -0.0782194584608078f, -0.10354672372341156f, 0.025276584550738335f, -0.22167085111141205f, -0.17446568608283997f, -0.11372218281030655f, -0.11534514278173447f, 0.025014063343405724f, -0.0444505475461483f, -0.3137153089046478f, -0.01490346621721983f, -0.15213868021965027f, -0.14257322251796722f, -0.19532057642936707f, -0.2973763644695282f,
    -0.3599849045276642f, -0.5293048620223999f, -0.22866810858249664f, -0.27241942286491394f, -0.05728445574641228f, -0.049214918166399f, -0.15989555418491364f, 0.07240952551364899f, -0.16387473046779633f, 0.035974688827991486f, 0.010884623043239117f, -0.21901974081993103f, -0.3287902772426605f, -0.29096347093582153f, -0.4629248082637787f, 0.026624571532011032f, 0.11213710159063339f, 0.281029611825943f, -0.1800527572631836f, -0.1278325468301773f, 0.094448022544384f, -0.15788128972053528f, 0.07866070419549942f, -0.16418364644050598f, -0.1443418562412262f, -0.4641585350036621f, 0.038537707179784775f, -0.6231074333190918f, -0.23402740061283112f, 0.058364514261484146f, 0.21303622424602509f, -0.11193288862705231f, -0.13029280304908752f, 0.31876805424690247f, -0.07148910313844681f, -0.11825164407491684f, -0.25848469138145447f, 0.054816845804452896f, -0.2298370897769928f, -0.38749960064888f, -0.09995801001787186f, -0.390829861164093f, 0.1333087682723999f, -0.18464645743370056f, -0.22490419447422028f, 0.05745844542980194f, -0.23975922167301178f, -0.32497456669807434f, -0.11473151296377182f, -0.0886186808347702f, 0.1717633605003357f, 0.024955689907073975f, -0.21709983050823212f, -0.34602802991867065f, 0.03770133852958679f, 0.10160180181264877f, 0.04015689715743065f, -0.12739743292331696f, -0.41819822788238525f, -0.2355576604604721f, 0.08646542578935623f, -0.26315397024154663f, -0.4057058095932007f, -0.25978365540504456f,
    -0.1487845480442047f, -0.2348494529724121f, -0.1802130937576294f, -0.10297853499650955f, -0.19158944487571716f, -0.01504074689000845f, -0.058149803429841995f, -0.007032922934740782f, -0.11972502619028091f, -0.3386653661727905f, 0.034952543675899506f, -0.15286989510059357f, -0.1526346653699875f, -0.31168022751808167f, -0.1651492565870285f, -0.08944772183895111f, -0.004149104468524456f, 0.053479403257369995f, -0.23094673454761505f, -0.17660261690616608f, 0.0140239167958498f, -0.0838051289319992f, -0.10806667804718018f, 0.15668898820877075f, -0.11141365766525269f, -0.44374337792396545f, 0.01651109755039215f, -0.4470199942588806f, -0.10052204132080078f, -0.03822645545005798f, -0.004126155283302069f, -0.011811235919594765f, -0.11928563565015793f, 0.2314404994249344f, -0.23360569775104523f, -0.20602527260780334f, -0.23634491860866547f, -0.13457363843917847f, -0.26572373509407043f, -0.8171300292015076f, 0.30570968985557556f, -0.2844359278678894f, -0.02979171834886074f, -0.10780446231365204f, -0.4659276306629181f, -0.17798781394958496f, -0.1193435788154602f, -0.19780129194259644f, 0.18615016341209412f, -0.37722262740135193f, -0.09899771213531494f, 0.05323505774140358f, -0.18585556745529175f, -0.23851507902145386f, -0.10043185949325562f, -0.37665805220603943f, -0.010065365582704544f, 0.007682488765567541f, -0.35724619030952454f, 0.12706007063388824f, -0.11330438405275345f, -0.0709000751376152f, -0.11156504601240158f, -0.14208665490150452f,
    -0.3311753273010254f, -0.3437941372394562f, -0.18006698787212372f, 0.07847067713737488f, -0.1582019031047821f, -0.30164259672164917f, 0.08049790561199188f, -0.14716903865337372f, -0.11040584743022919f, -0.03481658548116684f, 0.061739735305309296f, -0.35576513409614563f, -0.029716856777668f, -0.33697643876075745f, -0.11423603445291519f, 0.022647110745310783f, -0.19306933879852295f, 0.07286965101957321f, -0.11871825903654099f, 0.08532354980707169f, -0.13527627289295197f, -0.11582613736391068f, -0.02997005172073841f, -0.007522226311266422f, -0.044959213584661484f, -0.41175326704978943f, 0.04692509397864342f, -0.22455039620399475f, 0.08138382434844971f, -0.07155632972717285f, -0.3160688877105713f, -0.05126335471868515f, -0.03506135568022728f, 0.05162177234888077f, -0.3678910434246063f, 0.0004810974351130426f, -0.17293383181095123f, -0.16898122429847717f, -0.14564041793346405f, -0.1198219582438469f, 0.27728143334388733f, -0.3740440309047699f, -0.023109083995223045f, -0.2529277205467224f, -0.4874227046966553f, -0.11315525323152542f, -0.12459295243024826f, -0.396578848361969f, -0.44977080821990967f, -0.03524111956357956f, -0.09051316231489182f, 0.020205169916152954f, -0.15136897563934326f, -0.10872098803520203f, -0.242217555642128f, 0.15878666937351227f, 0.05202411115169525f, -0.006157218478620052f, -0.25808462500572205f, -0.06059897691011429f, -0.1478690207004547f, -0.058212894946336746f, -0.4234190881252289f, -0.32089605927467346f,
    -0.20599383115768433f, -0.3531699478626251f, -0.1748507022857666f, -0.03999517485499382f, -0.12128452956676483f, -0.21109792590141296f, -0.028772199526429176f, -0.10347724705934525f, 0.011014439165592194f, 0.0005736000020988286f, 0.04573884233832359f, -0.043691229075193405f, -0.054975613951683044f, -0.3865565359592438f, -0.07725292444229126f, -0.04108988121151924f, -0.16134825348854065f, 0.04554836079478264f, -0.13744661211967468f, -0.06203765422105789f, -0.05516209825873375f, -0.34502753615379333f, -0.05653227120637894f, 0.059315964579582214f, 0.03163396939635277f, -0.3355412781238556f, 0.017299041152000427f, -0.26883333921432495f, 0.10992889106273651f, -0.059371963143348694f, -0.4445814788341522f, -0.04086088389158249f, -0.092300184071064f, -0.5853123664855957f, -0.11780717223882675f, -0.01773037016391754f, -0.06535766273736954f, -0.08341657370328903f, -0.18801583349704742f, -0.07246510684490204f, 0.2741681635379791f, -0.27571356296539307f, -0.035033416002988815f, -0.04588663950562477f, 0.15696057677268982f, -0.1590062379837036f, -0.11476190388202667f, -0.44999194145202637f, -0.11980481445789337f, -0.038182202726602554f, -0.06529571861028671f, -0.014356694184243679f, -0.1747862994670868f, -0.06387215107679367f, -0.060612067580223083f, -0.259021520614624f, 0.040912117809057236f, -0.10946207493543625f, -0.2731616199016571f, 0.13096964359283447f, -0.06747838854789734f, 0.04513559862971306f, -0.17858654260635376f, -0.23469814658164978f
};
#endif

void conv_last(float* dst, const float* src){
    constexpr int M =  80*128;
    constexpr int K =  64;
    constexpr int N =  10;
    
    for(auto m = 0; m < M; ++m){
        auto d = dst;
        for(auto n =0; n < N; ++n){
            *d = 0;
            auto w = weight + n * K;
            auto s = src;
            for(auto k = 0; k < K; ++k){
                *d += *s * *w;
                w++;s++;
            }
            *d += bias[n];
            d++;
        }
        dst+=N;
        src+=K;
    }
}
