// 002139a0 fmt

/* <char as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

undefined8 __rustcall
<char_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt(undefined4 *param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 local_38 [13];
  byte local_2b;
  
  lVar1 = *(longlong *)(param_2 + 8);
  pcVar2 = *(code **)(lVar1 + 0x20);
  cVar3 = (*pcVar2)();
  uVar4 = 1;
  if (cVar3 == '\0') {
    <char>::escape_debug_ext(local_38,*param_1,0x101);
    if (local_2b < 0x81) {
      cVar3 = (**(code **)(lVar1 + 0x18))();
    }
    else {
      cVar3 = (*pcVar2)();
    }
    uVar4 = 1;
    if (cVar3 == '\0') {
      uVar4 = (*pcVar2)();
    }
  }
  return uVar4;
}


