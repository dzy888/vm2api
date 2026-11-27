// 00492a50 call_once

/* <<hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::oauth::StoredAttempt)>>::reserve_rehash<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::oauth::StoredAttempt,
   std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}>::{closure#1} as
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(*mut u8,)>>::call_once */

void __rustcall
<<hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::oauth::StoredAttempt)>>::reserve_rehash<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::oauth::StoredAttempt,std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}>::{closure#1}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(*mut_u8,)>>
::call_once(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>(param_1 + 8);
  return;
}


