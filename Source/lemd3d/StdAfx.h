// stdafx.h : Include-Datei f�r Standard-System-Include-Dateien,
//  oder projektspezifische Include-Dateien, die h�ufig benutzt, aber
//      in unregelm��igen Abst�nden ge�ndert werden.
//

#if !defined(AFX_STDAFX_H__0A3D67C0_3359_11D5_8D7F_444553540000__INCLUDED_)
#define AFX_STDAFX_H__0A3D67C0_3359_11D5_8D7F_444553540000__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define DIRECT3D_VERSION 0x0900

// F�gen Sie hier Ihre Header-Dateien ein
#define WIN32_LEAN_AND_MEAN		// Selten benutzte Teile der Windows-Header nicht einbinden

#include <windows.h>
#if DIRECT3D_VERSION==0x0900
#include <d3d9.h>
#include <d3dx9math.h>
#else
#include <d3d.h>
#include <d3dxmath.h>
#endif
#include <dxerr.h>
#include <commctrl.h>
#include <mmsystem.h>

// ZU ERLEDIGEN: Verweisen Sie hier auf zus�tzliche Header-Dateien, die Ihr Programm ben�tigt

#include "globals.h"
#include "resource.h"
#include "DListParser.h"

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt zus�tzliche Deklarationen unmittelbar vor der vorherigen Zeile ein.

#endif // !defined(AFX_STDAFX_H__0A3D67C0_3359_11D5_8D7F_444553540000__INCLUDED_)
