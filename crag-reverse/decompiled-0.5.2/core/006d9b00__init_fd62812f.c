// 006d9b00 init

/* getrandom[6c7f7f5c828d4481]::backends::linux_android_with_fallback::init */

code * __rustcall getrandom[6c7f7f5c828d4481]::backends::linux_android_with_fallback::init(void)

{
  code *pcVar1;
  longlong lVar2;
  int *piVar3;
  
  pcVar1 = (code *)(*(code *)PTR_dlsym_0079a050)();
  if (pcVar1 == (code *)0x0) {
    return (code *)0xffffffffffffffff;
  }
  lVar2 = (*pcVar1)();
  if (lVar2 < 0) {
    piVar3 = (int *)(*(code *)PTR___errno_location_007990a0)();
    if (*piVar3 == 0x26) {
      return (code *)0xffffffffffffffff;
    }
    if (*piVar3 == 1) {
      return (code *)0xffffffffffffffff;
    }
  }
  return pcVar1;
}


