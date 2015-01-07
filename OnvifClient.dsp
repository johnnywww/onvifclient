# Microsoft Developer Studio Project File - Name="OnvifClient" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=OnvifClient - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "OnvifClient.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "OnvifClient.mak" CFG="OnvifClient - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "OnvifClient - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "OnvifClient - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "OnvifClient - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "OnvifClient - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# SUBTRACT CPP /Fr
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 wsock32.lib /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# SUBTRACT LINK32 /incremental:no

!ENDIF 

# Begin Target

# Name "OnvifClient - Win32 Release"
# Name "OnvifClient - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\appTools.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=.\BaseRetInfo.cpp
# End Source File
# Begin Source File

SOURCE=.\BaseSoapSecurityInfo.cpp
# End Source File
# Begin Source File

SOURCE=.\CalculateDigestSha1ContextImpl.cpp
# End Source File
# Begin Source File

SOURCE=.\CalculateDigestSha1Impl.cpp
# End Source File
# Begin Source File

SOURCE=.\containerList.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=.\Device.cpp
# End Source File
# Begin Source File

SOURCE=.\duration.cpp

!IF  "$(CFG)" == "OnvifClient - Win32 Release"

!ELSEIF  "$(CFG)" == "OnvifClient - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\EncodeBase64SoapImpl.cpp
# End Source File
# Begin Source File

SOURCE=.\FactoryImpl.cpp
# End Source File
# Begin Source File

SOURCE=.\GetDeviceInformationImpl.cpp
# End Source File
# Begin Source File

SOURCE=.\GetMediaProfilesImpl.cpp
# End Source File
# Begin Source File

SOURCE=.\GetStreamUrlImpl.cpp

!IF  "$(CFG)" == "OnvifClient - Win32 Release"

!ELSEIF  "$(CFG)" == "OnvifClient - Win32 Debug"

# SUBTRACT CPP /Fr

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\OnvifClient.cpp
# End Source File
# Begin Source File

SOURCE=.\OnvifClient.rc
# End Source File
# Begin Source File

SOURCE=.\OnvifClientDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\SearchDeviceImpl.cpp
# End Source File
# Begin Source File

SOURCE=.\SearchDeviceRetInfo.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=.\SetSoapSecurityDigest2Impl.cpp
# End Source File
# Begin Source File

SOURCE=.\SetSoapSecurityDigestImpl.cpp
# End Source File
# Begin Source File

SOURCE=.\sha1.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=.\sha2.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=.\soapC1.cpp

!IF  "$(CFG)" == "OnvifClient - Win32 Release"

!ELSEIF  "$(CFG)" == "OnvifClient - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\soapC10.cpp

!IF  "$(CFG)" == "OnvifClient - Win32 Release"

!ELSEIF  "$(CFG)" == "OnvifClient - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\soapC11.cpp

!IF  "$(CFG)" == "OnvifClient - Win32 Release"

!ELSEIF  "$(CFG)" == "OnvifClient - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\soapC12.cpp

!IF  "$(CFG)" == "OnvifClient - Win32 Release"

!ELSEIF  "$(CFG)" == "OnvifClient - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\soapC2.cpp

!IF  "$(CFG)" == "OnvifClient - Win32 Release"

!ELSEIF  "$(CFG)" == "OnvifClient - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\soapC3.cpp

!IF  "$(CFG)" == "OnvifClient - Win32 Release"

!ELSEIF  "$(CFG)" == "OnvifClient - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\soapC4.cpp

!IF  "$(CFG)" == "OnvifClient - Win32 Release"

!ELSEIF  "$(CFG)" == "OnvifClient - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\soapC5.cpp

!IF  "$(CFG)" == "OnvifClient - Win32 Release"

!ELSEIF  "$(CFG)" == "OnvifClient - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\soapC6.cpp

!IF  "$(CFG)" == "OnvifClient - Win32 Release"

!ELSEIF  "$(CFG)" == "OnvifClient - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\soapC7.cpp

!IF  "$(CFG)" == "OnvifClient - Win32 Release"

!ELSEIF  "$(CFG)" == "OnvifClient - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\soapC8.cpp

!IF  "$(CFG)" == "OnvifClient - Win32 Release"

!ELSEIF  "$(CFG)" == "OnvifClient - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\soapC9.cpp

!IF  "$(CFG)" == "OnvifClient - Win32 Release"

!ELSEIF  "$(CFG)" == "OnvifClient - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\soapClient.cpp

!IF  "$(CFG)" == "OnvifClient - Win32 Release"

!ELSEIF  "$(CFG)" == "OnvifClient - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\SoapUtils.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\stdsoap2.cpp

!IF  "$(CFG)" == "OnvifClient - Win32 Release"

!ELSEIF  "$(CFG)" == "OnvifClient - Win32 Debug"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\StringListRetInfo.cpp
# End Source File
# Begin Source File

SOURCE=.\StringMapRetInfo.cpp
# End Source File
# Begin Source File

SOURCE=.\StringRetInfo.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\appCommon.h
# End Source File
# Begin Source File

SOURCE=.\appTools.h
# End Source File
# Begin Source File

SOURCE=.\BaseRetInfo.h
# End Source File
# Begin Source File

SOURCE=.\BaseSoapSecurityInfo.h
# End Source File
# Begin Source File

SOURCE=.\CalculateDigestSha1ContextImpl.h
# End Source File
# Begin Source File

SOURCE=.\CalculateDigestSha1Impl.h
# End Source File
# Begin Source File

SOURCE=.\containerList.h
# End Source File
# Begin Source File

SOURCE=.\Device.h
# End Source File
# Begin Source File

SOURCE=.\duration.h
# End Source File
# Begin Source File

SOURCE=.\EncodeBase64SoapImpl.h
# End Source File
# Begin Source File

SOURCE=.\FactoryImpl.h
# End Source File
# Begin Source File

SOURCE=.\GetDeviceInformationImpl.h
# End Source File
# Begin Source File

SOURCE=.\GetMediaProfilesImpl.h
# End Source File
# Begin Source File

SOURCE=.\GetStreamUrlImpl.h
# End Source File
# Begin Source File

SOURCE=.\iCalculateDigest.h
# End Source File
# Begin Source File

SOURCE=.\iEncodeBase64.h
# End Source File
# Begin Source File

SOURCE=.\IFactory.h
# End Source File
# Begin Source File

SOURCE=.\iGetDeviceInformation.h
# End Source File
# Begin Source File

SOURCE=.\iGetMediaProfiles.h
# End Source File
# Begin Source File

SOURCE=.\iGetStreamUrl.h
# End Source File
# Begin Source File

SOURCE=.\iList.h
# End Source File
# Begin Source File

SOURCE=.\infdefine.h
# End Source File
# Begin Source File

SOURCE=.\iSearchDevice.h
# End Source File
# Begin Source File

SOURCE=.\ISetSoapSecurity.h
# End Source File
# Begin Source File

SOURCE=.\OnvifClient.h
# End Source File
# Begin Source File

SOURCE=.\OnvifClientDlg.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\SearchDeviceImpl.h
# End Source File
# Begin Source File

SOURCE=.\SearchDeviceRetInfo.h
# End Source File
# Begin Source File

SOURCE=.\SetSoapSecurityDigest2Impl.h
# End Source File
# Begin Source File

SOURCE=.\SetSoapSecurityDigestImpl.h
# End Source File
# Begin Source File

SOURCE=.\sha1.h
# End Source File
# Begin Source File

SOURCE=.\sha2.h
# End Source File
# Begin Source File

SOURCE=.\soapH.h
# End Source File
# Begin Source File

SOURCE=.\soapStub.h
# End Source File
# Begin Source File

SOURCE=.\SoapUtils.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\stdsoap2.h
# End Source File
# Begin Source File

SOURCE=.\StringListRetInfo.h
# End Source File
# Begin Source File

SOURCE=.\StringMapRetInfo.h
# End Source File
# Begin Source File

SOURCE=.\StringRetInfo.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\OnvifClient.ico
# End Source File
# Begin Source File

SOURCE=.\res\OnvifClient.rc2
# End Source File
# End Group
# Begin Source File

SOURCE=.\OnvifClient.clw
# End Source File
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# Begin Source File

SOURCE=.\RemoteDiscoveryBinding.nsmap
# End Source File
# End Target
# End Project
