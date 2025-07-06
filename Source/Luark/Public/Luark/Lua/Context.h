#pragma once

struct lua_State;

namespace Luark
{
	namespace Lua
	{
		class LUARK_API FContext
		{
		public:
			FContext();
			~FContext();

		private:
			lua_State* L;
		};
	}
}
