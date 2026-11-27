// 005fc10b <core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::task::core::Header>>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::task::core::Header>>>

/* core[c0acaeba6ab4c2e0]::panicking::assert_failed::<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::task::core::Header>>,
   core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::task::core::Header>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::panicking::assert_failed::
<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::task::core::Header>>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::task::core::Header>>>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 local_8;
  
  local_8 = param_3;
  (*(code *)PTR_assert_failed_inner_0079a0b0)(&local_8,&DAT_0078eb28,&DAT_0078eb28,param_4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


