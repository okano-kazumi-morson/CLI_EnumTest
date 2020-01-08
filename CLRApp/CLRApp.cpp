#include "stdafx.h"

using namespace System;
using namespace CsLibrary;

int getValue(CsLibrary::CsEnum^ csEnum)
{
	return static_cast<int>( *csEnum );
}

int main(array<System::String ^> ^args)
{
	Console::WriteLine( CsLibrary::CsEnum::Zero );
	Console::WriteLine( CsLibrary::CsEnum::One );
	Console::WriteLine( CsLibrary::CsEnum::Two );

	Console::WriteLine( getValue(CsLibrary::CsEnum::Two) );

	return 0;
}
