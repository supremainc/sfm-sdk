# sfm-sdk
SFM SDK for C and C++

Structure of directories and included files.
```
.
├─doc
│      SFM_SDK_Manual_v3.3.0.pdf
│
└─windows
    ├─include
    │      UF_3000IO.h
    │      UF_3500IO.h
    │      UF_AccessControl.h
    │      UF_API.h
    │      UF_Bitmap.h
    │      UF_Command.h
    │      UF_Def.h
    │      UF_Delete.h
    │      UF_Enroll.h
    │      UF_Error.h
    │      UF_Identify.h
    │      UF_Image.h
    │      UF_Log.h
    │      UF_Module.h
    │      UF_Packet.h
    │      UF_Serial.h
    │      UF_SmartCard.h
    │      UF_Socket.h
    │      UF_SysParameter.h
    │      UF_Template.h
    │      UF_Upgrade.h
    │      UF_UserMemory.h
    │      UF_Verify.h
    │      UF_Wiegand.h
    │      UF_WSQ.h
    │      Version.h
    │      Version.h.in
    │
    └─lib
        ├─x64
        │      SFM_SDK.dll
        │      SFM_SDK.lib
        │
        ├─x64_ordinal
        │      SFM_SDK.dll
        │      SFM_SDK.lib
        │
        ├─x86
        │      SFM_SDK.dll
        │      SFM_SDK.lib
        │
        └─x86_ordinal
               SFM_SDK.dll
               SFM_SDK.lib

```

All of the DLL files have the same name. Please use the proper DLL file for your purpose.