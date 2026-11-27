// 00731d87 <[u8;4:usize],&[u8]>

/* core[c0acaeba6ab4c2e0]::panicking::assert_failed::<[u8; 4usize], &[u8]> */

void __rustcall
core[c0acaeba6ab4c2e0]::panicking::assert_failed::<[u8_4:usize],&[u8]>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_90;
  undefined8 ***pppuStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 **ppuStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 *puStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  puVar2 = &local_18;
  puVar4 = &DAT_00796330;
  puVar6 = &DAT_00796350;
  pcStack_30 = <i32,i32>;
  uStack_28 = param_5;
  uStack_20 = param_6;
  local_18 = param_3;
  local_10 = param_2;
  (*(code *)PTR_assert_failed_inner_0079a0b0)();
  puVar5 = &DAT_00796370;
  puVar7 = &DAT_00796370;
  pcStack_58 = <u32,u32>;
  puStack_50 = puVar6;
  uStack_48 = param_4;
  puStack_40 = puVar4;
  puStack_38 = &local_10;
  pcStack_30 = (code *)((longlong)register0x00000020 + -8);
  (*(code *)PTR_assert_failed_inner_0079a0b0)();
  ppuVar3 = &puStack_68;
  puVar4 = &DAT_007960e8;
  pcStack_80 = <i16,i16>;
  puStack_78 = puVar7;
  puStack_70 = puVar2;
  puStack_68 = puVar5;
  ppuStack_60 = &puStack_38;
  pcStack_58 = (code *)&pcStack_30;
  (*(code *)PTR_assert_failed_inner_0079a0b0)();
  puStack_90 = puVar4;
  pppuStack_88 = &ppuStack_60;
  pcStack_80 = (code *)&pcStack_58;
  (*(code *)PTR_assert_failed_inner_0079a0b0)(&puStack_90,&DAT_00796390,&DAT_00796390,ppuVar3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


