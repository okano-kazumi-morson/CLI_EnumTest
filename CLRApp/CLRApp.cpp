#include "stdafx.h"

using namespace System;
using namespace CsLibrary;

int getValue( CsLibrary::CsEnum ^ csEnum )
{
	return static_cast<int>( *csEnum );
}

class EnumTest {
public:
	CsLibrary::CsEnum ^ GetEnum() {
		CsLibrary::CsEnum ^ res = gcnew CsLibrary::CsEnum;
		res						= CsLibrary::CsEnum::Two;
		// return res;

		CsLibrary::CsEnum ^ res2 = gcnew CsLibrary::CsEnum(CsLibrary::CsEnum::One);

		return res2;
	}
};

int main( array<System::String ^> ^ args )
{
	Console::WriteLine( CsLibrary::CsEnum::Zero );
	Console::WriteLine( CsLibrary::CsEnum::One );
	Console::WriteLine( CsLibrary::CsEnum::Two );

	Console::WriteLine( getValue( CsLibrary::CsEnum::Two ) );

	Console::WriteLine( CsLibrary::CsClass::CsClassEnum::ClassTwo );

	EnumTest test;
	CsLibrary::CsEnum^ res =  test.GetEnum();

	Console::WriteLine( res );

	getchar();
	return 0;
}
