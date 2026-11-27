// 00731dc0 <i32,i32>

/* core[c0acaeba6ab4c2e0]::panicking::assert_failed::<i32, i32> */

void __rustcall
core[c0acaeba6ab4c2e0]::panicking::assert_failed::<i32,i32>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
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
  
  puVar3 = &DAT_00796370;
  puVar5 = &DAT_00796370;
  pcStack_30 = <u32,u32>;
  uStack_28 = param_5;
  uStack_20 = param_6;
  local_18 = param_3;
  local_10 = param_2;
  (*(code *)PTR_assert_failed_inner_0079a0b0)();
  ppuVar2 = &puStack_40;
  puVar4 = &DAT_007960e8;
  pcStack_58 = <i16,i16>;
  puStack_50 = puVar5;
  uStack_48 = param_4;
  puStack_40 = puVar3;
  puStack_38 = &local_10;
  pcStack_30 = (code *)((longlong)register0x00000020 + -8);
  (*(code *)PTR_assert_failed_inner_0079a0b0)();
  puStack_68 = puVar4;
  ppuStack_60 = &puStack_38;
  pcStack_58 = (code *)&pcStack_30;
  (*(code *)PTR_assert_failed_inner_0079a0b0)(&puStack_68,&DAT_00796390,&DAT_00796390,ppuVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


