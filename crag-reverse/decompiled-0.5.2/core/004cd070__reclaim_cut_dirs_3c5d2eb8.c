// 004cd070 reclaim_cut_dirs

/* craggemini_core[66f3c71560d70857]::pool::reclaim_cut_dirs */

void __rustcall
craggemini_core[66f3c71560d70857]::pool::reclaim_cut_dirs
          (undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 local_60;
  undefined7 uStack_5f;
  longlong local_48;
  undefined8 local_38;
  
  if (param_4 != 0) {
    (*(code *)PTR__join_00799210)("cuts",param_2,4);
    lVar5 = param_4 * 0x68 + param_3;
    do {
      uVar4 = *(ulonglong *)(param_3 + 0x28);
      if ((uVar4 != 0) && (uVar4 < 0x81)) {
        pbVar2 = *(byte **)(param_3 + 0x20);
        if (((byte)(*pbVar2 - 0x30) < 10) || ((byte)((*pbVar2 & 0xdf) + 0xbf) < 0x1a)) {
          uVar3 = 0;
          do {
            bVar1 = pbVar2[uVar3];
            if (((9 < (byte)(bVar1 - 0x30)) && (0x19 < (byte)((bVar1 & 0xdf) + 0xbf))) &&
               ((0x32 < bVar1 - 0x2d ||
                ((0x4000000000003U >> ((ulonglong)(bVar1 - 0x2d) & 0x3f) & 1) == 0))))
            goto LAB_004cd0d0;
            uVar3 = uVar3 + 1;
          } while (uVar4 != uVar3);
          (*(code *)PTR__join_00799210)(pbVar2,local_38);
          uVar4 = (*(code *)PTR_remove_dir_all_00799038)();
          if (CONCAT71(uStack_5f,local_60) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          if (((uVar4 != 0) && (1 < ((uint)uVar4 & 3) - 2)) && ((uVar4 & 3) != 0)) {
            local_60 = 3;
            (*(code *)PTR_drop_00799040)();
          }
        }
      }
LAB_004cd0d0:
      param_3 = param_3 + 0x68;
    } while (param_3 != lVar5);
    if (local_48 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  return;
}


