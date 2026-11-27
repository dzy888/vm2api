// 00731df5 <u32,u32>

/* core[c0acaeba6ab4c2e0]::panicking::assert_failed::<u32, u32> */

void __rustcall
core[c0acaeba6ab4c2e0]::panicking::assert_failed::<u32,u32>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puStack_40;
  undefined8 *puStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  puVar2 = &local_18;
  puVar3 = &DAT_007960e8;
  pcStack_30 = <i16,i16>;
  uStack_28 = param_5;
  uStack_20 = param_6;
  local_18 = param_3;
  local_10 = param_2;
  (*(code *)PTR_assert_failed_inner_0079a0b0)();
  puStack_40 = puVar3;
  puStack_38 = &local_10;
  pcStack_30 = (code *)((longlong)register0x00000020 + -8);
  (*(code *)PTR_assert_failed_inner_0079a0b0)(&puStack_40,&DAT_00796390,&DAT_00796390,puVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


