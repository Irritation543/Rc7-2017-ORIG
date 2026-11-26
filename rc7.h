typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
float10
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef short    wchar_t;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef struct _s_HandlerType _s_HandlerType, *P_s_HandlerType;

typedef struct _s_HandlerType HandlerType;

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

typedef int ptrdiff_t;

struct TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
};

struct _s_HandlerType {
    uint adjectives;
    struct TypeDescriptor *pType;
    ptrdiff_t dispCatchObj;
    void *addressOfHandler;
};

typedef struct _s__RTTIBaseClassDescriptor _s__RTTIBaseClassDescriptor, *P_s__RTTIBaseClassDescriptor;

typedef struct _s__RTTIBaseClassDescriptor RTTIBaseClassDescriptor;

typedef struct PMD PMD, *PPMD;

typedef struct _s__RTTIClassHierarchyDescriptor _s__RTTIClassHierarchyDescriptor, *P_s__RTTIClassHierarchyDescriptor;

typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;

struct PMD {
    ptrdiff_t mdisp;
    ptrdiff_t pdisp;
    ptrdiff_t vdisp;
};

struct _s__RTTIBaseClassDescriptor {
    struct TypeDescriptor *pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    dword numContainedBases; // count of extended classes in BaseClassArray (RTTI 2)
    struct PMD where; // member displacement structure
    dword attributes; // bit flags
    RTTIClassHierarchyDescriptor *pClassHierarchyDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3) for class
};

struct _s__RTTIClassHierarchyDescriptor {
    dword signature;
    dword attributes; // bit flags
    dword numBaseClasses; // number of base classes (i.e. rtti1Count)
    RTTIBaseClassDescriptor **pBaseClassArray; // ref to BaseClassArray (RTTI 2)
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory:31;
    dword DataIsDirectory:1;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef struct _s_TryBlockMapEntry _s_TryBlockMapEntry, *P_s_TryBlockMapEntry;

typedef int __ehstate_t;

struct _s_TryBlockMapEntry {
    __ehstate_t tryLow;
    __ehstate_t tryHigh;
    __ehstate_t catchHigh;
    int nCatches;
    HandlerType *pHandlerArray;
};

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

typedef struct _s_ESTypeList _s_ESTypeList, *P_s_ESTypeList;

typedef struct _s_ESTypeList ESTypeList;

struct _s_FuncInfo {
    uint magicNumber_and_bbtFlags;
    __ehstate_t maxState;
    UnwindMapEntry *pUnwindMap;
    uint nTryBlocks;
    TryBlockMapEntry *pTryBlockMap;
    uint nIPMapEntries;
    void *pIPToStateMap;
    ESTypeList *pESTypeList;
    int EHFlags;
};

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    void (*action)(void);
};

struct _s_ESTypeList {
    int nCount;
    HandlerType *pTypeArray;
};

typedef struct DNameStatusNode DNameStatusNode, *PDNameStatusNode;

struct DNameStatusNode { // PlaceHolder Class Structure
};

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    struct TypeDescriptor *pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    RTTIClassHierarchyDescriptor *pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct pcharNode pcharNode, *PpcharNode;

struct pcharNode { // PlaceHolder Class Structure
};

typedef struct _s_FuncInfo FuncInfo;

typedef struct pairNode pairNode, *PpairNode;

struct pairNode { // PlaceHolder Class Structure
};

typedef ulonglong __uint64;

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

typedef struct pDNameNode pDNameNode, *PpDNameNode;

struct pDNameNode { // PlaceHolder Class Structure
};

typedef struct _cpinfo _cpinfo, *P_cpinfo;

typedef uint UINT;

typedef uchar BYTE;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef int BOOL;

typedef wchar_t WCHAR;

typedef WCHAR *LPWSTR;

typedef BOOL (*LOCALE_ENUMPROCW)(LPWSTR);

typedef struct _cpinfo *LPCPINFO;

typedef ulong DWORD;

typedef DWORD LCTYPE;

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef ulong ULONG_PTR;

typedef union _union_518 _union_518, *P_union_518;

typedef void *HANDLE;

typedef struct _struct_519 _struct_519, *P_struct_519;

typedef void *PVOID;

struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef void *LPVOID;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

typedef struct _SYSTEMTIME SYSTEMTIME;

typedef ushort WORD;

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

typedef enum _FINDEX_INFO_LEVELS {
    FindExInfoStandard=0,
    FindExInfoBasic=1,
    FindExInfoMaxInfoLevel=2
} _FINDEX_INFO_LEVELS;

typedef struct _TIME_ZONE_INFORMATION _TIME_ZONE_INFORMATION, *P_TIME_ZONE_INFORMATION;

typedef struct _TIME_ZONE_INFORMATION *LPTIME_ZONE_INFORMATION;

typedef long LONG;

struct _TIME_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[32];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[32];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
};

typedef struct _STARTUPINFOW _STARTUPINFOW, *P_STARTUPINFOW;

typedef BYTE *LPBYTE;

struct _STARTUPINFOW {
    DWORD cb;
    LPWSTR lpReserved;
    LPWSTR lpDesktop;
    LPWSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _STARTUPINFOW *LPSTARTUPINFOW;

typedef struct _WIN32_FIND_DATAA _WIN32_FIND_DATAA, *P_WIN32_FIND_DATAA;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

typedef char CHAR;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

struct _WIN32_FIND_DATAA {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    CHAR cFileName[260];
    CHAR cAlternateFileName[14];
};

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;

typedef RTL_CRITICAL_SECTION CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef DWORD (*PTHREAD_START_ROUTINE)(LPVOID);

typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

typedef struct _OVERLAPPED *LPOVERLAPPED;

typedef enum _FINDEX_SEARCH_OPS {
    FindExSearchNameMatch=0,
    FindExSearchLimitToDirectories=1,
    FindExSearchLimitToDevices=2,
    FindExSearchMaxSearchOp=3
} _FINDEX_SEARCH_OPS;

typedef enum _FINDEX_SEARCH_OPS FINDEX_SEARCH_OPS;

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef CHAR *LPSTR;

struct _STARTUPINFOA {
    DWORD cb;
    LPSTR lpReserved;
    LPSTR lpDesktop;
    LPSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _PROCESS_INFORMATION _PROCESS_INFORMATION, *P_PROCESS_INFORMATION;

struct _PROCESS_INFORMATION {
    HANDLE hProcess;
    HANDLE hThread;
    DWORD dwProcessId;
    DWORD dwThreadId;
};

typedef struct _WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;

typedef struct _STARTUPINFOA *LPSTARTUPINFOA;

typedef enum _FINDEX_INFO_LEVELS FINDEX_INFO_LEVELS;

typedef enum _GET_FILEEX_INFO_LEVELS {
    GetFileExInfoStandard=0,
    GetFileExMaxInfoLevel=1
} _GET_FILEEX_INFO_LEVELS;

typedef enum _GET_FILEEX_INFO_LEVELS GET_FILEEX_INFO_LEVELS;

typedef struct _PROCESS_INFORMATION *LPPROCESS_INFORMATION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT *PCONTEXT;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
};

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef CRITICAL_SECTION _Rmtx;

typedef struct _Ctypevec _Ctypevec, *P_Ctypevec;

struct _Ctypevec {
    uint _Page;
    short *_Table;
    int _Delfl;
    wchar_t *_LocaleName;
};

typedef longlong fpos_t;

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
};

typedef struct _iobuf FILE;

typedef struct _CONSOLE_READCONSOLE_CONTROL _CONSOLE_READCONSOLE_CONTROL, *P_CONSOLE_READCONSOLE_CONTROL;

typedef ulong ULONG;

struct _CONSOLE_READCONSOLE_CONTROL {
    ULONG nLength;
    ULONG nInitialChars;
    ULONG dwCtrlWakeupMask;
    ULONG dwControlKeyState;
};

typedef struct _CONSOLE_READCONSOLE_CONTROL *PCONSOLE_READCONSOLE_CONTROL;

typedef char *va_list;

typedef uint uintptr_t;

typedef uint UINT_PTR;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

typedef UINT_PTR WPARAM;

typedef long LONG_PTR;

typedef LONG_PTR LPARAM;

typedef UINT_PTR (*LPCCHOOKPROC)(HWND, UINT, WPARAM, LPARAM);

struct HWND__ {
    int unused;
};

typedef struct tagCHOOSECOLORA tagCHOOSECOLORA, *PtagCHOOSECOLORA;

typedef DWORD COLORREF;

typedef CHAR *LPCSTR;

struct tagCHOOSECOLORA {
    DWORD lStructSize;
    HWND hwndOwner;
    HWND hInstance;
    COLORREF rgbResult;
    COLORREF *lpCustColors;
    DWORD Flags;
    LPARAM lCustData;
    LPCCHOOKPROC lpfnHook;
    LPCSTR lpTemplateName;
};

typedef struct tagCHOOSECOLORA *LPCHOOSECOLORA;

typedef struct tagOFNA tagOFNA, *PtagOFNA;

typedef struct tagOFNA *LPOPENFILENAMEA;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

typedef UINT_PTR (*LPOFNHOOKPROC)(HWND, UINT, WPARAM, LPARAM);

struct tagOFNA {
    DWORD lStructSize;
    HWND hwndOwner;
    HINSTANCE hInstance;
    LPCSTR lpstrFilter;
    LPSTR lpstrCustomFilter;
    DWORD nMaxCustFilter;
    DWORD nFilterIndex;
    LPSTR lpstrFile;
    DWORD nMaxFile;
    LPSTR lpstrFileTitle;
    DWORD nMaxFileTitle;
    LPCSTR lpstrInitialDir;
    LPCSTR lpstrTitle;
    DWORD Flags;
    WORD nFileOffset;
    WORD nFileExtension;
    LPCSTR lpstrDefExt;
    LPARAM lCustData;
    LPOFNHOOKPROC lpfnHook;
    LPCSTR lpTemplateName;
    void *pvReserved;
    DWORD dwReserved;
    DWORD FlagsEx;
};

struct HINSTANCE__ {
    int unused;
};

typedef struct lconv lconv, *Plconv;

struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    wchar_t *_W_decimal_point;
    wchar_t *_W_thousands_sep;
    wchar_t *_W_int_curr_symbol;
    wchar_t *_W_currency_symbol;
    wchar_t *_W_mon_decimal_point;
    wchar_t *_W_mon_thousands_sep;
    wchar_t *_W_positive_sign;
    wchar_t *_W_negative_sign;
};

typedef uint size_t;

typedef ushort wint_t;

typedef struct threadlocaleinfostruct threadlocaleinfostruct, *Pthreadlocaleinfostruct;

typedef struct threadlocaleinfostruct *pthreadlocinfo;

typedef struct localerefcount localerefcount, *Plocalerefcount;

typedef struct localerefcount locrefcount;

typedef struct __lc_time_data __lc_time_data, *P__lc_time_data;

struct localerefcount {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
};

struct threadlocaleinfostruct {
    int refcount;
    uint lc_codepage;
    uint lc_collate_cp;
    uint lc_time_cp;
    locrefcount lc_category[6];
    int lc_clike;
    int mb_cur_max;
    int *lconv_intl_refcount;
    int *lconv_num_refcount;
    int *lconv_mon_refcount;
    struct lconv *lconv;
    int *ctype1_refcount;
    ushort *ctype1;
    ushort *pctype;
    uchar *pclmap;
    uchar *pcumap;
    struct __lc_time_data *lc_time_curr;
    wchar_t *locale_name[6];
};

struct __lc_time_data {
    char *wday_abbr[7];
    char *wday[7];
    char *month_abbr[12];
    char *month[12];
    char *ampm[2];
    char *ww_sdatefmt;
    char *ww_ldatefmt;
    char *ww_timefmt;
    int ww_caltype;
    int refcount;
    wchar_t *_W_wday_abbr[7];
    wchar_t *_W_wday[7];
    wchar_t *_W_month_abbr[12];
    wchar_t *_W_month[12];
    wchar_t *_W_ampm[2];
    wchar_t *_W_ww_sdatefmt;
    wchar_t *_W_ww_ldatefmt;
    wchar_t *_W_ww_timefmt;
    wchar_t *_W_ww_locale_name;
};

typedef long __time32_t;

typedef struct localeinfo_struct localeinfo_struct, *Plocaleinfo_struct;

typedef struct threadmbcinfostruct threadmbcinfostruct, *Pthreadmbcinfostruct;

typedef struct threadmbcinfostruct *pthreadmbcinfo;

struct threadmbcinfostruct {
    int refcount;
    int mbcodepage;
    int ismbcodepage;
    ushort mbulinfo[6];
    uchar mbctype[257];
    uchar mbcasemap[256];
    wchar_t *mblocalename;
};

struct localeinfo_struct {
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
};

typedef int errno_t;

typedef int intptr_t;

typedef struct localeinfo_struct *_locale_t;

typedef longlong __time64_t;

typedef size_t rsize_t;

typedef ushort wctype_t;

typedef struct tagMSG tagMSG, *PtagMSG;

typedef struct tagMSG MSG;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

typedef struct tagPOINT POINT;

struct tagPOINT {
    LONG x;
    LONG y;
};

struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
};

typedef struct tagWNDCLASSEXA tagWNDCLASSEXA, *PtagWNDCLASSEXA;

typedef struct tagWNDCLASSEXA WNDCLASSEXA;

typedef LONG_PTR LRESULT;

typedef LRESULT (*WNDPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ *HICON;

typedef HICON HCURSOR;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

typedef struct HBRUSH__ *HBRUSH;

struct HBRUSH__ {
    int unused;
};

struct HICON__ {
    int unused;
};

struct tagWNDCLASSEXA {
    UINT cbSize;
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCSTR lpszMenuName;
    LPCSTR lpszClassName;
    HICON hIconSm;
};

typedef struct tagMSG *LPMSG;

typedef struct basic_streambuf<char,std::char_traits<char>_> basic_streambuf<char,std::char_traits<char>_>, *Pbasic_streambuf<char,std::char_traits<char>_>;

struct basic_streambuf<char,std::char_traits<char>_> { // PlaceHolder Class Structure
};

typedef struct basic_filebuf<char,std::char_traits<char>_> basic_filebuf<char,std::char_traits<char>_>, *Pbasic_filebuf<char,std::char_traits<char>_>;

struct basic_filebuf<char,std::char_traits<char>_> { // PlaceHolder Class Structure
};

typedef struct basic_ifstream<char,std::char_traits<char>_> basic_ifstream<char,std::char_traits<char>_>, *Pbasic_ifstream<char,std::char_traits<char>_>;

struct basic_ifstream<char,std::char_traits<char>_> { // PlaceHolder Class Structure
};

typedef struct bad_exception bad_exception, *Pbad_exception;

struct bad_exception { // PlaceHolder Class Structure
};

typedef struct _Locimp _Locimp, *P_Locimp;

struct _Locimp { // PlaceHolder Class Structure
};

typedef struct _MEMORY_BASIC_INFORMATION _MEMORY_BASIC_INFORMATION, *P_MEMORY_BASIC_INFORMATION;

typedef ULONG_PTR SIZE_T;

struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    DWORD AllocationProtect;
    SIZE_T RegionSize;
    DWORD State;
    DWORD Protect;
    DWORD Type;
};

typedef double ULONGLONG;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

typedef double LONGLONG;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER, *P_IMAGE_SECTION_HEADER;

typedef union _union_226 _union_226, *P_union_226;

union _union_226 {
    DWORD PhysicalAddress;
    DWORD VirtualSize;
};

struct _IMAGE_SECTION_HEADER {
    BYTE Name[8];
    union _union_226 Misc;
    DWORD VirtualAddress;
    DWORD SizeOfRawData;
    DWORD PointerToRawData;
    DWORD PointerToRelocations;
    DWORD PointerToLinenumbers;
    WORD NumberOfRelocations;
    WORD NumberOfLinenumbers;
    DWORD Characteristics;
};

typedef struct _IMAGE_SECTION_HEADER *PIMAGE_SECTION_HEADER;

typedef WCHAR *PCNZWCH;

typedef union _SLIST_HEADER _SLIST_HEADER, *P_SLIST_HEADER;

typedef struct _struct_299 _struct_299, *P_struct_299;

typedef struct _SINGLE_LIST_ENTRY _SINGLE_LIST_ENTRY, *P_SINGLE_LIST_ENTRY;

typedef struct _SINGLE_LIST_ENTRY SINGLE_LIST_ENTRY;

struct _SINGLE_LIST_ENTRY {
    struct _SINGLE_LIST_ENTRY *Next;
};

struct _struct_299 {
    SINGLE_LIST_ENTRY Next;
    WORD Depth;
    WORD Sequence;
};

union _SLIST_HEADER {
    ULONGLONG Alignment;
    struct _struct_299 s;
};

typedef WCHAR *LPWCH;

typedef WCHAR *LPCWSTR;

typedef union _SLIST_HEADER *PSLIST_HEADER;

typedef struct _MEMORY_BASIC_INFORMATION *PMEMORY_BASIC_INFORMATION;

typedef LONG *PLONG;

typedef struct _SINGLE_LIST_ENTRY *PSINGLE_LIST_ENTRY;

typedef LARGE_INTEGER *PLARGE_INTEGER;

typedef DWORD ACCESS_MASK;

typedef short SHORT;

typedef DWORD LCID;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};

typedef ULONG_PTR DWORD_PTR;

typedef struct tagINITCOMMONCONTROLSEX tagINITCOMMONCONTROLSEX, *PtagINITCOMMONCONTROLSEX;

typedef struct tagINITCOMMONCONTROLSEX INITCOMMONCONTROLSEX;

struct tagINITCOMMONCONTROLSEX {
    DWORD dwSize;
    DWORD dwICC;
};

typedef LRESULT (*SUBCLASSPROC)(HWND, UINT, WPARAM, LPARAM, UINT_PTR, DWORD_PTR);

typedef struct HFONT__ HFONT__, *PHFONT__;

typedef struct HFONT__ *HFONT;

struct HFONT__ {
    int unused;
};

typedef struct tagPOINT *LPPOINT;

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

struct HBITMAP__ {
    int unused;
};

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef DWORD *LPDWORD;

typedef struct HDC__ HDC__, *PHDC__;

struct HDC__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ *HMENU;

struct HMENU__ {
    int unused;
};

typedef struct _FILETIME *LPFILETIME;

typedef int (*FARPROC)(void);

typedef struct HDC__ *HDC;

typedef WORD *LPWORD;

typedef struct HKEY__ *HKEY;

typedef HKEY *PHKEY;

typedef int INT;

typedef WORD ATOM;

typedef struct tagRECT *LPRECT;

typedef HANDLE HGLOBAL;

typedef BOOL *LPBOOL;

typedef void *HGDIOBJ;

typedef BYTE *PBYTE;

typedef void *LPCVOID;

typedef struct HBITMAP__ *HBITMAP;

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset:31;
    dword NameIsString:1;
};

typedef struct IMAGE_THUNK_DATA32 IMAGE_THUNK_DATA32, *PIMAGE_THUNK_DATA32;

struct IMAGE_THUNK_DATA32 {
    dword StartAddressOfRawData;
    dword EndAddressOfRawData;
    dword AddressOfIndex;
    dword AddressOfCallBacks;
    dword SizeOfZeroFill;
    dword Characteristics;
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

struct IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_8 IMAGE_RESOURCE_DIR_STRING_U_8, *PIMAGE_RESOURCE_DIR_STRING_U_8;

struct IMAGE_RESOURCE_DIR_STRING_U_8 {
    word Length;
    wchar16 NameString[4];
};

typedef struct IMAGE_BASE_RELOCATION IMAGE_BASE_RELOCATION, *PIMAGE_BASE_RELOCATION;

struct IMAGE_BASE_RELOCATION {
    dword VirtualAddress;
    dword SizeOfBlock;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef enum IMAGE_GUARD_FLAGS {
    IMAGE_GUARD_CF_INSTRUMENTED=256,
    IMAGE_GUARD_CFW_INSTRUMENTED=512,
    IMAGE_GUARD_CF_FUNCTION_TABLE_PRESENT=1024,
    IMAGE_GUARD_SECURITY_COOKIE_UNUSED=2048,
    IMAGE_GUARD_PROTECT_DELAYLOAD_IAT=4096,
    IMAGE_GUARD_DELAYLOAD_IAT_IN_ITS_OWN_SECTION=8192,
    IMAGE_GUARD_CF_EXPORT_SUPPRESSION_INFO_PRESENT=16384,
    IMAGE_GUARD_CF_ENABLE_EXPORT_SUPPRESSION=32768,
    IMAGE_GUARD_CF_LONGJUMP_TABLE_PRESENT=65536,
    IMAGE_GUARD_RF_INSTRUMENTED=131072,
    IMAGE_GUARD_RF_ENABLE=262144,
    IMAGE_GUARD_RF_STRICT=524288,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_1=268435456,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_2=536870912,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_4=1073741824,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_8=2147483648
} IMAGE_GUARD_FLAGS;

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct IMAGE_DIRECTORY_ENTRY_EXPORT IMAGE_DIRECTORY_ENTRY_EXPORT, *PIMAGE_DIRECTORY_ENTRY_EXPORT;

struct IMAGE_DIRECTORY_ENTRY_EXPORT {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    ImageBaseOffset32 Name;
    dword Base;
    dword NumberOfFunctions;
    dword NumberOfNames;
    ImageBaseOffset32 AddressOfFunctions;
    ImageBaseOffset32 AddressOfNames;
    ImageBaseOffset32 AddressOfNameOrdinals;
};

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY32 IMAGE_LOAD_CONFIG_DIRECTORY32, *PIMAGE_LOAD_CONFIG_DIRECTORY32;

struct IMAGE_LOAD_CONFIG_DIRECTORY32 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    dword DeCommitFreeBlockThreshold;
    dword DeCommitTotalFreeThreshold;
    pointer32 LockPrefixTable;
    dword MaximumAllocationSize;
    dword VirtualMemoryThreshold;
    dword ProcessHeapFlags;
    dword ProcessAffinityMask;
    word CsdVersion;
    word DependentLoadFlags;
    pointer32 EditList;
    pointer32 SecurityCookie;
    pointer32 SEHandlerTable;
    dword SEHandlerCount;
    pointer32 GuardCFCCheckFunctionPointer;
    pointer32 GuardCFDispatchFunctionPointer;
    pointer32 GuardCFFunctionTable;
    dword GuardCFFunctionCount;
    enum IMAGE_GUARD_FLAGS GuardFlags;
};

typedef LONG LSTATUS;

typedef ACCESS_MASK REGSAM;

typedef struct sockaddr sockaddr, *Psockaddr;

typedef ushort u_short;

struct sockaddr {
    u_short sa_family;
    char sa_data[14];
};

typedef struct WSAData WSAData, *PWSAData;

typedef struct WSAData WSADATA;

struct WSAData {
    WORD wVersion;
    WORD wHighVersion;
    char szDescription[257];
    char szSystemStatus[129];
    ushort iMaxSockets;
    ushort iMaxUdpDg;
    char *lpVendorInfo;
};

typedef UINT_PTR SOCKET;

typedef WSADATA *LPWSADATA;

typedef struct <lambda_b721fa326cdb32351d23dfa67958c160> <lambda_b721fa326cdb32351d23dfa67958c160>, *P<lambda_b721fa326cdb32351d23dfa67958c160>;

struct <lambda_b721fa326cdb32351d23dfa67958c160> { // PlaceHolder Structure
};

typedef struct DName DName, *PDName;

struct DName { // PlaceHolder Structure
};

typedef enum __acrt_lock_id {
} __acrt_lock_id;

typedef struct EHExceptionRecord EHExceptionRecord, *PEHExceptionRecord;

struct EHExceptionRecord { // PlaceHolder Structure
};

typedef enum __acrt_fp_class {
} __acrt_fp_class;

typedef struct <lambda_42d75b0848218ec137fa420c8ba9fdf9> <lambda_42d75b0848218ec137fa420c8ba9fdf9>, *P<lambda_42d75b0848218ec137fa420c8ba9fdf9>;

struct <lambda_42d75b0848218ec137fa420c8ba9fdf9> { // PlaceHolder Structure
};

typedef struct __crt_signal_action_t __crt_signal_action_t, *P__crt_signal_action_t;

struct __crt_signal_action_t { // PlaceHolder Structure
};

typedef struct <lambda_cf89b47920b5017557bfe891e78aca36> <lambda_cf89b47920b5017557bfe891e78aca36>, *P<lambda_cf89b47920b5017557bfe891e78aca36>;

struct <lambda_cf89b47920b5017557bfe891e78aca36> { // PlaceHolder Structure
};

typedef struct <lambda_70818de7b02deff9841e8b0962a60ed9> <lambda_70818de7b02deff9841e8b0962a60ed9>, *P<lambda_70818de7b02deff9841e8b0962a60ed9>;

struct <lambda_70818de7b02deff9841e8b0962a60ed9> { // PlaceHolder Structure
};

typedef struct <lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec> <lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec>, *P<lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec>;

struct <lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec> { // PlaceHolder Structure
};

typedef struct <lambda_978dc153c237d78434369da87b74ff60> <lambda_978dc153c237d78434369da87b74ff60>, *P<lambda_978dc153c237d78434369da87b74ff60>;

struct <lambda_978dc153c237d78434369da87b74ff60> { // PlaceHolder Structure
};

typedef enum Tokens {
} Tokens;

typedef struct __crt_locale_data __crt_locale_data, *P__crt_locale_data;

struct __crt_locale_data { // PlaceHolder Structure
};

typedef struct <lambda_11b4f7b0d3157825a5656a18eba1ae27> <lambda_11b4f7b0d3157825a5656a18eba1ae27>, *P<lambda_11b4f7b0d3157825a5656a18eba1ae27>;

struct <lambda_11b4f7b0d3157825a5656a18eba1ae27> { // PlaceHolder Structure
};

typedef struct <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>, *P<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>;

struct <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> { // PlaceHolder Structure
};

typedef struct <lambda_5056f36f92c185fae794536d1ce2027b> <lambda_5056f36f92c185fae794536d1ce2027b>, *P<lambda_5056f36f92c185fae794536d1ce2027b>;

struct <lambda_5056f36f92c185fae794536d1ce2027b> { // PlaceHolder Structure
};

typedef struct <lambda_f51fe5fd7c79a33db34fc9310f277369> <lambda_f51fe5fd7c79a33db34fc9310f277369>, *P<lambda_f51fe5fd7c79a33db34fc9310f277369>;

struct <lambda_f51fe5fd7c79a33db34fc9310f277369> { // PlaceHolder Structure
};

typedef struct DNameNode DNameNode, *PDNameNode;

struct DNameNode { // PlaceHolder Structure
};

typedef struct <lambda_e378711a6f6581bf7f0efd7cdf97f5d9> <lambda_e378711a6f6581bf7f0efd7cdf97f5d9>, *P<lambda_e378711a6f6581bf7f0efd7cdf97f5d9>;

struct <lambda_e378711a6f6581bf7f0efd7cdf97f5d9> { // PlaceHolder Structure
};

typedef struct <lambda_e69574bed617af4e071282c136b37893> <lambda_e69574bed617af4e071282c136b37893>, *P<lambda_e69574bed617af4e071282c136b37893>;

struct <lambda_e69574bed617af4e071282c136b37893> { // PlaceHolder Structure
};

typedef struct <lambda_d92cfe8357b99225085016881b624cb0> <lambda_d92cfe8357b99225085016881b624cb0>, *P<lambda_d92cfe8357b99225085016881b624cb0>;

struct <lambda_d92cfe8357b99225085016881b624cb0> { // PlaceHolder Structure
};

typedef struct <lambda_4a8533e2866a575feecb8298ce776b0d> <lambda_4a8533e2866a575feecb8298ce776b0d>, *P<lambda_4a8533e2866a575feecb8298ce776b0d>;

struct <lambda_4a8533e2866a575feecb8298ce776b0d> { // PlaceHolder Structure
};

typedef enum DNameStatus {
} DNameStatus;

typedef struct <lambda_be2b3da3f62db62e9dad5dc70221a656> <lambda_be2b3da3f62db62e9dad5dc70221a656>, *P<lambda_be2b3da3f62db62e9dad5dc70221a656>;

struct <lambda_be2b3da3f62db62e9dad5dc70221a656> { // PlaceHolder Structure
};

typedef struct __crt_lc_time_data __crt_lc_time_data, *P__crt_lc_time_data;

struct __crt_lc_time_data { // PlaceHolder Structure
};

typedef struct <lambda_293819299cbf9a7022e18b56a874bb5c> <lambda_293819299cbf9a7022e18b56a874bb5c>, *P<lambda_293819299cbf9a7022e18b56a874bb5c>;

struct <lambda_293819299cbf9a7022e18b56a874bb5c> { // PlaceHolder Structure
};

typedef struct <lambda_9cd88cf8ad10232537feb2133f08c833> <lambda_9cd88cf8ad10232537feb2133f08c833>, *P<lambda_9cd88cf8ad10232537feb2133f08c833>;

struct <lambda_9cd88cf8ad10232537feb2133f08c833> { // PlaceHolder Structure
};

typedef struct <lambda_9227be29367c048ad7fd93a717dcb1a1> <lambda_9227be29367c048ad7fd93a717dcb1a1>, *P<lambda_9227be29367c048ad7fd93a717dcb1a1>;

struct <lambda_9227be29367c048ad7fd93a717dcb1a1> { // PlaceHolder Structure
};

typedef struct Replicator Replicator, *PReplicator;

struct Replicator { // PlaceHolder Structure
};

typedef enum _crt_exit_cleanup_mode {
} _crt_exit_cleanup_mode;

typedef struct <lambda_61cee617f5178ae960314fd4d05640a0> <lambda_61cee617f5178ae960314fd4d05640a0>, *P<lambda_61cee617f5178ae960314fd4d05640a0>;

struct <lambda_61cee617f5178ae960314fd4d05640a0> { // PlaceHolder Structure
};

typedef struct <lambda_6dbb1268764f43b569ce7b67e331d33a> <lambda_6dbb1268764f43b569ce7b67e331d33a>, *P<lambda_6dbb1268764f43b569ce7b67e331d33a>;

struct <lambda_6dbb1268764f43b569ce7b67e331d33a> { // PlaceHolder Structure
};

typedef struct __crt_seh_guarded_call<void> __crt_seh_guarded_call<void>, *P__crt_seh_guarded_call<void>;

struct __crt_seh_guarded_call<void> { // PlaceHolder Structure
};

typedef struct __crt_unique_heap_ptr<char,struct___crt_internal_free_policy> __crt_unique_heap_ptr<char,struct___crt_internal_free_policy>, *P__crt_unique_heap_ptr<char,struct___crt_internal_free_policy>;

struct __crt_unique_heap_ptr<char,struct___crt_internal_free_policy> { // PlaceHolder Structure
};

typedef struct _Init_atexit _Init_atexit, *P_Init_atexit;

struct _Init_atexit { // PlaceHolder Structure
};

typedef struct <lambda_57c77e0e75d6a1e6f8ecaa6bd26c2518> <lambda_57c77e0e75d6a1e6f8ecaa6bd26c2518>, *P<lambda_57c77e0e75d6a1e6f8ecaa6bd26c2518>;

struct <lambda_57c77e0e75d6a1e6f8ecaa6bd26c2518> { // PlaceHolder Structure
};

typedef struct <lambda_ae55bdf541ad94d75914d381c370e64d> <lambda_ae55bdf541ad94d75914d381c370e64d>, *P<lambda_ae55bdf541ad94d75914d381c370e64d>;

struct <lambda_ae55bdf541ad94d75914d381c370e64d> { // PlaceHolder Structure
};

typedef struct _nlsversioninfo _nlsversioninfo, *P_nlsversioninfo;

struct _nlsversioninfo { // PlaceHolder Structure
};

typedef struct _s_CatchableType _s_CatchableType, *P_s_CatchableType;

struct _s_CatchableType { // PlaceHolder Structure
};

typedef enum _crt_argv_mode {
} _crt_argv_mode;

typedef struct <lambda_995298e7d72eb4c2aab26c0585b3abe5> <lambda_995298e7d72eb4c2aab26c0585b3abe5>, *P<lambda_995298e7d72eb4c2aab26c0585b3abe5>;

struct <lambda_995298e7d72eb4c2aab26c0585b3abe5> { // PlaceHolder Structure
};

typedef struct __acrt_stdio_stream_mode __acrt_stdio_stream_mode, *P__acrt_stdio_stream_mode;

struct __acrt_stdio_stream_mode { // PlaceHolder Structure
};

typedef enum SLD_STATUS {
} SLD_STATUS;

typedef struct <lambda_2af78c5f5901b1372d98f9ab3177dfa6> <lambda_2af78c5f5901b1372d98f9ab3177dfa6>, *P<lambda_2af78c5f5901b1372d98f9ab3177dfa6>;

struct <lambda_2af78c5f5901b1372d98f9ab3177dfa6> { // PlaceHolder Structure
};

typedef struct __crt_stdio_stream __crt_stdio_stream, *P__crt_stdio_stream;

struct __crt_stdio_stream { // PlaceHolder Structure
};

typedef struct <lambda_6978c1fb23f02e42e1d9e99668cc68aa> <lambda_6978c1fb23f02e42e1d9e99668cc68aa>, *P<lambda_6978c1fb23f02e42e1d9e99668cc68aa>;

struct <lambda_6978c1fb23f02e42e1d9e99668cc68aa> { // PlaceHolder Structure
};

typedef struct __crt_multibyte_data __crt_multibyte_data, *P__crt_multibyte_data;

struct __crt_multibyte_data { // PlaceHolder Structure
};

typedef struct __crt_seh_guarded_call<int> __crt_seh_guarded_call<int>, *P__crt_seh_guarded_call<int>;

struct __crt_seh_guarded_call<int> { // PlaceHolder Structure
};

typedef struct <lambda_800076c951b434888f4765a74a194fcc> <lambda_800076c951b434888f4765a74a194fcc>, *P<lambda_800076c951b434888f4765a74a194fcc>;

struct <lambda_800076c951b434888f4765a74a194fcc> { // PlaceHolder Structure
};

typedef struct <lambda_6250bd4b2a391816dd638c3bf72b0bcb> <lambda_6250bd4b2a391816dd638c3bf72b0bcb>, *P<lambda_6250bd4b2a391816dd638c3bf72b0bcb>;

struct <lambda_6250bd4b2a391816dd638c3bf72b0bcb> { // PlaceHolder Structure
};

typedef struct __acrt_ptd __acrt_ptd, *P__acrt_ptd;

struct __acrt_ptd { // PlaceHolder Structure
};

typedef struct <lambda_a463b7b0560cfcaf9b17f27c6ef46564> <lambda_a463b7b0560cfcaf9b17f27c6ef46564>, *P<lambda_a463b7b0560cfcaf9b17f27c6ef46564>;

struct <lambda_a463b7b0560cfcaf9b17f27c6ef46564> { // PlaceHolder Structure
};

typedef struct __crt_seh_guarded_call<unsigned_int> __crt_seh_guarded_call<unsigned_int>, *P__crt_seh_guarded_call<unsigned_int>;

struct __crt_seh_guarded_call<unsigned_int> { // PlaceHolder Structure
};

typedef struct EHRegistrationNode EHRegistrationNode, *PEHRegistrationNode;

struct EHRegistrationNode { // PlaceHolder Structure
};

typedef struct <lambda_eee62cb4a147bfbb98180ad682ce6e17> <lambda_eee62cb4a147bfbb98180ad682ce6e17>, *P<lambda_eee62cb4a147bfbb98180ad682ce6e17>;

struct <lambda_eee62cb4a147bfbb98180ad682ce6e17> { // PlaceHolder Structure
};

typedef struct <lambda_b51c0495177f500e782686251704ae76> <lambda_b51c0495177f500e782686251704ae76>, *P<lambda_b51c0495177f500e782686251704ae76>;

struct <lambda_b51c0495177f500e782686251704ae76> { // PlaceHolder Structure
};

typedef struct <lambda_275893d493268fdec8709772e3fcec0e> <lambda_275893d493268fdec8709772e3fcec0e>, *P<lambda_275893d493268fdec8709772e3fcec0e>;

struct <lambda_275893d493268fdec8709772e3fcec0e> { // PlaceHolder Structure
};

typedef struct <lambda_4e60a939b0d047cfe11ddc22648dfba9> <lambda_4e60a939b0d047cfe11ddc22648dfba9>, *P<lambda_4e60a939b0d047cfe11ddc22648dfba9>;

struct <lambda_4e60a939b0d047cfe11ddc22648dfba9> { // PlaceHolder Structure
};

typedef struct <lambda_ccea11b5727ccf69be64f5f5d9a08d9f> <lambda_ccea11b5727ccf69be64f5f5d9a08d9f>, *P<lambda_ccea11b5727ccf69be64f5f5d9a08d9f>;

struct <lambda_ccea11b5727ccf69be64f5f5d9a08d9f> { // PlaceHolder Structure
};

typedef enum _crt_exit_return_mode {
} _crt_exit_return_mode;

typedef struct __crt_locale_pointers __crt_locale_pointers, *P__crt_locale_pointers;

struct __crt_locale_pointers { // PlaceHolder Structure
};

typedef struct <lambda_ec61778202f4f5fc7e7711acc23c3bca> <lambda_ec61778202f4f5fc7e7711acc23c3bca>, *P<lambda_ec61778202f4f5fc7e7711acc23c3bca>;

struct <lambda_ec61778202f4f5fc7e7711acc23c3bca> { // PlaceHolder Structure
};

typedef struct <lambda_4f2c1eaeead2a5fc776db5b62ea0fb9b> <lambda_4f2c1eaeead2a5fc776db5b62ea0fb9b>, *P<lambda_4f2c1eaeead2a5fc776db5b62ea0fb9b>;

struct <lambda_4f2c1eaeead2a5fc776db5b62ea0fb9b> { // PlaceHolder Structure
};

typedef struct <lambda_3a2f1c4b88a94fdfdc7bccff06592946> <lambda_3a2f1c4b88a94fdfdc7bccff06592946>, *P<lambda_3a2f1c4b88a94fdfdc7bccff06592946>;

struct <lambda_3a2f1c4b88a94fdfdc7bccff06592946> { // PlaceHolder Structure
};

typedef struct _LocaleUpdate _LocaleUpdate, *P_LocaleUpdate;

struct _LocaleUpdate { // PlaceHolder Structure
};

typedef struct __crt_unique_heap_ptr<char,__crt_internal_free_policy> __crt_unique_heap_ptr<char,__crt_internal_free_policy>, *P__crt_unique_heap_ptr<char,__crt_internal_free_policy>;

struct __crt_unique_heap_ptr<char,__crt_internal_free_policy> { // PlaceHolder Structure
};

typedef struct _timespec64 _timespec64, *P_timespec64;

struct _timespec64 { // PlaceHolder Structure
};

typedef struct __crt_seh_guarded_call<bool> __crt_seh_guarded_call<bool>, *P__crt_seh_guarded_call<bool>;

struct __crt_seh_guarded_call<bool> { // PlaceHolder Structure
};

typedef struct <lambda_b2ea41f6bbb362cd97d94c6828d90b61> <lambda_b2ea41f6bbb362cd97d94c6828d90b61>, *P<lambda_b2ea41f6bbb362cd97d94c6828d90b61>;

struct <lambda_b2ea41f6bbb362cd97d94c6828d90b61> { // PlaceHolder Structure
};

typedef struct <lambda_123407a5e2ac06da108355a851863b7a> <lambda_123407a5e2ac06da108355a851863b7a>, *P<lambda_123407a5e2ac06da108355a851863b7a>;

struct <lambda_123407a5e2ac06da108355a851863b7a> { // PlaceHolder Structure
};

typedef struct _HeapManager _HeapManager, *P_HeapManager;

struct _HeapManager { // PlaceHolder Structure
};

typedef struct UnDecorator UnDecorator, *PUnDecorator;

struct UnDecorator { // PlaceHolder Structure
};

typedef struct _strflt _strflt, *P_strflt;

struct _strflt { // PlaceHolder Structure
};

typedef enum function_id {
} function_id;

typedef enum module_id {
} module_id;

typedef struct _Yarn<char> _Yarn<char>, *P_Yarn<char>;

struct _Yarn<char> { // PlaceHolder Structure
};

typedef struct _Locinfo _Locinfo, *P_Locinfo;

struct _Locinfo { // PlaceHolder Structure
};

typedef struct _Facet_base _Facet_base, *P_Facet_base;

struct _Facet_base { // PlaceHolder Structure
};

typedef struct ios_base ios_base, *Pios_base;

struct ios_base { // PlaceHolder Structure
};

typedef struct _Lockit _Lockit, *P_Lockit;

struct _Lockit { // PlaceHolder Structure
};

typedef struct _Fac_node _Fac_node, *P_Fac_node;

struct _Fac_node { // PlaceHolder Structure
};

typedef enum event {
} event;

typedef struct file_options file_options, *Pfile_options;

struct file_options { // PlaceHolder Structure
};

typedef struct dual_state_global<char**> dual_state_global<char**>, *Pdual_state_global<char**>;

struct dual_state_global<char**> { // PlaceHolder Structure
};

typedef struct write_result write_result, *Pwrite_result;

struct write_result { // PlaceHolder Structure
};

typedef struct stream_output_adapter<char> stream_output_adapter<char>, *Pstream_output_adapter<char>;

struct stream_output_adapter<char> { // PlaceHolder Structure
};

typedef struct string_output_adapter<char> string_output_adapter<char>, *Pstring_output_adapter<char>;

struct string_output_adapter<char> { // PlaceHolder Structure
};

typedef struct common_data<char> common_data<char>, *Pcommon_data<char>;

struct common_data<char> { // PlaceHolder Structure
};

typedef struct output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_> output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>, *Poutput_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>;

struct output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_> { // PlaceHolder Structure
};

typedef struct output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_> output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>, *Poutput_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>;

struct output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_> { // PlaceHolder Structure
};

typedef enum length_modifier {
} length_modifier;

typedef struct formatting_buffer formatting_buffer, *Pformatting_buffer;

struct formatting_buffer { // PlaceHolder Structure
};

typedef struct output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_> output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>, *Poutput_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>;

struct output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_> { // PlaceHolder Structure
};

typedef enum floating_point_parse_result {
} floating_point_parse_result;

typedef struct c_string_character_source<char> c_string_character_source<char>, *Pc_string_character_source<char>;

struct c_string_character_source<char> { // PlaceHolder Structure
};

typedef struct big_integer big_integer, *Pbig_integer;

struct big_integer { // PlaceHolder Structure
};

typedef struct floating_point_string floating_point_string, *Pfloating_point_string;

struct floating_point_string { // PlaceHolder Structure
};

typedef struct c_string_character_source<wchar_t> c_string_character_source<wchar_t>, *Pc_string_character_source<wchar_t>;

struct c_string_character_source<wchar_t> { // PlaceHolder Structure
};

typedef struct floating_point_value floating_point_value, *Pfloating_point_value;

struct floating_point_value { // PlaceHolder Structure
};

typedef int (*_onexit_t)(void);




undefined4 * __cdecl FUN_00401690(undefined4 *param_1,byte *param_2,int param_3);
undefined4 * __cdecl FUN_00401990(undefined4 *param_1,undefined4 *param_2);
undefined4 __fastcall FUN_00401c90(undefined4 param_1);
undefined1 * __thiscall FUN_00401ca0(void *this,uint *param_1);
void __fastcall FUN_00401cf0(undefined4 *param_1);
void __thiscall FUN_00401d30(void *this,uint *param_1);
void __thiscall FUN_00401da0(void *this,int param_1,size_t param_2,char param_3);
void __thiscall FUN_00401df0(void *this,uint param_1);
undefined * Catch@00401e76(void);
void FUN_00401ead(void);
void Catch@00401f2a(void);
void __cdecl FUN_00401f70(void *param_1,uint param_2,uint param_3);
bool __thiscall FUN_00401fd0(void *this,uint param_1,char param_2);
void __thiscall FUN_00402040(void *this,char param_1,uint param_2);
void FUN_004020a0(uint param_1);
int * __thiscall FUN_00402100(void *this,uint param_1);
uint * __thiscall FUN_004021a0(void *this,uint *param_1,uint param_2,uint param_3);
uint * __thiscall FUN_004022b0(void *this,uint *param_1,uint param_2);
uint __cdecl FUN_004023b0(byte *param_1,byte *param_2,uint param_3);
void FUN_00402420(void *param_1,uint param_2);
int * __thiscall FUN_00402470(void *this,uint param_1);
undefined8 __thiscall FUN_004024b0(void *this,uint param_1,uint param_2);
uint __thiscall FUN_00402550(void *this,byte *param_1,uint param_2,uint param_3);
int __cdecl Disasm(int *param_1);
undefined * BeaEngineVersion(void);
undefined * BeaEngineRevision(void);
void __cdecl FUN_004026f0(char *param_1,int param_2);
void __cdecl FUN_004027c0(int param_1,int param_2,int param_3);
void __cdecl FUN_00402b50(int param_1,int param_2);
void __cdecl switchD_0040276b::caseD_0(char *param_1,int param_2);
void __cdecl switchD_0040276b::caseD_5(char *param_1,int param_2);
void __cdecl switchD_0040277f::caseD_0(char *param_1,int param_2);
void __cdecl switchD_004027b5::caseD_0(int param_1,int param_2);
void __cdecl FUN_00407ee0(int param_1);
void __cdecl FUN_00407f40(int param_1);
void __cdecl FUN_004080c0(int param_1);
void __cdecl FUN_00408100(int param_1);
void __cdecl FUN_004082a0(int param_1);
void __cdecl FUN_00408380(int param_1);
void __cdecl FUN_004083d0(int param_1);
void __cdecl FUN_00408420(int param_1);
void __cdecl FUN_00408480(int param_1);
void __cdecl FUN_004084c0(int param_1);
void __cdecl FUN_00408550(int param_1);
void __cdecl FUN_00408590(int param_1);
void __cdecl FUN_00408650(int param_1);
void __cdecl FUN_00408730(int param_1);
undefined4 __cdecl FUN_004089f0(uint param_1,int param_2);
void __cdecl FUN_00408a40(int *param_1,uint param_2,int param_3,int param_4);
int __cdecl FUN_00408a80(int param_1,char *param_2,char *param_3);
void __cdecl FUN_00408bb0(int param_1);
void __cdecl FUN_00409620(int param_1);
undefined4 __cdecl FUN_00409ab0(int *param_1);
void __cdecl FUN_00409c90(int param_1,int param_2);
void __cdecl FUN_00409cc0(int param_1);
void __cdecl FUN_0040a020(int param_1);
void __cdecl FUN_0040a300(int param_1);
void __cdecl FUN_0040a380(int param_1);
void __cdecl FUN_0040a470(int param_1);
void __cdecl FUN_0040a810(int param_1);
void __cdecl FUN_0040a910(int param_1);
void __cdecl switchD_0040aac8::caseD_0(int param_1);
void __cdecl FUN_0040ab60(int param_1);
void __cdecl FUN_0040acd0(int param_1);
void __cdecl FUN_0040afb0(int param_1);
void __cdecl FUN_0040b050(int param_1);
void __cdecl FUN_0040b0b0(int param_1);
void __cdecl FUN_0040b150(int param_1);
void __cdecl FUN_0040b1b0(int param_1);
void __cdecl FUN_0040b210(int param_1);
void __cdecl FUN_0040b270(int param_1);
void __cdecl FUN_0040b2d0(int param_1);
void __cdecl FUN_0040b330(int param_1);
void __cdecl FUN_0040b3d0(int param_1);
void __cdecl FUN_0040b430(int param_1);
void __cdecl FUN_0040b4d0(int param_1);
void __cdecl FUN_0040b530(int param_1);
void __cdecl FUN_0040b5d0(int param_1);
void __cdecl FUN_0040b630(int param_1);
void __cdecl FUN_0040b690(int param_1);
void __cdecl FUN_0040b6f0(int param_1);
void __cdecl FUN_0040b790(int param_1);
void __cdecl FUN_0040b8e0(int param_1);
void __cdecl FUN_0040ba70(int param_1);
void __cdecl FUN_0040bb70(int param_1);
void __cdecl FUN_0040bc80(int param_1);
void __cdecl FUN_0040c810(int param_1);
void __cdecl FUN_0040c860(int param_1);
void __cdecl FUN_0040c8b0(int param_1);
void __cdecl FUN_0040c910(int param_1);
void __cdecl FUN_0040c970(int param_1);
void __cdecl FUN_0040c9d0(int param_1);
void __cdecl FUN_0040cb10(int param_1);
void __cdecl FUN_0040d0b0(int param_1);
void __cdecl FUN_0040d100(int param_1);
void __cdecl FUN_0040d150(int param_1);
void __cdecl FUN_0040d1a0(int param_1);
void __cdecl FUN_0040d1f0(int param_1);
void __cdecl FUN_0040d240(int param_1);
void __cdecl FUN_0040d290(int param_1);
void __cdecl FUN_0040d2e0(int param_1);
void __cdecl FUN_0040d330(int param_1);
void __cdecl FUN_0040d380(int param_1);
void __cdecl FUN_0040d3d0(int param_1);
void __cdecl FUN_0040d420(int param_1);
void __cdecl FUN_0040d470(int param_1);
void __cdecl FUN_0040d4c0(int param_1);
void __cdecl FUN_0040d510(int param_1);
void __cdecl FUN_0040d560(int param_1);
void __cdecl FUN_0040d5b0(int param_1);
void __cdecl FUN_0040d650(int param_1);
void __cdecl FUN_0040d6b0(int param_1);
void __cdecl FUN_0040d740(int param_1);
void __cdecl FUN_0040d790(int param_1);
void __cdecl FUN_0040d820(int param_1);
void __cdecl FUN_0040d870(int param_1);
void __cdecl FUN_0040d8c0(int param_1);
void __cdecl FUN_0040deb0(int param_1);
void __cdecl FUN_0040e010(int param_1);
void __cdecl FUN_0040e170(int param_1);
void __cdecl FUN_0040e2d0(int param_1);
void __cdecl FUN_0040e430(int param_1);
void __cdecl FUN_0040e590(int param_1);
void __cdecl FUN_0040e6f0(int param_1);
void __cdecl FUN_0040e850(int param_1);
void __cdecl FUN_0040e9b0(int param_1);
void __cdecl FUN_0040eaf0(int param_1);
void __cdecl FUN_0040ec40(int param_1);
void __cdecl FUN_0040ed90(int param_1);
void __cdecl FUN_0040eee0(int param_1);
void __cdecl FUN_0040f030(int param_1);
void __cdecl FUN_0040f180(int param_1);
void __cdecl FUN_0040f2d0(int param_1);
void __cdecl FUN_0040f420(int param_1);
void __cdecl FUN_0040f600(int param_1);
void __cdecl FUN_0040f6c0(int param_1);
void __cdecl FUN_0040f9a0(int param_1);
void __cdecl FUN_0040fa90(int param_1);
void __cdecl FUN_0040fbf0(int param_1);
void __cdecl FUN_0040fdc0(int param_1);
void __cdecl FUN_0040fe10(int param_1);
void __cdecl FUN_0040ffc0(int param_1);
void __cdecl FUN_00410130(int param_1);
void __cdecl FUN_00410410(int param_1);
void __cdecl FUN_004106f0(int param_1);
void __cdecl FUN_00410b50(int param_1);
void __cdecl FUN_00410cc0(int param_1);
void __cdecl FUN_00410fa0(int param_1);
void __cdecl FUN_00411280(int param_1);
void __cdecl FUN_004116e0(int param_1);
void __cdecl FUN_004118f0(int param_1);
void __cdecl FUN_00411b10(int param_1);
void __cdecl FUN_00411d20(int param_1);
void __cdecl FUN_00411f30(int param_1);
void __cdecl FUN_00412180(int param_1);
void __cdecl FUN_00412390(int param_1);
void __cdecl FUN_004125a0(int param_1);
void __cdecl FUN_004127b0(int param_1);
void __cdecl FUN_00412a00(int param_1);
void __cdecl FUN_00412ea0(int param_1);
void __cdecl FUN_004130b0(int param_1);
void __cdecl FUN_004132c0(int param_1);
void __cdecl FUN_004134d0(int param_1);
void __cdecl FUN_004136e0(int param_1);
void __cdecl FUN_004138f0(int param_1);
void __cdecl FUN_00413b50(int param_1);
void __cdecl FUN_00413d40(int param_1);
void __cdecl FUN_00413f00(int param_1);
void __cdecl FUN_004140b0(int param_1);
void __cdecl FUN_00414100(int param_1);
void __cdecl FUN_004142f0(int param_1);
void __cdecl FUN_00414370(int param_1);
void __cdecl FUN_00414780(int param_1);
void __cdecl FUN_00414af0(int param_1);
void __cdecl FUN_00414ca0(int param_1);
void __cdecl FUN_00414d80(int param_1);
void __cdecl FUN_00414e30(int param_1);
void __cdecl FUN_00414ee0(int param_1);
void __cdecl FUN_00414f90(int param_1);
void __cdecl FUN_00415040(int param_1);
void __cdecl FUN_004150e0(int param_1);
void __cdecl FUN_00415b70(int param_1);
void __cdecl FUN_00415c70(int param_1);
void __cdecl FUN_00415d70(int param_1);
void __cdecl FUN_00415e70(int param_1);
void __cdecl FUN_00415f70(int param_1);
void __cdecl FUN_00416070(int param_1);
void __cdecl FUN_00416170(int param_1);
void __cdecl FUN_004179f0(int param_1);
void __cdecl FUN_00417a70(int param_1);
void __cdecl FUN_00417cb0(int param_1);
void __cdecl FUN_00417d20(int param_1);
void __cdecl FUN_00417d90(int param_1);
void __cdecl FUN_00417e20(int param_1);
void __cdecl FUN_00417e70(int param_1);
void __cdecl FUN_00417f00(int param_1);
void __cdecl FUN_00417f50(int param_1);
void __cdecl FUN_00417fa0(int param_1);
void __cdecl FUN_004184f0(int param_1);
void __cdecl FUN_00419070(int param_1);
void __cdecl FUN_00419130(int param_1);
void __cdecl FUN_004191f0(int param_1);
void __cdecl FUN_004192b0(int param_1);
void __cdecl FUN_00419370(int param_1);
void __cdecl FUN_0041a020(int param_1);
void __cdecl FUN_0041a0e0(int param_1);
void __cdecl FUN_0041a1a0(int param_1);
void __cdecl FUN_0041a260(int param_1);
void __cdecl FUN_0041a320(int param_1);
void __cdecl FUN_0041a3e0(int param_1);
void __cdecl FUN_0041a670(int param_1);
void __cdecl FUN_0041a860(int param_1);
void __cdecl FUN_0041a960(int param_1);
void __cdecl FUN_0041ab40(int param_1);
void __cdecl FUN_0041b430(int param_1);
void __cdecl FUN_0041b4d0(int param_1);
void __cdecl FUN_0041b530(int param_1);
void __cdecl FUN_0041b5d0(int param_1);
void __cdecl FUN_0041b630(int param_1);
void __cdecl FUN_0041b690(int param_1);
void __cdecl FUN_0041b6f0(int param_1);
void __cdecl FUN_0041b770(int param_1);
void __cdecl FUN_0041b7f0(int param_1);
void __cdecl FUN_0041b870(int param_1);
void __cdecl FUN_0041b8f0(int param_1);
void __cdecl FUN_0041b970(int param_1);
void __cdecl FUN_0041b9f0(int param_1);
void __cdecl FUN_0041ba70(int param_1);
void __cdecl FUN_0041baf0(int param_1);
void __cdecl FUN_0041bb70(int param_1);
void __cdecl FUN_0041bbf0(int param_1);
void __cdecl FUN_0041bc70(int param_1);
void __cdecl FUN_0041bcf0(int param_1);
void __cdecl FUN_0041bd70(int param_1);
void __cdecl FUN_0041bdf0(int param_1);
void __cdecl FUN_0041be70(int param_1);
void __cdecl FUN_0041bef0(int param_1);
void __cdecl FUN_0041bfd0(int param_1);
void __cdecl FUN_0041c060(int param_1);
void __cdecl FUN_0041c140(int param_1);
void __cdecl FUN_0041c230(int param_1);
void __cdecl FUN_0041c290(int param_1);
void __cdecl FUN_0041c2f0(int param_1);
void __cdecl FUN_0041c390(int param_1);
void __cdecl FUN_0041c3f0(int param_1);
void __cdecl FUN_0041c490(int param_1);
void __cdecl FUN_0041c4f0(int param_1);
void __cdecl FUN_0041c540(int param_1);
void __cdecl FUN_0041c590(int param_1);
void __cdecl FUN_0041c620(int param_1);
void __cdecl FUN_0041c780(int param_1);
void __cdecl FUN_0041c7d0(int param_1);
void __cdecl FUN_0041c8e0(int param_1);
void __cdecl FUN_0041c980(int param_1);
void __cdecl FUN_0041c9e0(int param_1);
void __cdecl FUN_0041d810(int param_1);
void __cdecl FUN_0041d930(int param_1);
void __cdecl FUN_0041d990(int param_1);
void __cdecl FUN_0041d9f0(int param_1);
void __cdecl FUN_0041da90(int param_1);
void __cdecl FUN_0041daf0(int param_1);
void __cdecl FUN_0041db90(int param_1);
void __cdecl FUN_0041de60(int param_1);
void __cdecl FUN_0041e090(int param_1);
void __cdecl FUN_0041e2c0(int param_1);
void __cdecl FUN_0041e440(int param_1);
void __cdecl FUN_0041e5c0(int param_1);
void __cdecl FUN_0041e7c0(int param_1);
void __cdecl FUN_0041e9b0(int param_1);
void __cdecl FUN_0041eb90(int param_1);
void __cdecl FUN_0041ed70(int param_1);
void __cdecl FUN_0041eff0(int param_1);
void __cdecl FUN_0041f360(int param_1);
void __cdecl FUN_0041f470(int param_1);
void __cdecl FUN_0041f7b0(int param_1);
void __cdecl FUN_0041fa50(int param_1);
void __cdecl FUN_00420150(int param_1);
void __cdecl FUN_00420260(int param_1);
void __cdecl FUN_00421230(int param_1);
void __cdecl FUN_00421690(int param_1);
void __cdecl FUN_004219e0(int param_1);
void __cdecl FUN_00421fa0(int param_1);
void __cdecl FUN_00422990(int param_1);
void __cdecl FUN_00422ee0(int param_1);
void __cdecl FUN_00423590(int param_1);
void __cdecl FUN_00423b60(int param_1);
void __cdecl FUN_004240d0(int param_1);
void __cdecl FUN_00424690(int param_1);
void __cdecl FUN_00424c20(int param_1);
void __cdecl FUN_00424da0(int param_1);
void __cdecl FUN_00424ed0(int param_1);
void __cdecl FUN_00425020(int param_1);
void __cdecl FUN_00425170(int param_1);
void __cdecl FUN_00425600(int param_1);
void __cdecl FUN_004256f0(int param_1);
void __cdecl FUN_004257e0(int param_1);
void __cdecl FUN_004258d0(int param_1);
void __cdecl FUN_004259d0(int param_1);
void __cdecl FUN_00425ad0(int param_1);
void __cdecl FUN_00425bb0(int param_1);
void __cdecl FUN_00425c90(int param_1);
void __cdecl FUN_00425d80(int param_1);
void __cdecl FUN_00425e70(int param_1);
void __cdecl FUN_00425f70(int param_1);
void __cdecl FUN_00426070(int param_1);
void __cdecl FUN_00426160(int param_1);
void __cdecl FUN_00426260(int param_1);
void __cdecl FUN_00426360(int param_1);
void __cdecl FUN_00426460(int param_1);
void __cdecl FUN_00426560(int param_1);
void __cdecl FUN_00426660(int param_1);
void __cdecl FUN_00426760(int param_1);
void __cdecl FUN_00426860(int param_1);
void __cdecl FUN_00426960(int param_1);
void __cdecl FUN_00426a60(int param_1);
void __cdecl FUN_00426b60(int param_1);
void __cdecl FUN_00426c70(int param_1);
void __cdecl FUN_00426d80(int param_1);
void __cdecl FUN_00426e90(int param_1);
void __cdecl FUN_00426fa0(int param_1);
void __cdecl FUN_004270b0(int param_1);
void __cdecl FUN_004271c0(int param_1);
void __cdecl FUN_004272d0(int param_1);
void __cdecl FUN_004273e0(int param_1);
void __cdecl FUN_004274f0(int param_1);
void __cdecl FUN_00427600(int param_1);
void __cdecl FUN_00427700(int param_1);
void __cdecl FUN_00427800(int param_1);
void __cdecl FUN_00427900(int param_1);
void __cdecl FUN_00427a00(int param_1);
void __cdecl FUN_00427b10(int param_1);
void __cdecl FUN_00427c30(int param_1);
void __cdecl FUN_00427d50(int param_1);
void __cdecl FUN_00427e70(int param_1);
void __cdecl FUN_00427f90(int param_1);
void __cdecl FUN_004280b0(int param_1);
void __cdecl FUN_004281d0(int param_1);
void __cdecl FUN_004282d0(int param_1);
void __cdecl FUN_00428700(int param_1);
void __cdecl FUN_004289e0(int param_1);
void __cdecl FUN_00428c40(int param_1);
void __cdecl FUN_0042bf10(int param_1);
void __cdecl FUN_0042bfc0(int param_1);
void __cdecl FUN_0042c0a0(int param_1);
void __cdecl FUN_0042c1e0(int param_1);
void __cdecl FUN_0042c320(int param_1);
void __cdecl FUN_0042c450(int param_1);
void __cdecl FUN_0042c5b0(int param_1);
void __cdecl FUN_0042c9c0(int param_1);
void __cdecl FUN_0042cca0(int param_1);
void __cdecl FUN_0042cd40(int param_1);
void __cdecl FUN_0042cf40(int param_1);
void __cdecl FUN_0042cfe0(int param_1);
void __cdecl FUN_0042d0e0(int param_1);
void __cdecl FUN_0042d270(int param_1);
void __cdecl FUN_0042d400(int param_1);
void __cdecl FUN_0042d4a0(int param_1);
void __cdecl FUN_0042d540(int param_1);
void __cdecl FUN_0042d5e0(int param_1);
void __cdecl FUN_0042d6e0(int param_1);
void __cdecl FUN_0042d780(int param_1);
void __cdecl FUN_0042d8c0(int param_1);
void __cdecl FUN_0042da80(int param_1);
void __cdecl FUN_0042db60(int param_1);
void __cdecl FUN_0042dc80(int param_1);
void __cdecl FUN_0042ddf0(int param_1);
void __cdecl FUN_0042e0a0(int param_1);
void __cdecl FUN_0042e210(int param_1);
void __cdecl FUN_0042e360(int param_1);
void __cdecl FUN_0042e460(int param_1);
void __cdecl FUN_0042e560(int param_1);
void __cdecl FUN_0042f550(int param_1);
void __cdecl FUN_0042fff0(int param_1);
void __cdecl FUN_00430310(int param_1);
void __cdecl FUN_004303f0(int param_1);
void __cdecl FUN_00430750(int param_1);
void __cdecl FUN_00430830(int param_1);
void __cdecl FUN_00430b50(int param_1);
void __cdecl FUN_004315f0(int param_1);
void __cdecl FUN_00431780(int param_1);
void __cdecl FUN_00431870(int param_1);
void __cdecl FUN_004318c0(int param_1);
void __cdecl switchD_0040aa68::caseD_0(int param_1);
void __cdecl FUN_00431a80(int param_1);
void __cdecl FUN_00432020(int param_1);
void __cdecl FUN_004321d0(int param_1);
void __cdecl FUN_00432280(int param_1);
void __cdecl FUN_00432330(int param_1);
void __cdecl FUN_004328e0(int param_1);
void __cdecl FUN_00432980(int param_1);
void __cdecl FUN_00432ac0(int param_1);
void __cdecl FUN_00432c20(int param_1);
void __cdecl FUN_00432db0(int param_1);
void __cdecl FUN_00432e60(int param_1);
void __cdecl FUN_00432f00(int param_1);
void __cdecl FUN_00432fa0(int param_1);
undefined * FUN_00433a60(void);
int __cdecl FUN_00433a70(char *param_1,char *param_2);
undefined4 FUN_00433aef(HWND param_1);
void FUN_00433de0(void);
void __cdecl FUN_00434050(UINT param_1,WPARAM param_2,LPARAM param_3);
void FUN_00434070(void);
void __cdecl FUN_004340c0(HWND param_1);
void FUN_00434120(void);
void FUN_004342b0(void);
undefined4 Catch@004343de(void);
void FUN_00434440(void);
undefined4 Catch@004344d4(void);
void __cdecl FUN_00434540(LPCSTR param_1,int param_2,int param_3,HWND param_4);
void FUN_00434580(void);
undefined4 Catch@00434771(void);
void FUN_004347c0(int *param_1,char *param_2);
undefined * Catch@0043497b(void);
undefined4 __fastcall FUN_004349b2(int *param_1);
undefined * FUN_00434a20(void);
int * __cdecl FUN_00434a90(int *param_1);
_Facet_base * __cdecl FUN_00434b00(int param_1);
_Lockit * __thiscall FUN_00434c10(void *this,char *param_1);
void __thiscall FUN_00434cc0(void *this,void *param_1,int *param_2,uint *param_3);
undefined4 * __thiscall FUN_00434dd0(void *this,int param_1);
undefined4 * __thiscall FUN_00434e00(void *this,int param_1);
undefined4 * __thiscall FUN_00434e30(void *this,undefined4 param_1);
undefined4 * __thiscall FUN_00434ec0(void *this,int param_1);
undefined4 * __thiscall FUN_00434ef0(void *this,int *param_1);
undefined4 * __thiscall FUN_00434f40(void *this,int param_1);
void __thiscall FUN_00434f90(void *this,void *param_1,int *param_2,uint *param_3);
void __thiscall std::_Locinfo::~_Locinfo(_Locinfo *this);
void __fastcall FUN_004350d0(int param_1);
undefined8 __thiscall FUN_00435110(void *this,uint *param_1);
undefined4 * __thiscall FUN_00435150(void *this,byte param_1);
undefined4 * __thiscall FUN_004351a0(void *this,byte param_1);
undefined4 * __thiscall FUN_004351d0(void *this,byte param_1);
undefined4 * __thiscall FUN_00435200(void *this,byte param_1);
undefined4 * __thiscall FUN_00435230(void *this,byte param_1);
int __fastcall FUN_00435260(int param_1);
undefined4 __cdecl FUN_00435280(int *param_1,int param_2);
void __fastcall FUN_00435310(int param_1);
void __fastcall FUN_00435320(undefined4 param_1,uint *param_2,uint *param_3,void *param_4,int *param_5,undefined4 param_6,undefined4 param_7,uint param_8,uint param_9,int param_10);
void __fastcall FUN_004353e0(int *param_1);
undefined4 Catch@0043545c(void);
void __fastcall FUN_00435470(int param_1);
undefined8 __thiscall FUN_00435490(void *this,undefined4 *param_1,undefined4 *param_2,uint param_3);
undefined8 __fastcall FUN_00435590(uint *param_1,uint *param_2,uint *param_3,uint param_4);
void __thiscall FUN_004356c0(void *this,uint param_1,char param_2);
void __thiscall FUN_00435780(void *this,undefined4 *param_1,undefined4 param_2);
undefined1 FUN_00435790(undefined1 param_1);
int FUN_004357a0(uint *param_1,int param_2,undefined4 param_3,uint *param_4);
void __thiscall FUN_004357c0(void *this,byte param_1);
byte * __thiscall FUN_004357e0(void *this,byte *param_1,byte *param_2);
void __thiscall FUN_00435820(void *this,byte param_1);
byte * __thiscall FUN_00435840(void *this,byte *param_1,byte *param_2);
undefined1 FUN_00435880(undefined1 param_1);
int FUN_00435890(uint *param_1,int param_2,uint *param_3);
uint __thiscall FUN_004358b0(void *this,uint *param_1,uint param_2);
uint __thiscall FUN_004358e0(void *this,undefined4 param_1);
int * __fastcall FUN_00435920(int *param_1);
undefined1 * FUN_004359b0(undefined1 *param_1,int param_2);
undefined1 * FUN_00435a10(undefined1 *param_1,int param_2);
char * FUN_00435a50(void);
void __fastcall FUN_00435a60(int param_1);
void __thiscall FUN_00435a80(void *this,byte param_1);
undefined * Catch@00435b24(void);
void FUN_00435b5b(void);
void __thiscall FUN_00435bd0(void *this,uint param_1,char param_2);
uint __thiscall FUN_00435c00(void *this,byte param_1);
void __thiscall FUN_00435c40(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3);
char * __fastcall FUN_00435c60(int param_1);
void __cdecl FUN_00435c80(undefined4 param_1,uint param_2,uint param_3);
void FUN_00435df0(void);
int * __thiscall FUN_00435f00(void *this,undefined4 param_1,int param_2);
undefined4 * __fastcall FUN_00436010(undefined4 *param_1);
undefined1 * __thiscall FUN_004360a0(void *this,uint *param_1,uint param_2);
int * __thiscall FUN_004360d0(void *this,uint param_1,int param_2);
void __fastcall FUN_00436170(int param_1);
void __fastcall FUN_00436230(int *param_1);
void __fastcall FUN_004362a0(int *param_1);
void __fastcall FUN_004362d0(int param_1);
void __thiscall FUN_004362ec(void *this,byte param_1);
void __thiscall FUN_004362f4(void *this,byte param_1);
void __thiscall FUN_004362fc(void *this,byte param_1);
void __thiscall FUN_00436304(void *this,byte param_1);
ios_base * __thiscall FUN_00436310(void *this,byte param_1);
int * __thiscall FUN_00436340(void *this,byte param_1);
ios_base * __thiscall FUN_00436370(void *this,byte param_1);
ios_base * __thiscall FUN_004363c0(void *this,byte param_1);
undefined4 * __thiscall FUN_00436410(void *this,byte param_1);
undefined4 * __thiscall FUN_00436460(void *this,byte param_1);
ios_base * __thiscall FUN_004364c0(void *this,byte param_1);
ios_base * __thiscall FUN_00436500(void *this,byte param_1);
void __fastcall FUN_00436530(int param_1);
void __fastcall FUN_00436550(int param_1);
void __thiscall FUN_004365b0(void *this,uint *param_1,uint param_2,undefined4 param_3);
void __fastcall FUN_00436650(void *param_1);
void __fastcall FUN_004366d0(int param_1);
void FUN_00436780(void);
void __thiscall FUN_00436790(void *this,undefined4 param_1);
int __thiscall FUN_00436820(void *this,int param_1);
undefined4 FUN_004369e0(void);
int __thiscall FUN_004369f0(void *this,int param_1);
undefined4 * FUN_00436a50(undefined4 *param_1);
void __thiscall FUN_00436a80(void *this,uint *param_1,uint param_2,uint param_3,int param_4,uint param_5);
undefined4 * FUN_00436c60(undefined4 *param_1);
void __thiscall FUN_00436c90(void *this,uint *param_1,uint param_2,int param_3,uint param_4,int param_5,undefined4 param_6,undefined4 param_7,uint param_8);
undefined4 __fastcall FUN_00436dc0(undefined4 param_1);
undefined8 FUN_00436dd0(void);
void __thiscall FUN_00436de0(void *this,uint *param_1);
int __thiscall std::basic_streambuf<>::uflow(basic_streambuf<> *this);
undefined4 FUN_00436fa0(void);
uint __fastcall FUN_00436fb0(int param_1);
longlong __thiscall FUN_00437010(void *this,uint *param_1,uint param_2,int param_3);
longlong __thiscall FUN_00437110(void *this,uint *param_1,uint param_2,int param_3);
void __cdecl FUN_00437210(char *param_1,char *param_2,int param_3,int param_4);
undefined4 Catch@004373ca(void);
void __cdecl FUN_00437420(char *param_1,char *param_2,int param_3,int param_4);
undefined4 Catch@004375a2(void);
void __cdecl FUN_00437830(char *param_1,char *param_2,int param_3,int param_4);
undefined4 Catch@004379ca(void);
void FUN_00437a20(void);
undefined * Catch@00437aba(void);
void FUN_00437b06(void);
undefined1 * FUN_00437b30(void);
undefined * FUN_00437be0(void);
char * __cdecl FUN_00437c80(char *param_1);
LPSTR FUN_00437d00(void);
void __cdecl FUN_00437d50(LPCSTR param_1);
void __cdecl FUN_00437e20(LPCSTR param_1);
void FUN_00437f00(void);
void FUN_00437f20(void);
void FUN_00438030(void);
void FUN_00438050(void);
void __cdecl FUN_00438090(undefined4 param_1,char *param_2);
void __cdecl FUN_004380b0(undefined4 param_1,char *param_2);
void FUN_004380d0(undefined4 param_1);
void FUN_00438120(void);
undefined4 Catch@0043829f(void);
void FUN_004382f0(void);
void __cdecl FUN_00438320(LPCSTR param_1,LPCSTR param_2,UINT param_3);
void __cdecl FUN_00438340(int param_1,int param_2,int param_3);
void __cdecl FUN_004383a0(int param_1,undefined1 *param_2,int param_3);
void FUN_00438520(void);
uint * __fastcall FUN_00438570(undefined4 param_1,uint *param_2,uint *param_3,uint *param_4,undefined4 *param_5);
uint * __thiscall FUN_00438620(void *this,uint *param_1);
void __thiscall FUN_00438680(void *this,uint *param_1);
void __cdecl FUN_004386c0(int param_1);
int FUN_00438710(char *param_1);
int __fastcall FUN_004387b0(int param_1);
void FUN_00438940(void);
undefined4 __cdecl FUN_00438b44(int param_1);
undefined8 __fastcall FUN_00438c10(undefined4 param_1,undefined4 param_2);
undefined4 __cdecl FUN_00438d00(int param_1);
void FUN_00438d70(undefined4 param_1);
void FUN_00438db0(undefined4 param_1);
undefined4 __cdecl FUN_00438e90(int param_1);
undefined8 __fastcall FUN_00438f90(int param_1,undefined4 param_2);
void FUN_00439050(void);
longlong __fastcall FUN_004390f0(undefined4 param_1,uint param_2);
undefined4 FUN_00439210(void);
undefined8 FUN_004392f0(void);
void __cdecl FUN_00439400(HANDLE param_1,int param_2,undefined4 param_3,size_t param_4);
int FUN_00439840(HANDLE param_1);
int FUN_004399c0(void);
undefined1 * Catch@00439a5c(void);
void FUN_00439ac0(void);
void __cdecl FUN_0043a700(HANDLE param_1,char param_2,LPVOID param_3,int param_4);
void __cdecl FUN_0043a760(HANDLE param_1,LPVOID param_2,int param_3,LPVOID param_4,char param_5);
void __cdecl FUN_0043a830(HANDLE param_1,LPVOID param_2,int param_3,LPVOID param_4,char param_5);
void __cdecl FUN_0043a900(HANDLE param_1,LPVOID param_2,int param_3,int param_4);
void __cdecl FUN_0043a960(HANDLE param_1,char param_2,char *param_3);
void FUN_0043aa30(void);
void __cdecl FUN_0043aa90(uint *param_1);
void __cdecl FUN_0043ab40(uint *param_1);
void __cdecl FUN_0043ad30(HANDLE param_1);
void __cdecl FUN_0043b020(HANDLE param_1);
void __cdecl FUN_0043b210(HANDLE param_1);
void __cdecl FUN_0043b370(HANDLE param_1,LPCVOID param_2);
void __cdecl FUN_0043b5a0(HANDLE param_1);
void FUN_0043b600(undefined4 param_1);
void __cdecl FUN_0043b6c0(HANDLE param_1);
void __cdecl FUN_0043c110(HANDLE param_1,size_t param_2,undefined4 param_3,int param_4,int param_5,LPVOID param_6);
void __cdecl FUN_0043cd50(HANDLE param_1);
int FUN_0043ce80(void);
void FUN_0043d110(void);
void FUN_0043d430(void);
undefined4 __cdecl FUN_0043dc80(undefined4 param_1);
undefined4 __cdecl FUN_0043dd50(undefined4 param_1);
void __cdecl FUN_0043df50(undefined4 param_1);
int __cdecl FUN_0043df60(int param_1,char param_2);
void __cdecl FUN_0043e0c0(char *param_1,int param_2,undefined4 param_3);
void __cdecl FUN_0043ea80(undefined4 param_1,HWND param_2);
void __cdecl FUN_0043eb40(uint *param_1,int param_2,undefined4 param_3);
void __cdecl FUN_0043ecf0(uint *param_1,int param_2,undefined4 param_3);
undefined4 FUN_0043eea0(HINSTANCE param_1);
void FUN_0043f080(HWND param_1,uint param_2,HDC param_3,int *param_4);
ulonglong __thiscall FUN_0043f190(void *this,uint *param_1,uint param_2);
void __fastcall FUN_0043f250(char *param_1);
void __thiscall FUN_0043f340(void *this,undefined1 *param_1);
void __cdecl FUN_0043f400(undefined4 param_1);
void __thiscall FUN_0043f4e0(void *this,int param_1);
void __cdecl FUN_0043fc20(undefined4 *param_1,int param_2,int param_3);
void __cdecl FUN_0043fcc0(undefined1 *param_1,uint *param_2);
undefined4 * __fastcall FUN_0043fd80(undefined4 *param_1);
void __fastcall FUN_0043fd90(undefined4 *param_1);
void __thiscall FUN_0043fda0(void *this,byte *param_1,uint *param_2,int param_3,byte *param_4);
void __thiscall FUN_00440230(void *this,byte *param_1,byte *param_2);
void __thiscall FUN_00440600(void *this,byte *param_1,byte *param_2);
void __thiscall FUN_004409f0(void *this,uint *param_1,byte *param_2);
void __thiscall FUN_00440cf0(void *this,uint *param_1,byte *param_2);
void __thiscall FUN_00440ff0(void *this,uint *param_1,uint *param_2,uint param_3,int param_4);
void __thiscall FUN_004411d0(void *this,uint *param_1,byte *param_2,uint param_3,int param_4);
undefined4 * __thiscall FUN_004413a0(void *this,byte param_1);
void __thiscall FUN_004413d0(void *this,byte *param_1,int param_2);
undefined4 __cdecl FUN_00441450(uint *param_1,uint param_2,uint *param_3,uint param_4);
void FUN_004414f0(void);
void FUN_004416a0(void);
undefined * FUN_00441780(void);
void FUN_004417c0(void);
_Facet_base * __cdecl FUN_004420d0(int param_1);
int * __thiscall FUN_004421e0(void *this,uint param_1,int param_2,undefined4 param_3,int param_4);
int * __thiscall FUN_00442380(void *this,undefined4 param_1,undefined4 param_2,int param_3);
undefined4 * __thiscall FUN_004423e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __thiscall std::basic_filebuf<>::~basic_filebuf<>(basic_filebuf<> *this);
void __thiscall std::basic_ifstream<>::`vbase_destructor'(basic_ifstream<> *this);
void __thiscall FUN_004424d2(void *this,byte param_1);
basic_filebuf<> * __thiscall FUN_004424e0(void *this,byte param_1);
ios_base * __thiscall FUN_00442500(void *this,byte param_1);
undefined4 * __thiscall FUN_00442570(void *this,byte param_1);
void __fastcall FUN_004425a0(int *param_1);
undefined4 __cdecl FUN_00442700(int *param_1,int param_2);
void __thiscall FUN_00442780(void *this,int param_1,int param_2);
void __fastcall FUN_00442870(int param_1);
void __thiscall std::basic_filebuf<>::_Reset_back(basic_filebuf<> *this);
void __thiscall std::basic_filebuf<>::_Set_back(basic_filebuf<> *this);
void __fastcall FUN_004428f0(int param_1);
int * __fastcall FUN_00442900(int *param_1);
undefined4 FUN_004429c0(void);
undefined4 FUN_004429d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5,undefined4 param_6,undefined4 *param_7);
uint FUN_004429f0(undefined4 param_1,int param_2,int param_3,uint param_4);
undefined4 FUN_00442a10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
void __thiscall FUN_00442a20(void *this,int param_1);
void * __thiscall FUN_00442a60(void *this,char *param_1,uint param_2,int param_3);
void __thiscall FUN_00442b00(void *this,int param_1);
uint __thiscall FUN_00442d40(void *this,uint param_1);
undefined4 * __thiscall FUN_00442dd0(void *this,undefined4 *param_1,int param_2,int param_3,int param_4);
undefined4 * __thiscall FUN_00442ee0(void *this,undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
void * __thiscall FUN_00442fd0(void *this,char *param_1,size_t param_2,int param_3);
int __thiscall std::basic_filebuf<>::sync(basic_filebuf<> *this);
void __fastcall FUN_00443050(int param_1);
int __thiscall std::basic_filebuf<>::underflow(basic_filebuf<> *this);
uint * __cdecl FUN_004432e0(uint *param_1,undefined4 *param_2);
void __cdecl FUN_00443450(char *param_1,char *param_2);
undefined4 Catch@004439db(void);
void FUN_00443a30(void);
void __cdecl FUN_00443a40(float param_1);
void FUN_00443c20(void);
undefined4 FUN_004441c0(void);
void FUN_004441d0(void);
void FUN_004444d0(void);
void FUN_004444f0(void);
void FUN_00444510(int *param_1,undefined4 *param_2);
undefined * Catch@00444682(void);
void FUN_004446b9(void);
int * __cdecl FUN_00444720(int *param_1,byte param_2);
undefined * Catch@00444909(void);
undefined1 * __cdecl FUN_00444950(undefined1 *param_1,void *param_2,undefined4 *param_3);
undefined1 * __cdecl FUN_00444990(undefined1 *param_1,uint *param_2,uint *param_3);
char * __cdecl FUN_004449e0(char *param_1,uint param_2);
undefined1 * __fastcall FUN_00444a20(undefined1 *param_1);
void __fastcall FUN_00444d20(undefined4 *param_1);
void __thiscall FUN_00445170(void *this,byte *param_1,uint param_2);
void __thiscall FUN_004451b0(void *this,uint *param_1);
void __cdecl FUN_004451e0(undefined1 *param_1,uint param_2);
int __cdecl _snprintf(char *_Dest,size_t _Count,char *_Format,...);
undefined4 FUN_00445a30(void);
undefined4 FUN_00445a50(void);
undefined4 FUN_00445a60(void);
undefined4 FUN_00445a70(void);
void FUN_00445a90(void);
void FUN_00445b40(void);
void FUN_00445bc0(void);
void FUN_00445c30(void);
void FUN_00445c90(void);
void FUN_00445cf0(void);
void FUN_00445ea0(void);
void __cdecl FUN_00445f30(undefined4 param_1);
void __cdecl FUN_00445f40(int param_1);
undefined4 Catch@0044618f(void);
void FUN_004461e0(void);
undefined4 Catch@00446565(void);
void FUN_004465b0(void);
void FUN_004465c0(void);
void FUN_00446680(void);
void FUN_004467c0(void);
void __cdecl FUN_004468c0(UINT param_1,WPARAM param_2,LPARAM param_3);
void __cdecl FUN_004468e0(HWND param_1,uint param_2,HDC param_3,int *param_4);
void __cdecl FUN_00447aa0(HINSTANCE param_1);
void __cdecl FUN_00447b30(uint param_1);
void __cdecl FUN_00447bb0(undefined4 param_1,undefined4 param_2,uint param_3);
uint FUN_00448320(void);
void FUN_00448570(void);
void __cdecl FUN_00448710(char *param_1,uint param_2);
HBRUSH __cdecl FUN_00448960(HDC param_1,int param_2);
void __cdecl FUN_00448a00(HDC param_1);
HBRUSH __cdecl FUN_00448a30(HDC param_1,int param_2);
void FUN_00448c40(void);
void FUN_00449010(void);
void __cdecl FUN_00449140(HWND param_1);
void FUN_004493b0(void);
undefined4 Catch@00449586(void);
void __cdecl FUN_004495d0(uint param_1);
int FUN_004497a0(void);
int * FUN_004497f0(int *param_1,void *param_2,byte param_3);
undefined * Catch@004498e4(void);
void FUN_0044991e(void);
int * __thiscall FUN_00449980(void *this,int param_1);
void __thiscall FUN_00449af0(void *this,byte param_1);
ios_base * __thiscall FUN_00449b00(void *this,byte param_1);
void __fastcall FUN_00449b70(LPRECT param_1);
void __fastcall FUN_00449c40(LPRECT param_1);
void __fastcall FUN_00449d20(LPRECT param_1);
void __fastcall FUN_00449e00(LPRECT param_1);
void __fastcall FUN_00449ee0(LPRECT param_1);
void __thiscall FUN_00449fd0(void *this,int param_1,int param_2);
uint __thiscall FUN_0044a340(void *this,char param_1);
undefined * Catch@0044a44a(void);
uint __fastcall FUN_0044a4c0(int *param_1);
uint __fastcall FUN_0044a4f0(int *param_1);
uint __fastcall FUN_0044a510(int *param_1);
void CreateToolhelp32Snapshot(void);
void Process32First(void);
void Process32Next(void);
BOOL SetWindowSubclass(HWND hWnd,SUBCLASSPROC pfnSubclass,UINT_PTR uIdSubclass,DWORD_PTR dwRefData);
LRESULT DefSubclassProc(HWND hWnd,UINT uMsg,WPARAM wParam,LPARAM lParam);
BOOL EnumProcesses(DWORD *lpidProcess,DWORD cb,LPDWORD lpcbNeeded);
DWORD GetModuleFileNameExA(HANDLE hProcess,HMODULE hModule,LPSTR lpFilename,DWORD nSize);
void lua_close(void);
void lua_tolstring(void);
void lua_pushstring(void);
void lua_getfield(void);
void lua_setfield(void);
void lua_pcall(void);
void lua_gc(void);
void luaL_openlibs(void);
void luaL_loadstring(void);
void luaL_newstate(void);
void __cdecl ___acrt_call_reportfault(int param_1,DWORD param_2,DWORD param_3);
void __cdecl FUN_0044a721(char **param_1);
void __cdecl FUN_0044a735(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5);
void FUN_0044a7b0(void);
void FUN_0044a7c0(void);
void __cdecl __invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5);
_LocaleUpdate * __thiscall _LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,__crt_locale_pointers *param_1);
ushort __cdecl __chvalidchk_l(int param_1,ushort param_2,undefined4 *param_3);
int __cdecl __isalnum_l(int _C,_locale_t _Locale);
int __cdecl __isalpha_l(int _C,_locale_t _Locale);
void __cdecl __ischartype_l(int param_1,int param_2,_locale_t param_3);
int __cdecl __isdigit_l(int _C,_locale_t _Locale);
int __cdecl __islower_l(int _C,_locale_t _Locale);
int __cdecl __isupper_l(int _C,_locale_t _Locale);
int __cdecl _isalnum(int _C);
int __cdecl _isalpha(int _C);
int __cdecl _isdigit(int _C);
int __cdecl _islower(int _C);
int __cdecl _isupper(int _C);
int operator()<>(undefined4 *param_1,<> *param_2);
void FUN_0044ab38(void);
void __cdecl __acrt_lock_stream_and_call<>(undefined4 param_1,<> *param_2);
int __cdecl common_vsprintf<>(__uint64 param_1,char *param_2,uint param_3,char *param_4,__crt_locale_pointers *param_5,char *param_6);
int __cdecl common_vsprintf<>(__uint64 param_1,char *param_2,uint param_3,char *param_4,__crt_locale_pointers *param_5,char *param_6);
int __cdecl common_vsprintf_s<char>(__uint64 param_1,char *param_2,uint param_3,char *param_4,__crt_locale_pointers *param_5,char *param_6);
uint __thiscall __crt_stdio_output::formatting_buffer::count<char>(formatting_buffer *this);
bool __thiscall __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>(formatting_buffer *this,uint param_1);
bool __cdecl __crt_stdio_output::is_wide_character_specifier<char>(__uint64 param_1,char param_2,length_modifier param_3);
char * __thiscall __crt_stdio_output::formatting_buffer::scratch_data<char>(formatting_buffer *this);
void __thiscall type_case_integer_parse_into_buffer<>(void *this,uint param_1,uint param_2,char param_3);
void __thiscall type_case_integer_parse_into_buffer<>(void *this,longlong param_1,uint param_2,char param_3);
void __cdecl __crt_stdio_output::write_multiple_characters<>(stream_output_adapter<char> *param_1,char param_2,int param_3,int *param_4);
void __cdecl __crt_stdio_output::write_multiple_characters<>(string_output_adapter<char> *param_1,char param_2,int param_3,int *param_4);
common_data<char> * __thiscall __crt_stdio_output::common_data<char>::common_data<char>(common_data<char> *this);
common_data<char> * __thiscall output_adapter_data<>(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void * __thiscall output_processor<>(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void __thiscall __crt_stdio_output::formatting_buffer::~formatting_buffer(formatting_buffer *this);
__crt_unique_heap_ptr<> * __thiscall __crt_unique_heap_ptr<>::operator=(__crt_unique_heap_ptr<> *this,__crt_unique_heap_ptr<> *param_1);
int __thiscall <>::operator()(<> *this);
void __cdecl __crt_stdio_output::crop_zeroes(char *param_1,__crt_locale_pointers *param_2);
byte find_next_state(char param_1,int param_2);
byte find_next_state(char param_1,int param_2);
void __cdecl __crt_stdio_output::force_decimal_point(char *param_1,__crt_locale_pointers *param_2);
uint __thiscall parse_int_from_format_string(void *this,long *param_1);
int __thiscall __crt_stdio_output::output_processor<>::process(output_processor<> *this);
int __thiscall __crt_stdio_output::output_processor<>::process(output_processor<> *this);
int __thiscall __crt_stdio_output::output_processor<>::process(output_processor<> *this);
undefined4 __fastcall state_case_flag(int param_1);
uint __fastcall state_case_normal(int param_1);
uint __fastcall state_case_normal(int param_1);
uint __fastcall state_case_normal_common(int param_1);
uint __fastcall state_case_normal_common(int param_1);
uint __fastcall state_case_normal_tchar(int param_1);
uint __fastcall state_case_normal_tchar(int param_1);
undefined4 __fastcall state_case_precision(void *param_1);
bool __fastcall state_case_size(output_processor<> *param_1);
bool __fastcall state_case_size(output_processor<> *param_1);
bool __thiscall __crt_stdio_output::output_processor<>::state_case_type(output_processor<> *this);
bool __thiscall __crt_stdio_output::output_processor<>::state_case_type(output_processor<> *this);
undefined4 __fastcall state_case_width(void *param_1);
uint __cdecl __crt_stdio_output::to_integer_size(length_modifier param_1);
undefined4 __fastcall type_case_Z(__uint64 *param_1);
undefined4 __fastcall type_case_a(uint *param_1);
undefined4 __fastcall type_case_c_tchar(__uint64 *param_1);
uint __thiscall type_case_integer(void *this,uint param_1,char param_2);
uint __fastcall type_case_n(int param_1);
void __fastcall type_case_o(void *param_1);
void __fastcall type_case_p(void *param_1);
undefined4 __fastcall type_case_s(__uint64 *param_1);
bool __thiscall __crt_stdio_output::stream_output_adapter<char>::validate(stream_output_adapter<char> *this);
uint __fastcall validate_and_update_state_at_end_of_format_string(int param_1);
bool __cdecl __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(_iobuf *param_1);
void __thiscall __crt_stdio_output::stream_output_adapter<char>::write_character(stream_output_adapter<char> *this,char param_1,int *param_2);
bool __thiscall __crt_stdio_output::string_output_adapter<char>::write_character(string_output_adapter<char> *this,char param_1,int *param_2);
void __fastcall write_stored_string_tchar(int param_1);
void __fastcall write_stored_string_tchar(int param_1);
void __thiscall __crt_stdio_output::stream_output_adapter<char>::write_string(stream_output_adapter<char> *this,char *param_1,int param_2,int *param_3,int *param_4);
void __thiscall __crt_stdio_output::string_output_adapter<char>::write_string(string_output_adapter<char> *this,char *param_1,int param_2,int *param_3,int *param_4);
undefined4 __cdecl FID_conflict:___stdio_common_vfprintf(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6);
void __cdecl ___stdio_common_vsprintf(undefined4 param_1,undefined4 param_2,char *param_3,uint param_4,char *param_5,__crt_locale_pointers *param_6,char *param_7);
void __cdecl ___stdio_common_vsprintf_s(undefined4 param_1,undefined4 param_2,char *param_3,uint param_4,char *param_5,__crt_locale_pointers *param_6,char *param_7);
void __cdecl FID_conflict:_free(void *_Memory);
undefined4 __cdecl common_dupenv_s<>(undefined4 *param_1,uint *param_2,char *param_3);
void FUN_0044caa0(void);
undefined4 __cdecl FUN_0044caa9(undefined4 *param_1,uint *param_2,char *param_3);
char * __cdecl common_getenv<char>(char *param_1);
void FUN_0044cbc5(void);
char * __cdecl common_getenv_nolock<char>(char *param_1);
undefined4 __cdecl common_getenv_s<>(undefined4 *param_1,char *param_2,char *param_3,char *param_4);
void FUN_0044cc8a(void);
undefined4 __cdecl FUN_0044cc93(undefined4 *param_1,char *param_2,char *param_3,char *param_4);
errno_t __cdecl FID_conflict:__dupenv_s(wchar_t **_Buffer,size_t *_BufferSizeInWords,wchar_t *_VarName);
void __cdecl FUN_0044cd59(char *param_1);
void __cdecl FUN_0044cd64(undefined4 *param_1,char *param_2,char *param_3,char *param_4);
int __cdecl common_tox_l<>(int param_1,ulong param_2,__crt_locale_pointers *param_3);
bool __cdecl internal_isupper_l(int param_1,__crt_locale_pointers *param_2);
int __cdecl __tolower_l(int _C,_locale_t _Locale);
int __cdecl _tolower(int _C);
undefined * __cdecl ___acrt_iob_func(int param_1);
undefined4 __cdecl __get_stream_buffer_pointers(int param_1,int *param_2,int *param_3,int *param_4);
void __cdecl __lock_file(FILE *_File);
void __cdecl __unlock_file(FILE *_File);
int __cdecl common_freopen<char>(int *param_1,char *param_2,int param_3,FILE *param_4);
void FUN_0044d1ba(void);
FILE * __cdecl _freopen(char *_Filename,char *_Mode,FILE *_File);
int __cdecl _rename(char *_OldFilename,char *_NewFilename);
void FUN_0044d2b2(size_t param_1);
int __cdecl atexit_exception_filter(ulong param_1);
void __cdecl common_exit(int param_1,_crt_exit_cleanup_mode param_2,_crt_exit_return_mode param_3);
void FUN_0044d3da(void);
void __cdecl exit_or_terminate_process(uint param_1);
void __cdecl try_cor_exit_process(uint param_1);
void __cdecl FUN_0044d494(undefined4 param_1);
void __cdecl __cexit(void);
void __cdecl __exit(int param_1);
void __cdecl __register_thread_local_exe_atexit_callback(void *param_1);
void __cdecl _exit(int _Code);
bool __cdecl __crt_strtox::is_overflow_condition<>(uint param_1,ulong param_2);
void __cdecl make_c_string_character_source<>(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
ulong __cdecl __crt_strtox::parse_integer<>(__crt_locale_pointers *param_1,byte *param_2,undefined4 *param_3,uint param_4,char param_5);
ulong __cdecl __crt_strtox::parse_integer<>(__crt_locale_pointers *param_1,wchar_t *param_2,undefined4 *param_3,uint param_4,char param_5);
void __thiscall __crt_strtox::c_string_character_source<char>::unget(c_string_character_source<char> *this,char param_1);
void __thiscall __crt_strtox::c_string_character_source<wchar_t>::unget(c_string_character_source<wchar_t> *this,wchar_t param_1);
bool __thiscall __crt_strtox::c_string_character_source<char>::validate(c_string_character_source<char> *this);
long __cdecl __wtol(wchar_t *_Str);
long __cdecl _atol(char *_Str);
int __cdecl FID_conflict:___acrt_errno_from_os_error(ulong param_1);
void __cdecl ___acrt_errno_map_os_error(ulong param_1);
ulong * __cdecl ___doserrno(void);
int * __cdecl __errno(void);
void __cdecl FUN_0044dfcf(int param_1);
void __cdecl FUN_0044e0cf(int param_1);
int __cdecl __fclose_nolock(FILE *_File);
int __cdecl _fclose(FILE *_File);
void FUN_0044e1c6(void);
undefined4 __cdecl ___acrt_stdio_flush_nolock(FILE *param_1);
int __cdecl __fflush_nolock(FILE *_File);
int __cdecl common_flush_all(int param_1);
void FUN_0044e32b(void);
void FUN_0044e355(void);
int __cdecl _fflush(FILE *_File);
void FUN_0044e3af(void);
uint __cdecl __fgetc_nolock(undefined4 *param_1);
int __cdecl _fgetc(FILE *_File);
void FUN_0044e4eb(void);
int __cdecl _fgetpos(FILE *_File,fpos_t *_Pos);
uint __cdecl __fputc_nolock(byte param_1,int *param_2);
int __cdecl _fputc(int _Ch,FILE *_File);
void FUN_0044e675(void);
int __cdecl _fsetpos(FILE *_File,fpos_t *_Pos);
long __cdecl LongLongSub(__int64 param_1,__int64 param_2,__int64 *param_3);
int __cdecl common_fseek(FILE *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0044e7b6(void);
bool __cdecl common_fseek_binary_mode_read_only_fast_track_nolock(int *param_1,uint param_2,int param_3,int param_4);
int __cdecl common_fseek_nolock(FILE *param_1,undefined4 param_2,undefined4 param_3,int param_4);
int __cdecl __fseeki64(FILE *_File,longlong _Offset,int _Origin);
int __cdecl _fseek(FILE *_File,long _Offset,int _Origin);
uint __thiscall __crt_seh_guarded_call<>::operator()<>(__crt_seh_guarded_call<> *this,<> *param_1,<> *param_2,<> *param_3);
void FUN_0044e9ed(void);
uint __cdecl __acrt_lock_stream_and_call<>(_iobuf *param_1,<> *param_2);
uint __thiscall <>::operator()(<> *this);
size_t __cdecl __fwrite_nolock(void *_DstBuf,size_t _Size,size_t _Count,FILE *_File);
size_t __cdecl _fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File);
int __thiscall __crt_seh_guarded_call<int>::operator()<>(__crt_seh_guarded_call<int> *this,<> *param_1,<> *param_2,<> *param_3);
void FUN_0044ec7d(void);
int __cdecl __acrt_lock_stream_and_call<>(_iobuf *param_1,<> *param_2);
int __thiscall <>::operator()(<> *this);
int __cdecl set_buffer(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4);
int __cdecl _setvbuf(FILE *_File,char *_Buf,int _Mode,size_t _Size);
int __cdecl __ungetc_nolock(int _Ch,FILE *_File);
int __cdecl _ungetc(int _Ch,FILE *_File);
void FUN_0044ef4b(void);
char * __cdecl _strncat(char *_Dest,char *_Source,size_t _Count);
int __cdecl FUN_0044f095(tm *param_1,uint *param_2);
tm * __cdecl FID_conflict:common_gmtime<long>(__time32_t *_Time);
DWORD __cdecl __Strftime_l(LPSTR param_1,uint param_2,LPCSTR param_3,tm *param_4,__lc_time_data *param_5,__crt_locale_pointers *param_6);
size_t __cdecl _strftime(char *_Buf,size_t _SizeInBytes,char *_Format,tm *_Tm);
int __cdecl common_timespec_get<>(_timespec64 *param_1,int param_2);
__time64_t __cdecl FID_conflict:__time64(__time64_t *_Time);
void __cdecl __crt_strtox::assemble_floating_point_ind<double>(double *param_1);
void __cdecl __crt_strtox::assemble_floating_point_infinity<double>(bool param_1,double *param_2);
void __cdecl __crt_strtox::assemble_floating_point_qnan<double>(bool param_1,double *param_2);
void __cdecl __crt_strtox::assemble_floating_point_snan<double>(bool param_1,double *param_2);
SLD_STATUS __cdecl __crt_strtox::assemble_floating_point_value_t<float>(bool param_1,int param_2,__uint64 param_3,float *param_4);
SLD_STATUS __cdecl __crt_strtox::assemble_floating_point_value_t<double>(bool param_1,int param_2,__uint64 param_3,double *param_4);
void __cdecl __crt_strtox::assemble_floating_point_zero<double>(bool param_1,double *param_2);
float10 __cdecl common_atof_l<>(int param_1,__crt_locale_pointers *param_2);
SLD_STATUS __cdecl __crt_strtox::convert_decimal_string_to_floating_type<double>(floating_point_string *param_1,double *param_2);
SLD_STATUS __cdecl __crt_strtox::convert_hexadecimal_string_to_floating_type<double>(floating_point_string *param_1,double *param_2);
SLD_STATUS __cdecl __crt_strtox::parse_floating_point<>(__crt_locale_pointers *param_1,undefined4 param_2,undefined4 *param_3,double *param_4);
floating_point_parse_result __cdecl __crt_strtox::parse_floating_point_from_source<>(__crt_locale_pointers *param_1,c_string_character_source<char> *param_2,floating_point_string *param_3);
floating_point_parse_result __cdecl __crt_strtox::parse_floating_point_possible_infinity<>(char *param_1,c_string_character_source<char> *param_2,char *param_3);
floating_point_parse_result __cdecl __crt_strtox::parse_floating_point_possible_nan<>(char *param_1,c_string_character_source<char> *param_2,char *param_3);
bool __cdecl __crt_strtox::parse_floating_point_possible_nan_is_ind<>(char *param_1,c_string_character_source<char> *param_2);
bool __cdecl __crt_strtox::parse_floating_point_possible_nan_is_snan<>(char *param_1,c_string_character_source<char> *param_2);
SLD_STATUS __cdecl __crt_strtox::parse_floating_point_write_result<double>(floating_point_parse_result param_1,floating_point_string *param_2,double *param_3);
bool __thiscall <>::operator()(<> *this);
undefined4 __fastcall FUN_0044ff97(undefined4 *param_1);
undefined4 __fastcall FUN_0044ffbc(undefined4 *param_1);
void __cdecl __crt_strtox::assemble_floating_point_infinity(bool param_1,floating_point_value *param_2);
SLD_STATUS __cdecl __crt_strtox::assemble_floating_point_value(__uint64 param_1,int param_2,bool param_3,bool param_4,floating_point_value *param_5);
SLD_STATUS __cdecl __crt_strtox::assemble_floating_point_value_from_big_integer(big_integer *param_1,uint param_2,bool param_3,bool param_4,floating_point_value *param_5);
void __cdecl __crt_strtox::assemble_floating_point_zero(bool param_1,floating_point_value *param_2);
SLD_STATUS __cdecl __crt_strtox::convert_decimal_string_to_floating_type_common(floating_point_string *param_1,floating_point_value *param_2);
SLD_STATUS __cdecl __crt_strtox::convert_hexadecimal_string_to_floating_type_common(floating_point_string *param_1,floating_point_value *param_2);
__uint64 __thiscall __crt_strtox::floating_point_value::denormal_mantissa_mask(floating_point_value *this);
__uint64 __cdecl __crt_strtox::divide(big_integer *param_1,big_integer *param_2);
__uint64 __thiscall __crt_strtox::floating_point_value::normal_mantissa_mask(floating_point_value *this);
double __cdecl FID_conflict:_atof(wchar_t *_Str);
int __cdecl FID_conflict:__rmdir(char *_Filename);
void operator()<>(int *param_1,undefined4 *param_2);
void FUN_00452919(void);
void operator()<>(int *param_1,undefined4 *param_2);
void FUN_0045297a(void);
void operator()<>(int *param_1,undefined4 *param_2);
void FUN_004529c5(void);
void operator()<>(int *param_1,undefined4 *param_2);
void FUN_00452a0d(void);
void __cdecl __acrt_lock_and_call<>(__acrt_lock_id param_1,<> *param_2);
void __cdecl __acrt_lock_and_call<>(__acrt_lock_id param_1,<> *param_2);
void __cdecl __acrt_lock_and_call<>(__acrt_lock_id param_1,<> *param_2);
void __cdecl __acrt_lock_and_call<>(__acrt_lock_id param_1,<> *param_2);
void __cdecl construct_ptd(__acrt_ptd *param_1,__crt_locale_data **param_2);
void destroy_fls(void *param_1);
void __cdecl destroy_ptd(__acrt_ptd *param_1);
void __cdecl replace_current_thread_locale_nolock(__acrt_ptd *param_1,__crt_locale_data *param_2);
__acrt_ptd * FUN_00452c47(void);
__acrt_ptd * ___acrt_getptd_noexit(void);
undefined4 FUN_00452d7c(void);
ushort * __cdecl ___pctype_func(void);
int __cdecl __isctype_l(int _C,int _Type,_locale_t _Locale);
void __cdecl ___acrt_update_locale_info(int param_1,int *param_2);
void __cdecl ___acrt_update_multibyte_info(int param_1,int *param_2);
void __thiscall __crt_seh_guarded_call<void>::operator()<>(__crt_seh_guarded_call<void> *this,<> *param_1,<> *param_2,<> *param_3);
void FUN_00452f14(void);
void operator()<>(int *param_1,undefined4 *param_2);
void FUN_00452f5a(void);
void __cdecl __acrt_lock_and_call<>(__acrt_lock_id param_1,<> *param_2);
void __thiscall <>::operator()(<> *this);
void __fastcall FID_conflict:operator()(undefined4 *param_1);
wchar_t * __cdecl FUN_004530e8(wchar_t *param_1);
undefined4 ___acrt_set_locale_changed(void);
void __cdecl FUN_004531ab(wchar_t *param_1,rsize_t param_2,wchar_t *param_3);
undefined4 __cdecl FUN_0045321b(wchar_t *param_1,wchar_t *param_2);
int __cdecl __configthreadlocale(int _Flag);
void __cdecl __copytlocinfo_nolock(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_004533db(wchar_t *param_1,wchar_t *param_2,rsize_t param_3,__acrt_ptd *param_4,uint param_5,undefined4 *param_6);
void __cdecl FUN_00453752(wchar_t *param_1,rsize_t param_2,int param_3);
wchar_t * __cdecl __wsetlocale(int _Category,wchar_t *_Locale);
undefined4 * __cdecl FUN_00453813(int param_1);
void __cdecl FUN_004539ac(int param_1,int param_2,wchar_t *param_3);
void __cdecl FUN_00453c91(int param_1,int param_2,wchar_t *param_3);
void __cdecl FID_conflict:_free(void *_Memory);
LPVOID __cdecl __malloc_base(size_t param_1);
long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix);
int __cdecl __mbtowc_l(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale);
int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes);
errno_t __cdecl __wctomb_s_l(int *_SizeConverted,char *_MbCh,size_t _SizeInBytes,wchar_t _WCh,_locale_t _Locale);
errno_t __cdecl _wctomb_s(int *_SizeConverted,char *_MbCh,rsize_t _SizeInBytes,wchar_t _WCh);
uint __cdecl FUN_00454363(char *param_1,uint param_2);
uint __cdecl FUN_0045448a(short *param_1,uint param_2);
__acrt_fp_class __cdecl __acrt_fp_classify(double *param_1);
bool __cdecl __acrt_fp_is_negative(double *param_1);
int __cdecl fp_format_a(double *param_1,char *param_2,uint param_3,char *param_4,uint param_5,int param_6,bool param_7,uint param_8,__crt_locale_pointers *param_9);
int __cdecl fp_format_e(double *param_1,char *param_2,uint param_3,char *param_4,uint param_5,int param_6,bool param_7,uint param_8,__crt_locale_pointers *param_9);
undefined4 __cdecl FUN_00454a69(char *param_1,uint param_2,int param_3,char param_4,int param_5,int *param_6,char param_7,__crt_locale_pointers *param_8);
int __cdecl fp_format_f(double *param_1,char *param_2,uint param_3,char *param_4,uint param_5,int param_6,__crt_locale_pointers *param_7);
int __cdecl fp_format_f_internal(char *param_1,uint param_2,int param_3,_strflt *param_4,bool param_5,__crt_locale_pointers *param_6);
int __cdecl fp_format_g(double *param_1,char *param_2,uint param_3,char *param_4,uint param_5,int param_6,bool param_7,uint param_8,__crt_locale_pointers *param_9);
void __cdecl FUN_00454de0(int param_1,byte param_2,char *param_3,uint param_4,char param_5);
void __cdecl shift_bytes(char *param_1,uint param_2,char *param_3,int param_4);
int __cdecl ___acrt_fp_format(double *param_1,char *param_2,uint param_3,char *param_4,uint param_5,int param_6,int param_7,uint param_8,undefined4 param_9,__crt_locale_pointers *param_10);
int __cdecl __fileno(FILE *_File);
int __cdecl __get_printf_count_output(void);
uint __cdecl ___acrt_stdio_begin_temporary_buffering_nolock(FILE *param_1);
void __cdecl ___acrt_stdio_end_temporary_buffering_nolock(char param_1,FILE *param_2);
void __cdecl initialize_inherited_file_handles_nolock(void);
void FUN_00455235(void);
void FUN_00455338(void);
void FUN_0045536d(uint param_1,uint param_2);
errno_t __cdecl _wcscpy_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src);
errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src);
int __cdecl __strnicoll(char *_Str1,char *_Str2,size_t _MaxCount);
int __cdecl __strnicoll_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale);
void __cdecl ___acrt_lock(int param_1);
undefined4 FUN_00455581(void);
void __cdecl ___acrt_unlock(int param_1);
void __lock_locales(void);
char ** __cdecl common_get_or_create_environment_nolock<char>(void);
int __cdecl common_initialize_environment_nolock<char>(void);
undefined4 * __cdecl FUN_00455663(char *param_1);
void __cdecl free_environment<>(undefined4 *param_1);
int __cdecl initialize_environment_by_cloning_nolock<char>(void);
void __thiscall uninitialize<>(void *this,undefined *param_1);
void __cdecl uninitialize_environment_internal<>(undefined4 *param_1);
void __cdecl uninitialize_environment_internal<>(undefined4 *param_1);
char ** __cdecl common_get_or_create_environment_nolock<char>(void);
void FUN_0045585d(void);
int __cdecl common_initialize_environment_nolock<char>(void);
int __cdecl __isleadbyte_l(int _C,_locale_t _Locale);
int __cdecl __acrt_LCMapStringA_stat(__crt_locale_pointers *param_1,wchar_t *param_2,ulong param_3,char *param_4,int param_5,char *param_6,int param_7,int param_8,int param_9);
void __cdecl ___acrt_LCMapStringA(__crt_locale_pointers *param_1,wchar_t *param_2,ulong param_3,char *param_4,int param_5,char *param_6,int param_7,int param_8,int param_9);
void __cdecl __freea_crt(int param_1);
LPVOID __cdecl __calloc_base(uint param_1,uint param_2);
int <>::<>(wchar_t *param_1);
int __thiscall __crt_seh_guarded_call<int>::operator()<>(__crt_seh_guarded_call<int> *this,<> *param_1,<> *param_2,<> *param_3);
void FUN_00455c75(void);
int __cdecl __acrt_lock_and_call<>(__acrt_lock_id param_1,<> *param_2);
void * __cdecl __crt_fast_encode_pointer<void*>(void *param_1);
_func_int_wchar_t_ptr_ulong_wchar_t_ptr_int_wchar_t_ptr_int__nlsversioninfo_ptr_void_ptr_long *__cdecl try_get_CompareStringEx(void);
void * __cdecl try_get_function(function_id param_1,char *param_2,module_id *param_3,module_id *param_4);
HMODULE __cdecl try_get_module(int param_1);
void ___acrt_AreFileApisANSI@0(void);
void ___acrt_CompareStringEx@36(wchar_t *param_1,ulong param_2,wchar_t *param_3,int param_4,wchar_t *param_5,int param_6,_nlsversioninfo *param_7,void *param_8,long param_9);
void ___acrt_EnumSystemLocalesEx@16(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void ___acrt_FlsAlloc@4(undefined4 param_1);
void ___acrt_FlsFree@4(DWORD param_1);
void ___acrt_FlsGetValue@4(DWORD param_1);
void ___acrt_FlsSetValue@8(DWORD param_1,LPVOID param_2);
void ___acrt_GetDateFormatEx@28(wchar_t *param_1,DWORD param_2,SYSTEMTIME *param_3,LPCWSTR param_4,LPWSTR param_5,int param_6,undefined4 param_7);
void ___acrt_GetLocaleInfoEx@16(wchar_t *param_1,LCTYPE param_2,LPWSTR param_3,int param_4);
void ___acrt_GetSystemTimePreciseAsFileTime@4(LPFILETIME param_1);
void ___acrt_GetTimeFormatEx@24(wchar_t *param_1,DWORD param_2,SYSTEMTIME *param_3,LPCWSTR param_4,LPWSTR param_5,int param_6);
void ___acrt_GetUserDefaultLocaleName@8(wchar_t *param_1,rsize_t param_2);
void ___acrt_InitializeCriticalSectionEx@12(LPCRITICAL_SECTION param_1,DWORD param_2,undefined4 param_3);
void ___acrt_IsValidLocaleName@4(wchar_t *param_1);
void ___acrt_LCIDToLocaleName@16(int param_1,wchar_t *param_2,rsize_t param_3,undefined4 param_4);
void ___acrt_LCMapStringEx@36(wchar_t *param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9);
void ___acrt_LocaleNameToLCID@8(wchar_t *param_1,undefined4 param_2);
bool FUN_004564af(void);
void __fastcall ___acrt_is_packaged_app(undefined4 param_1);
undefined1 __cdecl ___acrt_uninitialize_winapi_thunks(char param_1);
void __cdecl ___acrt_stdio_free_buffer_nolock(undefined4 *param_1);
char * __cdecl __acrt_stdio_parse_mode<char>(char *param_1);
_iobuf * __cdecl common_openfile<char>(char *param_1,undefined4 param_2,int param_3,_iobuf *param_4);
bool __cdecl __acrt_stdio_parse_mode_D(__acrt_stdio_stream_mode *param_1);
bool __cdecl __acrt_stdio_parse_mode_T(__acrt_stdio_stream_mode *param_1);
uint __cdecl FID_conflict:__acrt_stdio_parse_mode_b(uint *param_1);
bool __cdecl __acrt_stdio_parse_mode_c(__acrt_stdio_stream_mode *param_1,bool *param_2);
bool __cdecl __acrt_stdio_parse_mode_n(__acrt_stdio_stream_mode *param_1,bool *param_2);
bool __cdecl __acrt_stdio_parse_mode_plus(__acrt_stdio_stream_mode *param_1,bool *param_2);
uint __cdecl FID_conflict:__acrt_stdio_parse_mode_b(uint *param_1);
void FUN_00456a26(void);
int __cdecl __wrename(wchar_t *_OldFilename,wchar_t *_NewFilename);
void __cdecl __initterm(undefined4 *param_1,undefined4 *param_2);
void __cdecl __initterm_e(undefined4 *param_1,undefined4 *param_2);
int __thiscall __crt_seh_guarded_call<int>::operator()<>(__crt_seh_guarded_call<int> *this,<> *param_1,<> *param_2,<> *param_3);
void FUN_00456b44(void);
int __thiscall __crt_seh_guarded_call<int>::operator()<>(__crt_seh_guarded_call<int> *this,<> *param_1,<> *param_2,<> *param_3);
void FUN_00456b95(void);
int __cdecl __acrt_lock_and_call<>(__acrt_lock_id param_1,<> *param_2);
int __cdecl __acrt_lock_and_call<>(__acrt_lock_id param_1,<> *param_2);
int __thiscall <>::operator()(<> *this);
int __thiscall <>::operator()(<> *this);
void __crt_atexit(void);
void __execute_onexit_table(void);
undefined4 __cdecl __initialize_onexit_table(uint *param_1);
void __register_onexit_function(void);
void FUN_00456ee6(void);
int __cdecl _iswctype(wint_t _C,wctype_t _Type);
bool __thiscall __crt_seh_guarded_call<bool>::operator()<>(__crt_seh_guarded_call<bool> *this,<> *param_1,<> *param_2,<> *param_3);
void FUN_00456fc6(void);
bool __cdecl __acrt_lock_and_call<>(__acrt_lock_id param_1,<> *param_2);
int __cdecl FUN_00456ffa(int param_1,undefined1 (*param_2) [16],char **param_3,char **param_4);
int __cdecl execute_command<char>(int param_1,char *param_2,char **param_3,char **param_4);
bool __thiscall <>::operator()(<> *this);
void __cdecl FUN_0045757b(int param_1,undefined1 (*param_2) [16],char **param_3,char **param_4);
void __cdecl FUN_00457586(int param_1,undefined1 (*param_2) [16],char **param_3,char **param_4);
void __cdecl FUN_00457825(int param_1,undefined1 (*param_2) [16],char **param_3,char **param_4);
errno_t __cdecl __waccess_s(wchar_t *_Filename,int _AccessMode);
errno_t __cdecl __access_s(char *_Filename,int _AccessMode);
int __thiscall __crt_seh_guarded_call<int>::operator()<>(__crt_seh_guarded_call<int> *this,<> *param_1,<> *param_2,<> *param_3);
void FUN_004579bb(void);
int __cdecl __acrt_lowio_lock_fh_and_call<>(int param_1,<> *param_2);
int __cdecl __close(int _FileHandle);
int __cdecl __close_nolock(int _FileHandle);
undefined4 * __cdecl __acrt_stdio_allocate_stream(void);
void FUN_00457b60(void);
void __cdecl __acrt_stdio_free_stream(undefined4 *param_1);
void __cdecl find_or_allocate_unused_stream_nolock(void);
int __thiscall __crt_seh_guarded_call<int>::operator()<>(__crt_seh_guarded_call<int> *this,<> *param_1,<> *param_2,<> *param_3);
void FUN_00457cf3(void);
int __cdecl __acrt_lowio_lock_fh_and_call<>(int param_1,<> *param_2);
int __cdecl __commit(int _FileHandle);
void __cdecl write_double_translated_ansi_nolock(int param_1,char *param_2,uint param_3);
char * __cdecl write_double_translated_unicode_nolock(char *param_1,uint param_2);
bool __cdecl write_requires_double_translation_nolock(int param_1);
void __cdecl write_text_ansi_nolock(int param_1,char *param_2,uint param_3);
void __cdecl write_text_utf16le_nolock(int param_1,char *param_2,uint param_3);
void __cdecl write_text_utf8_nolock(int param_1,char *param_2,uint param_3);
int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount);
void FUN_004583eb(void);
int __cdecl __write_nolock(int _FileHandle,void *_Buf,uint _MaxCharCount);
int __cdecl common_refill_and_read_nolock<char>(FILE *param_1);
void FUN_004587a1(void);
__int64 __cdecl common_ftell<__int64>(FILE *param_1);
void FUN_0045881e(void);
__int64 __cdecl common_ftell_nolock<__int64>(FILE *param_1);
__int64 __cdecl common_ftell_read_mode_nolock(FILE *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5);
__int64 __cdecl common_ftell_translated_utf8_nolock(FILE *param_1,undefined4 param_2,uint param_3);
__int64 FUN_00458cdc(void);
__int64 FUN_00458ce7(void);
int __cdecl common_flush_and_write_nolock<char>(uint param_1,FILE *param_2);
bool __cdecl write_buffer_nolock<char>(undefined1 param_1,FILE *param_2);
void FUN_00458ecf(void);
__int64 __cdecl common_lseek<__int64>(int param_1,__int64 param_2,int param_3);
void FUN_00458fb2(void);
__int64 __cdecl common_lseek_nolock<__int64>(int param_1,__int64 param_2,int param_3);
longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin);
longlong __cdecl __lseeki64_nolock(int _FileHandle,longlong _Offset,int _Origin);
void __cdecl ___acrt_stdio_allocate_buffer_nolock(undefined4 *param_1);
undefined4 * FUN_00459127(void);
undefined4 * FUN_0045912d(void);
undefined4 * FUN_00459133(void);
undefined4 FUN_00459139(void);
undefined4 __cdecl FUN_0045913f(undefined4 *param_1);
undefined4 __cdecl FUN_0045916b(undefined4 *param_1);
undefined4 __cdecl FUN_00459197(undefined4 *param_1);
int __cdecl __crt_time_elapsed_leap_years<int>(int param_1);
bool __cdecl __crt_time_is_leap_year<int>(int param_1);
int __cdecl common_gmtime_s<__int64>(tm *param_1,__int64 *param_2);
int __cdecl compute_year(__int64 *param_1,bool *param_2);
tm * __cdecl ___getgmtimebuf(void);
void __cdecl FUN_0045946d(tm *param_1,__int64 *param_2);
bool __cdecl FUN_00459478(int *param_1);
void __cdecl FUN_0045965f(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11);
void __cdecl FUN_004597af(byte *param_1);
void FUN_00459984(void);
void __cdecl tzset_nolock(void);
void __cdecl ___tzset(void);
void FUN_00459c07(void);
int __cdecl __isindst(tm *_Time);
void FUN_00459c51(void);
int __cdecl compute_iso_week(int param_1,int param_2,int param_3);
int __cdecl compute_iso_week_internal(int param_1,int param_2,int param_3);
int __cdecl compute_iso_year(int param_1,int param_2,int param_3);
uint __thiscall FUN_00459d68(void *this,_locale_t param_1,ushort param_2,tm *param_3,wchar_t **param_4,uint *param_5,__crt_lc_time_data *param_6,void *param_7);
void __cdecl store_number(int param_1,int param_2,wchar_t **param_3,uint *param_4,wchar_t param_5);
void __cdecl store_number_without_lead_zeroes(int param_1,wchar_t **param_2,uint *param_3);
void __cdecl store_string(wchar_t *param_1,wchar_t **param_2,uint *param_3);
bool __cdecl store_winword(__crt_locale_pointers *param_1,int param_2,tm *param_3,wchar_t **param_4,uint *param_5,__crt_lc_time_data *param_6);
int __cdecl __Wcsftime_l(wchar_t *param_1,uint param_2,wchar_t *param_3,tm *param_4,__lc_time_data *param_5,__crt_locale_pointers *param_6);
uint FUN_0045af8e(void);
undefined4 __cdecl ___acrt_copy_path_to_wide_string(LPCSTR param_1,undefined4 *param_2);
int __cdecl FID_conflict:__wrmdir(wchar_t *_Filename);
void __cdecl _abort(void);
void __cdecl ___acrt_add_locale_ref(int param_1);
void __cdecl ___acrt_free_locale(void *param_1);
undefined * __cdecl ___acrt_locale_add_lc_time_reference(undefined **param_1);
void __cdecl ___acrt_locale_free_lc_time_if_unreferenced(undefined **param_1);
undefined * __cdecl ___acrt_locale_release_lc_time_reference(undefined **param_1);
void __cdecl ___acrt_release_locale_ref(int param_1);
undefined ** FUN_0045b395(void);
void FUN_0045b3fb(void);
undefined ** __cdecl __updatetlocinfoEx_nolock(undefined4 *param_1,undefined **param_2);
void __thiscall __crt_seh_guarded_call<void>::operator()<>(__crt_seh_guarded_call<void> *this,<> *param_1,<> *param_2,<> *param_3);
void FUN_0045b493(void);
void __cdecl __acrt_lock_and_call<>(__acrt_lock_id param_1,<> *param_2);
void __thiscall <>::operator()(<> *this);
wchar_t * __cdecl CPtoLocaleName(int param_1);
int __cdecl getSystemCP(int param_1);
void __cdecl setSBCS(__crt_multibyte_data *param_1);
void __cdecl setSBUpLow(__crt_multibyte_data *param_1);
int __cdecl setmbcp_internal(int param_1,bool param_2);
undefined4 ___acrt_initialize_multibyte(void);
int * ___acrt_update_thread_multibyte_data(void);
void FUN_0045b9e5(void);
void __cdecl __setmbcp_nolock(int param_1,__crt_multibyte_data *param_2);
void __cdecl __seh_filter_exe(uint param_1,undefined4 param_2);
void __cdecl ___acrt_GetStringTypeA(__crt_locale_pointers *param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWORD param_5,UINT param_6,int param_7);
UINT __cdecl ____lc_codepage_func(void);
wchar_t ** __cdecl ____lc_locale_name_func(void);
void __cdecl ___acrt_locale_initialize_ctype(undefined4 *param_1);
void __cdecl ___acrt_locale_free_monetary(int param_1);
undefined4 __cdecl ___acrt_locale_initialize_monetary(int param_1);
void __cdecl ___acrt_locale_free_numeric(undefined4 *param_1);
undefined ** __cdecl ___acrt_locale_initialize_numeric(int param_1);
void __cdecl free_crt_array_internal(void **param_1,uint param_2);
bool __cdecl initialize_lc_time(__crt_lc_time_data *param_1,__crt_locale_data *param_2);
void __cdecl ___acrt_locale_free_time(void **param_1);
undefined4 __cdecl ___acrt_locale_initialize_time(__crt_locale_data *param_1);
errno_t __cdecl _wcscat_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src);
int __cdecl common_tcsncpy_s<wchar_t>(wchar_t *param_1,uint param_2,wchar_t *param_3,uint param_4);
void __cdecl FUN_0045cf02(wchar_t *param_1,uint param_2,wchar_t *param_3,uint param_4);
size_t __cdecl _wcscspn(wchar_t *_Str,wchar_t *_Control);
int __cdecl _wcsncmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount);
wchar_t * __cdecl _wcspbrk(wchar_t *_Str,wchar_t *_Control);
void __cdecl FUN_0045cfdc(int param_1);
void __cdecl _GetLocaleNameFromLangCountry(undefined4 *param_1);
void __cdecl _GetLocaleNameFromLanguage(undefined4 *param_1);
int __cdecl _GetPrimaryLen(ushort *param_1);
void FUN_0045d18e(wchar_t *param_1);
void FUN_0045d478(wchar_t *param_1);
UINT __cdecl _ProcessCodePage(wchar_t *param_1,int param_2);
void __cdecl _TestDefaultCountry(wchar_t *param_1);
bool __cdecl _TranslateName(int param_1,int param_2,int *param_3);
undefined4 __cdecl FUN_0045d6da(int param_1,UINT *param_2,LPWSTR param_3);
void _CountryEnumProc@4(ushort *param_1);
void __cdecl _GetLcidFromCountry(byte *param_1);
void __cdecl _GetLcidFromLangCountry(uint *param_1);
void __cdecl _GetLcidFromLanguage(byte *param_1);
int __cdecl _GetPrimaryLen(ushort *param_1);
void _LangCountryEnumProc@4(ushort *param_1);
void _LanguageEnumProc@4(ushort *param_1);
int __cdecl _LcidFromHexString(ushort *param_1);
UINT __cdecl _ProcessCodePage(wchar_t *param_1,int param_2);
undefined4 __cdecl _TestDefaultCountry(short param_1);
undefined4 __cdecl _TestDefaultLanguage(uint param_1,int param_2);
uint __cdecl _TranslateName(int param_1,int param_2,int *param_3);
void __cdecl ___acrt_get_qualified_locale_downlevel(int param_1,UINT *param_2,LPWSTR param_3);
void __cdecl FUN_0045e234(char **param_1);
int __cdecl __callnewh(size_t _Size);
uint __query_new_handler(void);
void FUN_0045e2d5(void);
undefined4 FUN_0045e2de(void);
undefined4 __cdecl __set_new_mode(int param_1);
int __cdecl ___acrt_fp_strflt_to_string(uint *param_1,uint param_2,int param_3,int param_4);
uint * __fastcall scoped_fp_state_reset(uint *param_1);
void __cdecl FUN_0045e3f9(int param_1,uint param_2,int param_3,int *param_4,char *param_5,rsize_t param_6);
errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount);
int __cdecl __isatty(int _FileHandle);
undefined4 * ___acrt_lowio_create_handle_array(void);
void __cdecl ___acrt_lowio_destroy_handle_array(LPCRITICAL_SECTION param_1);
undefined4 __cdecl ___acrt_lowio_ensure_fh_exists(uint param_1);
void FUN_0045f9aa(void);
void __cdecl ___acrt_lowio_lock_fh(uint param_1);
undefined4 __cdecl ___acrt_lowio_set_os_handle(uint param_1,HANDLE param_2);
void __cdecl ___acrt_lowio_unlock_fh(uint param_1);
int __cdecl __alloc_osfhnd(void);
void FUN_0045fb96(void);
int __cdecl __free_osfhnd(int param_1);
intptr_t __cdecl __get_osfhandle(int _FileHandle);
int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount);
int __cdecl __strnicmp_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale);
int __cdecl InternalCompareStringA(__crt_locale_pointers *param_1,wchar_t *param_2,ulong param_3,char *param_4,int param_5,char *param_6,int param_7,int param_8);
void __cdecl ___acrt_CompareStringA(__crt_locale_pointers *param_1,wchar_t *param_2,ulong param_3,char *param_4,int param_5,char *param_6,int param_7,int param_8);
wchar_t * __cdecl find_end_of_double_null_terminated_sequence(wchar_t *param_1);
LPSTR ___dcrt_get_narrow_environment_from_os(void);
undefined4 __cdecl FUN_00460167(uint *param_1,int param_2);
LPVOID __cdecl FUN_004603a2(int *param_1);
int __cdecl find_in_environment_nolock<char>(char *param_1,uint param_2);
void __cdecl FUN_004604a7(uint *param_1,int param_2);
void __cdecl ___strncnt(char *param_1,int param_2);
int __cdecl GetTableIndexFromLocaleName(wchar_t *param_1);
int __cdecl FUN_0046058a(int param_1,wchar_t *param_2,rsize_t param_3);
undefined4 __cdecl ___acrt_DownlevelLocaleNameToLCID(wchar_t *param_1);
int __cdecl __wcsnicmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount);
int __cdecl __wcsnicmp_l(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount);
int __cdecl common_sopen_dispatch<char>(char *param_1,int param_2,int param_3,int param_4,int *param_5,int param_6);
void FUN_00460938(void);
int __thiscall FUN_00460964(void *this,uint param_1,byte param_2,uint param_3,uint param_4);
void * __cdecl create_file(LPCWSTR param_1,LPSECURITY_ATTRIBUTES param_2,undefined4 param_3,DWORD param_4,DWORD param_5,DWORD param_6,uint param_7,uint param_8);
ulong __cdecl decode_open_create_flags(int param_1);
byte * __cdecl FUN_00460c46(byte *param_1,uint param_2,int param_3,byte param_4);
int __cdecl truncate_ctrl_z_if_present(int param_1);
errno_t __cdecl __sopen_nolock(int *UnlockFlag,int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionFlag,int _SecureFlag);
errno_t __cdecl FID_conflict:__sopen_s(int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionMode);
errno_t __cdecl __wsopen_nolock(int *UnlockFlag,int *_FileHandle,wchar_t *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionFlag,int _SecureFlag);
undefined4 * FUN_0046120c(void);
LPVOID __cdecl FUN_00461212(LPCVOID param_1,uint param_2,uint param_3);
errno_t __cdecl _strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src);
undefined4 __cdecl FUN_004612f3(int *param_1,undefined4 *param_2);
void __cdecl FUN_004613bb(int *param_1,undefined4 *param_2);
undefined4 __cdecl ___acrt_pack_narrow_command_line_and_environment(int *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
char * __cdecl common_getpath<char>(char *param_1,char *param_2,uint param_3);
void __cdecl FUN_0046178e(char *param_1,char *param_2,uint param_3);
wint_t __cdecl __putwch_nolock(wchar_t _WCh);
int __cdecl translate_text_mode_nolock<char>(int param_1,char *param_2,uint param_3);
int __cdecl translate_text_mode_nolock<wchar_t>(int param_1,wchar_t *param_2,uint param_3);
int __cdecl translate_ansi_or_utf8_nolock(int param_1,char *param_2,uint param_3,wchar_t *param_4,uint param_5);
int __cdecl translate_utf16_from_console_nolock(int param_1,wchar_t *param_2,uint param_3);
int __cdecl __read(int _FileHandle,void *_DstBuf,uint _MaxCharCount);
void FUN_00461db0(void);
int __cdecl __read_nolock(int _FileHandle,void *_DstBuf,uint _MaxCharCount);
int __cdecl common_tcsncpy_s<char>(char *param_1,uint param_2,char *param_3,uint param_4);
void __cdecl FUN_0046223f(char *param_1,uint param_2,char *param_3,uint param_4);
uint __cdecl _mbstowcs_l_helper(wchar_t *param_1,char *param_2,uint param_3,__crt_locale_pointers *param_4);
errno_t __cdecl __mbstowcs_s_l(size_t *_PtNumOfCharConverted,wchar_t *_DstBuf,size_t _SizeInWords,char *_SrcBuf,size_t _MaxCount,_locale_t _Locale);
errno_t __cdecl _mbstowcs_s(size_t *_PtNumOfCharConverted,wchar_t *_DstBuf,size_t _SizeInWords,char *_SrcBuf,size_t _MaxCount);
int __cdecl __wcsicmp(wchar_t *_Str1,wchar_t *_Str2);
int __cdecl __wcsicmp_l(wchar_t *_Str1,wchar_t *_Str2,_locale_t _Locale);
uint __cdecl ___get_abstract_control_sse2(uint param_1);
uint __cdecl ___get_abstract_control_x87(uint param_1);
uint __cdecl ___get_machine_control(uint param_1);
uint __cdecl ___get_machine_control_sse2(uint param_1);
byte __cdecl ___get_machine_status_sse2(uint param_1);
byte __cdecl ___get_machine_status_x87(uint param_1);
uint __getfpcontrolword(void);
uint __getfpstatusword(void);
void __cdecl __setfpcontrolword(uint param_1);
void __cdecl __setfpstatusword(uint param_1);
uint operator()<>(int *param_1);
void FUN_00462b17(void);
_func_void_int * __cdecl __acrt_lock_and_call<>(__acrt_lock_id param_1,<> *param_2);
_func_void_int ** __cdecl get_global_action_nolock(int param_1);
__crt_signal_action_t * __cdecl siglookup(int param_1,__crt_signal_action_t *param_2);
void ___acrt_get_sigabrt_handler(void);
void __cdecl ___acrt_initialize_signal_handlers(char **param_1);
int FUN_00462c07(void);
int __cdecl _raise(int _SigNum);
void FUN_00462dd0(void);
int __cdecl InternalGetLocaleInfoA(__crt_locale_pointers *param_1,wchar_t *param_2,ulong param_3,char *param_4,int param_5);
void __cdecl FUN_00462f22(__crt_locale_pointers *param_1,int param_2,wchar_t *param_3,uint param_4,int *param_5);
int __cdecl common_xtox<>(ulong param_1,wchar_t *param_2,uint param_3,uint param_4,bool param_5);
int __cdecl common_xtox_s<>(ulong param_1,wchar_t *param_2,uint param_3,uint param_4,bool param_5);
errno_t __cdecl __itow_s(int _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);
undefined4 __cdecl fegetenv(uint *param_1);
undefined4 __cdecl fesetenv(uint *param_1);
undefined4 __cdecl feholdexcept(uint *param_1);
void FUN_004632f0(void);
uint __cdecl FUN_00463348(int param_1,uint param_2);
float10 __cdecl FUN_00463400(double param_1);
undefined4 FUN_0046351d(void);
void __cdecl FUN_00463523(undefined4 param_1);
int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount);
wint_t __cdecl __towlower_l(wint_t _C,_locale_t _Locale);
undefined4 __cdecl FUN_0046366a(undefined4 *param_1);
errno_t __cdecl __set_fmode(int _Mode);
int __cdecl __setmode_nolock(int _FileHandle,int _Mode);
int __cdecl __chsize_nolock(int _FileHandle,longlong _Size);
SIZE_T __cdecl FUN_00463935(LPCVOID param_1);
LPVOID __cdecl __realloc_base(void *param_1,uint param_2);
void ___dcrt_lowio_initialize_console_output(void);
uint __cdecl ___hw_cw_sse2(uint param_1);
uint __cdecl __clearfp(void);
uint __cdecl __control87(uint _NewValue,uint _Mask);
uint __cdecl __hw_cw(uint param_1);
void FUN_00463f40(void);
float10 __cdecl FUN_00463f5e(double param_1);
undefined4 FUN_004645fc(void);
uint __cdecl FUN_00464658(undefined4 param_1,uint param_2);
void __fastcall __math_exit(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
float10 __fastcall FUN_00464760(undefined4 param_1,int param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
float10 __fastcall __startOneArgErrorHandling(undefined4 param_1,int param_2,ushort param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void __cdecl ___libm_error_support(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4);
void __cdecl ___acrt_LCMapStringW(wchar_t *param_1,DWORD param_2,LPCWSTR param_3,uint param_4,LPWSTR param_5,int param_6);
errno_t __cdecl __controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask);
void __cdecl ___set_fpsr_sse2(uint param_1);
int __clrfp(void);
int __ctrlfp(void);
void FUN_00464bd6(void);
int __statfp(void);
undefined4 __cdecl FUN_00464c43(double param_1);
undefined4 __cdecl FUN_00464cad(int param_1,int param_2,int param_3,int param_4,undefined8 *param_5);
void __cdecl __87except(int param_1,int *param_2,ushort *param_3);
void __thiscall __crt_state_management::dual_state_global<char**>::initialize(dual_state_global<char**> *this,char **param_1);
bool ___acrt_has_user_matherr(void);
void __cdecl FUN_00464f2d(char **param_1);
void __cdecl ___acrt_invoke_user_matherr(undefined4 param_1);
void __cdecl ___setusermatherr(void *param_1);
float10 __cdecl FUN_00464f9f(double param_1);
int __cdecl __errcode(uint param_1);
void __cdecl __except1(uint param_1,int param_2,undefined8 param_3,double param_4,uint param_5);
bool __cdecl __handle_exc(uint param_1,double *param_2,uint param_3);
void __cdecl __raise_exc(uint *param_1,uint *param_2,uint param_3,int param_4,uint *param_5,uint *param_6);
void __cdecl __raise_exc_ex(uint *param_1,uint *param_2,uint param_3,int param_4,uint *param_5,uint *param_6,int param_7);
void __cdecl __set_errno_from_matherr(int param_1);
float10 __cdecl __umatherr(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
void __cdecl FUN_0046567c(int param_1,uint param_2,int *param_3);
float10 __cdecl __set_exp(undefined8 param_1,short param_2);
undefined4 __cdecl __sptype(int param_1,uint param_2);
int __cdecl __fpclass(double _X);
undefined4 * __thiscall FUN_00465881(void *this,int param_1);
undefined4 * __fastcall FUN_0046589c(undefined4 *param_1);
undefined4 * __thiscall FUN_004658b4(void *this,int param_1);
undefined4 * __thiscall FUN_004658cf(void *this,undefined4 param_1);
undefined4 * __thiscall FUN_004658f0(void *this,int param_1);
undefined4 * __thiscall FUN_0046590b(void *this,int param_1);
undefined4 * __thiscall FUN_00465926(void *this,undefined4 param_1);
void FUN_00465947(undefined4 param_1);
void FUN_00465967(undefined4 param_1);
undefined4 __fastcall FUN_00465987(undefined4 param_1);
_Lockit * __thiscall std::_Lockit::_Lockit(_Lockit *this,int param_1);
int FUN_004659e5(void);
void __thiscall std::_Lockit::~_Lockit(_Lockit *this);
bool thunk_FUN_0046c226(void);
_Ctypevec * __cdecl __Getctype(_Ctypevec *__return_storage_ptr__);
int __cdecl __Tolower(int param_1,_Ctypevec *param_2);
int __cdecl __Toupper(int param_1,_Ctypevec *param_2);
_Locimp * __thiscall std::locale::_Locimp::_Locimp(_Locimp *this,bool param_1);
void __thiscall std::_Fac_node::~_Fac_node(_Fac_node *this);
void FUN_00465d31(void);
void __thiscall std::locale::_Locimp::~_Locimp(_Locimp *this);
_Yarn<char> * __thiscall std::_Yarn<char>::operator=(_Yarn<char> *this,char *param_1);
void * __thiscall std::locale::_Locimp::`scalar_deleting_destructor'(_Locimp *this,uint param_1);
void __cdecl std::_Facet_Register(_Facet_base *param_1);
undefined4 FUN_00465e57(void);
_Locimp * __cdecl std::locale::_Init(bool param_1);
void __cdecl std::locale::_Locimp::_Locimp_dtor(_Locimp *param_1);
void __cdecl std::_Locinfo::_Locinfo_ctor(_Locinfo *param_1,char *param_2);
void __cdecl std::_Locinfo::_Locinfo_dtor(_Locinfo *param_1);
_Locimp * __cdecl std::locale::_Locimp::_New_Locimp(bool param_1);
void __cdecl std::locale::_Setgloballocale(void *param_1);
void __cdecl __Deletegloballocale(int *param_1);
void __cdecl tidy_global(void);
char * __cdecl std::_Syserror_map(int param_1);
void __cdecl std::ios_base::_Addstd(ios_base *param_1);
void __thiscall std::ios_base::_Callfns(ios_base *this,event param_1);
void __cdecl std::ios_base::_Ios_base_dtor(ios_base *param_1);
void __thiscall std::ios_base::_Tidy(ios_base *this);
FILE * __cdecl _Xfiopen<>(char *param_1,uint param_2,int param_3);
void __cdecl FUN_00466282(char *param_1,uint param_2,int param_3);
void __cdecl Xfsopen(char *param_1,int param_2,int param_3);
void __cdecl FUN_004662a8(LPCRITICAL_SECTION param_1);
void __cdecl __Mtxinit(_Rmtx *param_1);
void __cdecl __Mtxlock(_Rmtx *param_1);
void __cdecl __Mtxunlock(_Rmtx *param_1);
int __cdecl ___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError);
void __thiscall _Init_atexit::~_Init_atexit(_Init_atexit *this);
void __cdecl _Atexit(_func_void *param_1);
int __cdecl FID_conflict:__vsnprintf_c_l(wchar_t *_DstBuf,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
int __cdecl FID_conflict:__swprintf_c(wchar_t *_Dest,wchar_t *_Format,...);
undefined4 __cdecl ___crtInitializeCriticalSectionEx(LPCRITICAL_SECTION param_1,DWORD param_2,undefined4 param_3);
undefined4 __cdecl _GetTableIndexFromLocaleName(int param_1);
undefined4 __cdecl ___crtDownlevelLocaleNameToLCID(int param_1);
int __cdecl ___crtLCMapStringEx(LPCWSTR lpLocaleName,DWORD dwMapFlags,LPCWSTR lpSrcStr,int cchSrc,LPWSTR lpDestStr,int cchDest);
int __cdecl ___wcsnicmp_ascii(int param_1,ushort *param_2,int param_3);
void * __cdecl operator_new(uint param_1);
void __cdecl FID_conflict:_free(void *_Memory);
_IMAGE_SECTION_HEADER * __cdecl find_pe_section(uchar *param_1,uint param_2);
int ___scrt_acquire_startup_lock(void);
uint __cdecl ___scrt_initialize_crt(int param_1);
uint __cdecl ___scrt_initialize_onexit_tables(int param_1);
uint __cdecl ___scrt_is_nonwritable_in_current_image(int param_1);
int __cdecl ___scrt_release_startup_lock(char param_1);
undefined4 __cdecl ___scrt_uninitialize_crt(char param_1,char param_2);
_onexit_t __cdecl __onexit(_onexit_t _Func);
int __cdecl _atexit(_func_4879 *param_1);
void __cdecl ___raise_securityfailure(_EXCEPTION_POINTERS *param_1);
void __cdecl ___report_gsfailure(void);
void ___report_rangecheckfailure(void);
void __cdecl ___report_securityfailure(undefined4 param_1);
void __fastcall __security_check_cookie(int param_1);
void __cdecl FUN_00466f9a(void *param_1);
void __cdecl FUN_00466fa8(uint param_1);
void __cdecl FID_conflict:_free(void *_Memory);
undefined4 FUN_00466fb9(void);
uint __cdecl FUN_00467079(uint param_1);
void FUN_00467096(void);
void FUN_004670b2(int *param_1);
void FUN_004670f1(int *param_1);
void FUN_00467137(void);
void __Init_thread_notify(void);
void FUN_00467184(void);
bool __cdecl __Init_thread_wait(DWORD param_1);
void FUN_004671f5(void);
undefined4 * __thiscall FUN_00467201(void *this,byte param_1);
void FUN_00467224(uint param_1);
void __alloca_probe(void);
int __cdecl __scrt_common_main_seh(void);
void entry(void);
void ___scrt_fastfail(void);
WORD ___scrt_get_show_window_mode(void);
uint ___scrt_is_managed_app(void);
void FUN_0046761f(void);
undefined4 FUN_0046762b(int *param_1);
void FUN_0046766c(void);
void __cdecl __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4);
void __cdecl __SEH_prolog4_GS(undefined4 param_1,int param_2);
void FUN_004677c9(void);
longlong __allmul(uint param_1,int param_2,uint param_3,int param_4);
undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 __allrem(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 __alldvrm(uint param_1,uint param_2,uint param_3,uint param_4);
longlong __fastcall __allshl(byte param_1,int param_2);
ulonglong __fastcall __aullshr(byte param_1,uint param_2);
undefined4 ___isa_available_init(void);
uint __alloca_probe_16(void);
uint __alloca_probe_8(void);
ulonglong __fastcall FUN_00467c80(undefined4 param_1,undefined4 param_2);
void FUN_00467d35(void);
void __cdecl guard_check_icall(void);
void __EH_epilog3(void);
void __cdecl __EH_prolog3(int param_1);
void __cdecl __EH_prolog3_catch(int param_1);
undefined4 * __thiscall FUN_00467e48(void *this,int param_1);
undefined4 * __fastcall FUN_00467e63(undefined4 *param_1);
void FUN_00467e7b(void);
void FUN_00467e98(void);
bool ___scrt_is_ucrt_dll_in_use(void);
void FUN_00467ec1(uint param_1);
undefined * Catch_All@00467ef9(void);
void FUN_00467f01(void);
void __cdecl ___security_init_cookie(void);
undefined4 FUN_00467faf(void);
undefined4 FUN_00467fc0(void);
void __cdecl guard_check_icall(void);
undefined * FUN_00467fd1(void);
void FUN_00467fd7(void);
bool FUN_00467ff4(void);
undefined * FUN_00468000(void);
undefined * FUN_00468006(void);
void FUN_0046800c(void);
void FUN_00468037(void);
void * __cdecl _memchr(void *_Buf,int _Val,size_t _MaxCount);
ulonglong __cdecl FUN_00468120(uint *param_1,uint *param_2,uint param_3);
void __CxxThrowException@8(int *param_1,byte *param_2);
void * __cdecl _CallCatchBlock2(EHRegistrationNode *param_1,_s_FuncInfo *param_2,void *param_3,int param_4,ulong param_5);
int __cdecl _CallSETranslator(EHExceptionRecord *param_1,EHRegistrationNode *param_2,void *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7);
int __cdecl FUN_0046883f(int param_1,int param_2,int param_3,uint *param_4,uint *param_5);
void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2);
void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2);
void __cdecl __CatchGuardHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3);
undefined4 * __cdecl __CreateFrameInfo(undefined4 *param_1,undefined4 param_2);
void __cdecl FUN_00468993(int param_1);
undefined4 __cdecl __IsExceptionObjectToBeDestroyed(int param_1);
undefined4 __cdecl __TranslatorGuardHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3);
undefined4 __cdecl FID_conflict:___CxxFrameHandler3(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4);
ulonglong __cdecl FUN_00468ae0(uint *param_1,uint *param_2,uint param_3);
void * __cdecl _memset(void *_Dst,int _Val,size_t _Size);
uint FUN_004691ba(void);
void FUN_004691d9(void);
undefined4 * __thiscall FUN_004691f4(void *this,int param_1);
undefined4 * __thiscall FUN_0046920f(void *this,int param_1);
void __cdecl construct_from_string_literal(undefined4 *param_1,undefined4 param_2);
void __cdecl construct_from_string_literal(undefined4 *param_1,undefined4 param_2);
void __cdecl ___RTtypeid(int *param_1);
void __cdecl ___std_exception_copy(undefined4 *param_1,undefined4 *param_2);
void __cdecl ___std_exception_destroy(undefined4 *param_1);
void __cdecl FUN_00469366(size_t param_1);
uint __cdecl ___std_type_info_compare(int param_1,int param_2);
PSINGLE_LIST_ENTRY __cdecl ___std_type_info_name(undefined4 *param_1,PSLIST_HEADER param_2);
undefined1 (*) [16] __cdecl FUN_00469480(undefined1 (*param_1) [16],undefined1 (*param_2) [16]);
void __cdecl _ValidateLocalCookies(int *param_1,int param_2);
undefined4 __cdecl __except_handler4(PEXCEPTION_RECORD param_1,PVOID param_2,undefined4 param_3);
void __cdecl __local_unwind4(uint *param_1,int param_2,uint param_3);
void __fastcall _EH4_CallFilterFunc(undefined *param_1);
void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE);
void __fastcall _EH4_GlobalUnwind2(PVOID param_1,PEXCEPTION_RECORD param_2);
void __fastcall _EH4_LocalUnwind(int param_1,uint param_2,undefined4 param_3,uint *param_4);
int __cdecl _memcmp(void *_Buf1,void *_Buf2,size_t _Size);
undefined1 (*) [16] __cdecl FUN_0046b180(undefined1 (*param_1) [16],byte param_2);
uint * __cdecl FUN_0046b2c0(uint *param_1,char param_2);
ushort * __cdecl FUN_0046b3eb(ushort *param_1,ushort param_2);
void __cdecl ___DestructExceptionObject(int *param_1);
undefined4 * __thiscall FUN_0046b52d(void *this,int param_1);
bad_exception * __thiscall std::bad_exception::bad_exception(bad_exception *this);
undefined4 * __thiscall FUN_0046b560(void *this,byte param_1);
void * __cdecl CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,_s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7);
void FUN_0046b6c8(void);
void FUN_0046b749(undefined4 param_1);
void Catch_All@0046b769(void);
void __cdecl CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,_s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11);
int __cdecl ExFilterRethrow(_EXCEPTION_POINTERS *param_1);
void __cdecl FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8);
void __cdecl FUN_0046bbb0(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8);
undefined4 __cdecl FUN_0046bccb(int param_1,int *param_2);
uchar __cdecl Is_bad_exception_allowed(_s_ESTypeList *param_1);
void FID_conflict:_CallMemberFunction2(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE);
int __cdecl ___AdjustPointer(int param_1,int *param_2);
void __cdecl ___BuildCatchObject(int param_1,uint *param_2,uint *param_3,byte *param_4);
char __cdecl ___BuildCatchObjectHelper(int param_1,uint *param_2,uint *param_3,byte *param_4);
undefined4 __cdecl ___FrameUnwindFilter(undefined4 *param_1);
void __cdecl ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4);
void FUN_0046c088(void);
undefined4 __cdecl ___InternalCxxFrameHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,byte param_8);
undefined4 __cdecl ___TypeMatch(byte *param_1,byte *param_2,byte *param_3);
bool FUN_0046c226(void);
uint ___vcrt_initialize(void);
undefined4 __cdecl ___vcrt_uninitialize(char param_1);
void * __cdecl try_get_function(function_id param_1,char *param_2,module_id *param_3,module_id *param_4);
HINSTANCE__ * __cdecl try_get_module(module_id param_1);
void __cdecl ___vcrt_FlsAlloc(undefined4 param_1);
void __cdecl ___vcrt_FlsFree(DWORD param_1);
void __cdecl ___vcrt_FlsGetValue(DWORD param_1);
void __cdecl ___vcrt_FlsSetValue(DWORD param_1,LPVOID param_2);
void __cdecl ___vcrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION param_1,DWORD param_2,undefined4 param_3);
void ___vcrt_initialize_winapi_thunks(void);
void __cdecl ___vcrt_uninitialize_winapi_thunks(char param_1);
void FUN_0046c539(undefined *param_1);
void ___vcrt_getptd(void);
LPVOID ___vcrt_getptd_noexit(void);
uint ___vcrt_initialize_ptd(void);
undefined4 ___vcrt_uninitialize_ptd(void);
void __CallSettingFrame@12(undefined4 param_1,undefined4 param_2,int param_3);
void ___vcrt_initialize_pure_virtual_call_handler(void);
DName * __thiscall DName::DName(DName *this,char **param_1,char param_2);
DName * __thiscall DName::DName(DName *this,DName *param_1);
DName * __thiscall DName::DName(DName *this,char *param_1);
DName * __thiscall DName::DName(DName *this,DNameStatus param_1);
void __thiscall DName::DName(DName *this,__int64 param_1);
void __thiscall DName::DName(DName *this,__uint64 param_1);
UnDecorator * __thiscall UnDecorator::UnDecorator(UnDecorator *this,char *param_1,char *param_2,int param_3,_func_char_ptr_long *param_4,ulong param_5);
pDNameNode * __thiscall pDNameNode::pDNameNode(pDNameNode *this,DName *param_1);
pcharNode * __thiscall pcharNode::pcharNode(pcharNode *this,char *param_1,int param_2);
DName * __thiscall DName::DName(DName *this,char param_1);
DName * __thiscall DName::operator=(DName *this,char *param_1);
DName * __thiscall DName::operator=(DName *this,DNameStatus param_1);
int __thiscall Replicator::operator[](Replicator *this,int param_1);
char * __thiscall UnDecorator::operator_char*(UnDecorator *this);
DName * __cdecl operator+(char param_1,DName *param_2);
char * __cdecl operator+(char *param_1,DName *param_2);
DNameStatus __cdecl operator+(DNameStatus param_1,DName *param_2);
DName * __thiscall DName::operator+(DName *this,DName *param_1);
DName * __thiscall DName::operator+(DName *this,char param_1);
char * __thiscall DName::operator+(DName *this,char *param_1);
DNameStatus __thiscall DName::operator+(DName *this,DNameStatus param_1);
DName * __thiscall DName::operator+=(DName *this,DName *param_1);
DName * __thiscall DName::operator+=(DName *this,char param_1);
DName * __thiscall DName::operator+=(DName *this,char *param_1);
DName * __thiscall DName::operator+=(DName *this,DNameStatus param_1);
Replicator * __thiscall Replicator::operator+=(Replicator *this,DName *param_1);
DName * __thiscall DName::operator|=(DName *this,DName *param_1);
void __thiscall _HeapManager::Destructor(_HeapManager *this);
char * __cdecl UnDecorator::UScore(Tokens param_1);
void __thiscall DName::append(DName *this,DNameNode *param_1);
DName * __cdecl UnDecorator::composeDeclaration(DName *param_1);
void __thiscall DName::doPchar(DName *this,char *param_1,int param_2);
DName * __cdecl UnDecorator::getArgumentList(void);
DName * __cdecl UnDecorator::getArgumentTypes(void);
DName * __cdecl UnDecorator::getArrayType(DName *param_1);
DName * __cdecl UnDecorator::getBasedType(void);
DName * __cdecl UnDecorator::getBasicDataType(DName *param_1);
DName * __cdecl UnDecorator::getCallingConvention(void);
DName * __cdecl UnDecorator::getDataIndirectType(DName *param_1,char *param_2,DName *param_3,int param_4);
DName * __cdecl UnDecorator::getDataIndirectType(void);
DName * __cdecl UnDecorator::getDataType(DName *param_1);
DName * __cdecl UnDecorator::getDecoratedName(void);
DName * __cdecl UnDecorator::getDimension(bool param_1);
DName * __cdecl UnDecorator::getDispatchTarget(void);
DName * __cdecl UnDecorator::getECSUDataType(void);
DName * __cdecl UnDecorator::getEnumType(void);
char ** __cdecl UnDecorator::getExtendedDataIndirectType(char **param_1,bool *param_2,int param_3);
DName * __cdecl UnDecorator::getExternalDataType(DName *param_1);
DName * __cdecl UnDecorator::getFunctionIndirectType(DName *param_1);
char __thiscall DName::getLastChar(DName *this);
byte __fastcall FUN_0046f9b6(int param_1);
undefined1 __fastcall FUN_0046f9c2(int param_1);
int __fastcall FUN_0046f9c6(int param_1);
char __thiscall pairNode::getLastChar(pairNode *this);
uint __fastcall FUN_0046fa07(int param_1);
undefined4 __cdecl UnDecorator::getLexicalFrame(void);
void * __thiscall _HeapManager::getMemory(_HeapManager *this,uint param_1,int param_2);
int __cdecl UnDecorator::getNumberOfDimensions(void);
DName * __cdecl UnDecorator::getOperatorName(bool param_1,bool *param_2);
DName * __cdecl UnDecorator::getPrimaryDataType(DName *param_1);
DName * __cdecl UnDecorator::getPtrRefDataType(DName *param_1,int param_2);
DName * __cdecl UnDecorator::getPtrRefType(DName *param_1,DName *param_2,char *param_3);
DName * __cdecl UnDecorator::getRestrictionSpec(void);
DName * __cdecl UnDecorator::getReturnType(DName *param_1);
DName * __cdecl UnDecorator::getScope(void);
DName * __cdecl UnDecorator::getScopedName(void);
DName * __cdecl UnDecorator::getSignedDimension(void);
char * __thiscall DName::getString(DName *this,char *param_1,char *param_2);
char * __thiscall DName::getString(DName *this,char *param_1,int param_2);
char * __thiscall DNameStatusNode::getString(DNameStatusNode *this,char *param_1,char *param_2);
undefined1 * __thiscall FUN_00470c54(void *this,undefined1 *param_1,undefined1 *param_2);
char * __thiscall pDNameNode::getString(pDNameNode *this,char *param_1,char *param_2);
char * __thiscall pairNode::getString(pairNode *this,char *param_1,char *param_2);
char * __thiscall pcharNode::getString(pcharNode *this,char *param_1,char *param_2);
char * __cdecl UnDecorator::getStringEncoding(char *param_1,int param_2);
undefined1 * __cdecl getStringHelper(undefined1 *param_1,int param_2,int param_3,int param_4);
undefined4 __cdecl UnDecorator::getSymbolName(void);
void __cdecl UnDecorator::getTemplateArgumentList(void);
void __cdecl UnDecorator::getTemplateConstant(void);
DName * __cdecl UnDecorator::getTemplateName(bool param_1);
DName * __cdecl UnDecorator::getThisType(void);
undefined4 * __cdecl UnDecorator::getThrowTypes(void);
int __cdecl UnDecorator::getTypeEncoding(void);
DName * __cdecl UnDecorator::getVCallThunkType(void);
DName * __cdecl UnDecorator::getVdispMapType(DName *param_1);
DName * __cdecl UnDecorator::getVfTableType(DName *param_1);
void __cdecl UnDecorator::getZName(bool param_1,bool param_2);
int __thiscall DName::length(DName *this);
undefined4 FUN_00471d87(void);
undefined4 __fastcall FUN_00471d8b(int param_1);
int __thiscall pairNode::length(pairNode *this);
undefined4 __fastcall FUN_00471de3(int param_1);
DNameStatusNode * __cdecl DNameStatusNode::make(DNameStatus param_1);
uint __cdecl und_strncmp(char *param_1,char *param_2,uint param_3);
char * __cdecl ___unDName(char *param_1,char *param_2,int param_3,int param_4,undefined4 param_5,ushort param_6);
void FUN_00471f2b(void);
void __cdecl __global_unwind2(PVOID param_1);
void __cdecl __local_unwind2(int param_1,uint param_2);
undefined4 __fastcall __NLG_Notify1(undefined4 param_1);
void __NLG_Notify(ulong param_1);
void FUN_00472074(void);
void FUN_00472077(void);
undefined4 ___vcrt_initialize_locks(void);
void __cdecl ___vcrt_lock(int param_1);
undefined4 ___vcrt_uninitialize_locks(void);
void __cdecl FUN_00472113(int param_1);
BOOL IsProcessorFeaturePresent(DWORD ProcessorFeature);
void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue);
wchar_t * __cdecl FUN_00472134(wchar_t *param_1);
wchar_t * __cdecl FUN_00472195(int param_1,char *param_2);
char * __cdecl _setlocale(int _Category,char *_Locale);
void FUN_00472386(void);
_iobuf * __cdecl common_fsopen<char>(char *param_1,char *param_2,int param_3);
void FUN_00472439(void);
void __cdecl FUN_00472450(char *param_1,char *param_2,int param_3);
size_t __cdecl _strcspn(char *_Str,char *_Control);
int __cdecl x_ismbbtype_l(__crt_locale_pointers *param_1,uint param_2,int param_3,int param_4);
int __cdecl __ismbblead(uint _C);
int __cdecl common_configure_argv<char>(_crt_argv_mode param_1);
void __cdecl parse_command_line<char>(char *param_1,char **param_2,char *param_3,uint *param_4,uint *param_5);
LPVOID __cdecl ___acrt_allocate_buffer_for_argv(uint param_1,uint param_2,uint param_3);
void __cdecl FUN_00472a98(_crt_argv_mode param_1);
void ___acrt_initialize(void);
void ___acrt_uninitialize(void);
char * __get_narrow_winmain_command_line(void);
uint __cdecl _wcstombs_l_helper(char *param_1,wchar_t *param_2,uint param_3,__crt_locale_pointers *param_4);
errno_t __cdecl __wcstombs_s_l(size_t *_PtNumOfCharConverted,char *_Dst,size_t _DstSizeInBytes,wchar_t *_Src,size_t _MaxCountInBytes,_locale_t _Locale);
void FUN_00472f60(void);
float10 __cdecl FUN_00472f79(double param_1,int param_2,uint param_3);
uint __cdecl FUN_00473a80(uint param_1,uint param_2);
int __cdecl FUN_00473a98(int *param_1,undefined4 *param_2);
int __cdecl FUN_00473c28(char *param_1,char *param_2,uint param_3,void *param_4);
void __cdecl expand_argument_wildcards<>(uchar *param_1,uchar *param_2,int *param_3);
void __fastcall ~argument_list<>(undefined4 *param_1);
int __thiscall append(void *this,void *param_1);
undefined4 __fastcall expand_if_necessary(int *param_1);
void __cdecl FUN_00473f23(int *param_1,undefined4 *param_2);
undefined1 FUN_00473f50(void);
void __cdecl ___acrt_execute_initializers(undefined4 *param_1,undefined4 *param_2);
void __cdecl ___acrt_execute_uninitializers(undefined4 *param_1,undefined4 *param_2);
void __cdecl shortsort(char *param_1,char *param_2,uint param_3,_func_int_void_ptr_void_ptr *param_4);
void __cdecl swap(char *param_1,char *param_2,uint param_3);
void __cdecl _qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,_PtFuncCompare *_PtFuncCompare);
char * __cdecl _strpbrk(char *_Str,char *_Control);
uchar * __cdecl __mbsdec(uchar *_Start,uchar *_Pos);
uchar * __cdecl __mbsdec_l(uchar *_Start,uchar *_Pos,_locale_t _Locale);
PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva);
BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget);
BOOL __cdecl __ValidateImageBase(PBYTE pImageBase);
void Unwind@00474a11(void);
void Unwind@00474a34(void);
void FUN_00474b00(void);
void FUN_00474b90(void);
void FUN_00474b9a(void);
void FUN_00474ba4(void);
void FUN_00474bae(void);
void FUN_00474bb8(void);
void FUN_00474bc2(void);
void FUN_00474bcc(void);
void FUN_00474bd6(void);
void FUN_00474be0(void);

