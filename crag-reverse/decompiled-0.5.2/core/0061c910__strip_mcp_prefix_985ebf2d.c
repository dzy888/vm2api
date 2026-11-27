// 0061c910 strip_mcp_prefix

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::schema::strip_mcp_prefix */

undefined1  [16] __rustcall
craggemini_core[66f3c71560d70857]::schema::strip_mcp_prefix(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (8 < param_2) {
    lVar1 = param_2 - 9;
    if ((lVar1 != 0) && (lVar2 = 9, (char)param_1[1] == '_' && *param_1 == 0x676172635f70636d)) {
LAB_0061c948:
      auVar3._0_8_ = (longlong)param_1 + lVar2;
      auVar3._8_8_ = lVar1;
      return auVar3;
    }
    if (10 < param_2) {
      lVar1 = param_2 - 0xb;
      lVar2 = 0xb;
      if ((lVar1 != 0 &&
           (*(longlong *)((longlong)param_1 + 3) == 0x5f5f676172635f5f &&
           *param_1 == 0x6172635f5f70636d)) ||
         ((0xe < param_2 &&
          (((lVar1 = param_2 - 0xf, lVar1 != 0 &&
            (lVar2 = 0xf,
            *(longlong *)((longlong)param_1 + 7) == 0x5f696e696d656767 &&
            *param_1 == 0x676172635f70636d)) ||
           ((0x10 < param_2 &&
            ((lVar1 = param_2 - 0x11, lVar1 != 0 &&
             (lVar2 = 0x11,
             ((char)param_1[2] == '_' && *param_1 == _DAT_001847d0) && param_1[1] == _UNK_001847d8))
            )))))))) goto LAB_0061c948;
    }
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}


