/*
** $Id: lualib.h,v 1.43 2011/12/08 12:11:37 roberto Exp $
** Lua standard libraries
** See Copyright Notice in lua.h
*/


#ifndef lualib_h
#define lualib_h

#include "lua.h"



LUAMOD_API int (luaopen_base) (lua_State *L);

#ifdef USE_LUA_COROUTINE
#define LUA_COLIBNAME	"coroutine"
LUAMOD_API int (luaopen_coroutine) (lua_State *L);
#endif

#define LUA_TABLIBNAME	"table"
LUAMOD_API int (luaopen_table) (lua_State *L);

#ifdef USE_LUA_IO
#define LUA_IOLIBNAME	"io"
LUAMOD_API int (luaopen_io) (lua_State *L);
#endif

#ifdef USE_LUA_OS
#define LUA_OSLIBNAME	"os"
LUAMOD_API int (luaopen_os) (lua_State *L);
#endif

#define LUA_STRLIBNAME	"string"
LUAMOD_API int (luaopen_string) (lua_State *L);

#define LUA_BITLIBNAME	"bit32"
LUAMOD_API int (luaopen_bit32) (lua_State *L);

#define LUA_MATHLIBNAME	"math"
LUAMOD_API int (luaopen_math) (lua_State *L);

#define LUA_DBLIBNAME	"debug"
LUAMOD_API int (luaopen_fulldebug) (lua_State *L);
LUAMOD_API int (luaopen_partialdebug) (lua_State *L);

#define LUA_LOADLIBNAME	"package"
LUAMOD_API int (luaopen_package) (lua_State *L);


/* open all previous libraries */
LUALIB_API void (luaL_openlibs) (lua_State *L, int loadFullDebug);



#if !defined(lua_assert)
#define lua_assert(x)	((void)0)
#endif


#endif
