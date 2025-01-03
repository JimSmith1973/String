// String.cpp

#include "String.h"

void OpenFileFunction( LPCTSTR lpszFilePath )
{
	// Show file path
	MessageBox( NULL, lpszFilePath, INFORMATION_MESSAGE_CAPTION, ( MB_OK | MB_ICONINFORMATION ) );

} // End of function OpenFileFunction

int ShowAboutMessage( HWND hWndParent )
{
	int nResult = 0;

	MSGBOXPARAMS mbp;

	// Clear message box parameter structure
	ZeroMemory( &mbp, sizeof( mbp ) );

	// Initialise message box parameter structure
	mbp.cbSize		= sizeof( MSGBOXPARAMS );
	mbp.hwndOwner	= hWndParent;
	mbp.hInstance	= NULL;
	mbp.lpszText	= ABOUT_MESSAGE_TEXT;
	mbp.lpszCaption	= ABOUT_MESSAGE_CAPTION;
	mbp.dwStyle		= ( MB_OK | MB_USERICON );
	mbp.lpszIcon	= ABOUT_MESSAGE_ICON_NAME;

	// Show message box
	nResult = MessageBoxIndirect( &mbp );

	return nResult;

} // End of function ShowAboutMessage

int WINAPI WinMain( HINSTANCE, HINSTANCE, LPSTR, int )
{
	Message message;

	ArgumentList argumentList;

	// Get argument list
	if( argumentList.Get() )
	{
		// Successfully got argument list

		// Process arguments
		argumentList.ProcessArguments( &OpenFileFunction );

	} // End of successfully got argument list

	// Initialise string
	String string( "Hello World!" );

	// Display string
	string.Display();

	// Update string
	string += "\r\nAnother line.";
	string += '#';

	// Display string
	string.Display();

	String string1 = "yo";
	String string2 = " bud";
	String string3 = string1 + string2;

	// Display string
	string3.Display();

	// Show about message
	ShowAboutMessage( NULL );

	return message;

} // End of function WinMain