// 006e9f73 <core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::time::entry::TimerShared>>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::time::entry::TimerShared>>>

/* core[c0acaeba6ab4c2e0]::panicking::assert_failed::<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::time::entry::TimerShared>>,
   core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::time::entry::TimerShared>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::panicking::assert_failed::
<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::time::entry::TimerShared>>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::time::entry::TimerShared>>>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  code *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 local_10;
  undefined8 local_8;
  
  puVar1 = &local_8;
  pcVar2 = (code *)&DAT_007940b0;
  pcStack_30 = 
  <core[c0acaeba6ab4c2e0]::num::nonzero::NonZero<u64>,core[c0acaeba6ab4c2e0]::num::nonzero::NonZero<u64>>
  ;
  uStack_28 = param_5;
  uStack_20 = param_6;
  local_10 = param_2;
  local_8 = param_3;
  (*(code *)PTR_assert_failed_inner_0079a0b0)();
  pcStack_30 = pcVar2;
  (*(code *)PTR_assert_failed_inner_0079a0b0)(&pcStack_30,&DAT_007940d0,&DAT_007940d0,puVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


