#pragma once

namespace Luark
{
	namespace Lua
	{
		class LUARK_API FValue
		{
			virtual ~FValue() = 0;
		};

		class LUARK_API FStackValue : public FValue
		{
			virtual ~FStackValue();
		};
	}
}
