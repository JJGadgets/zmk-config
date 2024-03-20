// vi: ft=c
#define JJ(name,desc,compat,cellsnum,...) \
/omit-if-no-ref/ name: desc { \
    compatible = compat; \
    #binding-cells = <cellsnum>; \
    __VA_ARGS__ \
};

#define JJ_MM(name,desc,...) \
/omit-if-no-ref/ name: desc { \
    compatible = "zmk,behavior-mod-morph"; \
    #binding-cells = <0>; \
    __VA_ARGS__ \
};

#define JJ_HT(name,desc,flav,...) \
/omit-if-no-ref/ name: desc { \
    compatible = "zmk,behavior-hold-tap"; \
    #binding-cells = <2>; \
    flavor = flav; \
    __VA_ARGS__ \
};

#define JJ_HT_HOLD(name,desc,...) \
/omit-if-no-ref/ name: desc { \
    compatible = "zmk,behavior-hold-tap"; \
    #binding-cells = <2>; \
    flavor = "hold-preferred"; \
    tapping-term-ms = <200>; \
    __VA_ARGS__ \
};

#define JJ_HM(name,desc,flav,...) \
/omit-if-no-ref/ name: desc { \
    compatible = "zmk,behavior-hold-tap"; \
    #binding-cells = <2>; \
    flavor = flav; \
    tapping-term-ms = <280>; \
    quick-tap-ms = <175>; \
    require-prior-idle-ms = <150>; \
    __VA_ARGS__ \
};

#define JJ_HT_TAP(name,desc,...) \
JJ_HM(name, desc, "tap-preferred", __VA_ARGS__)

#define JJ_HML_34(name,desc,...) \
JJ_HM(name, desc, "balanced", __VA_ARGS__ \
    hold-trigger-on-release; \
    hold-trigger-key-positions = <0 1 2 3 4 10 11 12 13 14 20 21 22 23 24>;)

#define JJ_HMR_34(name,desc,...) \
JJ_HM(name, desc, "balanced", __VA_ARGS__ \
    hold-trigger-on-release; \
    hold-trigger-key-positions = <5 6 7 8 9 15 16 17 18 19 25 26 27 28 29>;)

#define JJ_TD(name,desc,...) \
/omit-if-no-ref/ name: desc { \
    compatible = "zmk,behavior-tap-dance"; \
    #binding-cells = <0>; \
    tapping-term-ms = <200>; \
    bindings = __VA_ARGS__; \
};
