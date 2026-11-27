// 006e9f40 <core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::Waiter>>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::Waiter>>>

/* core[c0acaeba6ab4c2e0]::panicking::assert_failed::<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::Waiter>>,
   core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::Waiter>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::panicking::assert_failed::
<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::Waiter>>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::Waiter>>>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  code **ppcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined *puVar4;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 local_10;
  undefined8 local_8;
  
  pcVar2 = (code *)&DAT_00794090;
  puVar4 = &DAT_00794090;
  pcStack_30 = 
  <core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::time::entry::TimerShared>>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::time::entry::TimerShared>>>
  ;
  uStack_28 = param_5;
  uStack_20 = param_6;
  local_10 = param_2;
  local_8 = param_3;
  (*(code *)PTR_assert_failed_inner_0079a0b0)();
  ppcVar1 = &pcStack_30;
  pcVar3 = (code *)&DAT_007940b0;
  pcStack_58 = 
  <core[c0acaeba6ab4c2e0]::num::nonzero::NonZero<u64>,core[c0acaeba6ab4c2e0]::num::nonzero::NonZero<u64>>
  ;
  puStack_50 = puVar4;
  uStack_48 = param_4;
  puStack_38 = &local_10;
  pcStack_30 = pcVar2;
  (*(code *)PTR_assert_failed_inner_0079a0b0)();
  pcStack_58 = pcVar3;
  (*(code *)PTR_assert_failed_inner_0079a0b0)(&pcStack_58,&DAT_007940d0,&DAT_007940d0,ppcVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


