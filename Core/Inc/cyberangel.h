int i = 1;

{
    using namespace part_A;
    h1_ _0__ h1__ h1__ _0__ h1_ _0__ _7_ _0__ _5_ _7_
    _5_ _0__ _3__ _3__ _0__ _2_ _0__ _3_ _0__ _2_ _3_
    _5_ _0__ h1__ h1__ _0__ _7_ _0__ h1_ _0__ _7_ h2_
    h2_ _0__ h2__ h2__ _0__ _2_ _0__ h3_ _0__ h1_ _7_

    h1_ _0__ h1__ h1__ _0__ h1_ _0__ _7_ _0__ _5_ _7_
    _5_ _0__ _3__ _3__ _0__ _2_ _0__ _3_ _0__ _5_ _2_
    _5_ _0__ h1__ h1__ _0__ h1_ _0__ _7_ _0__ h1_ _7_

A:
    if (i == 1) {
        h2_ _0__ h2__ h2__ _0__ h2_ _0__ h3_ _0__ l6_ l7_
    }
    else {
        h2_ _0__ h2__ h2__ _0__ _7_ _0__ _7_ _0__ l6_ l7_
    }

    _1_ ___ l7__ l7_ l5_ l6 _1 
    l7_ ___ _1__ _1_ _2_ l5 _0_ l3_ 
    l4_ ___ _1__ _1_ _2_ l7_ ___ l5__ l5_ l2_ 
    l3 l5 l5 l6_ l7_

    _1_ ___ l7__ l7_ l5_ l6 _3 
    _2_ ___ l5__ l5_ _2_ _3 l6_ _1_ 
    _3_ ___ l6__ l6_ _3_ _2_ ___ _1__ _1_ l7_ 
    l7 _ _ l7_ l6_
    l6_ _0 _0 l6_ l7_
}
{
    using namespace part_B;
    _3 h1 _7_ ___ _3__ _3_ _2_ 
    _3_ ___ _2__ _2__ _1__ _2_ _0 l6_ _1_ 
    _3_ ___ l6__ l6_ _3_ _2 l5_ _2_ 
    _4_ ___ _5__ _5_ _2_ _3 _1_ _2_
    _3 h1 _7_ ___ _3__ _3_ _2_ 
    _3_ ___ _2__ _2__ _1__ _2_ _0 l6_ _1_ 
    _3_ ___ l6__ l6_ _3_ _2_ _3_ _5_ _7_ 

    i *= -1;
    if (i == -1){
        h1 _ _0 _1_ _0__ _5__ 
        goto A;
    }
    else {
        h1 _ _ _ 
        _7 _ _ _ 
        _5 _ _ _ 
        _6 _ _ _ 
        h1 _ _ _ 
        h2 _ _ _ 
        h3 _ _ _
        h4 _ _ _ 
    }
}