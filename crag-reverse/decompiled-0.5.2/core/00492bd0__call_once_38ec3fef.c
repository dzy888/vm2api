// 00492bd0 call_once

/* WARNING: Switch with 1 destination removed at 0x00492be1 */
/* <<hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,
   (std[6c98fd8553dbae28]::time::Instant,
   u32))>>::reserve_rehash<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,
   (std[6c98fd8553dbae28]::time::Instant, u32),
   std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}>::{closure#1} as
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(*mut u8,)>>::call_once */

void __rustcall
<<hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,(std[6c98fd8553dbae28]::time::Instant,u32))>>::reserve_rehash<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,(std[6c98fd8553dbae28]::time::Instant,u32),std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}>::{closure#1}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(*mut_u8,)>>
::call_once(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


