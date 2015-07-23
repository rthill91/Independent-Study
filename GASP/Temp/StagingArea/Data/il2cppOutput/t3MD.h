#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3;
struct t5;
struct t2;
struct t4155;
struct t4156;
struct t36;
struct t35;
struct t802;
struct t2774;
struct t6;
struct t2781;
struct t2784;
#include "t2773.h"

#include "t4MD.h"
#define m101(__this, method) (( void (*) (t3 *, MethodInfo*))m102_gshared)(__this, method)
#define m13797(__this, p0, method) (( void (*) (t3 *, t5*, MethodInfo*))m1234_gshared)(__this, p0, method)
#define m13798(__this, p0, method) (( void (*) (t3 *, int32_t, MethodInfo*))m13567_gshared)(__this, p0, method)
#define m13799(__this , method) (( void (*) (t5 * , MethodInfo*))m13568_gshared)(__this , method)
#define m13800(__this, method) (( t5* (*) (t3 *, MethodInfo*))m4727_gshared)(__this, method)
#define m13801(__this, p0, p1, method) (( void (*) (t3 *, t36 *, int32_t, MethodInfo*))m4712_gshared)(__this, p0, p1, method)
#define m13802(__this, method) (( t5 * (*) (t3 *, MethodInfo*))m4709_gshared)(__this, method)
#define m13803(__this, p0, method) (( int32_t (*) (t3 *, t5 *, MethodInfo*))m4717_gshared)(__this, p0, method)
#define m13804(__this, p0, method) (( bool (*) (t3 *, t5 *, MethodInfo*))m4718_gshared)(__this, p0, method)
#define m13805(__this, p0, method) (( int32_t (*) (t3 *, t5 *, MethodInfo*))m4719_gshared)(__this, p0, method)
#define m13806(__this, p0, p1, method) (( void (*) (t3 *, int32_t, t5 *, MethodInfo*))m4720_gshared)(__this, p0, p1, method)
#define m13807(__this, p0, method) (( void (*) (t3 *, t5 *, MethodInfo*))m4721_gshared)(__this, p0, method)
#define m13808(__this, method) (( bool (*) (t3 *, MethodInfo*))m4723_gshared)(__this, method)
#define m13809(__this, method) (( bool (*) (t3 *, MethodInfo*))m4710_gshared)(__this, method)
#define m13810(__this, method) (( t5 * (*) (t3 *, MethodInfo*))m4711_gshared)(__this, method)
#define m13811(__this, method) (( bool (*) (t3 *, MethodInfo*))m4713_gshared)(__this, method)
#define m13812(__this, method) (( bool (*) (t3 *, MethodInfo*))m4714_gshared)(__this, method)
#define m13813(__this, p0, method) (( t5 * (*) (t3 *, int32_t, MethodInfo*))m4715_gshared)(__this, p0, method)
#define m13814(__this, p0, p1, method) (( void (*) (t3 *, int32_t, t5 *, MethodInfo*))m4716_gshared)(__this, p0, p1, method)
#define m104(__this, p0, method) (( void (*) (t3 *, t2*, MethodInfo*))m105_gshared)(__this, p0, method)
#define m13815(__this, p0, method) (( void (*) (t3 *, int32_t, MethodInfo*))m13569_gshared)(__this, p0, method)
#define m13816(__this, p0, method) (( void (*) (t3 *, t5*, MethodInfo*))m13570_gshared)(__this, p0, method)
#define m13817(__this, p0, method) (( void (*) (t3 *, t5*, MethodInfo*))m13571_gshared)(__this, p0, method)
#define m108(__this, p0, method) (( void (*) (t3 *, t5*, MethodInfo*))m109_gshared)(__this, p0, method)
#define m13818(__this, method) (( t2774 * (*) (t3 *, MethodInfo*))m13572_gshared)(__this, method)
#define m106(__this, method) (( void (*) (t3 *, MethodInfo*))m107_gshared)(__this, method)
#define m13819(__this, p0, method) (( bool (*) (t3 *, t2*, MethodInfo*))m4724_gshared)(__this, p0, method)
#define m13820(__this, p0, p1, method) (( void (*) (t3 *, t6*, int32_t, MethodInfo*))m4725_gshared)(__this, p0, p1, method)
#define m13821(__this, p0, method) (( t2* (*) (t3 *, t2781 *, MethodInfo*))m13573_gshared)(__this, p0, method)
#define m13822(__this , p0, method) (( void (*) (t5 * , t2781 *, MethodInfo*))m13574_gshared)(__this , p0, method)
#define m13823(__this, p0, method) (( int32_t (*) (t3 *, t2781 *, MethodInfo*))m13575_gshared)(__this, p0, method)
#define m13824(__this, p0, p1, p2, method) (( int32_t (*) (t3 *, int32_t, int32_t, t2781 *, MethodInfo*))m13576_gshared)(__this, p0, p1, p2, method)
#define m13825(__this, method) (( t2773  (*) (t3 *, MethodInfo*))m13577_gshared)(__this, method)
#define m13826(__this, p0, method) (( int32_t (*) (t3 *, t2*, MethodInfo*))m4728_gshared)(__this, p0, method)
#define m13827(__this, p0, p1, method) (( void (*) (t3 *, int32_t, int32_t, MethodInfo*))m13578_gshared)(__this, p0, p1, method)
#define m13828(__this, p0, method) (( void (*) (t3 *, int32_t, MethodInfo*))m13579_gshared)(__this, p0, method)
#define m13829(__this, p0, p1, method) (( void (*) (t3 *, int32_t, t2*, MethodInfo*))m4729_gshared)(__this, p0, p1, method)
#define m13830(__this, p0, method) (( void (*) (t3 *, t5*, MethodInfo*))m13580_gshared)(__this, p0, method)
#define m13831(__this, p0, method) (( bool (*) (t3 *, t2*, MethodInfo*))m4726_gshared)(__this, p0, method)
#define m13832(__this, p0, method) (( int32_t (*) (t3 *, t2781 *, MethodInfo*))m13581_gshared)(__this, p0, method)
#define m13833(__this, p0, method) (( void (*) (t3 *, int32_t, MethodInfo*))m4722_gshared)(__this, p0, method)
#define m13834(__this, method) (( void (*) (t3 *, MethodInfo*))m13582_gshared)(__this, method)
#define m13835(__this, method) (( void (*) (t3 *, MethodInfo*))m13583_gshared)(__this, method)
#define m13836(__this, p0, method) (( void (*) (t3 *, t2784 *, MethodInfo*))m13584_gshared)(__this, p0, method)
#define m5198(__this, method) (( t6* (*) (t3 *, MethodInfo*))m1232_gshared)(__this, method)
#define m13837(__this, method) (( void (*) (t3 *, MethodInfo*))m13585_gshared)(__this, method)
#define m13838(__this, method) (( int32_t (*) (t3 *, MethodInfo*))m13586_gshared)(__this, method)
#define m13839(__this, p0, method) (( void (*) (t3 *, int32_t, MethodInfo*))m13587_gshared)(__this, p0, method)
#define m1097(__this, method) (( int32_t (*) (t3 *, MethodInfo*))m100_gshared)(__this, method)
#define m1099(__this, p0, method) (( t2* (*) (t3 *, int32_t, MethodInfo*))m1235_gshared)(__this, p0, method)
#define m13840(__this, p0, p1, method) (( void (*) (t3 *, int32_t, t2*, MethodInfo*))m4730_gshared)(__this, p0, p1, method)
