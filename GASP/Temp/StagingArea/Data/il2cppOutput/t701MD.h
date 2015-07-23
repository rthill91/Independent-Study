#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t701;
struct t802;
struct t271;
struct t5;
struct t2;
struct t3267;
struct t3270;
struct t2723;
struct t905;
struct t439;
struct t4274;
struct t36;
struct t35;
struct t4275;
struct t274;
#include "t440.h"
#include "t892.h"
#include "t893.h"
#include "t269.h"

#include "t276MD.h"
#define m4462(__this, method) (( void (*) (t701 *, MethodInfo*))m5196_gshared)(__this, method)
#define m18692(__this, p0, method) (( void (*) (t701 *, t5*, MethodInfo*))m13967_gshared)(__this, p0, method)
#define m18693(__this, p0, method) (( void (*) (t701 *, t5*, MethodInfo*))m13969_gshared)(__this, p0, method)
#define m18694(__this, p0, method) (( void (*) (t701 *, int32_t, MethodInfo*))m5197_gshared)(__this, p0, method)
#define m18695(__this, p0, p1, method) (( void (*) (t701 *, t5*, t5*, MethodInfo*))m13972_gshared)(__this, p0, p1, method)
#define m18696(__this, p0, p1, method) (( void (*) (t701 *, t439 *, t440 , MethodInfo*))m13974_gshared)(__this, p0, p1, method)
#define m18697(__this, method) (( t5* (*) (t701 *, MethodInfo*))m5350_gshared)(__this, method)
#define m18698(__this, method) (( t5* (*) (t701 *, MethodInfo*))m5351_gshared)(__this, method)
#define m18699(__this, method) (( t5 * (*) (t701 *, MethodInfo*))m5354_gshared)(__this, method)
#define m18700(__this, p0, method) (( t5 * (*) (t701 *, t5 *, MethodInfo*))m5352_gshared)(__this, p0, method)
#define m18701(__this, p0, p1, method) (( void (*) (t701 *, t5 *, t5 *, MethodInfo*))m5353_gshared)(__this, p0, p1, method)
#define m18702(__this, p0, p1, method) (( void (*) (t701 *, t5 *, t5 *, MethodInfo*))m5355_gshared)(__this, p0, p1, method)
#define m18703(__this, p0, method) (( bool (*) (t701 *, t5 *, MethodInfo*))m5356_gshared)(__this, p0, method)
#define m18704(__this, p0, method) (( void (*) (t701 *, t5 *, MethodInfo*))m5358_gshared)(__this, p0, method)
#define m18705(__this, method) (( bool (*) (t701 *, MethodInfo*))m5339_gshared)(__this, method)
#define m18706(__this, method) (( t5 * (*) (t701 *, MethodInfo*))m5340_gshared)(__this, method)
#define m18707(__this, method) (( bool (*) (t701 *, MethodInfo*))m5342_gshared)(__this, method)
#define m18708(__this, p0, method) (( void (*) (t701 *, t892 , MethodInfo*))m5343_gshared)(__this, p0, method)
#define m18709(__this, p0, method) (( bool (*) (t701 *, t892 , MethodInfo*))m5345_gshared)(__this, p0, method)
#define m18710(__this, p0, p1, method) (( void (*) (t701 *, t4274*, int32_t, MethodInfo*))m5346_gshared)(__this, p0, p1, method)
#define m18711(__this, p0, method) (( bool (*) (t701 *, t892 , MethodInfo*))m5347_gshared)(__this, p0, method)
#define m18712(__this, p0, p1, method) (( void (*) (t701 *, t36 *, int32_t, MethodInfo*))m5341_gshared)(__this, p0, p1, method)
#define m18713(__this, method) (( t5 * (*) (t701 *, MethodInfo*))m5337_gshared)(__this, method)
#define m18714(__this, method) (( t5* (*) (t701 *, MethodInfo*))m5348_gshared)(__this, method)
#define m18715(__this, method) (( t5 * (*) (t701 *, MethodInfo*))m5357_gshared)(__this, method)
#define m4461(__this, method) (( int32_t (*) (t701 *, MethodInfo*))m1085_gshared)(__this, method)
#define m18716(__this, p0, method) (( t2* (*) (t701 *, t2*, MethodInfo*))m5349_gshared)(__this, p0, method)
#define m4465(__this, p0, p1, method) (( void (*) (t701 *, t2*, t2*, MethodInfo*))m5195_gshared)(__this, p0, p1, method)
#define m18717(__this, p0, p1, method) (( void (*) (t701 *, int32_t, t5*, MethodInfo*))m13998_gshared)(__this, p0, p1, method)
#define m18718(__this, p0, method) (( void (*) (t701 *, int32_t, MethodInfo*))m14000_gshared)(__this, p0, method)
#define m18719(__this, p0, p1, method) (( void (*) (t701 *, t36 *, int32_t, MethodInfo*))m14002_gshared)(__this, p0, p1, method)
#define m18720(__this , p0, p1, method) (( t892  (*) (t5 * , t2*, t2*, MethodInfo*))m14004_gshared)(__this , p0, p1, method)
#define m18721(__this , p0, p1, method) (( t2* (*) (t5 * , t2*, t2*, MethodInfo*))m14006_gshared)(__this , p0, p1, method)
#define m18722(__this , p0, p1, method) (( t2* (*) (t5 * , t2*, t2*, MethodInfo*))m14008_gshared)(__this , p0, p1, method)
#define m18723(__this, p0, p1, method) (( void (*) (t701 *, t4274*, int32_t, MethodInfo*))m14010_gshared)(__this, p0, p1, method)
#define m18724(__this, method) (( void (*) (t701 *, MethodInfo*))m14012_gshared)(__this, method)
#define m18725(__this, p0, p1, method) (( void (*) (t701 *, t2*, t2*, MethodInfo*))m1116_gshared)(__this, p0, p1, method)
#define m18726(__this, method) (( void (*) (t701 *, MethodInfo*))m5344_gshared)(__this, method)
#define m18727(__this, p0, method) (( bool (*) (t701 *, t2*, MethodInfo*))m1117_gshared)(__this, p0, method)
#define m18728(__this, p0, method) (( bool (*) (t701 *, t2*, MethodInfo*))m14014_gshared)(__this, p0, method)
#define m18729(__this, p0, p1, method) (( void (*) (t701 *, t439 *, t440 , MethodInfo*))m5338_gshared)(__this, p0, p1, method)
#define m18730(__this, p0, method) (( void (*) (t701 *, t5 *, MethodInfo*))m5359_gshared)(__this, p0, method)
#define m18731(__this, p0, method) (( bool (*) (t701 *, t2*, MethodInfo*))m1196_gshared)(__this, p0, method)
#define m4457(__this, p0, p1, method) (( bool (*) (t701 *, t2*, t2**, MethodInfo*))m1518_gshared)(__this, p0, p1, method)
#define m18732(__this, method) (( t3267 * (*) (t701 *, MethodInfo*))m1208_gshared)(__this, method)
#define m18733(__this, method) (( t3270 * (*) (t701 *, MethodInfo*))m14019_gshared)(__this, method)
#define m18734(__this, p0, method) (( t2* (*) (t701 *, t5 *, MethodInfo*))m14021_gshared)(__this, p0, method)
#define m18735(__this, p0, method) (( t2* (*) (t701 *, t5 *, MethodInfo*))m14023_gshared)(__this, p0, method)
#define m18736(__this, p0, method) (( bool (*) (t701 *, t892 , MethodInfo*))m14025_gshared)(__this, p0, method)
#define m4467(__this, method) (( t893  (*) (t701 *, MethodInfo*))m14027_gshared)(__this, method)
#define m18737(__this , p0, p1, method) (( t269  (*) (t5 * , t2*, t2*, MethodInfo*))m14029_gshared)(__this , p0, p1, method)
