#ifndef HELLOWORLDSPLTYPES_H
#define HELLOWORLDSPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_HelloWorld.h"


extern c_metaObject __HelloWorld_HelloWorld__load (c_base base);

extern const char *HelloWorld_Msg_metaDescriptor[];
extern const int HelloWorld_Msg_metaDescriptorArrLength;
extern const int HelloWorld_Msg_metaDescriptorLength;
extern c_metaObject __HelloWorld_Msg__load (c_base base);
struct _HelloWorld_Msg ;
extern  v_copyin_result __HelloWorld_Msg__copyIn(c_base base, const struct HelloWorld::Msg *from, struct _HelloWorld_Msg *to);
extern  void __HelloWorld_Msg__copyOut(const void *_from, void *_to);
struct _HelloWorld_Msg {
    c_long userID;
    c_string message;
};

#undef OS_API
#endif
