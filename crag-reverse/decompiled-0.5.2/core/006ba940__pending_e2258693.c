// 006ba940 pending

/* hyper[c4782d5b5c5e3493]::upgrade::pending */

undefined1  [16] __rustcall hyper[c4782d5b5c5e3493]::upgrade::pending(void)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  longlong lStack_10;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  auVar4._0_8_ = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
  if (auVar4._0_8_ == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    auVar4._0_8_[0xc] = local_18;
    auVar4._0_8_[0xd] = lStack_10;
    auVar4._0_8_[10] = local_28;
    auVar4._0_8_[0xb] = lStack_20;
    auVar4._0_8_[8] = local_38;
    auVar4._0_8_[9] = lStack_30;
    *(undefined4 *)(auVar4._0_8_ + 6) = 0;
    *(undefined4 *)((longlong)auVar4._0_8_ + 0x34) = 0;
    *(undefined4 *)(auVar4._0_8_ + 7) = 0;
    *(undefined4 *)((longlong)auVar4._0_8_ + 0x3c) = 0;
    *(undefined4 *)(auVar4._0_8_ + 4) = local_58;
    *(undefined4 *)((longlong)auVar4._0_8_ + 0x24) = uStack_54;
    *(undefined4 *)(auVar4._0_8_ + 5) = uStack_50;
    *(undefined4 *)((longlong)auVar4._0_8_ + 0x2c) = uStack_4c;
    *(undefined4 *)(auVar4._0_8_ + 2) = local_68;
    *(undefined4 *)((longlong)auVar4._0_8_ + 0x14) = uStack_64;
    *(undefined4 *)(auVar4._0_8_ + 3) = uStack_60;
    *(undefined4 *)((longlong)auVar4._0_8_ + 0x1c) = uStack_5c;
    *(undefined4 *)auVar4._0_8_ = 1;
    *(undefined4 *)((longlong)auVar4._0_8_ + 4) = 0;
    *(undefined4 *)(auVar4._0_8_ + 1) = 1;
    *(undefined4 *)((longlong)auVar4._0_8_ + 0xc) = 0;
    LOCK();
    lVar1 = *auVar4._0_8_;
    *auVar4._0_8_ = *auVar4._0_8_ + 1;
    UNLOCK();
    if (*auVar4._0_8_ != 0 && SCARRY8(lVar1,1) == *auVar4._0_8_ < 0) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar3 != (undefined8 *)0x0) {
        puVar3[2] = 0;
        puVar3[3] = auVar4._0_8_;
        *puVar3 = 1;
        puVar3[1] = 1;
        auVar4._8_8_ = puVar3;
        return auVar4;
      }
      (*(code *)PTR_handle_alloc_error_007991d8)();
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


