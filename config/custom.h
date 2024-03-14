// vi: ft=c
#define JJ(name,desc,compat,cells,...) \
/omit-if-no-ref/ name: desc { \
    compatible = compat; \
    #binding-cells = <cells>; \
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

#define JJ_HT_TAP(name,desc,...) \
/omit-if-no-ref/ name: desc { \
    compatible = "zmk,behavior-hold-tap"; \
    #binding-cells = <2>; \
    flavor = "tap-preferred"; \
    tapping-term-ms = <280>; \
    quick-tap-ms = <175>; \
    require-prior-idle-ms = <150>; \
    __VA_ARGS__ \
};
