// 00731e2a <i16,i16>

/* core[c0acaeba6ab4c2e0]::panicking::assert_failed::<i16, i16> */

void __rustcall
core[c0acaeba6ab4c2e0]::panicking::assert_failed::<i16,i16>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_3;
  local_10 = param_2;
  (*(code *)PTR_assert_failed_inner_0079a0b0)(&local_18,&DAT_00796390,&DAT_00796390,param_4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


