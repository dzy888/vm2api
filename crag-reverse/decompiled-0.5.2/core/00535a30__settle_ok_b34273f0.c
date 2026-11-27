// 00535a30 settle_ok

/* <craggemini_core[66f3c71560d70857]::resume::ContinuationReceiptStore>::settle_ok */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::ContinuationReceiptStore>::settle_ok
          (longlong param_1,ulonglong param_2,longlong param_3,longlong param_4,longlong param_5,
          longlong param_6,longlong param_7)

{
  longlong lVar1;
  undefined *puVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint local_60;
  uint local_5c;
  uint local_58;
  
  puVar2 = PTR_bcmp_00799020;
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    lVar10 = 0;
    do {
      if ((*(longlong *)(lVar1 + 0x10 + lVar10) == param_3) &&
         (iVar3 = (*(code *)puVar2)(), iVar3 == 0)) {
        *(undefined1 *)(lVar1 + 0xd5 + lVar10) = 1;
        if (param_4 == 0) {
          param_5 = -1;
          lVar4 = *(longlong *)(lVar1 + 0x90 + lVar10);
joined_r0x00535b33:
          if ((lVar4 != -1) && (lVar4 != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          *(longlong *)(lVar1 + 0x90 + lVar10) = param_5;
          *(longlong *)(lVar1 + 0x98 + lVar10) = param_3;
          *(longlong *)(lVar1 + 0xa0 + lVar10) = param_5;
          if (param_6 == 0) goto LAB_00535b9f;
          if (param_7 < 0) goto LAB_00535b93;
          if (param_7 == 0) {
            lVar4 = 1;
            param_7 = 0;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            lVar4 = (*(code *)PTR___rust_alloc_00799000)();
            if (lVar4 == 0) goto LAB_00535b93;
            (*(code *)PTR_memcpy_00799008)();
          }
        }
        else {
          if (-1 < param_5) {
            if (param_5 == 0) {
              param_3 = 1;
              param_5 = 0;
              lVar4 = *(longlong *)(lVar1 + 0x90 + lVar10);
            }
            else {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              param_3 = (*(code *)PTR___rust_alloc_00799000)();
              if (param_3 == 0) goto LAB_00535b93;
              (*(code *)PTR_memcpy_00799008)();
              lVar4 = *(longlong *)(lVar1 + 0x90 + lVar10);
            }
            goto joined_r0x00535b33;
          }
LAB_00535b93:
          (*(code *)PTR_handle_error_00798ff0)();
LAB_00535b9f:
          param_7 = -1;
          lVar4 = param_4;
        }
        lVar7 = *(longlong *)(lVar1 + 0xa8 + lVar10);
        if ((lVar7 != -1) && (lVar7 != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        *(longlong *)(lVar1 + 0xa8 + lVar10) = param_7;
        *(longlong *)(lVar1 + 0xb0 + lVar10) = lVar4;
        *(longlong *)(lVar1 + 0xb8 + lVar10) = param_7;
        lVar4 = *(longlong *)(lVar1 + 0x78 + lVar10);
        if ((lVar4 != -1) && (lVar4 != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        *(undefined8 *)(lVar1 + 0x78 + lVar10) = 0xffffffffffffffff;
        *(undefined2 *)(lVar1 + 0xd0 + lVar10) = 0;
        (*(code *)PTR_now_00799478)();
        iVar8 = (int)local_60 >> 0xd;
        iVar3 = iVar8 + -1;
        iVar6 = 0;
        if (iVar8 < 1) {
          iVar6 = (1U - iVar8) / 400 + 1;
          iVar3 = iVar3 + iVar6 * 400;
          iVar6 = iVar6 * -0x23ab1;
        }
        uVar9 = iVar3 / 100 >> 2;
        param_2 = (ulonglong)uVar9;
        lVar7 = (ulonglong)local_58 / 1000000 +
                ((longlong)
                 (int)((((local_60 >> 4 & 0x1ff) + iVar6) - iVar3 / 100) + (iVar3 * 0x5b5 >> 2) +
                       uVar9 + -0xaf93b) * 0x15180 + (ulonglong)local_5c) * 1000;
        lVar4 = 0;
        if (0 < lVar7) {
          lVar4 = lVar7;
        }
        *(longlong *)(lVar1 + 200 + lVar10) = lVar4;
        break;
      }
      lVar10 = lVar10 + 0xd8;
    } while (lVar4 * 0xd8 != lVar10);
  }
  evict_settled_if_needed(param_1,param_2);
  uVar5 = persist(param_1);
  if (((uVar5 != 0) && (1 < ((uint)uVar5 & 3) - 2)) && ((uVar5 & 3) != 0)) {
    (*(code *)PTR_drop_00799040)();
  }
  return;
}


