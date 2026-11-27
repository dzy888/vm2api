// 006f6950 num_cpus

/* tokio[d7d91d38da47d894]::loom::std::sys::num_cpus */

ulonglong __rustcall tokio[d7d91d38da47d894]::loom::std::sys::num_cpus(void)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  code cVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  int local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 *local_18;
  
  uVar7 = 0x14;
  (*(code *)PTR_inner_00799be8)();
  if (local_30 == 1) {
    if (CONCAT44(uStack_24,local_28) == -1) {
      lVar4 = (*(code *)PTR_available_parallelism_0079a948)();
      if (lVar4 != 1) {
        return uVar7;
      }
      if ((1 < ((uint)uVar7 & 3) - 2) && ((uVar7 & 3) != 0)) {
        uStack_60 = (code *)(uVar7 - 1);
        local_68 = (undefined **)CONCAT71(local_68._1_7_,3);
        (*(code *)PTR_drop_00799040)();
      }
      return 1;
    }
    local_38 = local_18;
    local_48 = (undefined **)CONCAT44(uStack_24,local_28);
    uStack_40 = (code *)CONCAT44(uStack_1c,uStack_20);
    local_68 = &PTR_s_TOKIO_WORKER_THREADS_00794550;
    uStack_60 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    local_58 = &local_48;
    local_50 = PTR_fmt_0079a950;
    (*(code *)PTR_panic_fmt_007991a8)(local_18,&PTR_s__vendor_tokio_1_54_1_src_loom_st_00794680);
    goto LAB_006f6b87;
  }
  local_68 = (undefined **)CONCAT44(uStack_24,local_28);
  uStack_60 = (code *)CONCAT44(uStack_1c,uStack_20);
  local_58 = local_18;
  if (local_18 == (undefined8 *)0x1) {
    cVar6 = *uStack_60;
    cVar3 = '\x01';
    if ((cVar6 != (code)0x2b) && (cVar6 != (code)0x2d)) goto LAB_006f6a0d;
  }
  else if (local_18 == (undefined8 *)0x0) {
    cVar3 = '\0';
  }
  else {
    cVar6 = *uStack_60;
LAB_006f6a0d:
    puVar8 = (undefined8 *)(ulonglong)(cVar6 == (code)0x2b);
    if ((ulonglong)((longlong)local_18 - (longlong)puVar8) < 0x11) {
      if (local_18 != puVar8) {
        uVar7 = 0;
        lVar4 = 0;
        do {
          uVar9 = (byte)((code *)((longlong)puVar8 + (longlong)uStack_60))[lVar4] - 0x30;
          if (9 < uVar9) goto LAB_006f6b52;
          uVar7 = (ulonglong)uVar9 + uVar7 * 10;
          lVar4 = lVar4 + 1;
        } while (lVar4 != (longlong)local_18 + -(longlong)puVar8);
LAB_006f6a65:
        if (uVar7 != 0) {
          if (local_68 == (undefined **)0x0) {
            return uVar7;
          }
          (*(code *)PTR___rust_dealloc_00798fc8)(local_28,1);
          return uVar7;
        }
      }
      local_48 = &PTR_s_TOKIO_WORKER_THREADS_00794550;
      uStack_40 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      (*(code *)PTR_panic_fmt_007991a8)(local_28,&PTR_s__vendor_tokio_1_54_1_src_loom_st_00794668);
      goto LAB_006f6b87;
    }
    uVar7 = 0;
    lVar4 = 0;
    do {
      if (lVar4 == (longlong)local_18 + -(longlong)puVar8) goto LAB_006f6a65;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar7;
      uVar5 = SUB168(auVar1 * ZEXT816(10),0);
      cVar6 = ((code *)((longlong)puVar8 + (longlong)uStack_60))[lVar4];
      if (SUB168(auVar1 * ZEXT816(10),8) != 0) {
        cVar3 = ((byte)((char)cVar6 - 0x30U) < 10) + '\x01';
        goto LAB_006f6ae6;
      }
      uVar9 = (byte)cVar6 - 0x30;
      if (9 < uVar9) goto LAB_006f6b52;
      lVar4 = lVar4 + 1;
      uVar7 = uVar5 + uVar9;
    } while (!CARRY8(uVar5,(ulonglong)uVar9));
    cVar3 = '\x02';
  }
LAB_006f6ae6:
  num_cpus::_closure_0_(&local_68,cVar3);
LAB_006f6b87:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
LAB_006f6b52:
  cVar3 = '\x01';
  goto LAB_006f6ae6;
}


