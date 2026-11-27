// 000b43f3 <u64,u64>

/* core[c0acaeba6ab4c2e0]::panicking::assert_failed::<u64, u64> */

void __rustcall
core[c0acaeba6ab4c2e0]::panicking::assert_failed::<u64,u64>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_3;
  local_10 = param_2;
  (*(code *)PTR_assert_failed_inner_000c4138)(&local_18,&DAT_000c2f08,&DAT_000c2f08,param_4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


