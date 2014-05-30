# Microsoft Developer Studio Generated NMAKE File, Based on All_Sortings.dsp
!IF "$(CFG)" == ""
CFG=All_Sortings - Win32 Debug
!MESSAGE No configuration specified. Defaulting to All_Sortings - Win32 Debug.
!ENDIF 

!IF "$(CFG)" != "All_Sortings - Win32 Release" && "$(CFG)" != "All_Sortings - Win32 Debug"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "All_Sortings.mak" CFG="All_Sortings - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "All_Sortings - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "All_Sortings - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE 
!ERROR An invalid configuration is specified.
!ENDIF 

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE 
NULL=nul
!ENDIF 

CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "All_Sortings - Win32 Release"

OUTDIR=.\Release
INTDIR=.\Release
# Begin Custom Macros
OutDir=.\Release
# End Custom Macros

ALL : "$(OUTDIR)\All_Sortings.exe"


CLEAN :
	-@erase "$(INTDIR)\bubbleSort.obj"
	-@erase "$(INTDIR)\counting_sort.obj"
	-@erase "$(INTDIR)\generic_bubble_sort.obj"
	-@erase "$(INTDIR)\heapSort.obj"
	-@erase "$(INTDIR)\insertion_secondWay.obj"
	-@erase "$(INTDIR)\insertionSort.obj"
	-@erase "$(INTDIR)\mergeSort.obj"
	-@erase "$(INTDIR)\quickSort.obj"
	-@erase "$(INTDIR)\radixSort.obj"
	-@erase "$(INTDIR)\selectionSort.obj"
	-@erase "$(INTDIR)\shakerSort.obj"
	-@erase "$(INTDIR)\shellSort.obj"
	-@erase "$(INTDIR)\vc60.idb"
	-@erase "$(OUTDIR)\All_Sortings.exe"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /ML /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /Fp"$(INTDIR)\All_Sortings.pch" /YX /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\All_Sortings.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /incremental:no /pdb:"$(OUTDIR)\All_Sortings.pdb" /machine:I386 /out:"$(OUTDIR)\All_Sortings.exe" 
LINK32_OBJS= \
	"$(INTDIR)\bubbleSort.obj" \
	"$(INTDIR)\generic_bubble_sort.obj" \
	"$(INTDIR)\heapSort.obj" \
	"$(INTDIR)\insertion_secondWay.obj" \
	"$(INTDIR)\insertionSort.obj" \
	"$(INTDIR)\mergeSort.obj" \
	"$(INTDIR)\quickSort.obj" \
	"$(INTDIR)\radixSort.obj" \
	"$(INTDIR)\selectionSort.obj" \
	"$(INTDIR)\shakerSort.obj" \
	"$(INTDIR)\shellSort.obj" \
	"$(INTDIR)\counting_sort.obj"

"$(OUTDIR)\All_Sortings.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "All_Sortings - Win32 Debug"

OUTDIR=.\Debug
INTDIR=.\Debug
# Begin Custom Macros
OutDir=.\Debug
# End Custom Macros

ALL : "$(OUTDIR)\All_Sortings.exe"


CLEAN :
	-@erase "$(INTDIR)\counting_sort.obj"
	-@erase "$(INTDIR)\vc60.idb"
	-@erase "$(INTDIR)\vc60.pdb"
	-@erase "$(OUTDIR)\All_Sortings.exe"
	-@erase "$(OUTDIR)\All_Sortings.ilk"
	-@erase "$(OUTDIR)\All_Sortings.pdb"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /MLd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /Fp"$(INTDIR)\All_Sortings.pch" /YX /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /GZ /c 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\All_Sortings.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /incremental:yes /pdb:"$(OUTDIR)\All_Sortings.pdb" /debug /machine:I386 /out:"$(OUTDIR)\All_Sortings.exe" /pdbtype:sept 
LINK32_OBJS= \
	"$(INTDIR)\counting_sort.obj"

"$(OUTDIR)\All_Sortings.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ENDIF 

.c{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<


!IF "$(NO_EXTERNAL_DEPS)" != "1"
!IF EXISTS("All_Sortings.dep")
!INCLUDE "All_Sortings.dep"
!ELSE 
!MESSAGE Warning: cannot find "All_Sortings.dep"
!ENDIF 
!ENDIF 


!IF "$(CFG)" == "All_Sortings - Win32 Release" || "$(CFG)" == "All_Sortings - Win32 Debug"
SOURCE=.\bubbleSort.c

!IF  "$(CFG)" == "All_Sortings - Win32 Release"


"$(INTDIR)\bubbleSort.obj" : $(SOURCE) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "All_Sortings - Win32 Debug"

!ENDIF 

SOURCE=.\counting_sort.c

"$(INTDIR)\counting_sort.obj" : $(SOURCE) "$(INTDIR)"


SOURCE=.\generic_bubble_sort.cpp

!IF  "$(CFG)" == "All_Sortings - Win32 Release"


"$(INTDIR)\generic_bubble_sort.obj" : $(SOURCE) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "All_Sortings - Win32 Debug"

!ENDIF 

SOURCE=.\heapSort.c

!IF  "$(CFG)" == "All_Sortings - Win32 Release"


"$(INTDIR)\heapSort.obj" : $(SOURCE) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "All_Sortings - Win32 Debug"

!ENDIF 

SOURCE=.\insertion_secondWay.c

!IF  "$(CFG)" == "All_Sortings - Win32 Release"


"$(INTDIR)\insertion_secondWay.obj" : $(SOURCE) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "All_Sortings - Win32 Debug"

!ENDIF 

SOURCE=.\insertionSort.c

!IF  "$(CFG)" == "All_Sortings - Win32 Release"


"$(INTDIR)\insertionSort.obj" : $(SOURCE) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "All_Sortings - Win32 Debug"

!ENDIF 

SOURCE=.\mergeSort.c

!IF  "$(CFG)" == "All_Sortings - Win32 Release"


"$(INTDIR)\mergeSort.obj" : $(SOURCE) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "All_Sortings - Win32 Debug"

!ENDIF 

SOURCE=.\quickSort.c

!IF  "$(CFG)" == "All_Sortings - Win32 Release"


"$(INTDIR)\quickSort.obj" : $(SOURCE) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "All_Sortings - Win32 Debug"

!ENDIF 

SOURCE=.\radixSort.c

!IF  "$(CFG)" == "All_Sortings - Win32 Release"


"$(INTDIR)\radixSort.obj" : $(SOURCE) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "All_Sortings - Win32 Debug"

!ENDIF 

SOURCE=.\selectionSort.c

!IF  "$(CFG)" == "All_Sortings - Win32 Release"


"$(INTDIR)\selectionSort.obj" : $(SOURCE) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "All_Sortings - Win32 Debug"

!ENDIF 

SOURCE=.\shakerSort.c

!IF  "$(CFG)" == "All_Sortings - Win32 Release"


"$(INTDIR)\shakerSort.obj" : $(SOURCE) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "All_Sortings - Win32 Debug"

!ENDIF 

SOURCE=.\shellSort.c

!IF  "$(CFG)" == "All_Sortings - Win32 Release"


"$(INTDIR)\shellSort.obj" : $(SOURCE) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "All_Sortings - Win32 Debug"

!ENDIF 


!ENDIF 

