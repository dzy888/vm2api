// 006d9910 u128

/* <uuid[ef5bff2cf415df3d]::rng::imp::RngImp as uuid[ef5bff2cf415df3d]::rng::Rng>::u128 */

undefined1  [16] __rustcall
<uuid[ef5bff2cf415df3d]::rng::imp::RngImp_as_uuid[ef5bff2cf415df3d]::rng::Rng>::u128(void)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined *puVar3;
  int iVar4;
  ulonglong uVar5;
  code *pcVar6;
  undefined **ppuVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined1 auVar11 [16];
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  int *local_30;
  undefined *local_28;
  
  puVar3 = PTR_GETRANDOM_FN_0079a700;
  uVar10 = 0;
  local_48 = 0;
  uStack_40 = 0;
  pcVar6 = *(code **)PTR_GETRANDOM_FN_0079a700;
  pcVar2 = (code *)PTR_get_errno_0079a708;
  if (pcVar6 == (code *)0x0) {
    pcVar6 = (code *)(*(code *)PTR_init_0079a718)();
    *(code **)puVar3 = pcVar6;
    uVar10 = extraout_XMM0_Da_02;
    pcVar2 = (code *)PTR_get_errno_0079a708;
  }
  PTR_get_errno_0079a708 = pcVar2;
  if (pcVar6 == (code *)0xffffffffffffffff) {
    local_4c = (*(code *)PTR_use_file_fallback_0079a720)();
    uVar10 = extraout_XMM0_Da_03;
    if (local_4c != 0) {
LAB_006d99c9:
      local_30 = &local_4c;
      local_28 = PTR_fmt_0079a728;
      ppuVar7 = &PTR_s__vendor_uuid_1_29_3_src_rng_rs_007936d8;
      (*(code *)PTR_panic_fmt_007991a8)(uVar10,&PTR_s__vendor_uuid_1_29_3_src_rng_rs_007936d8);
      pcVar6 = (code *)swi(3);
      auVar11._0_8_ = (*pcVar6)();
      auVar11._8_8_ = ppuVar7;
      return auVar11;
    }
  }
  else {
    uVar8 = 0x10;
    do {
      uVar5 = (*pcVar6)(uVar10,0);
      if ((longlong)uVar5 < 1) {
        if (uVar5 != 0xffffffffffffffff) goto LAB_006d99c4;
        iVar4 = (*pcVar2)();
        uVar10 = extraout_XMM0_Da_00;
        if (iVar4 != 4) {
          local_4c = (*(code *)PTR_from_errno_0079a710)();
          uVar10 = extraout_XMM0_Da_01;
          goto LAB_006d99c9;
        }
      }
      else {
        bVar9 = uVar8 < uVar5;
        uVar8 = uVar8 - uVar5;
        uVar10 = extraout_XMM0_Da;
        if (bVar9) {
LAB_006d99c4:
          local_4c = 0x10002;
          uVar10 = extraout_XMM0_Da;
          goto LAB_006d99c9;
        }
      }
    } while (uVar8 != 0);
  }
  auVar1._8_8_ = uStack_40;
  auVar1._0_8_ = local_48;
  return auVar1;
}


