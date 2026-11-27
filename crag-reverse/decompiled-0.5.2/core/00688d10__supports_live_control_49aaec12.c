// 00688d10 supports_live_control

/* <craggemini_core[66f3c71560d70857]::bridge::Bridge>::supports_live_control */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::bridge::Bridge>::supports_live_control(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xd0);
    lVar3 = 0;
    do {
      if ((*(longlong *)(lVar1 + 0x10 + lVar3) == 0xf) &&
         (plVar2 = *(longlong **)(lVar1 + 8 + lVar3),
         *(longlong *)((longlong)plVar2 + 7) == 0x31765f6c6f72746e && *plVar2 == 0x6e6f635f6576696c)
         ) {
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      }
      lVar3 = lVar3 + 0x18;
    } while (*(longlong *)(param_1 + 0xd8) * 0x18 != lVar3);
  }
  return 0;
}


