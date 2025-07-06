#include "Luark/Lua/Context.h"

#include "lua.hpp"

namespace Luark
{
	namespace Lua
	{
		FContext::FContext()
			: L(::luaL_newstate())
		{
			luaL_openlibs(L);
		}

		FContext::~FContext()
		{
			lua_close(L);
		}
	}
}
